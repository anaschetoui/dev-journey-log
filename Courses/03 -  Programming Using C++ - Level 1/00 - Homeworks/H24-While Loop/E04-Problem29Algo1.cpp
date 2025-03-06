// Problem #29 -> Algorithms & Problem Solving Level 1

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
	int Sum = 0, Number = ReadPositiveNumber();


	int i = 1;

	while (i <= Number)
	{
		Sum += i;
		i += 2;
	}
	cout << Sum;

	return 0;
}