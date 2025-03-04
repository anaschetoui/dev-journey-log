//Problem 36 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int Num1, Num2;
	char OpType;

	cout << "Enter Number 1: ";
	cin >> Num1;

	cout << "Enter Number 2: ";
	cin >> Num2;

	cout << "Enter Operation Type (-,+,*,/): ";
	cin >> OpType;

	if (OpType == '+')
	{
		cout << '\n' << Num1 << '+' << Num2 << " = " << Num1 + Num2;

	}
	else if (OpType == '-')
	{
		cout << '\n' << Num1 << '-' << Num2 << " = " << Num1 - Num2;
	}
	else if (OpType == '*')
	{
		cout << '\n' << Num1 << '*' << Num2 << " = " << Num1 * Num2;
	}
	else if (OpType == '/')
	{
		cout << '\n' << Num1 << '/' << Num2 << " = " << Num1 / Num2;
	}
	else
	{
		cout << "\nInvalid Operation Type.";
	}



	return 0;
}