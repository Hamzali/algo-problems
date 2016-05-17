#include <stdio.h>

int main()
{
	int Array[100];
	int n = 100, Min = 0, Max = n - 1;
	char Answer[10];

	for(int i = 0; i < n; i++)
	{
		Array[i] = i + 1;
	}

	Answer[0] = 'y';
	printf("Hold a number between 1-100\n");
	
	while(Answer[0])
	{
		printf("Is your number %d?\n", Array[Min + ((Max - Min)/ 2)]);
		scanf("%s", Answer);

		while(Answer[0] == 'n' || Answer[0] == 'N')
		{
			printf("Is it bigger or lower?");
			scanf("%s", Answer);

			if(Answer[0] == 'B' || Answer[0] == 'b')Min = Min + (Max - Min) / 2;
			
			else if(Answer[0] == 'L' || Answer[0] == 'l')Max = Min + (Max - Min) / 2;

			else {printf("Try again!"); Answer[0] = 'n';}

		}
		

		if(Answer[0] == 'Y' || Answer[0] == 'y'){printf("Yay! Found it!\n");Answer[0] = 0;}
	}

	return 0;
}