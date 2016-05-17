#include <stdio.h>

int Function(int N, int R, int A[], int i);

int main()
{
	int T;
	scanf("%d", &T);

	int N, R, i;

	while(T--)
	{	
		scanf("%d", &N);
		scanf("%d", &R);
		int A[N];
		for(i = 0; i < N; i++)scanf("%d", &A[i]);

		i = 0;	
		if(Function(N, R, A, i))printf("yes\n");
		else printf("no\n");
	}

	return 0;
}

int Function(int N, int R, int A[], int i)
{
	if(R == 0){printf("Fuck return 1: R = %d, i = %d\n", R, i);return 1;}
	if(R < 0 || i == N){printf("Fuck return 0: R = %d, i = %d\n", R, i);return 0;}
	printf("Fuck: R = %d, i = %d\n", R, i);
	return (Function(N, R - A[i], A, i + 1) || Function(N, R, A, i + 1));
}