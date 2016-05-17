#include <stdio.h>

int main(void)
{

	int n, hash, space;

	scanf("%d", &n);

	hash = 1;
	space = n - 1;

	int i, j;
	for(i = 0; i < n; i++)//total lines
	{
		for(j = 0; j < space; j++)//spaces in the stairs
		{
			printf(" ");
		}

		for(j = 0; j < hash; j++)//hashes in the stairs
		{
			printf("#");
		}

		printf("\n");

		hash++;
		space--;
	}


	return 0;
}