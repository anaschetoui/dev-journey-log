// Problem #50 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int PINCode = 0, Balance = 7500;
	cout << "Enter PIN: ";
	cin >> PINCode;

	while (PINCode != 1234)
	{
		system("CLS");
		cout << "Wrong PIN\n";
		cout << "Enter PIN: ";
		cin >> PINCode;
	}

	system("CLS");
	cout << "Your Balance is " << Balance;

	return 0;
}