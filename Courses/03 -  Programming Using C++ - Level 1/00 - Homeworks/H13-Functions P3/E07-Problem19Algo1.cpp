// Problem 19 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaThroughDiameter(float D)
{
	const double PI = 3.14159265358979323846;

	float Area = (PI * pow(D, 2)) / 4;

	return Area;

}

int main()
{
	
	float D;

	cout << "Enter D: ";
	cin >> D;

	cout << "\nCircle Area = " << CircleAreaThroughDiameter(D);


	return 0;
}