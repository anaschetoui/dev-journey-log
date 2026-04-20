// P18-Circle-Area

#include <iostream>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Num = 0;

	do
	{
		cout << Message;
		cin >> Num;
	} while (Num < 0);

	return Num;
}

float CircleArea(float r)
{
	const double PI = 3.14159265358979323846;
	float Area = PI * (pow(r, 2));

	return Area;
}

void PrintArea(float Area)
{
	cout << "Circle Area = " << Area;
}

int main()
{
	float r = ReadPositiveNumber("Enter r: ");

	PrintArea(CircleArea(r));

	return 0;
}

