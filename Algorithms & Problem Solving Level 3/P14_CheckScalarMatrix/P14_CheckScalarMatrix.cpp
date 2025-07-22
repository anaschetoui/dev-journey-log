#include <iostream>
using namespace std;

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

bool IsScalarMatrix(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (i == j)
			{
				if(Matrix[i][j]!=Matrix[0][0] || Matrix[i][j]==0)
				return false;
			}
			else if (Matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int Matrix[3][3] = { {5,0,0},{0,5,0},{0,0,5} };

	cout << "Matrix\n";
	PrintMatrix(Matrix, 3, 3);
	(IsScalarMatrix(Matrix, 3, 3)) ? cout << "\nYES: MATRIX IS SCALAR.\n" : cout << "\nNO,MATRIX ISN'T SCALAR.\n";
	

	return 0;	

}