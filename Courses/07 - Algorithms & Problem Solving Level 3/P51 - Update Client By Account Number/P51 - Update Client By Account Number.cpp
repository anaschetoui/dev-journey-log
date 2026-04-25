/*
Problem #51: 

Write a program to Update client by AccountNumber :

Enter Account Number: A150

Account Number   : A150
PIN code         : 4444
Name             : Mohammed Abu-Hadhoud
Phone            : 091991919
Account Balance   : 4000

Are you sure you want update this client (Y/N): Y

Enter PIN Code : 4444
Enter Name     : Omar Hamed
Enter Phone    : 8177172656
Enter Balance  : 4000

Client Updated Successfully.

*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

string ReadAccountNumber()
{
	string AccountNumber = "";

	cout << "Enter Account Number: ";
	cin >> AccountNumber;

	return AccountNumber;

}

struct stClient {

	string AccountNumber = "";
	string PINCode = "";
	string Name = "";
	string Phone = "";
	double Balance = 0.00;
};

void PrintClientCard(stClient Client)
{
	cout << "Account Number: " << Client.AccountNumber << endl;
	cout << "PIN Code      : " << Client.PINCode << "\n";
	cout << "Name          : " << Client.Name << "\n";
	cout << "Phone         : " << Client.Phone << "\n";
	cout << "Balance       : " << Client.Balance << endl;
	 
}

stClient ReadCleint()
{
	stClient Client;

	cout << "Enter PIN Code : ";
	cin >> Client.PINCode;

	cout << "Enter Name     : ";
	cin >> Client.Name;

	cout << "Enter Phone    : ";
	cin >> Client.Balance;

	cout << "Enter Balance  : ";
	cin >> Client.Balance;

	return Client;
}

const string Filename = "Clients.txt";

vector <string> vSplit(string Str, string Seperator)
{
	vector <string> vString;
	string sWord = "";
	size_t pos = 0;

	while ((pos = Str.find(Seperator)) != string::npos)
	{
		sWord = 
	}
}

int main() {
	
	stClient Client;
	Client.AccountNumber = "AN1234";
	Client.PINCode = "1234";
	Client.Name = "Anas";
	Client.Phone = "156627565";
	Client.Balance = 837678;

	PrintClientCard(Client);
	
	return 0;
}
