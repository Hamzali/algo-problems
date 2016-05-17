#include <stdio.h>

int main(void){

	long long int A, N, K, k = 1;

	scanf("%lli", &A);
	scanf("%lli", &N);
	scanf("%lli", &K);

	while(K--)
	{
		if(A / k == 0)printf("%d ", A / k);
		
		else printf("%d ", (A / k) % (N + 1)); 

		k *= (N + 1);
	}	

		
	return 0;
}