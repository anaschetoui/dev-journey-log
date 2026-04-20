/*
Problem #06:

Write a program to fill a 3x3 matrix with ordered numbers:

The following is a 3x3 ordered matrix:
 1		2		3
 4		5		6
 7		8		9
*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void FillArrayWithOrderedNumbers(int arr[3][3], short rows, short cols)
{
	short Counter = 0;
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}

	}
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j]<<"    ";
		}
		cout << endl;
	}
}

int main()
{
	int arr[3][3];

	FillArrayWithOrderedNumbers(arr, 3, 3);

	cout << "The following is a 3x3 ordered matrix:\n";
	PrintMatrix(arr, 3, 3);

	return 0;
}