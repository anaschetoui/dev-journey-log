//Problem 21 --> Algorithms & Problem Solving Level 1
// after finding the results use floor and print the final results

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float L;

	cout << "Enter L: ";
	cin >> L;

	const double PI = 3.14159265358979323846;

	float Area = (pow(L, 2)) /( 4 * PI);

	cout << "Circle Area before ciel: " << Area;

	Area = floor(Area);

	cout << "\nCircle Area after ciel: " << Area;

	return 0;

}