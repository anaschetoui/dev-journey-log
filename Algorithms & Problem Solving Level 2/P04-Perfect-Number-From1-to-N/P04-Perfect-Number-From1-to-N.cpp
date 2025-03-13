// P04-Perfect-Number-From1-to-N

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
		if (Number % i == 0)
		{
			Sum += i;
		}
		if (Sum > Number) // No need to continue
			break;
	}

	return Sum == Number ? enPerfectNumber::Perfect : enPerfectNumber::NotPerfect;
}

void PrintPerfectNumberFrom1toN(int Number)
{
	cout << "\nPerfect Numbers are: \n\n";
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPerfectNumber(i) == enPerfectNumber::Perfect)
			cout << i << endl;
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");

	PrintPerfectNumberFrom1toN(Number);


	return 0;
}
