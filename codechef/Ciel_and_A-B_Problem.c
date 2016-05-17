#include <stdio.h>

int main()
{
	int A, B, K = 1;
		
	scanf("%d", &A);
	scanf("%d", &B);

	A -= B;

	if(A%10 == 9)A--;
	else A++;
	
	printf("%d\n", A);

	return 0;
}