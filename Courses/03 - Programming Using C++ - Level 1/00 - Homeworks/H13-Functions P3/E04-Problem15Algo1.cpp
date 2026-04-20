// Problem 15 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <string>
using namespace std;

float CalculateRectangleArea(float A, float B)
{
	float Area = A * B;

	return Area;


}


int main()
{
	float A, B;

	cout << "Enter A: ";
	cin >> A;

	cout << "Enter B: ";
	cin >> B;

	cout << "\nRectangle Area = " << CalculateRectangleArea(A, B);

	return 0;
}