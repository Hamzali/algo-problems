/*
ID: hamzali1
LANG: C
PROG: ride
*/

#include <stdio.h>

int main(void)
{
	FILE *fin, *fout;

	fin = fopen("ride.in", "r");
	fout = fopen("ride.out", "w");


	char str_1[7], str_2[7]; 
	fscanf(fin, "%s %s",  str_1, str_2);

	int i = 0, j = 0, sum_1 = 1, sum_2 = 1;
	while(str_1[i] || str_2[j])
	{
		if(str_1[i]){
			sum_1 *= (str_1[i] - 'A' + 1);
			i++;	
		}

		if(str_2[j]){
			sum_2 *= (str_2[j] - 'A' + 1);
			j++;	
		}
	}

	if(sum_1 % 47 == sum_2 % 47)fprintf(fout, "GO\n");
	else fprintf(fout, "STAY\n");
	
	return 0;
}