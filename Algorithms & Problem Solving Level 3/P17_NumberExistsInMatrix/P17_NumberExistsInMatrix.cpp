#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int RandomNum(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

short ReadNumber(string Message)
{
	short Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a Number: ";
			cin >> Number;
		}
		
	} while (Number < 1 || Number > 99);
	return Number;
}

void FillMatrix(int Matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matrix[i][j] = RandomNum(1, 99);
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

bool CheckNumberInMatrix(int Matrix[3][3], short rows, short cols)
{
	short Number = ReadNumber("\nEnter The Number you want in the Matrix (1-99): ");
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if(Number == Matrix[i][j])
			return true;
		}
	}
	return false;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrix(Matrix, 3, 3);
	cout << "Matrix\n";
	PrintMatrix(Matrix, 3, 3);

	(CheckNumberInMatrix(Matrix, 3, 3)) ? cout << "\nYES, IT IS IN THE MATRIX.\n" : cout << "\nNO, IT IS NOT IN THE MATRIX.\n";

	return 0;
}