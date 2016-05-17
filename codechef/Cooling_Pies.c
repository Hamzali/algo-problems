#include <stdio.h>

int main()
{
	int N, T, K;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%d", &N);

		int P[101] = {0};
		int i;
		for(i = 0; i < N; i++)
		{
			scanf("%d", &K);
			P[K]++;
		}

		int C = 0;
		for(i = 0; i < N; i++)
		{
			scanf("%d", &K);
			while(K)
			{
				if(P[K]){P[K]--;C++;break;}
				K--;
			}
		}
		printf("%d\n", C);
	}
	return 0;
}