#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdio>

using namespace std;

int RandomNum(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrix(int arr[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			arr[i][j] = RandomNum(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(8) << left << arr[i][j];
		}
		cout << endl;
	}
}
void  MatrixToArray(int arr[3][3],short row,short cols,int OneArr[3])
{
	for (short j = 0; j < cols; j++)
	{
		OneArr[j]=0;
		for (short i = 0; i  < cols; i++)
		{
			OneArr[j] += arr[i][j];
		}
	}


}

void PrintMatrixtoArray(int OneArr[3], int  cols)
{
		for (short j = 0; j < cols; j++)
		{
			printf("Cols %d sum = %d\n", j + 1,OneArr[j]);
		}
		
		cout << endl;
	
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	int OneArr[3];

	FillMatrix(arr, 3, 3);
	PrintMatrix(arr, 3, 3);

	MatrixToArray(arr, 3, 3, OneArr);
	PrintMatrixtoArray(OneArr, 3);

	return 0;
}
