/*Objetives and what I did so far:
-Create a sudoku table (done?)
-Check if line is solved
-Check if column is solved
-Check if big square is solved
-Create randomized games
	-Must maintain the cells already filled
	-Check if they are working
		-I don't know how
			-Fucking help me
				-I feel lost and lonely
	-I think I know how, actually
		-Well, let's start, shall we?*/

#include <stdio.h>
/*int checkLines(currentGame[][]){
	int j, i;
	for(i=0;)
}*/

int main(void){
	int sudokuM[27][3]={{0, 0, 0},{1, 1, 1},{2, 2, 2},
	 								 {3, 3, 3},{4, 4, 4},{5, 5, 5},
								 	 {6, 6, 6},{7, 7, 7},{8, 8, 8},
								   {0, 0, 0},{1, 1, 1},{2, 2, 2},
								   {3, 3, 3},{4, 4, 4},{5, 5, 5},
								   {6, 6, 6},{7, 7, 7},{8, 8, 8},
								   {0, 0, 0},{1, 1, 1},{2, 2, 2},
								   {3, 3, 3},{4, 4, 4},{5, 5, 5},
								   {6, 6, 6},{7, 7, 7},{8, 8, 8}};
	int i=0, j;
	for(;i<27;i++){
		for(j=0;j<3;j++){
			printf("%d ", sudokuM[i][j]);
			if (((i+1)%3 == 0) && ((j+1)%3==0)){
				printf("\n");
			}
		}
	}
}
