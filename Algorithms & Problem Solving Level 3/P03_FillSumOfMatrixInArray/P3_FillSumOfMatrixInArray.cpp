#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdio>

using namespace std;
int RandomNum(int from, int to)
{
	return rand() % (from - to + 1) + from;
}

void FillMatrixArr(int arr[3][3], short Row, short Cols)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNum(1, 100);
		}
	}
}

void PrintMatrixArr(int arr[3][3], short Row, short Cols)
{
	cout << "The Following is a 3x3 random matrix:\n";

	for (short i = 0; i < Row; i++)
	{

		for (short j = 0; j < Cols; j++)
		{

			cout << setw(8) << left << arr[i][j];

		}
		cout << endl;
	}

}

void FillSumOfMatrinxInOneArray(int arr[3][3], int Row, int Cols, int OneArr[3])
{	
	int Sum = 0;
	for (short i = 0; i < Row; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum+= arr[i][j];
		}
		OneArr[i] = Sum;
		Sum = 0;
	}
	
}

void PrintSumOfmatrixInOneArray(int OneArr[3], int Row)
{
	cout << "\nThe the following are the sum of each row in the matrix\n";
	for (short i = 0; i < Row; i++)
	{
		printf("Row %d Sum = %d\n", i + 1, OneArr[i]);
	}
		
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	int OneArr[3];
	FillMatrixArr(arr, 3, 3);
	PrintMatrixArr(arr, 3, 3);

	FillSumOfMatrinxInOneArray(arr,3,3,OneArr);
	PrintSumOfmatrixInOneArray(OneArr,3);
										
	return 0;
}