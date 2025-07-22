#include <iostream>
#include <iomanip>

using namespace std;

void FillArrayWithOrderedNumbers(int arr[3][3], short row, short cols)
{
	short N = 0;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			N++;
			arr[i][j] = N;
		}
	}
}

void PrintArrayWithordredNumbers(int arr[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(7) << left << arr[i][j] << " ";
		}
		cout << "\n";
	}
}



void Transpose(int arr[3][3], short row, short cols,int TrasposeArr[3][3])
{
	int temp = 0;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			temp = arr[i][j];
			TrasposeArr [j][i] = arr[i][j];
		}
	}
}


int main()
{
	int arr[3][3], TransposeArr[3][3];


	FillArrayWithOrderedNumbers(arr, 3, 3);
	cout << "The following is a 3x3 ordered matrix:\n";
	PrintArrayWithordredNumbers(arr, 3, 3);
	
	cout << "\n";
	Transpose(arr,3,3,TransposeArr);
	cout << "The following is a 3x3 transposed matrix:\n";
	PrintArrayWithordredNumbers(TransposeArr, 3, 3);
	return 0;
}