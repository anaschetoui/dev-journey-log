// P48-MyFloor

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

int MyFloor(float Number)
{
	int x = int(Number);
	return (Number < 0 && Number != x) ? x - 1 : x;
}

int main()
{
	float Number = ReadNumber();

	cout << "\nMy Floor  = " << MyFloor(Number);
	cout << "\nC++ Floor = " << floor(Number);
	return 0;
}