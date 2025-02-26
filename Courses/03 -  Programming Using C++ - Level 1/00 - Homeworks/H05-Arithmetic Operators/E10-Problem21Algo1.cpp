// Problem #21 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	float L;

	cout << "Enter L: ";
	cin >> L;

	const double PI = 3.14159265359;

	float Area = (L * L) / (PI * 4);

	cout << "Circle Area = " << Area;


	return 0;
}