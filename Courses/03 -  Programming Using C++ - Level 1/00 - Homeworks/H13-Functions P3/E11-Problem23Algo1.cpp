// Problem 23 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

float CircleAreadescribedIsosclesTriangle(float a, float b,float c)
{
	const double PI = 3.14159265358979323846;

	const float p = (a + b + c) / 2;

	float T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

	T *= T;

	float Area = PI * T;

	return Area;
}

int main()
{

	float a, b, c;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter c: ";
	cin >> c;

	cout << "Circle Area = " << CircleAreadescribedIsosclesTriangle(a, b, c);
	

	return 0;
}