#include <stdio.h>

int main(void)
{
	int D[3], R[3], fine = 0; 

	scanf("%d %d %d", &R[0], &R[1], &R[2]);
	scanf("%d %d %d", &D[0], &D[1], &D[2]);
	
	if( D[2] < R[2] ){
		fine = 10000;
	}else if(D[2] > R[2]){
		fine = 0;
	}else if( D[1] < R[1] ){
		fine = (R[1] - D[1]) * 500;
	}else if(D[1] > R[1]){
		fine = 0;
	}
	else if(D[0] < R[0]){
		fine = (R[0] - D[0]) * 15;
	}

	printf("%d\n", fine);
	return 0;
}