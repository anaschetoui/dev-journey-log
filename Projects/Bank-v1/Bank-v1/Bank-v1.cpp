#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const string ClientsFile = "ClientsFile.txt";

enum enOption{
	OptionOne = 1, OptionTwo = 2, OptionTree = 3, OptionFour = 4, OptionFive = 5, OptionSix = 6
};

struct stClients
{
	string AccountNumber;
	string PIN_Code;
	string Name;
	string Phone;
	double Balance = 0.00;
	bool MarkAtClient = false;
};

void HeaderShowClientScreen()
{
	cout << "--------------------------------------------------------------------------------------------------\n";
	cout << "|" << left << setw(16) << "Acount Number"
		<< "|" << left << setw(10) << "PIN Code"
		<< "|" << left << setw(30) << "Name"
		<< "|" << left << setw(20) << "Phone"
		<< "|" << left << setw(16) << "Balance"
		<< "|" << left << endl;
	cout << "--------------------------------------------------------------------------------------------------\n";
}

void ShowClientListScreen(stClients Client)
{
   cout << "|" << left << setw(16) << Client.AccountNumber
		<< "|" << left << setw(10) << Client.PIN_Code
		<< "|" << left << setw(30) << Client.Name
		<< "|" << left << setw(20) << Client.Phone
		<< "|" << left << setw(16) << Client.Balance
		<< "|" << left << endl;
	
}

void MainMenuScreen()
{
	cout << "=====================================\n";
	cout << "\t  Main Menu Screen\n";
	cout << "=====================================\n";
	cout << "\t[1] Show Client List\n";
	cout << "\t[2] AddNewClient\n";
	cout << "\t[3] Delete Client\n";
	cout << "\t[4] Update Client Info\n";
	cout << "\t[5] Find Client\n";
	cout << "\t[6] Exit\n";
	cout << "=====================================\n";
	cout << "Choose what you want to do [1-6]: ";
	
}

vector <string>SplitLine(string Line, string Seperator = "#//#")
{
	vector <string> vSplit;
	string word = "";
	short pos = 0;

	while ((pos = Line.find(Seperator)) != string::npos)
	{
		
		word = Line.substr(0, pos);
		if (!word.empty())
		{
			vSplit.push_back(word);
		}
		Line.erase(0, pos + Seperator.length());
	}
	if (!Line.empty())
	{
		vSplit.push_back(Line);
	}
	return vSplit;
}

stClients RecordToLine(vector <string>vSplitString)
{
	stClients Client;

	Client.AccountNumber = vSplitString[0];
	Client.PIN_Code = vSplitString[1];
	Client.Name = vSplitString[2];
	Client.Phone = vSplitString[3];
	Client.Balance = stod(vSplitString[4]);

	return Client;
}

vector <stClients> LoadDataFromFile(string  Filename = ClientsFile)
{
	vector <stClients> vClients;
	fstream MyFile;
	MyFile.open(Filename, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		stClients client;

		while (getline(MyFile, Line))
		{
			client = RecordToLine(SplitLine(Line));
			vClients.push_back(client);
		}
		MyFile.close();
	}
	return vClients;
}

void PrintClientList()
{
	vector <stClients> vClients = LoadDataFromFile();
	system("cls");
	cout << "\t\t\t\t\tClient[" << vClients.size() << "] \n";
	HeaderShowClientScreen();
	for (stClients client : vClients)
	{
		ShowClientListScreen(client);

	}
	cout << "--------------------------------------------------------------------------------------------------\n";
}

stClients ReadNewClient(string AccountNumber,string Message = "Enter the details of the new client you want to add: ")
{
	stClients NewClient;
	cout << "Enter the Account Number: ";
	getline(cin >> ws, NewClient.AccountNumber);
	cout << "Enter the PIN Code: ";
	getline(cin, NewClient.PIN_Code);
	cout << "Enter Full Name: ";
	getline(cin, NewClient.Name);
	cout << "Enter Phone Number: ";
	getline(cin, NewClient.Phone);
	cout << "Enter Account Balance: ";
	cin >> NewClient.Balance;

	return NewClient;
}

vector <stClients> SaveNewClientToFile(string Filename=ClientsFile)
{
	
}

void PrintAddingNewAccount()
{
	char Answer = 'n';
	
	do{
		system("CLS");
		cout << "----------------------------\n";
		cout << "\tAdd New Client\n";
		cout << "----------------------------\n";
		stClients NewClients = ReadNewClient("4545");
		

		cout << "\nClient Added Successfully, do you want to add more (Y/N): ";
		cin >> Answer;
	} while (Answer == 'y' || Answer == 'Y');


}

void StartMainMenu()
{
    int Option=0;
    do
    {
        MainMenuScreen();
        cin >> Option;
        switch (Option)
        {
        case enOption::OptionOne:
            PrintClientList();
            system("pause");
            break;
        case enOption::OptionTwo:
			PrintAddingNewAccount();
            system("pause");
            break;
        case enOption::OptionTree:
            // DeleteClient();
            system("pause");
            break;
        case enOption::OptionFour:
            // UpdateClientInfo();
            system("pause");
            break;
        case enOption::OptionFive:
            // FindClient();
            system("pause");
            break;
        case enOption::OptionSix:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid option. Please try again.\n";
            system("pause");
            break;
        }
        system("cls");
    } while (Option != enOption::OptionSix);
}
int main()
{
	StartMainMenu();

	return 0;
}