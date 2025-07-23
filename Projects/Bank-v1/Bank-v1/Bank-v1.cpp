#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

const std::string ClientsFile = "ClientsFile.txt";

enum enOption{
	OptionOne = 1, OptionTwo = 2, OptionTree = 3, OptionFour = 4, OptionFive = 5, OptionSix = 6
};

struct stClients
{
	std::string AccountNumber;
	std::string PIN_Code;
	std::string Name;
	std::string Phone;
	double Balance = 0.00;
	bool MarkAtClient = false;
};

void HeaderShowClientScreen()
{
	std::cout << "--------------------------------------------------------------------------------------------------\n";
	std::cout << "|" << std::left << std::setw(16) << "Acount Number"
		<< "|" << std::left << std::setw(10) << "PIN Code"
		<< "|" << std::left << std::setw(30) << "Name"
		<< "|" << std::left << std::setw(20) << "Phone"
		<< "|" << std::left << std::setw(16) << "Balance"
		<< "|" << std::left << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------------\n";
}

void ShowClientListScreen(stClients Client)
{
   std::cout << "|" << std::left << std::setw(16) << Client.AccountNumber
		<< "|" << std::left << std::setw(10) << Client.PIN_Code
		<< "|" << std::left << std::setw(30) << Client.Name
		<< "|" << std::left << std::setw(20) << Client.Phone
		<< "|" << std::left << std::setw(16) << Client.Balance
		<< "|" << std::left << std::endl;
						  
}

void MainMenuScreen()
{
	std::cout << "=====================================\n";
	std::cout << "\t  Main Menu Screen\n";
	std::cout << "=====================================\n";
	std::cout << "\t[1] Show Client List\n";
	std::cout << "\t[2] AddNewClient\n";
	std::cout << "\t[3] Delete Client\n";
	std::cout << "\t[4] Update Client Info\n";
	std::cout << "\t[5] Find Client\n";
	std::cout << "\t[6] Exit\n";
	std::cout << "=====================================\n";
	std::cout << "Choose what you want to do [1-6]: ";
	
}

std::vector <std::string>SplitLine(std::string Line, std::string Seperator = "#//#")
{
	std::vector <std::string> vSplit;
	std::string word = "";
	short pos = 0;

	while ((pos = Line.find(Seperator)) != std::string::npos)
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

stClients RecordToLine(std::vector <std::string>vSplitString)
{
	stClients Client;

	Client.AccountNumber = vSplitString[0];
	Client.PIN_Code = vSplitString[1];
	Client.Name = vSplitString[2];
	Client.Phone = vSplitString[3];
	Client.Balance = std::stod(vSplitString[4]);

	return Client;
}

std::vector <stClients> LoadDataFromFile(std::string  Filename = ClientsFile)
{
	std::vector <stClients> vClients;
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::in);

	if (MyFile.is_open())
	{
		std::string Line;
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
	std::vector <stClients> vClients = LoadDataFromFile();
	system("cls");
	std::cout << "\t\t\t\t\tClient[" << vClients.size() << "] \n";
	HeaderShowClientScreen();
	for (stClients client : vClients)
	{
		ShowClientListScreen(client);

	}
	std::cout << "--------------------------------------------------------------------------------------------------\n";
}

stClients ReadNewClient(std::vector <stClients> vClients, std::string Message = "Enter the details of the new client you want to add: ")
{
	stClients NewClient;

	std::cout << "Enter the Account Number: ";
	getline(std::cin >> std::ws, NewClient.AccountNumber);
		for (stClients client : vClients)
		{
			while (NewClient.AccountNumber == client.AccountNumber)
			{
				std::cout << "This Account Number already exist, Enter anorher one: ";
				getline(std::cin, NewClient.AccountNumber);
			}
		}	
		std::cout << "Enter the PIN Code: ";
	getline(std::cin, NewClient.PIN_Code);
	std::cout << "Enter Full Name: ";
	getline(std::cin, NewClient.Name);
	std::cout << "Enter Phone Number: ";
	getline(std::cin, NewClient.Phone);
	std::cout << "Enter Account Balance: ";
	std::cin >> NewClient.Balance;

	return NewClient;
}

std::string JoinClientsInLine(stClients Clients, std::string Seperator = "#//#")
{
	return Clients.AccountNumber + Seperator + Clients.PIN_Code +
		Seperator + Clients.Name + Seperator + Clients.Phone + Seperator +
		std::to_string(Clients.Balance);
}

void SaveNewClientToFile(stClients NewClient, std::string Filename = ClientsFile)
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::app);
	
	if (MyFile.is_open())
	{
		std::string NewLine = JoinClientsInLine(NewClient);
		MyFile << NewLine << std::endl;

		MyFile.close();
	}

}

void PrintAddingNewAccount()
{
	char Answer = 'n';
	std::vector <stClients> vClient = LoadDataFromFile();
	do{
		system("CLS");
		std::cout << "----------------------------\n";
		std::cout << "\tAdd New Client\n";
		std::cout << "----------------------------\n";

		stClients NewClient = ReadNewClient(vClient);

		SaveNewClientToFile(NewClient);
		vClient;
		std::cout << "\nClient Added Successfully, do you want to add more (Y/N): ";
		std::cin >> Answer;
	} while (Answer == 'y' || Answer == 'Y');
}

