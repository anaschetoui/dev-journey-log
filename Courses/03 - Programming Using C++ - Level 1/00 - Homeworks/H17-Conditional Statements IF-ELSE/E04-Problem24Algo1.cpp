//Problem 24 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int Age;

	cout << "Enter Your Age: ";
	cin >> Age;

	if (Age >= 18 && Age <= 45)
	{
		cout << "\nValid Age\n";
	}
	else
	{
		cout << "\nInvalid Age\n";
	}

	return 0;
}