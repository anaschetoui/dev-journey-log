// P21-Crircle-Area-Along-the-Circumference

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

float CrircleAreaByCircumference(float L)
{
	const double PI = 3.14159265358979323846;
	float Area = pow(L, 2) / (PI*4);

	return Area;
}

void PrintArea(float Area)
{
	cout << "Circle Area = " << Area;
}

int main()
{
	float L = ReadPositiveNumber("Enter L: ");

	PrintArea(CrircleAreaByCircumference(L));

	return 0;
}

