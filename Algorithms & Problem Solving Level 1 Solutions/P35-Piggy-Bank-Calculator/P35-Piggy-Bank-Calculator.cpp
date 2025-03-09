// P35-Piggy-Bank-Calculator

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

struct stPiggyBank
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBank ReadPiggyBank()
{
	stPiggyBank PiggyBank;

	PiggyBank.Pennies = ReadPositiveNumber("Enter How many  Pennies: ");
	PiggyBank.Nickels = ReadPositiveNumber("Enter How many  Nickles: ");
	PiggyBank.Dimes   = ReadPositiveNumber("Enter How many    Dimes: ");
	PiggyBank.Quarters= ReadPositiveNumber("Enter How many Quarters: ");
	PiggyBank.Dollars = ReadPositiveNumber("Enter How many  Dollars: ");

	return PiggyBank;
}

int CalculateTotalPennies(stPiggyBank PiggyBank)
{
	int TotalPennies = PiggyBank.Pennies * 1 + PiggyBank.Nickels * 5 + PiggyBank.Dimes * 10
		+ PiggyBank.Quarters * 25 + PiggyBank.Dollars * 100;

	return TotalPennies;

}

int main()
{
	stPiggyBank PiggyBank = ReadPiggyBank();

	int TotalPennies = CalculateTotalPennies(PiggyBank);
	float TotalDollars = float(TotalPennies) / 100;

	cout << "Total Piennies = " << TotalPennies << '\n';
	cout << "Total Dollars  = " << TotalDollars << endl;

	return 0;
}