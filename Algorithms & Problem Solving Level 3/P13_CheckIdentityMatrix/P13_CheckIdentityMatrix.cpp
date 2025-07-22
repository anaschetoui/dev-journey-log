#include <iostream>
#include <ctime>
using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrix(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matrix[i][j] = RandomNumbers(0, 1);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

bool IsMatrixIdentity(int Matrix[3][3],short row,short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (i == j)
			{
				if (Matrix[i][j] != 1)
					return 0;
			}
			else if (Matrix[i][j] != 0)
				return false;
		}
	
	}
	return true;


}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];
	
	//int MatrixTest[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

	FillMatrix(Matrix, 3, 3);
	cout << "Matrix1\n";
	PrintMatrix(Matrix, 3, 3);

	(IsMatrixIdentity(Matrix, 3, 3)) ? cout << "YES: MATRIX IS IDENTITY" : cout << "NO: MATRIX ISN'T IDENTITY";

	return 0;
}