// Problem 20 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaInscribedIsosclesTriangle(float A)
{
	const double PI = 3.14159265358979323846;

	float Area = (PI * pow(A, 2)) / 4;

	return Area;
}

int main()
{
	
	float A;

	cout << "Enter A: ";
	cin >> A;

	cout << "\nCircle Area = " << CircleAreaInscribedIsosclesTriangle(A);

	return 0;
}