/*
Problem #08:

Write a program to fill two 3x3 matrix with random numbers and them, then multiply them into a 3rd matrix and print it.

Matrix1:
08		07		07	
01		06		10	
10		01		09	

Matrix2:
04		05		06				
04		05		08				
06		08		01				

Results:
32		35		42
04		30		80
60		08		09

*/


#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrix(int arr[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			arr[i][j] = RandomNumbers(1, 10);
	}
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf(" %-2d     ",  arr[i][j]);
		}
		cout << endl;
	}
}

void MultiplyMatrics(int arr1[3][3], int arr2[3][3], int Multiplyarr[3][3], short rows, short cols)
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Multiplyarr[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], arr2[3][3], arrResults[3][3];

	FillMatrix(arr, 3, 3);
	cout << "Matrix1: \n";
	PrintMatrix(arr, 3, 3);

	FillMatrix(arr2, 3, 3);
	cout << "\nMatrix2: \n";
	PrintMatrix(arr2, 3, 3);

	MultiplyMatrics(arr, arr2, arrResults, 3, 3);
	cout << "\nResults: \n";
	PrintMatrix(arrResults, 3, 3);

	return 0;
}