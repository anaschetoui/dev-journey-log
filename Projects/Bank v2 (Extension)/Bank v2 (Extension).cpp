#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cstdlib>

const std::string ClientFile = "ClientFile.txt";

void MainMenuScreen();

struct stClients
{
	std::string AccountNumber;
	std::string PIN_Code;
	std::string Name;
	std::string Phone;
	double Balance = 0.00;
	bool MarktoClient = false; //should be false by default cause we will use it ByRef.
};

void HeaderPart(std::string HeaderType)
{
	system("cls");

	std::cout << "================================\n";
	std::cout << "\t   " << HeaderType << "\n";
	std::cout << "================================\n";
}

enum enMenuOptions
{
	eShowClients = 1, eAddNewClient = 2, eDeleteClient = 3,
	eUpdateClient = 4, eFindClient = 5, eTransactions = 6,
	eExit = 7

};

enMenuOptions ReadOptions(std::string Message = "Choose an option (1-7): ")
{
	short Options = 0;
	do{
		system("ClS");    // Clear the screen 
		MainMenuScreen();// and show the main menu again for better formatting
		std::cout << Message;
		std::cin >> Options;
		while (std::cin.fail())
		{
			system("ClS");    // Clear the screen 
			MainMenuScreen();// and show the main menu again for better formatting
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Number ,Please enter a valid number: ";
			std::cin >> Options;
		}
	} while (Options <= 0 || Options >7);
	return (enMenuOptions)Options;

}

void MainMenuScreen()
{
	HeaderPart("Main Menu");
	std::cout << "\t[1] Show All Clients.\n";
	std::cout << "\t[2] Add New Client.\n";
	std::cout << "\t[3] Delete Client.\n";
	std::cout << "\t[4] Update Client.\n";
	std::cout << "\t[5] Find Client.\n";
	std::cout << "\t[6] Transactions.\n";
	std::cout << "\t[7] Exit.\n";
    std::cout << "================================\n";	
}

std::vector <std::string> vSplitString(std::string Line, std::string Seperator = "#//#")
{
	std::vector <std::string> vString;
	short pos = 0;
	std::string word = "";

	while ((pos = Line.find(Seperator)) != std::string::npos)
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

stClients ConvertLineToRecord(std::vector <std::string> vString)
{
	stClients Client;
  
    Client.AccountNumber = vString[0];
    Client.PIN_Code = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.Balance = std::stod(vString[4]);
    return Client;
}

std::vector <stClients> LoadDataFromFile(std::string FileName = ClientFile)
{
	std::fstream MyFile;
	std::vector <stClients> vClients;
	
	MyFile.open(FileName, std::ios::in);

	if (MyFile.is_open())
	{
		stClients Client;
		std::string Line = "";
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(vSplitString(Line));
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}

void ShowClientHeader()
{
    std::cout << std::string(88, '-') << "\n";
	std::cout
		<< "| " << std::left << std::setw(15) << "Account Number"
		<< "| " << std::setw(10) << "PIN Code"
		<< "| " << std::setw(25) << "Client Name"
		<< "| " << std::setw(15) << "Phone"
		<< "| " << std::setw(12) << "Balance"
		<< "|\n";
    std::cout << std::string(88, '-') << "\n";
}
void PrintClientCard(stClients Client)
{
	
	std::cout
		<< "| " << std::left << std::setw(15) << Client.AccountNumber
		<< "| " << std::setw(10) << Client.PIN_Code
		<< "| " << std::setw(25) << Client.Name
		<< "| " << std::setw(15) << Client.Phone
		<< "| " << std::setw(12) << Client.Balance
		<< "|\n";
}


void PrintShowAllClients()
{
	system("CLS");
	std::vector<stClients> vClients = LoadDataFromFile();
	std::cout << "\t\t\t\t[" << vClients.size() << "] Client(s)\n";
	ShowClientHeader();
	for (stClients Client : vClients)
	{
		PrintClientCard(Client);
	}

	std::cout << std::string(88, '-') << "\n";

}

stClients ReadClient(std::vector <stClients> vClients)
{
	stClients NewClient;

	std::cout << "Enter Account number: ";
	getline(std::cin >> std::ws, NewClient.AccountNumber);
	for(stClients Client : vClients)
	{
		while (NewClient.AccountNumber == Client.AccountNumber)
		{
			std::cout << "This Account Number [" << NewClient.AccountNumber
				<< "]is already exist.\nEnter a different Account Number: ";
			getline(std::cin >> std::ws, NewClient.AccountNumber);
		}
	}

    std::cout << "Enter PIN Code: ";
    getline(std::cin >> std::ws, NewClient.PIN_Code);

    std::cout << "Enter Full Name: ";
    getline(std::cin >> std::ws, NewClient.Name);

    std::cout << "Enter Phone Number: ";
    getline(std::cin >> std::ws, NewClient.Phone);

    std::cout << "Enter Account Balance: ";
    while (!(std::cin >> NewClient.Balance)) 
	{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid balance: ";
    }

    return NewClient;
}

std::string ConvertRecordToLine(stClients Client, std::string Seperator = "#//#")
{
	return Client.AccountNumber + Seperator +
		Client.PIN_Code + Seperator +
		Client.Name + Seperator +
		Client.Phone + Seperator +
		std::to_string(Client.Balance);
}

void AddNewClientToFile(stClients NewClient,std::string Filename = ClientFile)
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::app);
	std::string Line = "";
	if (MyFile.is_open())
	{
		Line = ConvertRecordToLine(NewClient);
		MyFile << Line << std::endl;
	}
	MyFile.close();
}

void PrintAddClientScreen()
{
	HeaderPart("Add New Client");
	std::vector <stClients> vClients = LoadDataFromFile();
	
	char Answer = 'N';
	do
	{
		HeaderPart("Add New Client");
		stClients NewClient = ReadClient(vClients);
		AddNewClientToFile(NewClient);
		std::cout << "\nClient Added successfully.\nDo You want to add more (Y/N): ";
		std::cin >> Answer;
	} while (Answer == 'Y' || Answer == 'y');
}

void StartMenu()
{
	enMenuOptions MenuOption; 
	do {
		MainMenuScreen();
		MenuOption = ReadOptions();

		switch (MenuOption)
		{
		case enMenuOptions::eShowClients:
			PrintShowAllClients();
			system("pause");
			break;
		case enMenuOptions::eAddNewClient:
			PrintAddClientScreen();
			system("pause");
			break;
		case enMenuOptions::eDeleteClient:
			//DeleteClient()
			system("pause");
			break;
		case enMenuOptions::eUpdateClient:
            //UpdateClient()
            system("ClS");
            std::cout << "This Option Just for test will be available.\n";
            system("pause");
            break;
		case enMenuOptions::eFindClient:
            //FindClient()
            system("ClS");
            std::cout << "This Option Just for test will be available.\n";
            system("pause");
            break;
		case enMenuOptions::eTransactions:
            //Transactions()
            system("ClS");
            std::cout << "This Option Just for test will be available.\n";
            system("pause");
			break;
        }
	} while (MenuOption != enMenuOptions::eExit);
            HeaderPart("Program Ended");
    
}

int main()
{
	StartMenu();

	return 0;
}