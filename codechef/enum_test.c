#include <stdio.h>

enum boolean {
	true, 
	false
}; 

typedef enum {
	very_tall,
	tall,
	avarage,
	small,
	very_small
}height;

int main()
{

	enum boolean variable = true; 
	printf("%d, %d\n",  true, false);
	printf("%d\n", variable);
	variable = false;
	printf("%d\n\n", variable);

	printf("%d\n", very_tall);
	printf("%d\n", tall);
	printf("%d\n", avarage);
	printf("%d\n", small );
	printf("%d\n\n", very_small);

	height variable_2;
	variable_2 = very_tall;
	printf("%d\n", variable_2);
	if(variable_2 == very_tall){
		printf("works like magic\n\n");
	}

	variable_2 = 15;
	printf("%d\n", variable_2);


	return 0;
}