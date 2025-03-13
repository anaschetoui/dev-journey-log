// P10-Print-Digits-In-Order


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

void PrintDigitsInOrder(int Number)
{
	for (short i = 0; i <= 9; i++)
	{
		int frequency = CountDigitFrequency(Number, i);
		
		for (int j = 0; j < frequency; j++)
		{
			cout << i << endl;
		}
	}
}


int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");
	PrintDigitsInOrder(Number); // if Number large the results will be wrong cause we have int not long long

	return 0;
}
