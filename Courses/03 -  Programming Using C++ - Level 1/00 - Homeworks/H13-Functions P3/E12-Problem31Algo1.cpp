// Problem 31 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

void Power234()
{
	int Number;
	cout << "Enter Number: ";
	cin >> Number;

	int Power2 = pow(Number, 2);
	int Power3 = pow(Number, 3);
	int Power4 = pow(Number, 4);
	cout << Power2 << '\n';
	cout << Power3 << '\n';
	cout << Power4;
}

int main()
{
	Power234();
	return 0;
}