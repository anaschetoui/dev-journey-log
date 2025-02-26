// Problem #22 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	float a;
	float b;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	const double PI = 3.14159265359;

	float Area = Area = (PI * b * b / 4) * (2 * a - b) / (2 * a + b);

	cout << "Circle Area = " << Area;


	return 0;
}