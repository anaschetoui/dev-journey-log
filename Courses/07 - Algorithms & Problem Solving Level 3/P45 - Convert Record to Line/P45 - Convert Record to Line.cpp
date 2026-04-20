/*
Problem #45:

Write a program to read bank client data record and convert it to one line:

Please Enter Client Data:

Enter Account Number: A150
Enter PinCode: 1234
Enter Name: Mohammed Abu-Hadhoud
Enter Phone: 079939999
Enter AccountBalance: 5000

Client Record for Saving is:
A150#//#1234#//#Mchammed Abu-Hadhoud#//#079939999#//#5000.000000

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient
{
	string AccountNumber = "";
	string PINCode = "";
	string FullName = "";
	string Phone = "";
	double AccountBalance = 0.00;
};

string ReadString(string Message)
{
	string str0="";

	cout << Message;
	getline(cin >> ws, str0);
	
	return str0;
}

double ReadDoubleNumber(string Message)
{
	double Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

stClient ReadClientDate()
{
	stClient Client;

	Client.AccountNumber = ReadString("Enter Account Number: ");

	Client.PINCode = ReadString("Enter PIN Code (Only 4-digits): ");

	Client.FullName = ReadString("Enter Name: ");

	Client.Phone = ReadString("Enter Phone: ");

	Client.AccountBalance = ReadDoubleNumber("Enter Account Balance: ");

	return Client;

}

string ConvertRecordToLine(stClient Client, string Separator ="#//#")
{
	string Record = "";

	return Record += Client.AccountNumber + Separator +
		Client.PINCode + Separator +
		Client.FullName + Separator +
		Client.Phone + Separator +
		(to_string(Client.AccountBalance));
}

int main()
{
	stClient Client = ReadClientDate();

	

	string Record = ConvertRecordToLine(Client);

	system("CLS");

	cout << "Client Record for Saving is: \n";
	cout << Record;

	system("PAUSE >0");
	return 0;
}