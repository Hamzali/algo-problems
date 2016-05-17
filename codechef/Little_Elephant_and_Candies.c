#include <stdio.h>

int main()
{
	int T;

	scanf("%d", &T);

	while(T--)
	{
		int c, e, n;

		scanf("%d %d", &e, &c);

		int i;
		for(i = 0; i < e; i++)
		{
			scanf("%d", &n);
			c -= n;
		}
		if(c >= 0)printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}