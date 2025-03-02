// Problem 05 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

float RegtangleAreaThroughDiagonal(float a, float d)
{
	float Area = a * sqrt(pow(d, 2) - pow(a, 2));

	return Area;
}

int main()
{
	float a, d;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter d: ";
	cin >> d;

	cout << "\nRectangle Area = " << RegtangleAreaThroughDiagonal(a, d);
		
	return 0;
}