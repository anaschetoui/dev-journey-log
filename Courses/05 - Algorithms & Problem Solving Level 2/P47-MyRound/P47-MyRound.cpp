// P47-MyRound

#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	float Number = 0;
	cout << "Enter a Number: ";
	cin >> Number;

	return Number;
}

int MyRound(float Number)
{
	return (Number >= 0) ? int(Number + 0.5) : int(Number - 0.5);
}

int main()
{
	float Number = ReadNumber();

	cout << "\nMy Round  = " << MyRound(Number);
	cout << "\nC++ Round = " << round(Number);
	return 0;
}