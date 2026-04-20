// Problem #35 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int Penny;
	int Nickle;
	int Dime;
	int Quarter;
	int Dollar;

	cout << "Enter Penny: ";
	cin >> Penny;
	cout << "Enter Nickel: ";
	cin >> Nickle;
	cout << "Enter Dime: ";
	cin >> Dime;
	cout << "Enter Quarter: ";
	cin >> Quarter;
	cout << "Enter Dollar: ";
	cin >> Dollar;

	float TotalPennies = Penny * 1 + Nickle * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
	float TotalDollars = TotalPennies / 100;

	cout << TotalPennies << " Pennies\n";
	cout << TotalDollars << " Dollars\n";



	return 0;
}