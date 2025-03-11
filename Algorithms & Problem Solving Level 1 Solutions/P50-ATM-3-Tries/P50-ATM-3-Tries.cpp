// P50-ATM-3-Tries

// P49-ATM-PIN

#include <iostream>
#include <string>
using namespace std;

string ReadPinCode()
{
	string PIN = "";

	do
	{
		cout << "Enter Your PIN Code: ";
		cin >> PIN;
	} while (stoi(PIN) <= 0);

	return PIN;
}


bool Login()
{
	string PINCode = "";
	int Counter = 0;
	do
	{
		system("CLS");
		PINCode = ReadPinCode();

		Counter++;

		system("COLOR 4F");
		if (Counter >= 3)
		{
			return 0;
		}

	} while (!(PINCode == "1234"));

	return 1;
}

int main()
{

	if (Login())
	{
		system("CLS");
		cout << "\nYour Balance is " << 7500 << endl;
		system("COLOR 2F");
	}
	else
	{
		system("CLS");
		system("Color 4F");
		cout << '\a';
		cout << "||===========================||\n";
		cout << "||      Card is locked!      ||\n";
		cout << "||===========================||\n";
	}

	return 0;
}