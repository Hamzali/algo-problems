#include <stdio.h>

void swap(int A[], int a, int b);
void Quicksort(int Array[], int high, int low, int size);

int main()
{
	int size;
	scanf("%d", &size);
	int Array[size];

	int i;
	for(i = 0; i < size; i++)scanf("%d", &Array[i]);

	Quicksort(Array, size - 1, 0, size);

	for(i = 0; i < size; i++)printf("%d ", Array[i]);
	printf("\n");	

	return 0;
}

void swap(int A[], int a, int b)
{
	int temp;
	temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}

void Quicksort(int Array[], int high, int low, int size)
{
	
	if(high - low <= 1)return;

	else
	{
	
	int i, j, pivot = low;
	for(i = 0; i < size; i++)printf("%d ", Array[i]);
	printf("\n");
	
	for(i = pivot, j = high; j - 1 != i;)
	{
		if(Array[i] >= Array[i + 1]){swap(Array, i, i + 1);i++;}

		else 
		while(j - 1 != i)
		{
			if(Array[i] < Array[j]){swap(Array, j , i + 1);j--;break;}
			else j--;
		}
	}	


	Quicksort(Array, high, i - 1, size);
	Quicksort(Array, i + 1, 0, size);
	}
}