#include <stdio.h>

int main()
{
	long long int N;
	int T;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%lld", &N);

		if(N&1)printf("BOB\n");
		else printf("ALICE\n");

	}

	return 0;
}