// Problem #30 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
	int Number = 0;

	cout << "Enter a Number: ";
	cin >> Number;

	while (Number <= 0)
	{
		cout << "Invalid Number, Enter a Positive Number: ";
		cin >> Number;
	}

	return Number;
}

int main()
{
	int Fact = 1, Num = ReadPositiveNumber();

	int i = Num;

	while (i >= 1)
	{
		Fact *= i;
		i--;
	}

	cout << Fact;

	return 0;
}