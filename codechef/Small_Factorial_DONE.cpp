#include <stdio.h>
#include <string.h>

int main()
{
	int T, N, K = 0, L, i, j, D; 
	
	
	scanf("%d", &T);
	while(T--)
	{	
		scanf("%d", &N);
		char Result[200] = {0};
		if(L > 1)
		{
			L = N;
			for(j = 0; L; j++)
			{
				Result[j] = L % 10 + '0';
				L /= 10;
			}
			Result[j] = 0;
			N--;
		}
		else Result[0] = '1';
		
		while(N > 1)
		{
			char R_1[200] = {0}, R_2[200] = {'0'};

			L = N;
			j = 0;
			while(L)
			{
				for(i = 0; Result[i]; i++)
				{
					R_1[i] = (((Result[i] - '0') * (L % 10) + K) % 10) + '0';
					K = ((Result[i] - '0') * (L % 10) + K) / 10;
				}
				if(K){R_1[i] = K + '0'; R_1[i + 1] = 0; K = 0;}
				else R_1[i] = 0;

				for(i = 0; R_1[i]; i++, j++)
				{
					if(R_2[j] == 0)R_2[j] = '0';
					D = ((R_2[j] - '0') + (R_1[i] - '0') + K) % 10;
					K = ((R_2[j] - '0') + (R_1[i] - '0') + K) / 10;
					R_2[j] = D + '0';
				}
				if(K){R_2[j] = K + '0'; R_2[j + 1] = 0; K = 0;}
				else R_2[j] = 0;
				
				j -= i;
				j++;

				L/=10;
			}
			
			for(i = 0; R_2[i]; i++)
			{
				Result[i] = R_2[i];
			}
			Result[i] = 0;

			N--;
		}
			L = strlen(Result);
			for(j = L - 1; j >= 0; j--)printf("%c", Result[j]);
			printf("\n");
		}			
	return 0;
}