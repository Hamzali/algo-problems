#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);

	while(T--){
		int N, i;
		scanf("%d", &N);
		char A[N + 1];

		if(N % 3 == 0){
			for(i = 0; i < N; i++)A[i] = '5';
			A[N] = 0;
			printf("%s\n", A);
		}else{

			int k = 5;
			while((N - k) % 3 != 0 && N - k > 0){
				k += 5;
			}

			if(N - k >= 0){
				for(i = 0; i < N - k; i++)A[i] = '5';
			    for(i = N - k; i < N; i++)A[i] = '3';
			    A[N] = 0;
				printf("%s\n", A);
			}else{
				printf("-1\n");
			}
		}	
	}
	return 0;
}