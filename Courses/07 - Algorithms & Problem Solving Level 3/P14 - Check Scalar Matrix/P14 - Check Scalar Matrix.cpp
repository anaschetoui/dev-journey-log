/*
Problem #14:

Write a program to check if the matrix is Scalar or not.

Matrix:
 9		0		0
 0		9		0
 0		0		9

 YES: Matrix is scalar.

*/

#include <iostream>
using namespace std;

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << " " << Matrix[i][j] << "    ";
		}
		cout << endl;
	}
}

bool isMatrixScalar(int Matrix[3][3], short rows, short cols)
{
	int FirstDiagonal = Matrix[0][0];
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (i == j && Matrix[i][j] != FirstDiagonal)
				return false;

			else if (i!=j && Matrix[i][j] != 0)
				return false;
		}

	}
	return true;
}

int main()
{
	int Matrix[3][3] = { 9,0,0,
						 0,9,0,
						 0,0,9 };

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	
	isMatrixScalar(Matrix, 3, 3) ? cout << "\nYES: Matrix is scalar.\n" : cout << "\nNO: Matrix is NOT scalar.\n";

	return 0;
}