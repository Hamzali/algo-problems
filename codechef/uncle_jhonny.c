#include <stdio.h>

int* Mergesort(int *p, int n);

int main(void)
{
	int T;

	scanf("%d", &T);

	while(T--)
	{

		int N, num;

		//Input(&N);
		scanf("%d", &N);

		int sorted[N];

		int i;
		for(i = 0; i < N; i++)
		{
			scanf("%d", &sorted[i]);
		}

		scanf("%d", &num);

		num = sorted[num - 1];

		Mergesort(sorted, N);

		for(i = 0; i < N; i++)
		{
			if(sorted[i] == num)break;
		}

		printf("%d\n", i + 1);
	}

	return 0;
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