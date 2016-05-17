#include <stdio.h>
#define SIZE 1000001

int main()
{
	int T;
	scanf("%d", &T);
	
	int N;
	int i, S[SIZE] = {0};

	for(i = 0; i < T; i++)
	{
		scanf("%d", &N);
		S[N] += 1;
	}
	for(i = 0; i < SIZE; i++)
		if(S[i])
			for(N = 0; N < S[i]; N++)
				printf("%d\n", i);
	return 0; 
}