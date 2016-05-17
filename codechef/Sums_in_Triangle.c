#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);

	int N;
	while(T--)
	{
		scanf("%d", &N);

		int NT[N][N];
		int i, j;
		for(i = 0; i < N; i++)
			for(j = 0; j <= i; j++)
				scanf("%d", &NT[i][j]);

		for(i = N - 2; i >= 0; i--)
			for(j = 0; j <= i; j++)
			{
				if(NT[i][j] + NT[i + 1][j] > NT[i][j] + NT[i + 1][j + 1]) NT[i][j] = NT[i][j] + NT[i + 1][j];
				else NT[i][j] = NT[i][j] + NT[i + 1][j + 1];
			}
		printf("%d\n", NT[0][0]);
	}

	return 0;
}