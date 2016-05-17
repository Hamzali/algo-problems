#include <stdio.h>
#include <math.h>
int main()
{
	int N;
	scanf("%d", &N);
	while(1)
	{
	N++;
	
	int i, d, k;
	char P[10];
	for(i = 0, d = N; d; d /= 10, i++)P[i] = d % 10;
	i--;
	
	int j;
	d = 1;
	for(j = 0; j < i; i--, j++)if(P[i] != P[j]){d = 0; break;}

	/*int i, k = 1, P = 0, D = N;
	if(N > 9)
	{	
	for(i = 0; N > k; k *= 10, i++);
	for(k = 0; k < i/2; k++)
	{
		P += D % 10;
		D /= 10;
	}
	if(i&1)D /= 10;
	}
	else P = N;*/
	
	k = 1;
	for(i = 2; i < sqrt(N); i++)if(!(N % i)){k = 0; break;}

	if(d && k)break;	
	}
	
	printf("%d\n", N);
	return 0;
}