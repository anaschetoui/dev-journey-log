// Problem #9 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	unsigned Num1, Num2, Num3;

	cout << "Enter Num1: ";
	cin >> Num1;

	cout << "Enter Num2: ";
	cin >> Num2;

	cout << "Enter Num3: ";
	cin >> Num3;

	unsigned sum = Num1 + Num2 + Num3;

	cout << Num1 << " + " << Num2 << " + " << Num3 << " = " << sum;

	return 0;
}