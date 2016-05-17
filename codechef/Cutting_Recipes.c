#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);

	int A[51], N;
	while(T--)
	{
		scanf("%d", &N);

		int i = 0, G, S;
		scanf("%d", &A[0]);
		S = G = A[0];
		for(i = 1; i < N; i++)
		{
			scanf("%d", &A[i]);
			if(G < A[i])G =  A[i];
			if(S > A[i])S = A[i];
		}

		int j, C, K = 1;
		for(j = S; j <= G; j++)
		{
			C = 0;
			for(i = 0; i < N; i++)if(!(A[i] % j))C++;		
			if(C == i && j > K)K = j;
		}

		for(i = 0; i < N; i++)
			printf("%d ", A[i] / K);
		printf("\n");
	}
	return 0;
}