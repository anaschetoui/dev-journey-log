/*
Problem #19:

Write a program to print the Minimum and Maximum Numbers in Matrix.

`Matrix1: 
 77		 5		12
 22		20		 6
 14		 3		 9

Minimum Number is: 3

Max Number is: 77
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

int MinNumberInMatrix(int Matrix[3][3], short rows, short cols)
{
	int MinNumber = Matrix[0][0];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			if (Matrix[i][j] < MinNumber)
				MinNumber = Matrix[i][j];
	}
	return MinNumber;
}

int MaxNumberInMatrix(int Matrix[3][3], short rows, short cols)
{
	int MaxNumber = Matrix[0][0];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			if (Matrix[i][j] > MaxNumber)
				MaxNumber = Matrix[i][j];
	}
	return MaxNumber;
}

int main()
{
	int Matrix[3][3] = { 77,5,12,22,20,6,14,3,9 };

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "\nMinimum Number is: " << MinNumberInMatrix(Matrix, 3, 3) << endl;
	cout << "\n\Max     Number is: " << MaxNumberInMatrix(Matrix, 3, 3) << endl;

	return 0;
}