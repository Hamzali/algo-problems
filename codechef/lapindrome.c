#include <stdio.h>

//int char_input(char *ptr);

int main(void)
{

	int T;

	scanf("%d", &T);

	while(T--)
	{
		char word[1001] = {0};

		int length; //= char_input(word);
		scanf("%s", word);

		for(length = 0; word[length]; length++);		

		int i, k, test = 0;
		if(length % 2 == 0)k = length / 2 + 1;
		else k = length / 2;
		for(i = 0; i < k; i++)
		{
			int j; 
			test = 0;
			for(j = k; word[j]; j++)
			{
				if(word[i] == word[j])
				{
					test = 1;
					word[j] = 1;
				}
			}

			if(test == 0)break;
		}

		if(test)printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}

/*int char_input(char *ptr)
{
	char c  = getchar_unlocked();
	int i = 0;
	while(c >= 'a' && c <= 'Z')
	{
		printf("fuck");
		*(ptr + i) = c;

		i++;

		c = getchar_unlocked();
	}
	
	*(ptr + i) = 0;
	return i;
}*/
