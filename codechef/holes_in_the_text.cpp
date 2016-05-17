#include <stdio.h>

int main()
{
	int T, i; 
	scanf("%d", &T);
	char W[100];

	while(T--)
	{
		scanf("%s", W);
		
		int k = 0;
		
		for(i = 0; W[i]; i++)
		{
			if(W[i] == 'B')k+=2;

			if(W[i] >= 'O' && W[i] <= 'R')k++;

			if(W[i] == 'A' || W[i] == 'D')k++;
		}
		printf("%d\n", k);
	}

	return 0;
} //*A **B C *D E F G H I J K L M N *O *P *Q *R S T U V W X Y Z