/*
Problem #15:

Write a program to count given number in matrix.

Matrix:
 9		1		12
 0		9		 1
 0		9		 9

Enter the number to count in matrix: 9

 Number 9 count in matrix is 4.

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

void  PrintMatrix(int Matrix[3][3], short rows, short cols)
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

short CountInMatrix(int Matrix[3][3], short NumberToCount, short rows, short cols)
{
	short Counter = 0;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			if (NumberToCount == Matrix[i][j])
				Counter++;
	}

	return Counter;
}

int main()
{
	int Matrix[3][3] = { 9,1,12,
					     0,9,1,
					     0,9,9 };

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << endl;
	short NumberToCount = ReadNumber("Enter the number to count in matrix: ");
	
	cout << "\nNumber " << NumberToCount << " count in matrix is " << CountInMatrix(Matrix, NumberToCount, 3, 3) << endl;

	return 0;
}