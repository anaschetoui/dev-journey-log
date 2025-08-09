#include <iostream>
#include <cstdio>
#include <iomanip>
#include <ctime>

int RandomNum(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrixWithRandomNum(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matrix[i][j] = RandomNum(1, 10);
		}
	}

}

void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3], short row, short cols, int Matrix3[3][3])
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matrix3[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}

void PrintMatrix(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			//printf("%02d\t", Matrix[i][j]);
			std::cout << std::setw(2) << std::setfill('0') << Matrix[i][j]<<"\t";
		}
		std::cout << std::endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];
	int Matrix2[3][3];
	int MatrixResults[3][3];

	FillMatrixWithRandomNum(Matrix1, 3, 3);
	std::cout << "Matrix1\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNum(Matrix2, 3, 3);
	std::cout << "\nMatrix2\n";
	PrintMatrix(Matrix2, 3, 3);

	MultiplyMatrix(Matrix1, Matrix2, 3, 3, MatrixResults);
	std::cout << "\nResults\n";
	PrintMatrix(MatrixResults, 3, 3);

		return 0;
}