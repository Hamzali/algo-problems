//https://www.codechef.com/problems/CARVANS
//DONE!
#include <stdio.h>

void In(int *p);

int main(){

	int T;
	get_int(&T);

	while(T--){

		int N, result = 0, temp = 0;

		get_int(&N);
		get_int(&temp);
		N--;
		result++;
		while(N--){
			int S;
			get_int(&S);
			if(S < temp){
				result++;
				temp = S;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}

void get_int(int *p){
	char c;
	*p = 0;
	c = getchar_unlocked(); // For faster input.
	while(c >= '0' && c <= '9'/*c != '\n' && c != ' '*/){
		*p *= 10;
		*p = *p  + (c - '0');
		c = getchar_unlocked();
	}
}
