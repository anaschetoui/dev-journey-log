/*
Problem #13: 

Write a program to check if the matrix is identity or not.

Matrix:
 1		0		0
 0		1		0
 0		0		0

 YES: Matrix is identity.

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

bool isMatrixIdentity(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (i == j && Matrix[i][j] != 1)
				return false;

			else if (i!=j && Matrix[i][j] != 0)
				return false;
		}

	}
	return true;
}

int main()
{
	int Matrix[3][3] = { 1,0,0,
						 0,1,0,
						 0,0,1 };

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);


	isMatrixIdentity(Matrix,3,3) ? cout << "\nYES: Matrix is identity.\n" : cout << "\nNO: Matrix is NOT identity.\n";

	return 0;
}