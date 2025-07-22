#include <iostream>
#include <cstdio>
using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matrix[i][j] = RandomNumbers(1, 3);
		}
	}
}

void PrintMatrixWithRandomNumbers(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			printf("%02d\t", Matrix[i][j]);
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
			Sum += Matrix[i][j];
		}
	}

	return Sum;
}

string IsMatricesEqual(int Matrix1Sum, int Matrix2Sum)
{
	return (Matrix1Sum == Matrix2Sum) ?  "Yes, Metrics are equal." : "No, Metrics are NOT equal.";
	
}

int main()
{
	srand((unsigned)time(NULL));
	int Matrix[3][3],Matrix1Sum = 0,Matrix2Sum = 0;

	FillMatrixWithRandomNumbers(Matrix, 3, 3);
	cout << "Matrix1\n";
	PrintMatrixWithRandomNumbers(Matrix, 3, 3);
	Matrix1Sum = SumOfMatrix(Matrix, 3, 3);

	FillMatrixWithRandomNumbers(Matrix, 3, 3);
	cout << "\nMatrix2\n";
	PrintMatrixWithRandomNumbers(Matrix, 3, 3);
	Matrix2Sum = SumOfMatrix(Matrix, 3, 3);

	cout << "\n" << IsMatricesEqual(Matrix1Sum, Matrix2Sum) << endl;;
	return 0; 
}