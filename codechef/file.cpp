#include <stdio.h>

typedef struct Student
{
	bool Statement;
	int No;
	short int Grade;
	char Name[50];
}aa;


int main()
{
	FILE *File_Pointer;

	File_Pointer = fopen("data.txt", "w+");

	if(File_Pointer == NULL){printf("Can't open the file");return 0;}
	
	int n, S_No;
	char Answer[] = "Yes";
	Student Students;
	Students.Statement = true;

	printf("How many students do you have?\n");
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		printf("Name   No   Grade\n");
		scanf("%s", Students.Name);
		scanf("%d", &Students.No);
		scanf("%hd", &Students.Grade);
		fwrite(&Students, sizeof(Students) + 1, 1, File_Pointer);
	}
	
	fseek(File_Pointer, 0, SEEK_SET);
	for(int i = 0; i < n; i++)
	{
		fread(&Students, sizeof(Students) + 1, 1, File_Pointer);
		printf("No: %d\nName: %s\nGrade: %d\n\n", Students.No, Students.Name, Students.Grade);
	}

	printf("\n\nDo you want to change anything?(y/n)\n");
	scanf("%s", Answer);

	while(Answer[0] == 'y' || Answer[0] == 'Y')
	{
		printf("Are you going to add/edit/delete?(a/e/d)\n");
		scanf("%s", Answer);
		if(Answer[0] == 'a' || Answer[0] == 'A')
		{
			fseek(File_Pointer, 0, SEEK_SET);
			fread(&Students, sizeof(Students) + 1, 1, File_Pointer);
			while(Students.Statement && !(feof(File_Pointer)))
			{
				fread(&Students, sizeof(Students) + 1, 1, File_Pointer);	
			}			
			
			if(!(Students.Statement))fseek(File_Pointer, -1 * (sizeof(Students) + 1), SEEK_CUR);

			Students.Statement = true;
			printf("Name   No   Grade\n");
			scanf("%s", Students.Name);
			scanf("%d", &Students.No);
			scanf("%hd", &Students.Grade);
			fwrite(&Students, sizeof(Students) + 1, 1, File_Pointer);
		}	

		if(Answer[0] == 'e' || Answer[0] == 'E')
		{
			Students.No = 0;
			fseek(File_Pointer, 0, SEEK_SET);
			printf("Who Do you want to change?\n");
			scanf("%d", &S_No);
			printf("Enter the grade: ");

			while(!(S_No == Students.No))
			{
				fread(&Students, sizeof(Students) + 1, 1, File_Pointer);
			}
			scanf("%hd", &Students.Grade);
			
			fseek(File_Pointer, -1 * (sizeof(Students) + 1), SEEK_CUR);
			fwrite(&Students, sizeof(Students) + 1, 1, File_Pointer);
		}	

		if(Answer[0] == 'd' || Answer[0] == 'D')
		{
			Students.No = 0;
			fseek(File_Pointer, 0, SEEK_SET);
			printf("Who Do you want to delete?\n");
			scanf("%d", &S_No);
			
			while(!(S_No == Students.No) && !(feof(File_Pointer)))
			{
				fread(&Students, sizeof(Students) + 1, 1, File_Pointer);
			}
			
			if(S_No == Students.No)
			{	
				Students.Statement = false;
				fseek(File_Pointer, -1 * (sizeof(Students) + 1), SEEK_CUR);
				fwrite(&Students.Statement, sizeof(bool), 1, File_Pointer);
			}	
			
			else printf("Could not find the student");

		}

		fseek(File_Pointer, 0, SEEK_SET);
		while(!(feof(File_Pointer)))
		{
			fread(&Students, sizeof(Students) + 1, 1, File_Pointer);

			if(Students.Statement)printf("No: %d\nName: %s\nGrade: %d\n\n", Students.No, Students.Name, Students.Grade);

		}

		printf("Do you want to continue?(y/n)\n");
		scanf("%s", Answer);
	}
	//fprintf(File_Pointer, "Hamza Ali TAS");
	//fwrite(word, sizeof(word), 2, File_Pointer);

	fclose(File_Pointer);
	return 0;
}