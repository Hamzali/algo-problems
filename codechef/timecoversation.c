#include <stdio.h>

int main(void)
{

	char AMPM[11];

	scanf("%s", AMPM);

	int t;

	t = (AMPM[0] - '0')*10 + AMPM[1] - '0';


	if(t == 12){
		if(AMPM[8] == 'A')
		{
			t = 0;
		}

	}else if(AMPM[8] == 'P'){
		t += 12;
	}

	AMPM[1] = t % 10 + '0';
	t/=10;
	AMPM[0] = t % 10 + '0';

	AMPM[8] = 0;

	printf("%s\n", AMPM);
	return 0;
}
