#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcompare(char string1[], char string2[]);//returns 1 if string2 is as same as string1

int main()
{
	FILE *fp;
	char name[21];

	//We create and write our file.
	if(!(fp = fopen("test.txt", "w"))){printf("Can't open the file!\n");return 0;}

	printf("Enter names:\n");
	int i = 0;
	while(i < 10)
	{
		scanf("%s", name);

		fprintf(fp, "%s\n", name);

		i++;
	}
	fclose(fp);
	//we close it for to open it in read mode later.

	printf("Which name will be deleted?\n");
	scanf("%s", name);

	char line[21];
	char *buffer;
	char *ptr;

	//Created our buffer on heap not on our stack with the help of malloc() function.
	buffer = (char *)malloc(1000 * sizeof(char));
	memset(buffer, 0, 1000 * sizeof(char));//setted all the bytes to zero.


	if(!(fp = fopen("test.txt", "r"))){printf("Can't open the file!\n");return 0;}	

	ptr = buffer;
	while(!feof(fp))
	{
		fgets(line, 21, fp);//read one name at a time.

		if(!strcompare(name, line)){//test if it is the thing we want to delete, and if it is we do not copy it to buffer.
			for(i = 0; line[i]; i++){
				*ptr = line[i];
				ptr += 1;
			}
		}
	}
	fclose(fp);

	if(!(fp = fopen("test.txt", "w"))){printf("Can't open the file!\n");return 0;}

	fputs(buffer, fp);//write the new data!

	printf("%s successfully deleted from file!\n", name);

	fclose(fp);
	free(buffer);//free the allocated memory!

	return 0;
}

int strcompare(char string1[], char string2[])
{
	int len1, len2;
	int i;

	for (i = 0; string1[i]; i++);
	len1 = i;
	for(i = 0; string2[i] != '\n' && string2[i]; i++);//names we read with fgets has an extra character /n so we have to judge by that.
	len2 = i;

	if(len1 != len2)return 0;

	for(i = 0; string1[i]; i++)
	{
		if(string1[i] != string2[i])return 0;
	}

	return 1;
}