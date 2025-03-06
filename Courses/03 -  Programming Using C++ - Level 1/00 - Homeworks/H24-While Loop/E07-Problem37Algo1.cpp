// Problem #37 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

void ReadNumberUntillMinus99()
{
	int Number = 0, Sum = 0;

	cout << "Enter Number: ";
	cin >> Number;

	while (Number != -99)
	{
		Sum += Number;

		cout << "Enter Number: ";
		cin >> Number;

	}

	cout << Sum;
}

int main()
{
	ReadNumberUntillMinus99();

	return 0;
}