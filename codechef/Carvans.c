//https://www.codechef.com/problems/CARVANS
//DONE!
#include <stdio.h>

void In(int *p);

int main(){

	int T;
	In(&T);

	while(T--){

		int N, result = 0, temp = 0;

		In(&N);
		In(&temp);
		N--;
		result++;
		while(N--){
			int S;
			In(&S);
			if(S < temp){
				result++;
				temp = S;
			}

		}

		printf("%d\n", result);
	}

	return 0;
}

void In(int *p){
	char c;
	*p = 0;
	c = getchar_unlocked();
	while(c != '\n' && c != ' '){
		if(c >= '0' && c <= '9'){
			*p *= 10;
			*p = *p  + (c - '0');
		}
		c = getchar_unlocked();
	}
}
