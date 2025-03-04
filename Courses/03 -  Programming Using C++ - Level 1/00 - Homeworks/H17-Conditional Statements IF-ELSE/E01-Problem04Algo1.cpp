//Problem 04 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int Age;
	bool HasDrvierLicense;

	cout << "Enter Age: ";
	cin >> Age;

	cout << "Do You Have Driver License (Answer 1/0): ";
	cin >> HasDrvierLicense;

	if (HasDrvierLicense == true && Age >= 21)
	{
		cout << "\nHired\n";
	}
	else
	{
		cout << "\nRejected\n";
	}


	return 0;

}