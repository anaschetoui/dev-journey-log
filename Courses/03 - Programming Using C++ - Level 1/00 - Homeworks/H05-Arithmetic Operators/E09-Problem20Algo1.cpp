// Problem #20 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	float A;

	cout << "Enter A: ";
	cin >> A;

	const double PI = 3.14159265359;

	float Area = (PI * A * A) / 4;

	cout << "Circle Area = " << Area;


	return 0;
}