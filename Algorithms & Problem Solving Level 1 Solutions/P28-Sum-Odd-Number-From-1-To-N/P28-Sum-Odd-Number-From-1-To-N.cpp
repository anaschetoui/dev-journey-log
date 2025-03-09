// P28-Sum-Odd-Number-From-1-To-N

#include <iostream>
using namespace std;

enum enOddEven { Odd = 1, Even = 2 };

int ReadNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

enOddEven CheckOddEven(int N)
{
	return N % 2 == 0 ? enOddEven::Even : enOddEven::Odd;
}

int SumOddNumberFrom1ToN(int N)
{
	int Sum = 0;

	for (int i = 1; i <= N; i++)
	{
		if(CheckOddEven(enOddEven(i)) == enOddEven::Odd) 
		{
			Sum += i;
		}
	}

	return Sum;
}

int main()
{
	int N = ReadNumber("Enter a Number: ");

	cout << SumOddNumberFrom1ToN(N);

	return 0;
}