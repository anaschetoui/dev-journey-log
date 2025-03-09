// P23-CircleArea-Described-Around-an-Arbitrary-Triangle

#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
	float Num = 0.000f;

	do{
		cout << Message;
		cin >> Num;
	} while (Num < 0);

	return Num;
}

float CircleAreaByArbitraryTriangle(float A, float B, float C)
{
	const double PI = 3.14159265358979323846;
	float p = (A + B + C) / 2;
	float T = (A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)));
	float Area = PI * pow(T, 2);

	return Area;
}

void PrintArea(float Area)
{
	cout << "\nCircle Area = " << Area << '\n';
}

int main()
{
	float A = ReadNumber("Enter A: "), B = ReadNumber("Enter B: "), C = ReadNumber("Enter C: ");

	PrintArea(CircleAreaByArbitraryTriangle(A, B, C));

	return 0;
}