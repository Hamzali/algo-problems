#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n, m, N;
		scanf("%d", &n);
		scanf("%d", &m);
		int a[1001] = {0};
		int i;
		for(i = 0; i < m; i++)
		{
			scanf("%d", &N);
			a[N] = 1;
		}
		N = 1;
		for(i = 1; i <= n; i++)
		{
			if(!(a[i]))
			{
				if(N)
				{
					printf("%d ", i);
					N = 0;
				}
				else N = 1;
			}
		}
		printf("\n");
		N = 0;
		for(i = 1; i <= n; i++)
		{
			if(!(a[i]))
			{
				if(N)
				{
					printf("%d ", i);
					N = 0;
				}
				else N = 1;
			}
		}
		printf("\n");
		}
	return 0;
}