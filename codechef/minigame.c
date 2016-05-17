#include <stdio.h>

int map_printer(char *pointer, int size)
{
	
	int i, j;
	for(i = 0; i < size*size; i+=size){
		for(j = 0; j < size; j++)
			printf("%c ", *(pointer + i + j));
		printf("\n");	
	}
		return 0;
}

typedef struct XY{
	int x;
	int y;
}XY;

int main()
{
	int size = 20;
	char map[20][20] = {49};
	XY hero;
	XY goal;
	goal.x = 0;
	goal.y = 0;
	hero.x = 10;
	hero.y = 10;
	map[goal.y][goal.x] = '#';
	map[hero.y][hero.x] = '*';

	while(1){

		if(goal.x == hero.x && goal.y == hero.y)break;
		map_printer(&map[0][0], size);

		char input[2];
		scanf("%s", input);
		char temp;

		switch(input[0]){
			case 'n':
				if(hero.y != 0){
					temp = map[hero.y][hero.x];
					map[hero.y][hero.x] = map[hero.y - 1][hero.x];
					map[hero.y - 1][hero.x] = temp;
					hero.y--;
				}
				break;
			case 's':
			if(hero.y != (size - 1)){
					temp = map[hero.y][hero.x];
					map[hero.y][hero.x] = map[hero.y + 1][hero.x];
					map[hero.y + 1][hero.x] = temp;
					hero.y++;
				}
				
				break;
			case 'e':
				if(hero.x != (size - 1)){
					temp = map[hero.y][hero.x];
					map[hero.y][hero.x] = map[hero.y][hero.x + 1];
					map[hero.y][hero.x + 1] = temp;
					hero.x++;
				}
				break;
			case 'w':
				if(hero.x != 0){
					temp = map[hero.y][hero.x];
					map[hero.y][hero.x] = map[hero.y][hero.x - 1];
					map[hero.y][hero.x - 1] = temp;
					hero.x--;
				}
				break;			
		}		
	}
	
	return 0;
}