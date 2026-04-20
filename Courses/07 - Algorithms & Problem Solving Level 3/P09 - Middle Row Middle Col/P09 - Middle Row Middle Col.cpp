/*
Problem #09:

Write a program to fill a 3x3 matrix with random numbers, print it, then print the middle row and middle col.

Matrix1:
01		10		07
10		03		02
06		03		09

Middle Row of Matrix1 is:
10		03		02

Middle Col of Matrix1 is:
10		03		03

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

void PrintMiddleRow(int Matrix[3][3], short rows, short cols)
{
	short MiddleRow = rows / 2;

	for (size_t j = 0; j < cols; j++)
	{
	
		cout <<" " << setfill('0') << setw(2) << Matrix[MiddleRow][j] << "     ";
	}
	cout << endl;
}

void PrintMiddleCol(int Matrix[3][3], short rows, short cols)
{
	short MiddleCol = cols / 2;
	for (size_t i = 0; i < rows; i++)
	{
		cout << " " << setfill('0') << setw(2) << Matrix[i][MiddleCol] << "     ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrix(Matrix, 3, 3);

	cout << "Matrix1:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "\nMiddle Row of Matrix1 is:\n";
	PrintMiddleRow(Matrix, 3,3);

	cout << "\nMiddle Col of Matrix1 is:\n";
	PrintMiddleCol(Matrix, 3,3);

	return 0;
	
}