// Problem 03 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <string>
using namespace std;

void SwapNumber(int& Num1, int& Num2)
{
	int Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;

}


int main()
{
	int Num1, Num2;

	cout << "Enter Num1: ";
	cin >> Num1;

	cout << "Enter Num2: ";
	cin >> Num2;

	SwapNumber(Num1, Num2);

	cout << Num1 << endl;
	cout << Num2 << endl;

	return 0;
}