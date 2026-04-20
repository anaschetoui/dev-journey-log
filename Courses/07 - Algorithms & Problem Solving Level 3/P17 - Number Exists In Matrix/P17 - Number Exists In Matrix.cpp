/*
Problem #17:

Write a program to check if a given number exists in matrix or not.

Matrix1:
 77		 5		12
 22		20		 1
  1		 0		 9

Enter the number to look for in matrix: 77

Yes it is there.

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

short ReadNumber(string Message)
{
	short Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << " " << setw(2) << right << Matrix[i][j] << "    ";
		}
		cout << endl;
	}
}

bool IsNumberExists(int Matrix[3][3], short NumberToCheck, short rows, short cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			if (NumberToCheck == Matrix[i][j]) return true;
	}
	
	return false;
}

int main()
{
	int Matrix[3][3] = { 77,5,22,
						 22,20,1,
						 1,0,9 };

	cout << "Matrix\n";
	PrintMatrix(Matrix, 3, 3);

	IsNumberExists(Matrix, ReadNumber("Enter the number to look for in matrix:"), 3, 3) ? cout << "\nYES it is there.\n" :
		cout << "NO, it is not there.\n";

	return 0;
}