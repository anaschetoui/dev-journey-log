//Problem 16 --> Algorithms & Problem Solving Level 1
// use pow inside sqrt

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, d;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter d: ";
	cin >> d;

	int Area = a * sqrt(pow(d, 2) - pow(a, 2));

	cout << "Rectangle Area = " << Area;

	return 0;
}