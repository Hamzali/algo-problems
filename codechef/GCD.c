#include <stdio.h>

unsigned int gcd(int A, int B);

int main(void)
{
	int a, b;
	printf("GCD algorithm\nEnter two numbers:\n");
	scanf("%d %d", &a, &b);

	printf("Result: %d\n", gcd(a, b));
	return 0;
}

	unsigned int gcd (int a, int b)
{
    int c = 0;
    while (a)
    {
        c = a;
        a = b % a;
        b = c;
    }
    return b;
}	
