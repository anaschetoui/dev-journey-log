/*
Problem #11:

Write a program to compare two matrices and check if they are equal or not.

Matrix1:
 06		03		06
 04		05		09
 03		04		04

Matrix2:
 08		09		06
 06		08		06
 09		03		05

No: matrices are NOT equal.

*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int RandomNumbers(int from, int to)
{

	return rand() % (to - from + 1) + from;
}

void FillMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
			Matrix[i][j] = RandomNumbers(1, 10);
	}
}

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << " " << setfill('0') << setw(2) << Matrix[i][j] << "    ";
		}
		cout << endl;
	}
}

int SunOfMatrix(int Matrix[3][3], short rows, short cols)
{
	int Sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			Sum += Matrix[i][j];
	}
	return Sum;
}

bool AreEqual(int Matrix1[3][3], int Matrix2[3][3], short rows, short cols)
{
	return (SunOfMatrix(Matrix1, rows, cols) == SunOfMatrix(Matrix2, rows, cols));
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3];

	FillMatrix(Matrix1, 3, 3);
	cout << "Matrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrix(Matrix2, 3, 3);
	cout << "\nMatrix2: \n";
	PrintMatrix(Matrix2, 3, 3);

	AreEqual(Matrix1,Matrix2,3,3) ? cout << "\nYES: both matrices are equal.\n" : cout << "\nNO: matrices are NOT equal.\n";

	return 0;

}