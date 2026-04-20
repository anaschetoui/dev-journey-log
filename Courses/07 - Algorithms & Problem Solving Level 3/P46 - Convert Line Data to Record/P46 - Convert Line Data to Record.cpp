/*
Problem #46: 
Write a program to convert line data to record and print it

Line Record is:
A150#//#1234#//#Mohammed Abu-Hadhoud#//#0788888888#//#5270.000000

The following is the extracted client record:

Accout Number  : A150
Pin Code       : 1234
Name	       : Mohammed Abu-Hadhoud
Phone		   : 079999
Account Balance: 5270

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient
{
	string AccountNumber = "";
	string PINcode = "";
	string FullName = "";
	string Phone = "";
	double AccountBalance = 0;
};

vector <string> vSplitString(string str0, string Separator)
{
	vector <string> vString;
	string Word = "";
	size_t pos = 0;

	while ((pos = str0.find(Separator)) != string::npos)
	{
		Word = str0.substr(0, pos);
		if (!Word.empty())
			vString.push_back(Word);
		
		str0.erase(0,pos + Separator.length());
	}
	if (!str0.empty()) vString.push_back(str0);

	return vString;	
}

stClient LineToRecord(string Line,string Separator)
{
	stClient Client;
	vector <string> vClient = vSplitString(Line, Separator);

	Client.AccountNumber = vClient.at(0);
	Client.PINcode = vClient.at(1);
	Client.FullName = vClient.at(2);
	Client.Phone = vClient.at(3);
	Client.AccountBalance = stod(vClient.at(4));

	return Client;

}

void PrintClientRecord(stClient Client)
{
	cout << "Account Number  : " << Client.AccountNumber << endl;
	cout << "PIN Code        : " << Client.PINcode << endl;
	cout << "Full Name       : " << Client.FullName << endl;
	cout << "Phone           : " << Client.Phone << endl;
	cout << "Account Balance : " << Client.AccountBalance ;

}

int main()
{
	stClient Client = LineToRecord("A150#//#1234#//#Mohammed Abu-Hadhoud#//#0788888888#//#5270.000000", "#//#");

	PrintClientRecord(Client);

	system("PAUSE>0");

		return 0;
}

