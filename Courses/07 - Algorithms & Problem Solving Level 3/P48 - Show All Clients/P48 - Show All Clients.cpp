/*
Problem #48:

Write a program to read clients file and show them on the screen as follows:

							 Client List (3) Client(s).
__________________________________________________________________________________________________________
| Account Number  | PIN Code  | Client Name                            | Phone               | Balance  
__________________________________________________________________________________________________________
| A150           | 1234      | Mohammed Abu-Hadhoud                   | 093938838           | 9000
| A151           | 1234      | Ali Maher                              | 089398838           | 5000
| A152           | 1234      | Fadi Jamil                             | 075998838           | 8000
__________________________________________________________________________________________________________	

*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void Header()
{
	cout << "_____________________________________________________________________________________________\n";
	cout << "| " << left << setw(16) << "Account Number"
		<< "| " << setw(10) << "PIN Code"
		<< "| " << setw(26) << "Client Name"
		<< "| " << setw(20) << "Phone"
		<< "| " << setw(10) << "Balance"
		<< "| ";
	cout << "\n---------------------------------------------------------------------------------------------\n";
}

struct stClient
{
	string AccountNumber = "",
		PINCode = "",
		ClientName = "",
		Phone = "";
	double AccountBalance = 0.00;
};

vector <string> vSplit(string str, string Separator)
{
	vector <string> vString;
	string Word = "";
	size_t pos = 0;

	while ((pos = str.find(Separator)) != string::npos)
	{
		Word = str.substr(0, pos);

		if (!Word.empty())
			vString.push_back(Word);

		str.erase(0, pos + Separator.length());
	}
	if (!str.empty())
		vString.push_back(str);

	return vString;

}

stClient LineToRecord(string Line)
{
	stClient Client;
	vector <string> vString = vSplit(Line, "#//#");

	Client.AccountNumber = vString.at(0);
	Client.PINCode = vString.at(1);
	Client.ClientName = vString.at(2);
	Client.Phone = vString.at(3);
	Client.AccountBalance = stod(vString.at(4));

	return Client;
}

void ShowClient(stClient Client)
{
	cout << "| " << left << setw(16) << Client.AccountNumber
		<< "| " << setw(10) << Client.PINCode
		<< "| " << setw(26) << Client.ClientName
		<< "| " << setw(20) << Client.Phone
		<< "| " << setw(10) << Client.AccountBalance
		<< "| " << endl;
}

vector <stClient> LoadDataToVector(string FileName)
{
	fstream MyFile;
	vector <stClient> vClient;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string Line = "";
		while (getline(MyFile, Line))
			vClient.push_back(LineToRecord(Line));

		MyFile.close();
	}

	return vClient;
}

void PrintAllClients()
{
	vector <stClient> vClient = LoadDataToVector("CLients.txt");

	cout << "\t\t\t\tClient List (" << vClient.size() << ") Client(s).\n";
	Header();
	

	for (const stClient& C : vClient)
		ShowClient(C);

	cout << "_____________________________________________________________________________________________\n";
}


int main()
{

	PrintAllClients();
	system("PAUSE >0");
	return 0;
}