//Problem 18 --> Algorithms & Problem Solving Level 1
// after finding the results use ceil and print the final results

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float r;

	cout << "Enter r: ";
	cin >> r;

	const double PI = 3.14159265358979323846;

	float Area = PI * (pow(r, 2));

	cout << "Circle Area before ciel: " << Area;

	Area = ceil(Area);

	cout << "\nCircle Area after ciel: " << Area;

	


	return 0;
}