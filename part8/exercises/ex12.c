#include <stdio.h>

int main (void)
{
	void transposeMatrix (int nRows, int nCols, int M[nRows][nCols], int N[nCols][nRows]);
	void displayMatrix (int nRows, int nCols, int M[nRows][nCols]);
	int M[4][5] = {
		{ 7,16,55,13,12},
		{12,10,52, 0, 7},
		{-2, 1, 2, 4, 9},
		{ 1, 1, 1, 1, 1}
	};
	int N[5][4]= {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
	printf("Original matrix:\n");
	displayMatrix(4, 5, M);
	transposeMatrix(4, 5, M, N);
	printf("\nTransposed matrix\n");
	displayMatrix(5,4, N);
	
	return 0;
}

//Function to do transposing
void transposeMatrix(int nRows, int nCols, int M[nRows][nCols], int N[nCols][nRows])
{
	int row, col;
	for(row = 0; row < nRows; row++) {
		for(col = 0; col < nCols; col++) {
			N[col][row]=M[row][col];
		}
	}
}
//Function to print this shit out
void displayMatrix (int nRows, int nCols, int M[nRows][nCols])
{
	int row, column;
	
	for(row = 0; row < nRows; row ++)
	{
		for(column = 0; column < nCols; column++)
		{
			printf("%5i", M[row][column]);
		};
		printf("\n");
	};
}
