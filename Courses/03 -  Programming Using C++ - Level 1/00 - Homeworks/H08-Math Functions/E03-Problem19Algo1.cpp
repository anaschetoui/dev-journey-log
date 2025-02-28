//Problem 19 --> Algorithms & Problem Solving Level 1
// after finding the results use ceil and print the final results

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float D;

	cout << "Enter D: ";
	cin >> D;

	const double PI = 3.14159265358979323846;

	float Area = (PI * (pow(D, 2))) / 4;

	cout << "Circle Area before ciel: " << Area;

	Area = ceil(Area);

	cout << "\nCircle Area after ciel: " << Area;

	return 0;

}