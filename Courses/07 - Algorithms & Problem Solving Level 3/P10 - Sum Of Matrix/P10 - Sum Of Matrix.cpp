/*
Problem #10:

Write a program to fill two 3x3 matrix with random numbers and them, then write a function to sum all numbers in this matrix and print it.

Matrix1:
04		08		06
03		10		07
08		08		10

Sum of Matrix1 is: 64
*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrix(int Matrix[3][3], short rows, short cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			Matrix[i][j] = RandomNumbers(1, 10);
	}
}

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << " " << setfill('0') << setw(2) << Matrix[i][j] << "     ";
		}
		cout << endl;
	}
}

int SumOfMatrix(int Matrix[3][3], short rows, short cols)
{
	int Sum = 0;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			Sum += Matrix[i][j];
	}

	return Sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrix(Matrix, 3, 3);

	cout << "Matrix1:\n";
	PrintMatrix(Matrix, 3, 3);

	int Sum = SumOfMatrix(Matrix, 3, 3);
	cout << "\nSum of Matrix1 is: " << Sum << endl;

	return 0;
}