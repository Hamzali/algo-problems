#include <stdio.h>

int main()
{
	int N = 1;

	scanf("%d", &N);
	while(N)
	{
		int P[N + 1];
		int i;
		int k = 1;

		for(i = 1; i <= N; i++)
			scanf("%d", &P[i]);
		
		for(i = 1; i <= N; i++)
		if(P[P[i]] != i){k = 0;break;}
	
	 	k ? printf("ambiguous\n") : printf("not ambiguous\n");
	 	scanf("%d", &N);
	}

	return 0;
}