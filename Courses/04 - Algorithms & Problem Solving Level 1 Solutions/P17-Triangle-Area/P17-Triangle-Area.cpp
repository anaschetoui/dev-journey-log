// P17-Triangle-Area

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

float CalculateTriangleArea(float a, float h)
{
	
	return(a / 2) * h;
}

void PrintArea(float Area)
{
	cout << "Triangle Area = " << Area;
}

int main()
{
	float a = ReadPositiveNumber("Enter a: "), h = ReadPositiveNumber("Enter h: ");

	PrintArea(CalculateTriangleArea(a, h));

	return 0;
}

