//Problem 49 -> Algorithms & Problem Solving Level 1
//Don't use loop, only print wrong password and end the program.
#include <iostream>

using namespace std;

int main()
{
	int PIN;
	int Balance = 7500;

	cout << "Enter PIN code: ";
	cin >> PIN;

	if (PIN == 1234)
	{
		cout << "\nYour Balance is: " << Balance;
	}
	else
	{
		cout << "\nWrong PIN\n";
	}


	return 0;
}