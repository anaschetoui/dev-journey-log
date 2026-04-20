// P06-SumOf-Digits


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


int SumOfDigits(int Number)
{
	int Sum = 0;

	while (Number > 0)
	{
		Sum += Number % 10;
		Number /= 10;
	}

	return Sum;
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: "),
		Sum = SumOfDigits(Number);

	cout << "Sum Of Digits = " << Sum << '\n';

	return 0;
}
