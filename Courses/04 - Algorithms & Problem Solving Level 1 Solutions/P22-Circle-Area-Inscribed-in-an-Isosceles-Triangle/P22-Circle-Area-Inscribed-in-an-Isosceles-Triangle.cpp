// P22-Circle-Area-Inscribed-in-an-Isosceles-Triangle

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

float CircleAreaByIsoscelesTriangle(float A,float B)
{
	const double PI = 3.14159265358979323846;
	float Area = ((PI * pow(B, 2)) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

void PrintArea(float Area)
{
	cout << "Circle Area = " << Area;
}

int main()
{
	float A = ReadPositiveNumber("Enter A: "),B=ReadPositiveNumber("Enter B: ");

	PrintArea(CircleAreaByIsoscelesTriangle(A,B));

	return 0;
}

