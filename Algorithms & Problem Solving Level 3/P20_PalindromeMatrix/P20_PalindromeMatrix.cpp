#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;
 
//P20 ---> Write a program to check it the matrix is **Palindrome or not**


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
			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

bool IsPalindromeMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols / 2; j++)
		{
			if (Matrix[i][j] != Matrix[i][cols - 1 - j])
			{
				return false;
			}
		}
		

	}
	return true;
}

int main()
{
	srand((unsigned)time(NULL));
	int PaliMatrix[3][3] = { {1,2,1},{5,5,5},{7,3,7} };

	int Matrix[3][3];

	FillMatrix(Matrix, 3, 3);
	cout << "Matrix\n";
	PrintMatrix(PaliMatrix, 3, 3);

	(IsPalindromeMatrix(PaliMatrix, 3, 3)) ? cout << "\nYES, IT IS PALINDROME MATRIX.\n" : cout << "\nNO, IT NOT PALINDROME MATRIX.\n";

	return 0;
}

