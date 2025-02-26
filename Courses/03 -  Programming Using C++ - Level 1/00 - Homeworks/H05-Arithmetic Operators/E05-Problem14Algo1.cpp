// Problem #14 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int Num1;
	int Num2;

	cout << "Enter Number1: ";
	cin >> Num1;

	cout << "Enter Number2: ";
	cin >> Num2;

	int Temp;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;

	cout << Num1 << endl;
	cout << Num2 << endl;

	return 0;
}