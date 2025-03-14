// P13-Number-Pattern

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}


void PrintNumberPattern(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");

	PrintNumberPattern(Number);

	return 0;
}