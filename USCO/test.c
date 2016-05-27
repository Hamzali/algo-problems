/*
ID: hamzali1
LANG: C
TASK: test
*/

#include <stdio.h>

int main(void)
{

	FILE *fin, *fout;

	fin = fopen("test.in", "r");
	fout = fopen("test.out", "w");

	int a, b;
	fscanf(fin, "%d %d", &a, &b);
	fprintf(fout, "%d\n", a+b);

	return 0;
}