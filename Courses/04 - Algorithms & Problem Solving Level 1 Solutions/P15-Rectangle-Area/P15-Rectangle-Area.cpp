// P15-Rectangle-Area

#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Num = 0;

	do
	{
		cout << Message;
		cin >> Num;
	} while (Num < 0);

	return Num;
}

float CalculateRectangleArea(float A, float B)
{
	return A * B;
}

void PrintRectangleArea(float Area)
{
	cout << "\nRectongle Area = " << Area << '\n';
}

int main()
{
	float A = ReadPositiveNumber("Enter A: "), B = ReadPositiveNumber("Enter B: ");

	PrintRectangleArea(CalculateRectangleArea(A, B));


	return 0;
}

