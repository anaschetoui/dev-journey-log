/*
Problem #16:

Write a program to check if the matrix is Sparce or not.

Matrix:						|		     Matrix:								   
 10		 0		12			|			  0		 0		 1
 20		15		 1			|			  0		 0		12 	
  0		 0		 9			|			  0		 0		 9
							|
NO : it's NOT Sparse.		|			YES : it's is Sparse.

 

*/

#include <iostream>
#include <iomanip>
using namespace std;

void PrintMatrix(int Matrix[3][3], short rows, short cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << " " << setw(2) << right << Matrix[i][j] << "    ";
		}
		cout << '\n';
	}
}

short CounterInMatrix(int Matrix[3][3], short NumberToCheck, short rows, short cols)
{
	short Counter = 0;

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			if (Matrix[i][j] == NumberToCheck) Counter++;
	}

	return Counter;
}

bool IsSparseMatrix(int Matrix[3][3], short rows, short cols)
{
	short ZerosCount = CounterInMatrix(Matrix, 0, rows, cols);

	return (ZerosCount > ((rows * cols) / 2));
}

int main()

{

	int Matrix[3][3] = { 0,0,12,

						 0,0,1,

						 0,0,9 };


	cout << "Matrix:\n";

	PrintMatrix(Matrix, 3, 3);

	cout << endl;

	IsSparseMatrix(Matrix, 3, 3) ? cout << "\nYES : it's is Sparse.\n" : cout << "\nNO : it's NOT Sparse.\n";

	return 0;

}