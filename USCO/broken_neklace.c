#include <stdio.h>
#include <stdlib.h>

typedef struct bead
{
	char color;
	struct bead *next;
	struct bead *prev;
}Bead;



int main(void)
{		
	int N;

	scanf("%d", &N);

	Bead *p = NULL;
	Bead *hp = NULL;

	// Create the necklace.
	char bead = getchar();
	int i = 0;
	while(i < N){
		bead = getchar();
		if (p == NULL){
			hp = p = (Bead *)malloc(sizeof(Bead));

			p -> color = bead;
			p -> next = NULL;
			p -> prev = NULL;
		}else{
			p -> next = (Bead *)malloc(sizeof(Bead));

			p -> next -> prev = p;
			p = p -> next;
			p -> color = bead;
			p -> next = NULL;
		}
		i++;
	}
	hp -> prev = p;
	p -> next = hp;

	Bead *q;
	p = hp;
	for(i = 0; i < N; i++){
		printf("%d %c\n", i, p -> color);

		q = p;
		while(q -> color == q -> next -> color || ){

		}


		p = p -> next;
	}


	// Free the necklace, we are done.
	i = 0;
	p = hp;
	while(i < N){
		hp = p -> next;
		free(p);
		p = hp;
		i++;
	}


	return 0;
}