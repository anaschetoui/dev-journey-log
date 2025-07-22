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
			Matrix[i][j] = RandomNumbers(1, 10);
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

bool AreMatricesTypical(int Matrix1[3][3],int Matrix2[3][3], short row, short cols)
{

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if(Matrix1[i][j] != Matrix2[i][j])
				return false;
		}
		
	}
	return true;
}

int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3],Matrix2[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "Matrix1\n";
	PrintMatrixWithRandomNumbers(Matrix1, 3, 3);

	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\nMatrix2\n";
	PrintMatrixWithRandomNumbers(Matrix2, 3, 3);

	
	(AreMatricesTypical(Matrix1, Matrix2, 3, 3)) ? cout << "\nYes, The Matrices Are Typicaly Equal.\n" 
		: cout << "\nNo, The Matrices Are NOT Typicaly Equal.\n";


	
	return 0;
}