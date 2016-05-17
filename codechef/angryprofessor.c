#include <stdio.h>

int main(void)
{
	int T; 

	scanf("%d", &T);

	while(T--){

		int st_num, l, c = 0;
		scanf("%d %d", &st_num, &l);

		int i;
		for(i = st_num; i > 0; i--){
			scanf("%d", &st_num);
			if(st_num <= 0)c++;
		}

		if(c >= l)printf("NO\n");
		else printf("YES\n");
	}

	return 0;
}