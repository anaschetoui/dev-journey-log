/*
Problem #04:

 Write a program to fill a 3x3 matrix with random numbers,then print each Col sum:

 The following is a 3x3 random matrix:
   5		 1		87
  46		12		 2
  87		 2		68

 The following are sum of each row in the matrix:
  Col 1 Sum = 138
  Col 2 Sum = 15
  Col 3 Sum = 157

*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			arr[i][j] = RandomNumbers(1,100);
	}
}

void PrintArray(int arr[3][3], short rows, short cols)
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

int GetColsSum(int arr[3][3], short rows, short cols)
{
	int Sum = 0;
	for (int i = 0; i < rows; i++)
	{
		Sum += arr[i][cols];
	}
	return Sum;
}

void PrintColsSum(int arr[3][3], short rows, short cols)
{
	for (int j = 0; j < cols; j++)
	{
		cout << "Col " << j + 1 << " Sum = " << GetColsSum(arr, rows, j) << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];

	FillArrayWithRandomNumbers(arr, 3, 3);

	cout << "The following is a 3x3 random matrix:\n";
	PrintArray(arr, 3, 3);
	cout << "\n";

	PrintColsSum(arr, 3, 3);



	return 0;
}