// P49-MyCeil

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

int MyCeil(float Number)
{
	int x = int(Number);
	if (Number > x)
		return x + 1;
	else
		return x;
}

int main()
{
	float Number = ReadNumber();

	cout << "\nMy Ceil  = " << MyCeil(Number);
	cout << "\nC++ Ceil = " << ceil(Number);
	return 0;
}