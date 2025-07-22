#include <iostream>
#include <cstdio>
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
			Matrix[i][j] = RandomNumbers(1, 9);
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

short ReadNumber(string Message)
{
	short N = 0;
	
	cout << Message;
	cin >> N;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "invalid number,Enter a Number: ";
		cin >> N;
	}
	return N;
}

void CountNumberInMatrix(int Matrix[3][3], short row, short cols)
{
	short N = 0;
	do{
		N = ReadNumber("Enter a number to count in Matrix (1-9): ");

	} while (N >= 10 || N<=0);


	short count = 0;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if(Matrix[i][j] == N)
			{
				count++;
			}
		}
	}
	printf("\nNumber %d count in Matrix %d time.\n", N, count);
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrix(Matrix, 3, 3);
	cout << "Matrix\n";
	PrintMatrix(Matrix, 3, 3);

	cout << endl;
	CountNumberInMatrix(Matrix, 3, 3);
	


	return 0;
}