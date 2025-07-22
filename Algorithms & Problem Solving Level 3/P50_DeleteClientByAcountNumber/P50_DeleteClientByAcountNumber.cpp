#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
 
const string ClientsFileName = "MyFile.txt";

string ReadAccountNumber(string Message = "Enter The Account Number: ")
{
	string AccountNumber;
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
	bool MarkForDelete = false;
};

string RecodToLine(stClients Client, string Seperator = "#//#")
{
	return Client.AccountNumber + Seperator + Client.PIN_Code + Seperator +
		Client.Name + Seperator + Client.Phone + Seperator + to_string(Client.Balance);
}

vector <string> vSplit(string Line, string Seperator = "#//#")
{
	short Pos = 0;
	vector <string> vString;

	string word = "";

	while ((Pos = Line.find(Seperator))!=string::npos)
	{
		word = Line.substr(0, Pos);

		if (!word.empty())
		{
			vString.push_back(word);
		}
		Line.erase(0, Pos + Seperator.length());
	}

	if (!Line.empty())
	{
		vString.push_back(Line);
	}
	return vString;

}

bool FindClientByAccountNumber(string AcountNumber, vector <stClients>vClients, stClients& Client)
{
	for (stClients &strClient : vClients)
	{
		if(AcountNumber==strClient.AccountNumber)
		{
			Client = strClient;
			return true;
		}
	}
	return false;
}

void MarkClientForDelete(string AccountNumber, vector<stClients> &vClients)
{
    for (stClients &Client : vClients)
    {
        if (Client.AccountNumber == AccountNumber)
        {
            Client.MarkForDelete = true;
            break;
        }
    }
}

stClients RecordToClient(vector <string> vSplit)
{
	stClients client;
	client.AccountNumber = vSplit[0];
	client.PIN_Code = vSplit[1];
	client.Name = vSplit[2];
	client.Phone = vSplit[3];
	client.Balance = stod(vSplit[4]);
	return client;
}

vector <stClients> LoadClientFromFile(string Filename)
{
	vector <stClients>vClients;
	fstream MyFile;
	
	MyFile.open(Filename, ios::in); //read mode only

	if (MyFile.is_open())
	{
		stClients Client;
		string Line;
		while (getline(MyFile, Line))
		{
			Client = RecordToClient(vSplit(Line));
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}

vector <stClients> vSaveClientToFile( vector <stClients> vClients, string Filename = ClientsFileName)
{
	fstream MyFile;

	MyFile.open(Filename, ios::out);//overwrite
	string Line;
	if(MyFile.is_open())
	{
		for (stClients client : vClients)
		{
			if (client.MarkForDelete == false)
			{
				Line = RecodToLine(client);
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
	return vClients;
}

void PrintClient(stClients client)
{
	cout << "\nAccount Number : " << client.AccountNumber;
	cout << "\nPIN Code       : " << client.PIN_Code;
	cout << "\nFull Name      : " << client.Name;
	cout << "\nPhone Number   : " << client.Phone;
	cout << "\nBalance        : " << client.Balance;
}

void DeleteClientFromFile(string AccountNumber, vector <stClients> &vClients)
{
    stClients client;
    char YESNO = 'N';
    if (FindClientByAccountNumber(AccountNumber, vClients, client))
    {
        PrintClient(client);

        cout << "\n\nAre you sure do you want to delete this client (Y/N): ";
        cin >> YESNO;
        if (YESNO == 'Y' || YESNO == 'y')
        {
            MarkClientForDelete(AccountNumber, vClients);
            vSaveClientToFile(vClients);

            vClients = LoadClientFromFile(ClientsFileName);
            cout << "\nFile deleted Succeffuly.\n";
        }
    }
    else
    {
        cout << "\nThe Client [" << AccountNumber << "] Not Founded.\n";
    }
}

int main()
{
	vector <stClients> vClients = LoadClientFromFile(ClientsFileName);

	string AccNum = ReadAccountNumber();

	DeleteClientFromFile(AccNum, vClients);
	

	return 0;
}