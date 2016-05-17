#include <stdio.h>

int main()
{
	int T, P_1 = 0, P_2 = 0, R = 0, S_1, S_2;
	bool P;
	
	scanf("%d", &T);
	
	while(T--)
	{
		scanf("%d %d", &S_1, &S_2); 
		P_1 += S_1;
		P_2 += S_2;

		
		if(P_2 > P_1)
		{
			if(P_2 - P_1 > R)
			{
				R = P_2 - P_1;
				P = true;
			}
		}
		
		else 
		{
			if(P_1 - P_2 > R)
			{
				R = P_1 - P_2;
				P = false; 
			}
		}
	}

	printf("%d %d\n", P + 1, R);
	return 0;
}