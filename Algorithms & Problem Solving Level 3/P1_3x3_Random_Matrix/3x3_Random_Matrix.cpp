#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int RandomNum(int from, int to)
{
	return rand() % (from - to + 1) + from;
}


void FillMatrixWithRandomNum(int arr[3][3],short Rows,short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Rows; j++)
		{
			arr[i][j] = RandomNum(1, 100);
		}
	}
}

void PrintMatrixWithRandomNum(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Rows; j++)
		{
			cout << left<<setw(8) << arr[i][j];
		}
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];

	FillMatrixWithRandomNum(arr, 3, 3);
	cout << "This following is a 3x3 random Matrix:\n";
	PrintMatrixWithRandomNum(arr, 3, 3);

	return 0;
}