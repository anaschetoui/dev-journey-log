// P50-MySqrt

#include <iostream>
#include <cmath>

float ReadNumber()
{
	float Number = 0;
	std::cout << "Enter a Number: ";
	std::cin >> Number;

	return Number;
}

float MySqrt(float Number)
{
	return pow(Number, 0.5);
}

int main()
{
	float Number = ReadNumber();

	std::cout << "My Sqrt = " << MySqrt(Number);
	std::cout << "\nMy Sqrt = " << sqrt(Number);
	return 0;
}