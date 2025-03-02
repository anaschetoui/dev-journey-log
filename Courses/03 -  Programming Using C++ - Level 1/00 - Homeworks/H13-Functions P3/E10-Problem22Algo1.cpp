// Problem 22 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaInscribedIsosclesTriangle(float a,float b)
{
	const double PI = 3.14159265358979323846;

	float Area = Area = (PI * (pow(b, 2)) / 4) * (2 * a - b) / (2 * a + b);

	return Area;
}

int main()
{

	float a, b;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << "\nCircle Area = " << CircleAreaInscribedIsosclesTriangle(a,b);

	return 0;
}