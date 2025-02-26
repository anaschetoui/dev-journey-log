/*
Write program to do the following:

Please enter the first Number A: 9
Please enter the first Number B: 2

9 + 2 = 11
9 - 2 = 7
9 * 2 = 18
9 / 2 = 4
9 % 2 = 1

*/

#include <iostream>
using namespace std;

int main()
{
	unsigned A;
	unsigned B;

	cout << "Please enter the first Number A: ";
	cin >> A;
	cout << "Please enter the first Number B: ";
	cin >> B;

	cout << A << " + " << B << " = " << A + B << "\n";
	cout << A << " - " << B << " = " << A - B << "\n";
	cout << A << " * " << B << " = " << A * B << "\n";
	cout << A << " / " << B << " = " << A / B << "\n";
	cout << A << " % " << B << " = " << A % B << "\n";

	return 0;
}