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
			Matrix[i][j] = RandomNumbers(1, 9);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			printf("%02d\t", Matrix[i][j]);
		}
		cout << endl;
	}
}

bool IsNumberInMatrix(int Matrix1[3][3],short Number, short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (Matrix1[i][j] == Number)
			{
				return true;
			}

		}

	}
	return false;
}

void PrintIntersectedNumbersInMatrices(int Matrix1[3][3], int Matrix2[3][3], short rows, short cols)
{
	
	
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			int Number = Matrix1[i][j];
			if(IsNumberInMatrix(Matrix2, Number, rows, cols))
				printf("%02d\t", Matrix1[i][j]);
				
		}

	}

}
	



int main()
{
	srand((unsigned)time(NULL));

	int Matrix2[3][3], Matrix1[3][3];
	//int Matrix3[3][3] = { {1,5,3}, {70,22,66},{88,50,20} }, Matrix4[3][3] = { {1,5,3}, {70,22,16},{18,59,20} };

	FillMatrix(Matrix1, 3, 3);
	cout << "Matrix1\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrix(Matrix2, 3, 3);
	cout << "\nMatrix2\n";
	PrintMatrix(Matrix2, 3, 3);

	cout << "The Intersected Numbers In Matrix are: \n";
	PrintIntersectedNumbersInMatrices(Matrix1, Matrix2, 3, 3);


	return 0;

}