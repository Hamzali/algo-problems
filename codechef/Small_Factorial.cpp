#include <stdio.h>
#include <string.h>

int main()
{
	int T, N, K = 0, L, i, j;
	char Result[200], R_1[200], R_2[200];

	scanf("%d", &T);

	while(T--)
	{	
		scanf("%d", &N);
		L = N;
			for(j = 0; L; j++)
			{
				Result[j] = L % 10 + '0';
				L /= 10;
			}
		Result[j] = 0;
		N--;
		while(N > 1)
		{
			for(i = 0; Result[i]; i++)
			{
				L = (N%10) * (Result[i] - '0') + K;
				K = L / 10; 
				R_1[i] = (L % 10) + '0';
			}

			if(K > 0)
			{
				R_1[i] = K + '0';
				R_1[i + 1] = 0;
				K = 0;
			}
			else R_1[i] = 0;

			
			if(N / 10 == 0)
			{
				for(j = 0; R_1[j]; j++)
				{
					Result[j] = R_1[j];
				}
				Result[j] = 0;
				N--;
			}

			else 
			{
				for(i = 0; Result[i]; i++)
				{
					L = (N/10) * (Result[i] - '0') + K;
					K = L / 10; 
					R_2[i] = (L % 10) + '0';	
				}

				if(K > 0)
				{
					
					R_2[i] = K + '0';
					R_2[i + 1] = 0;
					K = 0;
				}		
				
				else R_2[i] = 0;

				Result[0] = R_1[0];
				for(j = 1; R_2[j - 1]; j++)
				{
					if(R_1[j] == 0)R_1[j] = '0';
					
					L = (R_1[j] - '0') + (R_2[j - 1] - '0') + K;
					K = L / 10;
					Result[j] = (L % 10) + '0'; 
				}
				if(K > 0)
				{
					Result[j] = K + '0';
					Result[j + 1] = 0;
					K = 0;
				}		
				else Result[j] = 0;
		
				N--;
			}
		printf("%s\n", Result);
		}
		
		L = strlen(Result);
		for(j = L - 1; j >= 0; j--)printf("%c", Result[j]);
		printf("\n");
		}
	return 0;
}