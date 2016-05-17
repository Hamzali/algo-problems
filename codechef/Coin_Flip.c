#include <stdio.h>

int main(){

	int T;

	scanf("%d", &T);

	while(T--){

		int G;

		scanf("%d", &G);

		while(G--){
			int I, N, Q;

			scanf("%d", &I);
			scanf("%d", &N);
			scanf("%d", &Q);

			if(N % 2){
				if(I-1){

					if(Q-1){
						printf("%d\n", N / 2);
					}else{
						printf("%d\n", N / 2 + 1);
					}
				}else{
					if(Q-1){
						printf("%d\n", N / 2 + 1);
					}else{
						printf("%d\n", N / 2);
					}
				}

			}else{
				printf("%d\n", N/2);
			}



		}

	}



	return 0;
}