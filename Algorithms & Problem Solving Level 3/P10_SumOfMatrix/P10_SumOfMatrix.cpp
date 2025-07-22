#include <iostream>
#include <cstdio>
using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matrix[i][j] = RandomNumbers(1, 10);
		}
	}
}

void PrintArrayWithRandomNumbers(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			printf("%02d\t",Matrix[i][j]);
		}
		cout << endl;
	}
}

int SumOfMatrix(int Matrix[3][3], short row, short cols)
{
	short Sum = 0;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Sum+=Matrix[i][j];
		}
		
	}
	return Sum;
}

int main()
{
	srand((unsigned)time(NULL));
	int Matrix[3][3];
	FillArrayWithRandomNumbers(Matrix, 3, 3);
	cout << "Matrix1\n";
	PrintArrayWithRandomNumbers(Matrix, 3, 3);

	cout << "\nSum Of Matrix is: " << SumOfMatrix(Matrix, 3, 3) << endl;

	return 0;
}