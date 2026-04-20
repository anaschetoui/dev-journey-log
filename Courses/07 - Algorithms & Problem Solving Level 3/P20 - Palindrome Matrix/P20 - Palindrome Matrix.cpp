/*
Problem #20:

Write a program to check it the matrix is Palindrome or not.

Matix1:										   Matrix2:
 1		2		1					 |		1		2		1
 5		5		5					 |		5		5		5
 7		3		7					 |		7		2		8
									 |		
Yes: Matrix is Palindrome.			 |	   No: Matrix is not Palindrome.

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
			cout << " " << setw(2) << right << Matrix[i][j] << "     ";
		}
		cout << endl;
	}
}

bool isPalindrome(int Matrix[3][3], short rows, short cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		int x = Matrix[i][0];
		for (size_t j = 0; j < cols/2; j++)
		{
			if (Matrix[i][cols-1-j] != Matrix[i][j])
				return false;
		}
		
	}
	return true;

}

int main()
{
	int Matrix[3][3] = { 1,2,1,5,5,5,7,3,7 };

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	isPalindrome(Matrix, 3, 3) ? cout << "\nYes: Matrix is Palindrome.\n" : cout << "No: Matrix is not Palindrome.\n";
	return 0;
}