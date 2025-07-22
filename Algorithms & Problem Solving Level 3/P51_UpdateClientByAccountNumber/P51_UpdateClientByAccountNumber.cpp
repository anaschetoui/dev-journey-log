#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const string ClientFile = "ClientFilename.txt";

string ReadAccountNumber(string Message = "Enter the account number: ")
{
	string AccountNumber = "";
	cout << Message;
	cin >> AccountNumber;

	return AccountNumber;
}

struct stClients
{
	string AccountNumber;
	string PIN_Code;
	string Name;
	string Phone;
	double Balance = 0.00;
	bool MarkToUpdate = false;
};

stClients ReadUpdatedClient()
{
	stClients Client;
	cout << "Enter Account Number: ";
	cin.ignore();
	getline(cin, Client.AccountNumber);
	cout << "Enter PIN Code: ";
	getline(cin, Client.PIN_Code);
	cout << "Enter Name: ";
	getline(cin, Client.Name);
	cout << "Enter Phone Number: ";
	getline(cin, Client.Phone);
	cout << "Enter Account Balance: ";
	cin >> Client.Balance;

	return Client;
}



string RecordToLine(stClients Client, string Seperator = "#//#")
{
	return Client.AccountNumber + Seperator + Client.PIN_Code + Seperator +
		Client.Name + Seperator + Client.Phone + Seperator + to_string(Client.Balance);
}

vector <string> vSplitString(string Line, string Seperator = "#//#")
{
	vector <string> vString;
	string word = "";
	short pos = 0;

	while ((pos = Line.find(Seperator)) != string::npos)
	{
		word = Line.substr(0, pos);

		if (!word.empty())
		{
			vString.push_back(word);
		}
		Line.erase(0, pos + Seperator.length());

	}
	if (!Line.empty())
	{
		vString.push_back(Line);
	}
	return vString;
}


stClients RecordToClients(vector<string> vString)
{
    stClients Clients;
    if (vString.size() >= 5)
	{
        Clients.AccountNumber = vString[0];
        Clients.PIN_Code = vString[1];
        Clients.Name = vString[2];
        Clients.Phone = vString[3];
        Clients.Balance = stod(vString[4]);
    }
   
    return Clients;
}

vector <stClients> LoadFileData(string Filename=ClientFile)
{
	vector <stClients> vClients;
	fstream MyFile;

	MyFile.open(Filename, ios::in); //read mode only

	if (MyFile.is_open())
	{
		string Line;
		stClients Client;

		while (getline(MyFile, Line))
		{
			Client = RecordToClients(vSplitString(Line));
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}


bool FindByAccountNumber(string AccountNumber, vector<stClients>vClients, stClients& Client)
{
	for (stClients strClients : vClients)
	{
		if (AccountNumber == strClients.AccountNumber)
		{
			Client = strClients;
			return true;
		}
	}
	return false;
}

void MarktoUpdate(string AccountNumber, vector <stClients>& vClients)
{
	for (stClients &Client : vClients)
	{
		if (Client.AccountNumber == AccountNumber)
		{
			Client.MarkToUpdate = true;
		}
	}
}

vector <stClients> SaveClientToFile(vector <stClients>& vClients, string Filename = ClientFile)
{

	fstream MyFile;
	stClients NewClient = ReadUpdatedClient();
	MyFile.open(Filename, ios::out); // overewrite
	if (MyFile.is_open())
	{
		string Line;
		for (stClients &Client : vClients)
		{
			if (Client.MarkToUpdate == true)
			{

				Line = RecordToLine(NewClient);
				MyFile << Line << endl;
			}
			else
			{
				Line = RecordToLine(Client);
				MyFile << Line << endl;
			}
		}

	}
	return vClients;

}


void PrintClient(stClients Client)
{
	cout << "\nAccount Number : " << Client.AccountNumber;
	cout << "\nPIN Code       : " << Client.PIN_Code;
	cout << "\nFull Name      : " << Client.Name;
	cout << "\nPhone Number   : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.Balance;	
}

void UpdateClient(vector <stClients> &vClients, string AccountNumber)
{
	stClients Client;
	char Answer = 'N';
	if (FindByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClient(Client);
		cout << "\nDo you want to update this Client (Y/N): ";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{
			MarktoUpdate(AccountNumber, vClients);
			system("cls");
			SaveClientToFile(vClients);
			vClients = LoadFileData();
			cout << "\nClient Updated Succussfully.\n";
		}
	}

	else
		cout << "The Account number is [" << AccountNumber << "] Not found.";
}

int main()
{
	vector <stClients> vClients=LoadFileData();
	string AccountNumber = ReadAccountNumber();

	UpdateClient(vClients, AccountNumber);

	return 0;
}