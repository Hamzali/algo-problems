#include <stdio.h>

void swap(int *p, int *q);

void quicksort(int *array, int n);

int main()
{
	int n;

	scanf("%d", &n);

	int i; 
	int array[n];
	for(i = 0; i < n; i++)scanf("%d", &array[i]); 

	quicksort(&array[0], n);
	
	for(i = 0; i < n; i++)printf("%d ", array[i]);
	printf("\n"); 

	return 0;
}

void swap(int *p, int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

void quicksort(int *array, int n)
{
	if(n > 2)
	{
		int pivot;
		int i, j;
		pivot = *(array);
		for(i = 1, j = n - 1; array + i != array + j; i++)
		{
			if(*(array + i) > pivot)
			{
				while(array + i + 1 != array + j)
				{
					
					if(*(array + j) < pivot){
						swap(array + i, array + j);
						break;
					}else j--;
				}					
			}
		}

		swap(array, array + i - 1);

		quicksort(array, i - 1);
		quicksort(array + i, n - i);
	}

	else return;	
}