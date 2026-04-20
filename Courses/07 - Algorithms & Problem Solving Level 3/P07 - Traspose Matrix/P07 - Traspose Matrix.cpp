/*
Problem #07:

Write a program to fill a 3x3 matrix with ordered numbers and print it, then transpose matrix and print it:

The following is a 3x3 ordered matrix:
 1		2		3
 4		5		6
 7		8		9

The following is the transposed matrix:
 1		4		7
 2		5		8
 3		6		9

*/

#include <iostream>
#include <iomanip>
using namespace std;

void FillArrayWithOrderedNumbers(int arr[3][3], short rows, short cols)
{
	short Counter = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << endl;
	}
}


void TranposeMatrix(int arr[3][3], int arrTraspose[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			 arrTraspose[i][j] = arr[j][i];
	}

}

int main()
{
	int arr[3][3], arrTranspose[3][3];

	FillArrayWithOrderedNumbers(arr, 3, 3);

	cout << "The following is a 3x3 ordered matrix:\n";
	PrintMatrix(arr, 3, 3);

	TranposeMatrix(arr, arrTranspose, 3, 3);
	cout << "\nThe following is the transposed matrix:\n";
	PrintMatrix(arrTranspose, 3, 3);

	return 0;
}