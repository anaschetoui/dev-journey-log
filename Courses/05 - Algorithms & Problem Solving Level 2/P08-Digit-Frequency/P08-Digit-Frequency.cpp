// P08-Digit-Frequency

#include <iostream>
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


int CountDigitFrequency(int Number, short Digit)
{
	int Reminder = 0;
	short Counter = 0;

	while (Number > 0)
	{
		Reminder = Number % 10;
		Number /= 10;

		if (Reminder == Digit)
			Counter++;
	}
	return Counter;
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");
	short digit = ReadPositiveNumber("Enter Digit: ");

	cout << "\nDigit " << digit << " Frequency is " << CountDigitFrequency(Number, digit) << " Time(s)\n";


	return 0;
}
