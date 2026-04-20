/*
Problem #49:

Write a program to find client by AccountNumber and print it
to the screen:

Enter AccountNumber: A150					          |
													  |
The following are the client details:				  |
													  |  Enter Account Number: B33
Account Number : A150								  |
Pin Code       : 1234								  |  Client with Account Number (B33) Not Found!
Name	       : Mohammed Abu-Hadhoud				  |
Phone	       : 093938838							  |
Account Balance: 9000								  |

*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cctype>
#include <iomanip>
using namespace std;

const string Filename = "Clients.txt";

string ReadString(string Message)
{
	string str0 = "";

	cout << Message;
	cin >> str0;

	return str0;
}


struct stClient
{
	string AccountNumber = "",
		PINCode = "",
		Name = "",
		Phone = "";
	double Balance = 0.00;

};

void ShowClient(stClient client)
{
	cout << "Account Number   | " << client.AccountNumber << endl;
	cout << "PIN Code         | " << client.PINCode << endl;
	cout << "Client Name      | " << client.Name << endl;
	cout << "Phone Number     | " << client.Phone << endl;
	cout << "Balance          | " << client.Balance << endl;
} 

vector <string> vSplit(string str0, string Separator)
{
	vector <string> vStr;
	string Word = "";
	size_t pos = 0;

	while ((pos = str0.find(Separator))!=string::npos)
	{
		Word = str0.substr(0, pos);

		if (!Word.empty())
			vStr.push_back(Word);

		str0.erase(0, pos + Separator.length());
	}

	if (!str0.empty())
		vStr.push_back(str0);

	return vStr;

}


stClient LoadVectorToData(vector <string> vStr)
{
	stClient Client;

	Client.AccountNumber = vStr.at(0);
	Client.PINCode = vStr.at(1);
	Client.Name = vStr.at(2);
	Client.Phone = vStr.at(3);
	Client.Balance = stod(vStr.at(4));

	return Client;
}

vector <stClient> vFileToData(string Filename)
{
	fstream MyFile;
	vector <stClient> vClient;

	MyFile.open(Filename, ios::in);

	if (MyFile.is_open())
	{
		string Line = "";
		while (getline(MyFile, Line))
			vClient.push_back(LoadVectorToData(vSplit(Line,"#//#")));

		MyFile.close();
	}
	return vClient;

}

string UPPERCASE(string str0)
{
	for (size_t i = 0; i < str0.length(); i++)
		str0.at(i) = toupper(str0.at(i));

	return str0;
}

bool FindClientByAccountNumber(string AccountNumber, stClient &Client)
{
	vector <stClient> vClient = vFileToData(Filename);

	for (const stClient& C : vClient)
		if (UPPERCASE(AccountNumber) == UPPERCASE(C.AccountNumber))
		{
			Client = C;
		
			return true;
		}

	return false;

}

int main()
{
	stClient Client;

	string AccountNumber = ReadString("Enter The Account Number: ");

	if (FindClientByAccountNumber(AccountNumber, Client))
		ShowClient(Client);
	else
	{
		system("CLS");
		cout << "Client with Account Number (" << AccountNumber << ") not found!\n";
	}

	system("PAUSE>0");
	return 0;
}