#include <stdio.h>
 
int main()
{
	int T, i, candle[10];
 
	scanf("%d", &T);
 
	while(T-- > 0)
	{
		int min, ind, found = 0;
 
		for(i = 0; i < 10; i++)
		{
			scanf("%d", &candle[i]);
			if(i == 0)
			{
				min = candle[0];
			}
			else
			{
				if(min > candle[i])
				{
					min = candle[i];
				}
			}
		}
 
		for(i = 0; i < 10; i++)
		{
			if(candle[i] == min)
			{
				ind = i;
				if(i)
					break;
			}
		}
 
		if(ind)
		{
			for(i = 0; i <= min; i++)
			{
				printf("%d", ind);
			}
		}
		else
		{
			printf("1");
			for(i = 0; i <= min; i++)
			{
				printf("0");
			}	
		}
 
		printf("\n");
	}
 
	return 0;
}