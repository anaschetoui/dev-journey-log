/*
/*
Problem #50:

Write a program to Delete client by AccountNumber :

Enter AccountNumber: A150					          |
													  |
The following are the client details:				  |
													  |  Enter Account Number: B33
Account Number : A150								  |
Pin Code       : 1234								  |  Client with Account Number (B33) Not Found!
Name	       : Mohammed Abu-Hadhoud				  |
Phone	       : 093938838							  |
Account Balance: 9000								  |

Are you sure you want to delete this client (Y/N): y

Client Deleted Successfully.

*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string ReadString(string Message)
{
	string str0;

	cout << Message;
	cin >> str0;

	return str0;
}

struct stClient
{
	string AccountNumber = "";
	string PIN = "";
	string Phone = "";
	string Name = "";
	double Balance = 0.0;
	bool MarkToDelete = false;
};

const string Filename = "Clients.txt";

void ShowClient(stClient Client)
{
	cout << "Account Number  : " << Client.AccountNumber << endl;
	cout << "PIN Code        : " << Client.PIN << endl;
	cout << "Client Name     : " << Client.Name << endl;
	cout << "Phone Number    : " << Client.Phone << endl;
	cout << "Account Balance : " << Client.Balance << endl;
}

vector <string> vSplitString(string str0, string Separator)
{
	string word = "";
	size_t pos = 0;

	vector <string> vStr;

	while ((pos = str0.find(Separator)) != string::npos)
	{
		word = str0.substr(0, pos);

		if (!word.empty())
			vStr.push_back(word);

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
	Client.PIN = vStr.at(1);
	Client.Name = vStr.at(2);
	Client.Phone = vStr.at(3);
	Client.Balance = stod(vStr.at(4));

	return Client;
}

string ConvertRecordToLine(stClient Client, string Separator="#//#")
{

	return Client.AccountNumber + Separator +
		Client.PIN + Separator +
		Client.Name + Separator +
		Client.Phone + Separator +
		to_string(Client.Balance);
}

vector <stClient> LoadDataFromFile(string Filename)
{
	vector <stClient> vClient;
	fstream MyFile;

	MyFile.open(Filename, ios::in);

	if (MyFile.is_open())
	{
		string Line = "";
		while (getline(MyFile, Line))
			vClient.push_back(LoadVectorToData(vSplitString(Line, "#//#")));

		MyFile.close();
		
	}

	return vClient;
}

bool FindClientByAccountNumber(string AccountNumber, const vector <stClient>&vClient, stClient &Client)
{
	for (const stClient& C : vClient)
	{
		if (AccountNumber == C.AccountNumber)
		{
			Client = C;
			return true;
		}
	}

		return false;
}

bool MarkClientToDelete(string AccountNumber, vector <stClient> &vClient)
{
	for (stClient& C : vClient)
	{
		if (AccountNumber == C.AccountNumber)
		{
			C.MarkToDelete=true;
			return true;
		}
	}

	return false;
}

void SaveFileToFile(string Filename, vector <stClient> vClient)
{
	fstream MyFile;

	MyFile.open(Filename, ios::out);

	if (MyFile.is_open())
	{
		
		for(stClient &C:vClient)
		{
			if (C.MarkToDelete == false)
			{
				MyFile << ConvertRecordToLine(C) << endl;
			}
		}

		MyFile.close();
	}
}

void DeleteClientByAccountNumber(string AccountNumber, vector <stClient> &vClient)
{
	char Answer = 'N';
	stClient Client;

	if (FindClientByAccountNumber(AccountNumber, vClient, Client))
	{
		ShowClient(Client);

		cout << "Are you sure you want to delete this client (Y/N): ";
		cin >> Answer;
		if (toupper(Answer) == toupper('Y'))
		{
			MarkClientToDelete(AccountNumber, vClient);
			SaveFileToFile(Filename, vClient);


			cout << "Client Deleted Successfully.\n";
		}
	}

	else
		cout << "Client with Account Number [" << AccountNumber << "] Not Found!\n";


}

int main()
{
	vector <stClient> vClient = LoadDataFromFile(Filename);

	DeleteClientByAccountNumber(ReadString("Enter The Account Number: "), vClient);

	system("PAUSE > 0");
	return 0;
}