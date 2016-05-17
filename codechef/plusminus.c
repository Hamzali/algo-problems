#include <stdio.h>

int main(void)
{
	float n, num;
	scanf("%f", &n);

	float negative = 0, positive = 0, zero = 0, i; 
	for(i = n; i > 0; i--){

		scanf("%f", &num);

		if(num == 0)zero++;
		else if(num > 0)positive++;
		else negative++;
	}

	printf("%.3f\n%.3f\n%.3f\n", positive/n, negative/n, zero/n);

	return 0;
}