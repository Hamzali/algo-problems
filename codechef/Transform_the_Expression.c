#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);

	while(T--)
	{
		char E[401];
		scanf("%s", E);

		char S[200];
		int i, K = -1, j;
		for(i = 0, j = 0; E[i]; i++)
		{	
			
			if(E[i] >= 'a' && E[i] <= 'z')
			{
				E[j] = E[i];
				j++;
			}
			
			else if(E[i] == ')')
			{
				E[j] = S[K];
				K--;
				j++;
			}

			else if(E[i] == '+'){K++; S[K] = '+';}
			else if(E[i] == '-'){K++; S[K] = '-';}
			else if(E[i] == '/'){K++; S[K] = '/';}
			else if(E[i] == '^'){K++; S[K] = '^';}
			else if(E[i] == '*'){K++; S[K] = '*';}

		}
		E[j] = 0;
		printf("%s\n", E);
	}


	return 0;
}