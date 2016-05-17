#include <stdio.h>
#define MAX_SIZE 200

int main(void){
	
	int T;
	char S[MAX_SIZE];
	
	scanf("%d", &T);

	while(T--){
		int C = 0, i;
		short int A[MAX_SIZE] = {0};
		scanf("%s", S);

		for(i = 0; S[i]; i++){

			if(A[S[i]]){
				A[S[i]]--;
			}else{
				C++;
				A[S[i]]++;				
			}
		}

		printf("%d\n", C);
	}


}