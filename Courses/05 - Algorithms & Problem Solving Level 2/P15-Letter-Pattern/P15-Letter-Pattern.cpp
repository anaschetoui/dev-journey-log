// P15-Letter-Pattern

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 1 || Number > 26);

	return Number;
}


void PrintLetterPattern(int Number)
{
	for (int i = 65; i <= 64+Number; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number (1-26): ");

	PrintLetterPattern(Number);

	return 0;
}