#include <stdio.h>

int* Mergesort(int *p, int n);

int main(void){

	int T, N, i;

	scanf("%d", &T);

	while(T--){

		scanf("%d", &N);
		int  S[N], k;
		for(i = 0; i < N; i++)scanf("%d", &S[i]);

		Mergesort(S, N);
		
		k = S[1] - S[0];
		for(i = 1; i < N - 1; i++){
			if(S[i + 1] - S[i] < k)k = S[i + 1] - S[i];
		}

		printf("%d\n", k);	
	}




}

int* Mergesort(int *p, int n)
{
	if(n != 1)
	{	
		int i, j, k, *q1, *q2;
		
		q2 = Mergesort(p + n/2, n - n/2);
		q1 = Mergesort(p, n/2);
		
		int a1[n/2], a2[n - n/2];

		for(i = 0; i < n/2; i++)
			a1[i] = *(q1 + i);

		for(i = 0; i < n - n/2; i++)
			a2[i] = *(q2 + i);

		for(i = 0, j = 0, k = 0; i < n; i++)
		{
			if(!(j == n/2 || k == n - n/2))
			{
				if(a1[j] < a2[k])
				{
					*(p + i) = a1[j];
					j++;
				}
			
				else 
				{
					*(p + i) = a2[k];
					k++;	
				}
			}

			else
			{
				if(k == n - n/2)
				{
					*(p + i) = a1[j];
					j++;
				}
		
				else
				{
					*(p + i) = a2[k];
					k++;			
				}
			}
		}	
	}
	
	
	return p;	
}