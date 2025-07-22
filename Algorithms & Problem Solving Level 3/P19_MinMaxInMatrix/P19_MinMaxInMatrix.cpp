#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matrix[i][j] = RandomNumbers(1, 99);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			printf("%02d\t",Matrix[i][j]);
		}
		cout << endl;
	}
}

int MinNumberInMatrix(int Matrix[3][3], short rows, short cols)
{
	short Min = Matrix[0][0];
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (Matrix[i][j] < Min)
			{
				Min = Matrix[i][j];
			}
		}
	}

	return Min;
}

int MaxNumberInMatrix(int Matrix[3][3], short rows, short cols)
{
	short Max = Matrix[0][0];
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (Matrix[i][j] > Max)
			{
				Max = Matrix[i][j];
			}
		}
	}

	return Max;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrix(Matrix, 3, 3);
	cout << "Matrix\n";
	PrintMatrix(Matrix, 3, 3);
	printf("\nMin Number in Matrix is: %02d\n", MinNumberInMatrix(Matrix, 3, 3));
	printf("Max Number in Matrix is: %02d\n", MaxNumberInMatrix(Matrix, 3, 3));

	return 0;
}