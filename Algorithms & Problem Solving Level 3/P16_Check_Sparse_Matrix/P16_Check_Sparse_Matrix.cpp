#include <iostream>
using namespace std;

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

short CountNumberInMatrix(int Matrix[3][3], short Number, short rows, short cols)
{
	short count = 0; 
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if(Matrix[i][j] == Number)
			{
				count++;
			}
		}

	}
	return count;
}

bool IsSparceMatrix(int Matrix[3][3], short rows, short cols)
{
	short MatrixSize = rows * cols;
	
	return (CountNumberInMatrix(Matrix, 0, rows, cols) > (MatrixSize/2));
}


int main()
{
	int Matrix[3][3] = { {0,0,1},{0,0,5},{0,0,9} };
	
	cout << "Matrix\n";
	PrintMatrix(Matrix, 3, 3);
	(IsSparceMatrix(Matrix, 3, 3)) ? cout << "\nYes, The Matrix is Sparce.\n" : cout << "\nNo, The Matrix is not Sprace.\n";

	return 0;

}
