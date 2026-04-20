//Problem 22 --> Algorithms & Problem Solving Level 1
// after finding the results use floor and print the final results

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	const double PI = 3.14159265358979323846;

	float Area = (PI * (pow(b, 2) / 4) * (2 * a - b) / (2 * a + b));

	cout << "Circle Area before ciel: " << Area;

	Area = floor(Area);

	cout << "\nCircle Area after ciel: " << Area;

	return 0;

}