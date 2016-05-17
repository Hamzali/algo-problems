#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 65536//size of a row

int main()
{

	char buffer[SIZE];

	unsigned long n, k, counter, input;

	int c, i;

	counter = 0;
	scanf("%lu %lu", &n, &k);

	input = 0;

	while((c = fread(buffer, sizeof(char), SIZE, stdin)) > 0)//if you read something coontinue, if you are at end stop
	{
		printf("!FUCK!");
		for(i = 0; i < c; i++)
		{
		
			if(buffer[i] == '\n')
			{
			if(input%k == 0)counter++;

			input = 0;
			}
		
			else
				input = (input * 10) + (buffer[i] - '0');
		}
	}



	printf("%lu", counter);

	return 0;
}