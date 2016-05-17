#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);

	int M[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
	int P,C;
	while(T--)
	{
		scanf("%d", &P);
		C = 0;
		while(P)
		{	
			int i;
			for(i = 0; i < 12; i++)if(P < M[i])break;
			i --;
			P -= M[i];
			C++;
		}
		printf("%d\n", C);
	}


	return 0;
}