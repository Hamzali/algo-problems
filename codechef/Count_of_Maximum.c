#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);

	
	int N, Nu;
	while(T--)
	{
		int A[10001] = {0};
		scanf("%d", &N);

		while(N--)
		{
			scanf("%d", &Nu);
			A[Nu] += 1;
		}

		Nu = 0;
		int i;
		for(i = 0; i < 10001; i++)
			if(Nu < A[i]){Nu = A[i]; N = i;}
		
		printf("%d %d\n", N, Nu);
	}

	return 0; 
}