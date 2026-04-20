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

	do
	{
		system("CLS");
		PINCode = ReadPinCode();

		system("COLOR 4F");


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
	return 0;
}