#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define up 0
#define left 1
#define right 2
#define down 3

//(Aadithya Gulyani)(April 27, 2018)
//(Aadithya Gulyani)(Sep 24, 2018)
int main(void)

{
	char letter = 'A';
	char path[10][10] = { '0' };
	int walk, i, count, row = 0, col = 0, j;
	count = 0;
	int failure = 0;
	//int. board to dot
	for (row = 0; row < 10; row++) {
		for (col = 0; col < 10; col++) {
			path[row][col] = '.';
		}
	}
	path[0][0] = letter;
	row = 0;
	col = 0;

	srand((unsigned)time(NULL));

	for (i = 0; letter < 'Z'; i++) {
		// failure == 0 ? 
		// failure == 1, 2, 3, 4
		while (failure > 4)
		{
			failure == 0;
			break;
		}
		// if success ... guess next
		if (failure == 0)
		{
			walk = rand() % 4; //Get next walk direction 
		}

			//printf("walk %d", walk);
		switch (walk) {
			if (++failure == 5) break; 
		case left:
			if (col - 1 >= 0 && path[row][col - 1] == '.') {
				--col;
				path[row][col] = ++letter;
				failure = 0; 
				break;
			}

			if (++failure == 5) break;
		case down:
			if (row + 1 <= 9 && path[row + 1][col] == '.') {  //check if down space is available
				++row;
				path[row][col] = ++letter;
				failure = 0;
				break;
			}

			if (++failure == 5) break;
		case right:
			if (col + 1 <= 9 && path[row][col + 1] == '.') {
				++col;
				path[row][col] = ++letter;
				failure = 0;
				break;
			}

			if (++failure == 5) break;
		case up:
			if (row - 1 >= 0 && path[row - 1][col] == '.') {
				--row;
				path[row][col] = ++letter;
				failure = 0;
				break;
			}
			if (++failure == 5) break;
		default:
			break;
		}

	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%c ", path[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;


}
