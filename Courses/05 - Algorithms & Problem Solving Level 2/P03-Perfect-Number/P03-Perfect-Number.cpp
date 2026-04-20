// P03-Perfect-Number

#include <iostream>
using namespace std;

enum  enPerfectNumber { NotPerfect = 0, Perfect = 2 };

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

enPerfectNumber CheckPerfectNumber(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if(Number % i == 0)
		{
			Sum += i;
		}
		if (Sum > Number) // No need to continue
			break;
	}

	return Sum == Number ? enPerfectNumber::Perfect : enPerfectNumber::NotPerfect;
}

void PrintPerfectNumber(int Number)
{
	CheckPerfectNumber(Number) == enPerfectNumber::Perfect ? cout << '\n' << Number << " is a Perfect Number.\n":
		cout <<'\n' << Number << " isn't Perfect Number.\n";
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");

	PrintPerfectNumber(Number);


	return 0;
}
