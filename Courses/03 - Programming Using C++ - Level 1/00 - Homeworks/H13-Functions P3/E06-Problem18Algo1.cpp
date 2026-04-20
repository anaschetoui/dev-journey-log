// Problem 18 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaByR(float r)
{
	const double PI = 3.14159265358979323846;

	double Area = PI * (pow(r,2));

	return Area;
}

int main()
{
	float r;

	cout << "Enter r: ";
	cin >> r;

	cout << "Circle Area = " << CircleAreaByR(r);


	return 0;
}