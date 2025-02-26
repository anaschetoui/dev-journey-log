// Problem #10 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	float Mark1, Mark2, Mark3;

	cout << "Enter Mark 1: ";
	cin >> Mark1;

	cout << "Enter Mark 2: ";
	cin >> Mark2;

	cout << "Enter Mark 3: ";
	cin >> Mark3;

	float  Average = (Mark1 + Mark2 + Mark3) / 3;

	cout << "Average is: " << Average;

	return 0;
}