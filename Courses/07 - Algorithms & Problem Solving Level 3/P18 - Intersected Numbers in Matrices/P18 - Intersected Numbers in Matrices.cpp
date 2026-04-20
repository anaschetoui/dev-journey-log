/*
Problem #18:

Write a program to print the intersected numbers in two given matrices.

Matrix1: 
 77		 5		12
 22		20		 1
  1		 0		 9

Matrix2:
  5		88		90
 22		77		 1
 10		 8		33

 Intrersected Numbers are:

77		5		22		1		1
*/

#include <iostream>
#include <iomanip>
using namespace std;

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << " " << setw(2) << right << Matrix[i][j] << "     ";
		}
		cout << endl;
	}
}

bool NumberIsExists(int Matrix[3][3],short NumberToCheck, short rows, short cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (NumberToCheck == Matrix[i][j]) return true;

		}
	}
	return false;
}


void PrintIntrersectedInMatrices(int Matrix1[3][3], int Matrix2[3][3], short rows, short cols)
{
	
		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				if (NumberIsExists(Matrix2, Matrix1[i][j], 3, 3))
				{
						cout << " " << setw(2) << Matrix1[i][j] << "     ";
				}
			}
		}

}

int main()
{
	int Matrix1[3][3] = { 77,5,12,22,20,1,1,0,9 },
		Matrix2[3][3] = { 5,80,90,22,77,1,10,8,33 };

	cout << "Matrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "Matrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

	cout << "Intersected Numbers are:\n";
	PrintIntrersectedInMatrices(Matrix1, Matrix2, 3, 3);

	return 0;
}