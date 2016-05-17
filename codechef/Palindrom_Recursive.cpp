#include "stdio.h"

void Palindrom(char a[], char *p, int n);

int main()
{
	char Word[100];
	int length;
	scanf("%s", Word);
	for(length = 0; Word[length]; length++);
	Palindrom(Word, Word, length);
	return 0;
}

void Palindrom(char a[], char *p, int n)
{	
	if(*p == a[n - 1])
	{
		if(p == &a[n - 1] || p + 1 == &a[n - 1])
		{
			printf("Palindrom\n");
		}		
			
		else Palindrom(a ,p + 1, n - 1);
	}

	else 
	{
		printf("Not palindrom\n");
	}
}