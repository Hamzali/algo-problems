/*
ID: hamzali1
LANG: C
PROG: friday
*/

#include <stdio.h>

int main(void)
{
	FILE *fin, *fout;

	fin = fopen("friday.in", "r");
	fout = fopen("friday.out", "w");

	/*
	Saturday 0
	Sunday 1
	Monday 2
	Tuesday 3
	Thursday 4
	Wednesday 5
	Friday 6
	*/

	int N = 20;
	int days[7] = {0};
	int day;
	int months[12];

	// December 13th of 1899 is Wednesday
	int currentDay = 4;

	fscanf(fin, "%d", &N);

	// Iterating through years
	int i;
	for(i = 0; i < N; i++)
	{
		//printf("190%d\n", i);
		// iterating through months
		int j;
		for (int j = 1; j < 13; j++)
		{	
			// Control if the month before is February
			if(j - 1 == 2){
				// Leap year control
				if(((1900 + i) % 100 != 0 && (1900 + i) % 4 == 0) || (1900 + i) % 400 == 0){
					currentDay = (currentDay + 29) % 7;
				}else {
					currentDay = (currentDay + 28) % 7;
				}
			}else {
				if((j % 2 == 0 && j < 9) || j == 1  || (j >= 9 && j % 2)) currentDay = (currentDay + 31) % 7;
				else currentDay = (currentDay + 30) % 7;
			}

			//printf("%d %d\n", j, currentDay);
			days[currentDay] += 1;
		}

		//printf("\n");
	}

	//printf("\n\n");

	fprintf(fout, "%d %d %d %d %d %d %d\n", days[0], days[1], days[2], days[3], days[4], days[5], days[6]);
/*
	for (int i = 0; i < 7; ++i)
	{
		fprintf(fout, "%d ", days[i]);
	}
	fprintf(fout, "\n");
	

	
	
*/

	return 0;
}
