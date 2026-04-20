#include <iostream>
using namespace std;


int main()
{
	int Num1, Num2;
	char Op;

	cout << "Enter Num1: ";
	cin >> Num1;

	cout << "Enter Num2: ";
	cin >> Num2;

	cout << "Enter Operation Type (+,-,*,/): ";
	cin >> Op;


	switch (Op)
	{
	case '+':
		cout << Num1 + Num2;
		break;
	case '-':
		cout << Num1 - Num2;
		break;
	case '*':
		cout << Num1 * Num2;
		break;
	case '/':
		cout << Num1 / Num2;
		break;
	default:
		cout << "Invalid Operation Type";
	}

	return 0;
}