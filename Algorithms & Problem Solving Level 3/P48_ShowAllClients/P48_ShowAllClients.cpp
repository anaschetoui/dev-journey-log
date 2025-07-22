#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct stClients {
	string AcountNumber;
	string PIN_Code;
	string ClientName;
	string Phone;
	double Balance = 00.00;
};

vector <string> SplitString(string Line , string Seperator="#//#")
{
	vector <string>vSplit;
	short pos = 0;
	string word = "";
	while ((pos = Line.find(Seperator)) != string::npos)
	{
		word = Line.substr(0, pos);
		if (word != "")
		{
			vSplit.push_back(word);
		}
		Line.erase(0, pos + Seperator.length());
	}

	if (Line != "")
	{
		vSplit.push_back(Line);
	}

	return vSplit;
}

stClients RecordToStruct(vector <string> vSplit)
{
	stClients client;

	client.AcountNumber = vSplit.at(0);
	client.PIN_Code = vSplit.at(1);
	client.ClientName = vSplit.at(2);
	client.Phone = vSplit.at(3);
	client.Balance = stod(vSplit.at(4));

	return client;
}

vector <stClients> LoadFileData(string Filename)
{
	vector <stClients> vClient;
	fstream MyFile;
	MyFile.open(Filename, ios::in);

	if (MyFile.is_open())
	{
		string Line = "";
		stClients Client;

		while (getline(MyFile, Line))
		{
			Client = RecordToStruct(SplitString(Line));
			vClient.push_back(Client);
		}

		MyFile.close();
	}
	return vClient;
}

void Header()
{
	cout << "--------------------------------------------------"
		<< "--------------------------------------------------\n";

   cout << "|" << left << setw(20) << "Acount Number"
		<< "|" << left << setw(12) << "PIN Code"
		<< "|" << left << setw(30) << "Client Name"
		<< "|" << left << setw(20) << "Phone"
		<< "|" << left << setw(12) << "Balance"
		<< "|\n";					    
   cout << "--------------------------------------------------"
	    << "--------------------------------------------------\n";
}

void PrintRecord(stClients client)
{
   cout << "|" << left << setw(20) << client.AcountNumber
		<< "|" << left << setw(12) << client.PIN_Code
		<< "|" << left << setw(30) << client.ClientName
		<< "|" << left << setw(20) << client.Phone
		<< "|" << left << setw(12) << client.Balance
		<< "|\n";
}

void PrintAllRecord(vector <stClients> vClient)
{
	cout << "\t\t\t\t\tClient(s) [" << vClient.size() << "]\n";
	Header();

	for (stClients client : vClient)
	{
		PrintRecord(client);
		
	}
	cout << "--------------------------------------------------"
		<< "--------------------------------------------------\n";
}

int main()
{
	vector <stClients> Client = LoadFileData("MyFile.txt");
	PrintAllRecord(Client);
	return 0;
}