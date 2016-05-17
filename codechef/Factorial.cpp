#include <stdio.h>

int main()
{ 
	int T, N, k = 0;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%d", &N);
		k = 0;
		while(N)k += N = N/5 - (N%5)/5;
		printf("%d\n", k);
	}

	return 0;
}