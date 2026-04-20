//Problem 22 --> Algorithms & Problem Solving Level 1
// after finding the results use round and print the final results

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c;

	cout << "Enter a:";
	cin >> a;

	cout << "Enter b:";
	cin >> b;

	cout << "Enter c:";
	cin >> c;

	const double PI = 3.14159265358979323846;

	float p = (a + b + c) / 2;

	float T = (a * b * c) / (4 * (sqrt(p * (p - a) * (p - b) * (p - c))));

	T *= T;

	float Area = PI * T;

	cout << "Cricle Area before round: " << Area;

	Area = round(Area);

	cout << "\nCricle Area after round: " << Area;


	return 0;
}