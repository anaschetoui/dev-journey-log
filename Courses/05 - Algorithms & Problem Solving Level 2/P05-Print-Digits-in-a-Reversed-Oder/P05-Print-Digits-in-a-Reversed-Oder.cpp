// P05-Print-Digits-in-a-Reversed-Oder

#include <iostream>
#include <string>
using namespace std;

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


void PrintDigitsInReversed(int Number)
{
	int Digit=0;
	
	while (Number > 0)
	{
		Digit = Number % 10;
		Number /= 10;

		cout << Digit << endl;
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");

	PrintDigitsInReversed(Number);


	return 0;
}
