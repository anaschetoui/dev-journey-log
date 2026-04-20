// P09-All-Digits-Frequency

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

void CountAllDigitsFrequency(int Number)
{

	for (short i = 0; i <= 9; i++)
	{
		short FrequencyCount = CountDigitFrequency(Number, i);
		if(FrequencyCount!=0)
		cout <<"Digit " << i << " Frequency is " << FrequencyCount << " Time(s)\n";
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");
	
	CountAllDigitsFrequency(Number);

	return 0;
}
