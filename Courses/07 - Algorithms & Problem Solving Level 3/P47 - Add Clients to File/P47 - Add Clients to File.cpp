/*
Problem #47:

Write a program to ask you to enter clients and save them to file:

Adding New Client:

Enter Account Number : A150
Enter PIN Code       : 1234
Enter Name           : Mohammed Abu-Hadhoud
Enter Phone          : 09389838
Enter AccountBalance : 9000

Client Added Successfully, do you want to add more clients (Y/N): 

*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct stClient {
	string AccountNumber = "";
	string PINCode = "";
	string FullName = "";
	string Phone = "";
	double AccountBalance = 0;
};

string ReadString(string Message)
{
	string str0 = "";

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

string ConvertRecordToLine(stClient Client, string Separator = "#//#")
{
	string Record = "";

	return Record += Client.AccountNumber + Separator +
		Client.PINCode + Separator +
		Client.FullName + Separator +
		Client.Phone + Separator +
		(to_string(Client.AccountBalance));
}

void AddClientToFile()
{	
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::in | ios::app);

		if (!MyFile.is_open())
		{
			cout << "Error: Could not open file!" << endl;
			return;
		}

	char AddMore = 'N';

	do
	{
		system("CLS");

		cout << "Adding New Client:\n\n";
		stClient Client = ReadClientDate();
		string Line = ConvertRecordToLine(Client);
	

			MyFile << Line << endl;
			

		cout << "Client Added Successfully, do you want to add more clients (Y/N): ";
		cin >> AddMore;

	} while (AddMore == 'Y' || AddMore == 'y');
	
	MyFile.close();
}

int main()
{
	AddClientToFile();

	return 0;
}