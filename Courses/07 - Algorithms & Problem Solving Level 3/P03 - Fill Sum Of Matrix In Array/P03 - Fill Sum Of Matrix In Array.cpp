/*
Problem #03: 

 Write a program to fill a 3x3 matrix with random numbers,then sum each row in sperate array and print the results:

 The following is a 3x3 random matrix:
  53		43		 6
  65		83		48
  64		30		36

 The following are sum of each row in the matrix:
  Row 1 Sum = 102
  Row 2 Sum = 196
  Row 3 Sum = 130

*/

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNums(int arr[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			arr[i][j] = RandomNumbers(1, 100);
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

int GetRowSum(int arr[3][3], short rows, short cols)
{
	int Sum = 0;

	for (int j = 0; j < cols; j++)
	{
		Sum += arr[rows][j];
	}

	return Sum;
}


void FillArrayWithSum(int arr[3][3], int arrSum[3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
		
		arrSum[i] = GetRowSum(arr, i, cols);
	

}

void PrintSumArray(int arr[3], short rows)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << arr[i] << endl;

	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], arrSum[3];

	FillArrayWithRandomNums(arr, 3, 3);

	cout << "The following is a 3x3 random matrix:\n";
	PrintArray(arr, 3, 3);

	FillArrayWithSum(arr, arrSum, 3, 3);

	cout << "\nThe the following are the sum of each row in the matrix:\n";
	PrintSumArray(arrSum, 3);

	return 0;
}