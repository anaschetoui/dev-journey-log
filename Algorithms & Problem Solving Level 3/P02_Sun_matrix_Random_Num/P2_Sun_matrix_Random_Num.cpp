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

void PrintMatrixArr(int arr[3][3],short Row,short Cols)
{
	cout << "The Following is a 3x3 random matrix:\n";
	
	for (short i = 0; i < Row; i++)
	{

		for (short j = 0; j < Row; j++)
		{

			cout << setw(8) << left << arr[i][j];
			
		}
		cout << endl;
	}

}

void PrintRandomMatrixSum(int arr[3][3], short Row, short Cols)
{
	int Sum = 0;
	cout << "\nThe following are the sum of each row in the random Matrix:\n";
	for (short i = 0; i < Row; i++)
	{
		printf("Row %d Sum = ", i+1);
		for (short j = 0; j < Row; j++)
		{
			Sum += arr[i][j];
		}
		cout << Sum<<"\n";
		Sum = 0;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixArr(arr,3,3);
	PrintMatrixArr(arr,3,3);
	PrintRandomMatrixSum(arr, 3, 3);
	return 0;
}