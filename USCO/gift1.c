/*
ID: hamzali1
LANG: C
PROG: gift1 
*/

#include <stdio.h>
#include <stdlib.h>

int strcp(char *from, char *to);
int isEqual(char *str1, char *str2);
struct Person* create_person(char *name);
struct Person* find_person(struct Person *p, char *name);

typedef struct Person
{
	char name[15];
	int balance;
	struct Person *n;
}Person;

int main(void)
{
	FILE *fin, *fout;
	fin = fopen("gift1.in", "r");
	fout = fopen("gift1.out", "w");

	int NP;
	fscanf(fin, "%d", &NP);

	int i;
	struct Person *p = NULL;
	struct Person *hp = NULL;
	char name[15];
	for(i = 0; i < NP; i++)
	{	
		fscanf(fin, "%s", name);

		if(p == NULL)
		{
			hp = p = create_person(name); 
		}else {
			p->n = create_person(name);
			p = p->n;
		}		
	}


	for(i = 0; i < NP; i++)
	{
		int b, f; 
		fscanf(fin, "%s %d %d", name, &b, &f);
		p = find_person(hp, name);
		if(b && f)p->balance += -1 * f * (b / f);

		int j;
		for(j = 0; j < f && b; j++)
		{
			fscanf(fin, "%s", name);
			p = find_person(hp, name);
			p->balance += b / f;
		}
	}

	p = hp;
	while(p)
	{
		fprintf(fout, "%s %d\n",p->name,  p->balance);
		hp = p;
		p = p->n;
		free(hp);
	}
	fclose(fin);
	fclose(fout);	

	return 0;
}

int strcp(char *from, char *to)
{
	while(*from != 0){
		*to = *from;
		to++;
		from++;
	}
	*to = 0;

	return 0;
}

// Returns 0 if strings are not equal else returns 1.
int isEqual(char *str1, char *str2){
	int equal = 0;

	while(*str1 && *str2)
	{
		if(*str1 == *str2)
		{
			str1++;
			str2++;
			if(!(*str1 || *str2))equal = 1;
		}else{
			break;
		}
	}
	return equal;
}

struct Person* create_person(char *name){
	struct Person *p;
	p = (struct Person*)malloc(sizeof(struct Person));
	p->n = NULL;
	p->balance = 0;
	strcp(name, p->name);
	return p;
}

// Returns NULL if nothing is found.
struct Person* find_person(struct Person *p, char *name){
	while(p)
	{
		if(isEqual(name, p->name))return p;
		else p = p->n;
	}

	return p;
}