//https://www.codechef.com/problems/CARVANS
//DONE!
#include <stdio.h>

void In(int *p);

int main(){

	int t;
	get_int(&t);

	while(t--){

		int n, result = 0, temp = 0;

		get_int(&n);
		get_int(&temp);
		n--;
		result++;
		while(n--){
			int s;
			get_int(&s);
			if(s < temp){
				result++;
				temp = s;
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
