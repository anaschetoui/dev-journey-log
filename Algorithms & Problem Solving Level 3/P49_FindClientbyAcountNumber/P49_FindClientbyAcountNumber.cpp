#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cctype>
using namespace std;

string ReadAccountNumber(string Message = "Enter the account number: ")
{
	string AccountNumber = "";
	cout << Message;
	cin >> AccountNumber;

	return AccountNumber;
}

struct stClient {
	string AccountNumber;
	string PIN_Code;
	string Name;
	string Phone;
	double Balance = 0.00;
};

vector <string> SplitString(string Line, string Seperator = "#//#")
{
	string word = "";
	vector <string> vString;
	short pos;
	
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

stClient ClientToData(vector <string> vString)
{
	stClient Client;
	Client.AccountNumber = vString.at(0);
	Client.PIN_Code = vString.at(1);
	Client.Name = vString.at(2);
	Client.Phone = vString.at(3);
	Client.Balance = stod(vString.at(4));
	return Client;
}

vector <stClient> LoadFileData(string Filename)
{
	fstream MyFile;
	vector <stClient> vData;
	MyFile.open(Filename, ios::in);

	if (MyFile.is_open())
	{
		string Line = "";
		stClient Client;
		while (getline(MyFile, Line))
		{
			Client = ClientToData(SplitString(Line));
			vData.push_back(Client);

		}
		MyFile.close();
	}

	return vData;

}

char ToUpperChar(char x)
{
	return (isupper(x)||islower(x)) ? toupper(x) : toupper(x);
}


string ToUpperAllletters(string S)
{
	for (short i = 0; i < S.length(); i++)
	{
		S[i] = ToUpperChar(S[i]);
	}

	return S;
}

void PrintClient(vector <stClient> vClient,string AccountNumber)
{
	bool isFound = false;
	for(stClient Client:vClient)
	{
		if (ToUpperAllletters(Client.AccountNumber) == ToUpperAllletters(AccountNumber))
		{
			
			cout << "\nThe following are the client ["<<AccountNumber<<"] details: \n";
			cout << "\n|----------------------|-------------------------|";
			cout << "\n|    Account Number    | " << setw(24) << left << Client.AccountNumber << "|";
			cout << "\n|       PIN Code       | " << setw(24) << left << Client.PIN_Code << "|";
			cout << "\n|      Full Name       | " << setw(24) << left << Client.Name << "|";
			cout << "\n|     Phone Number     | " << setw(24) << left << Client.Phone << "|";
			cout << "\n|    Account Balance   | " << setw(24) << left << Client.Balance << "|";
			cout << "\n|----------------------|-------------------------|";
			cout << endl;
			isFound = true;
			break;
		}
	}
	if (!isFound)
	{
		cout << "\nAccount with (" << AccountNumber << ") Not found!\n";
	}

}

int main()
{
	vector <stClient> client = LoadFileData("MyFile.txt");
	string AccountNumber = ReadAccountNumber();

	PrintClient(client, AccountNumber);
	

	return 0;
}