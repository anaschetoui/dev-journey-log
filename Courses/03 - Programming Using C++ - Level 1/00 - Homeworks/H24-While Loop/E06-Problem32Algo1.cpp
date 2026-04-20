// Problem #32 -> Algorithms & Problem Solving Level 1

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
	int Num = ReadPositiveNumber(), M = ReadPositiveNumber(), Power = 1;



	int i = 1;

	while (i <= M)
	{
		Power *= Num;
		i++;
	}

	cout << Power;

	return 0;
}