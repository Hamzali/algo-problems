#include <stdio.h>

unsigned long long Factorial(unsigned long long n);

int main()
{
	int T, Number;
	 
	scanf("%d", &T);
	
	while(T--)
	{
		scanf("%d", &Number);
		printf("%llu\n", Factorial((unsigned long long)Number));
	}
	
	return 0;
}

unsigned long long Factorial(unsigned long long n)
{
	if(n > 1)
	{
		return Factorial(n - 1) * n;
	}
	
	else return 1;
}