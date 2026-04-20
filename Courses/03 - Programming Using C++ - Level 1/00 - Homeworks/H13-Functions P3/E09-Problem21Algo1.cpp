// Problem 21 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaInscribedIsosclesTriangle(float L)
{
	const double PI = 3.14159265358979323846;

	float Area = (pow(L,2)) / (4 * PI);

	return Area;
}

int main()
{

	float L;

	cout << "Enter L: ";
	cin >> L;

	cout << "\nCircle Area = " << CircleAreaInscribedIsosclesTriangle(L);

	return 0;
}