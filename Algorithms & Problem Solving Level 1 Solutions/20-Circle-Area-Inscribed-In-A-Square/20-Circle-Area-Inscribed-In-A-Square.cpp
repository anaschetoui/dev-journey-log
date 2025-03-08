// 20-Circle-Area-Inscribed-In-A-Square

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

float CircleAreaInscribedInASquare(float A)
{
	const double PI = 3.14159265358979323846;
	float Area = (PI * (pow(A, 2))) / 4;

	return Area;
}

void PrintArea(float Area)
{
	cout << "Circle Area = " << Area;
}

int main()
{
	float A = ReadPositiveNumber("Enter A: ");

	PrintArea(CircleAreaInscribedInASquare(A));

	return 0;
}

