/*Task 3: Simple Sum with Validation
Write a program that asks the user to enter two numbers, then prints their sum.
Use a specific function (like ReadNumber()) to ensure that both inputs are valid numbers before performing the addition
*/

#include <iostream>
#include <limits> // for --> cin.ignore(numeric_limits<streamsize>::max(), '\n');
#include <string>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Invalid Input! Enter a Valid Number: ";
		cin >> Number;
	}
	return Number;
}

int main()
{
	int Num1 = ReadNumber("Enter Number 1: "), Num2 = ReadNumber("Enter Number 2: ");

	cout << '\n' << Num1 << " + " << Num2 << " = " << Num1 + Num2;


	return 0;
}