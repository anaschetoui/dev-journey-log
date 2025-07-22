#include <iostream>
#include <cstdio>
#include <iomanip>

int RandomNum(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrixWithrandomNum(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matrix[i][j] = RandomNum(1, 10);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{

			
				std::cout << std::setfill('0') << std::setw(2) << Matrix[i][j] << "\t";

		}
		
			std::cout << std::endl;
	}
}

void PrintRowMatrix(int Matrix[3][3], short row, short cols)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			
			if (i == 1)
				std::cout << std::setfill('0') << std::setw(2) << Matrix[i][j]<<"\t";
			
		}
		if (i == 1)
			std::cout<<std::endl;
	}
}

void PrintColsMatrix(int Matrix[3][3], short row, short cols)
{
	for (short j = 0; j < cols; j++)
	{
		for (short i = 0; i < cols; i++)
		{

			if (j == 1)
				std::cout << std::setfill('0') << std::setw(2) << Matrix[i][j] << "\t";

		}
		if (j == 1)
			std::cout << std::endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithrandomNum(Matrix, 3, 3);
	std::cout << "Matrix1\n";
	PrintMatrix(Matrix, 3, 3);
	std::cout << "\n\nMiddle row of Matrix is\n";
	PrintRowMatrix(Matrix, 3, 3);
	std::cout << "\n\nMiddle cols of Matrix is\n";
	PrintColsMatrix(Matrix, 3, 3);


	return 0;
}