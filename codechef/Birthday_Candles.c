#include <stdio.h>

int main(void){

	int T;

	scanf("%d", &T);

	while(T--){
		int A[10];
		int i = 0;
		int lowest;
		
		scanf("%d", &A[0]);
		lowest = A[0];
		for(i = 2; i < 10; i++){
			scanf("%d", &A[i]);
			if(A[i] < lowest)lowest = A[i];
		}
		
		/*int ind;
		for(i = 0; i < 10; i++){
			if(A[i] == lowest){
				ind = i;
				if(i)
					break;
			}
		}*/

		int ind;
		for(i = 0; i < 10; i++)
		{
			if(A[i] == lowest)
			{
				ind = i;
				if(i)
					break;
			}
		}


		if(ind == 0){
			printf("1");
			for(i = 0; i <= lowest; i++)printf("0");			
		}

		else for(i = 0; i <= lowest; i++)printf("%d", ind);
		
		printf("\n");
			
	}

	return 0;

}