// Problem #19 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	float D;

	cout << "Enter D: ";
	cin >> D;

	const double PI = 3.14159265359;

	float Area = (PI * D * D) / 4;

	cout << "Circle Area = " << Area;


	return 0;
}