std::string ReadAccountNumber(std::string Message = "Enter The Account Number: ")
{
	std::string AccountNumber = "";
	std::cout << Message;
	getline(std::cin>> std::ws, AccountNumber);
	return AccountNumber;
}

bool FindClientByAccountNumber(std::vector <stClients>vClients, stClients& Client, std::string AccountNumber)
{
	for (stClients& C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
			break;
		}
	}
	return false;
}

bool MarkToClient(std::vector <stClients> &vClients, std::string AccountNumber)
{
	for (stClients &C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkAtClient = true;
			return true;
			break;
		}
	}
	return false;
}

std::vector <stClients> DeleteClientFromFile(std::vector <stClients> vClients, std::string Filename = ClientsFile)
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::out); //overwrite
	std::string Line = "";
	if (MyFile.is_open())
	{		
		for(stClients Client : vClients)
		{
			if (Client.MarkAtClient == false)
			{
				Line = JoinClientsInLine(Client);
				MyFile << Line << std::endl;
			}
			
		}
		MyFile.close();
	}

	return vClients;
}

void PrintClientCard(stClients Client)
{
	std::cout <<   "Account Number : " << Client.AccountNumber;
	std::cout << "\nPIN Code       : " << Client.PIN_Code;
	std::cout << "\nFull Name      : " << Client.Name;
	std::cout << "\nPhone Number   : " << Client.Phone;
	std::cout << "\nAccount Balance: " << Client.AccountNumber;
	std::cout<<std::endl;
}

void PrintDeletingClientScreen()
{
	std::vector <stClients> vClients=LoadDataFromFile();
	stClients Client;
	char Answer = 'n';
	system("CLS");
	std::cout << "----------------------------\n";
	std::cout << "\tDelete Client\n";
	std::cout << "----------------------------\n";
	std::string AccountNumber = ReadAccountNumber();
	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		PrintClientCard(Client);

		std::cout << "\nAre you really sure you want to delete this client (Y/N): ";
		std::cin >> Answer;
		if (Answer == 'Y' || Answer == 'y')
		{

			MarkToClient(vClients, AccountNumber);
			DeleteClientFromFile(vClients);
			vClients = LoadDataFromFile();//this for refrech new data
			std::cout << "Account Deleted successfully.\n";
		}
	}
	else
	{
		std::cout << "Account [" << AccountNumber << "] Not Founded.\n";
		
	}

}

std::vector <stClients> UpdateClientInFile(std::vector<stClients> &vClients, std::string AccountNumber)
{
	std::fstream MyFile;
	stClients NewClient = ReadNewClient(vClients);
	MyFile.open(ClientsFile, std::ios::out);
	std::string Line="";
	if (MyFile.is_open())
	{
		for (stClients& Client : vClients)
		{
			if (Client.MarkAtClient == true)
			{
				Line = JoinClientsInLine(NewClient);
				MyFile << Line << std::endl;
			}
			else
			{
				Line = JoinClientsInLine(Client);
				MyFile << Line << std::endl;
			}
		}
		MyFile.close();

	}


	return vClients;

}

void PrintUpdatedClient()
{
	std::vector <stClients>vClients = LoadDataFromFile();
	stClients Client;
	system("CLS");
	std::cout << "----------------------------\n";
	std::cout << "\tUpdate Client\n";
	std::cout << "----------------------------\n";
	std::string AccountNumber=ReadAccountNumber();
	char Answer = 'n';
	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		PrintClientCard(Client);
		std::cout << "\nAre you really sure do you want to edit this client (Y/N): ";
		std::cin >> Answer;
		if (Answer == 'Y' || Answer == 'y')
		{
			MarkToClient(vClients, AccountNumber);
			UpdateClientInFile(vClients, AccountNumber);
			vClients = LoadDataFromFile(); //this for refrech new data;
			std::cout << "Update Account successfully.\n";
		}
	}
	else
	{
		std::cout << "Account [" << AccountNumber << "] Not Founded.\n";

	}
}

void PrintFindClient()
{
	std::vector <stClients>vClients = LoadDataFromFile();
	stClients Client;
	system("CLS");
	std::cout << "----------------------------\n";
	std::cout << "\tFind Client\n";
	std::cout << "----------------------------\n";
	std::string AccountNumber = ReadAccountNumber();
	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		system("CLS");
		std::cout << "----------------------------\n";
		std::cout << "\tFind Client\n";
		std::cout << "----------------------------\n";
		PrintClientCard(Client);

	}
	else
	{
		std::cout << "Account [" << AccountNumber << "] Not Founded.\n";
	}

}


void StartMainMenu()
{
	 
    int Option=0;
    do
    {
        MainMenuScreen();
		std::cin >> Option;
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
			PrintDeletingClientScreen();
            system("pause");
            break;
        case enOption::OptionFour:
			PrintUpdatedClient();
            system("pause");
            break;
        case enOption::OptionFive:
			PrintFindClient();
            system("pause");
            break;
        case enOption::OptionSix:
			std::cout << "Exiting....";
            break;
        default:
			std::cout << "is a Wrong Choice choose 1-6.\n";
            system("pause");
            break;
        }
        system("cls");
    } while (Option != enOption::OptionSix);
	system("CLS");
	std::cout << "----------------------------\n";
	std::cout << "\tProgram ended\n";
	std::cout << "----------------------------\n";
}
int main()
{
	StartMainMenu();

	return 0;
}