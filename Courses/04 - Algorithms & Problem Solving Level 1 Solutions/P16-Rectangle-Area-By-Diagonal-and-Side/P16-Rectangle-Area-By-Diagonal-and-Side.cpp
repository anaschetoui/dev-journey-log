// P16-Rectangle-Area-By-Diagonal-and-Side

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

float CalculeRectangleAreaByDiagonalAndSide(float a, float d)
{
	float Area = (a * sqrt(pow(d, 2) - pow(a, 2)));

	return Area;
}

void PrintArea(float Area)
{
	cout << "Rectangle Area = " << Area;
}

int main()
{
	float a = ReadPositiveNumber("Enter a: "), d = ReadPositiveNumber("Enter d: ");

	PrintArea(CalculeRectangleAreaByDiagonalAndSide(a, d));

	return 0;
}

