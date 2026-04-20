/*
Problem #01:

Write a program to fill a 3x3 matrix with random numbers.

		The following is a 3x3 random matrix:
		16		45		30
		13		51		 3
		24		19	   100

*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrix(int arr[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			arr[i][j] = RandomNumbers(1, 100);

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

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrix(arr, 3, 3);

	cout << "The following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	return 0;
}
