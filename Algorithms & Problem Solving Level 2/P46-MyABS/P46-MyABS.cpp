// P46-MyABS

#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	int Number = 0;
	cout << "Enter a Number: ";
	cin >> Number;

	return Number;
}

float MyAbs(float Number)
{
	return Number < 0 ? Number * -1 : Number;
}

int main()
{
	float Number = ReadNumber();

	cout << "My abs  = " << MyAbs(Number);
	cout << "\nC++ abs = " << abs(Number);

	return 0;
}