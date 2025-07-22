#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>

using namespace std;

int RandomNum(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrix3x3(int arr[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			arr[i][j] = RandomNum(1, 100);
		}
	}
}
void PrintMatrix3x3(int arr[3][3], short row, short cols)
{
	cout << "The following is the Random Matrix arr\n";

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(8) << left << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

void ColsSum(int arr[3][3], short row, short cols)
{
	cout << "This following is cols Sum Of Matrix:\n";
	for (short j = 0; j < cols; j++)
	{
		int sum = 0;
		for(int i =0 ; i<row ; i++)
		{
			sum += arr[i][j];
		}
	
		printf("Cols %d Sum = %d\n", j + 1, sum);
	}
	
}



int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrix3x3(arr, 3, 3);
	PrintMatrix3x3(arr, 3, 3);
	cout << "\n\n";
	ColsSum(arr, 3, 3);



	return 0;

}