#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <limits>

const std::string ClientFile = "ClientFile.txt";

void ATM_MainMenu();

// Structure to hold client information
struct stClients
{
	std::string AccountNumber;
	std::string PIN_Code ;
	std::string Name;
	std::string Phone;
	double Balance = 0.00;
};

// Global variable to store the currently logged-in client
stClients GlobalClient;

// Enum for ATM menu options
enum enMenuOptions
{
	eQuickWithdraw = 1, eNormalWithdraw=2,eDeposit=3,
	eCheckBalance = 4, eLogout=5
};

// Displays a header with a custom message
void ShowHeaderScreen(std::string Message,short N=30)
{
	system("CLS");
	std::cout << std::string(30, '=');
	std::cout << "\n\t" << Message << "\n";
	std::cout << std::string(30, '=') << "\n";
}

// Reads account number from user input
std::string ReadAccountNumber(std::string Message= "Enter Account Number: ")
{
	std::string AccountNumber;

	std::cout << Message;
	getline(std::cin>>std::ws,AccountNumber);

	return AccountNumber;
}

// Reads a 4-digit PIN code from user input
std::string ReadPINCode(std::string Message = "Enter PIN Code: ")
{
	int PIN = 0;

	std::cout << Message;
	std::cin >> PIN;

	// Validate PIN: must be 4 digits and numeric
	while (std::cin.fail() || std::to_string(PIN).size() != 4)
	{
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "PIN must be a 4-digit number and Digits.\n";
        std::cout << Message;
        std::cin >> PIN;
	}

	return std::to_string(PIN);
}

// Splits a string into a vector using a separator
std::vector <std::string> vSplitString(std::string Line, std::string Seperator = "#//#")
{
	std::vector <std::string> vSplit;
	size_t pos = 0;
	std::string word = "";

	while (((pos = Line.find(Seperator)) != std::string::npos))
	{
		word = Line.substr(0, pos);

		if (!word.empty())
			vSplit.push_back(word);

		Line.erase(0, pos + Seperator.length());
	}
	if (!Line.empty())
		vSplit.push_back(Line);

	return vSplit;
}

// Converts a vector of strings to a stClients record
stClients ConvertLineToRecord(std::vector<std::string> vSplit)
{
    stClients Client;
    if (vSplit.size() < 5) {
        // Not enough fields, return default client
        return Client;
    }

    Client.AccountNumber = vSplit[0];
    Client.PIN_Code = vSplit[1];
    Client.Name = vSplit[2];
    Client.Phone = vSplit[3];
    try {
        Client.Balance = std::stod(vSplit[4]);
    }
	catch (...) 
	{
        Client.Balance = 0.0; // If conversion fails, set balance to 0
    }

    return Client;
}

// Loads all clients from the file into a vector
std::vector <stClients> LoadDataFromFile(std::string Filename = ClientFile)
{
	std::fstream MyFile;
	std::vector <stClients> vClient;

	MyFile.open(Filename, std::ios::in);

	if (MyFile.is_open())
	{
		stClients Client;
		std::string Line="";
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(vSplitString(Line));
			vClient.push_back(Client);
		}
		MyFile.close();
	}

	return vClient;
}

// Checks if a client with the given account number and PIN exists
bool IsClientWithAccountNumberAndPINExist(std::string AccountNumber,std::string PIN,stClients &Client, std::vector <stClients> vClient)
{
	for (stClients &C : vClient)
	{
		if ((AccountNumber == C.AccountNumber) && (PIN == C.PIN_Code))
		{
			Client=C;
			return true;
		}
	}

	return false;
}

// Converts a client record to a line for file storage
std::string ConvertRecordToLine(stClients Client, std::string Seperator = "#//#")
{
	return Client.AccountNumber + Seperator +
		Client.PIN_Code + Seperator +
		Client.Name + Seperator +
		Client.Phone + Seperator +
		std::to_string(Client.Balance);
}

// Saves all clients to the file, updating the current client if needed
std::vector <stClients> SaveDataToFile(std::vector <stClients> vClients, std::string Filename=ClientFile )
{
    std::fstream MyFile;
    MyFile.open(Filename, std::ios::out);
    std::string Line;

	if (MyFile.is_open())
	{
		for (stClients Client : vClients)
		{
			if (Client.AccountNumber == GlobalClient.AccountNumber)
			{
				Line = ConvertRecordToLine(GlobalClient);
				MyFile << Line << std::endl;
			}
			else
			{
				Line = ConvertRecordToLine(Client);
				MyFile << Line << std::endl;
			
			}
		}
		MyFile.close();
	}
	return vClients;
}

// Handles the login screen and authentication loop
void LoginScreen()
{
	std::vector <stClients> vClient = LoadDataFromFile();
	ShowHeaderScreen("LOGIN SCREEN");
	std::string AccountNumber = ReadAccountNumber();
	std::string PIN = ReadPINCode();
	

	while (!(IsClientWithAccountNumberAndPINExist(AccountNumber, PIN, GlobalClient, vClient)))
	{
		ShowHeaderScreen("Login Screen");

		std::cout << "== Wrong AccountNumber/PIN ==\n";

		AccountNumber = ReadAccountNumber();
		PIN = ReadPINCode();
	}
	ATM_MainMenu();
	
}

// Displays the main ATM menu
void ATM_MenuScreen()
{
	ShowHeaderScreen("ATM MAIN MENU");

	std::cout << "      [1] Quick Withdraw\n";
	std::cout << "      [2] Normal Withdraw\n";
	std::cout << "      [3] Deposit\n";
	std::cout << "      [4] Check Balnce\n";
	std::cout << "      [5] Logout\n";
	std::cout << std::string(30, '=') << "\n";

}

// Reads the user's menu option choice
enMenuOptions ReadOptions(std::string Message = "Choose an option [1 to 5]: ")
{
	short MenuOption = 0;

	std::cout << Message;
	std::cin >> MenuOption;

	while (std::cin.fail() || (MenuOption <= 0 || MenuOption > 5))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Choice, ";
		std::cout << Message;
		std::cin >> MenuOption;
	}

	return enMenuOptions(MenuOption);
}

// Displays the quick withdraw menu
void QuickWithdrawMenuScreen()
{
	ShowHeaderScreen("Quick Withdraw");

	std::cout << "      [1] 20        [2] 50\n";
	std::cout << "      [3] 100       [4] 200\n";
	std::cout << "      [5] 400       [6] 600\n";
	std::cout << "      [7] 800       [8] 1000\n";
	std::cout << "      [9] Exit\n";
	std::cout << std::string(30, '=') << "\n";
	std::cout << "Your Balance : " << GlobalClient.Balance << "\n";

}

// Reads the user's quick withdraw choice
short ReadChoices(std::string Message = "Choose from [1 to 8]:  ")
{

	short Choice;
	std::cout << Message;
	std::cin >> Choice;
	while (std::cin.fail() || (Choice <= 0 || Choice > 9))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Choice, ";
		std::cout << Message;
		std::cin >> Choice;
	}

	return Choice;
}

// Returns the withdraw amount based on the user's choice
short GetQuickWithdrawAmount(short Choice)
{
	short arr[8] = { 20,50,100,200,400,600,800,1000 };

	return arr[Choice - 1];
}

// Performs the quick withdraw operation
void PerformWithdraw(short Choice)
{
	char Answer = 'n';

	if (Choice == 9) 
		return;

	short withdraw = GetQuickWithdrawAmount(Choice);

	if (GlobalClient.Balance < withdraw)
	{
		std::cout << "\nInsufficient balance for this transaction.\n";
		return;
	}

	std::cout << "Are you dure want perform this transaction (Y/N) ";
	std::cin >> Answer;

	std::vector <stClients> vClients = LoadDataFromFile();
	
		if (Answer == 'y' || Answer == 'Y')
		{
			GlobalClient.Balance -= withdraw;
			SaveDataToFile(vClients);
			std::cout << "\n\nDone Successfully.New Balance is: " << GlobalClient.Balance
				<< std::endl;
		}
}

// Shows the quick withdraw menu and processes the user's choice
void ShowQuickWithdrawMenu()
{	
	QuickWithdrawMenuScreen();
	
	short Choice = ReadChoices();
	
	PerformWithdraw(Choice);
}

// Reads a custom withdraw amount (must be a multiple of 5)
int ReadWithdrawAmount()
{
	int Amount = 0;

	std::cout << "Enter an amount multuple of 5's: ";
	std::cin >> Amount;
	while (std::cin.fail() || (Amount % 5 !=0))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Amount, ";
		std::cout << "Enter an amount multuple of 5's: ";
		std::cin >> Amount;
	}
	return Amount;
}

// Performs a normal (custom) withdraw operation
void PerformNormalWithdraw()
{
	int Amount = ReadWithdrawAmount();

	char Answer = 'n';
	if (GlobalClient.Balance < Amount)
	{
		std::cout << "\nInsufficient balance for this transaction.\n";
		return;
	}

	std::cout << "Are you sure you want to perform this transaction (Y/N): ";
	std::cin >> Answer;
	std::vector <stClients> vClients = LoadDataFromFile();
	if (Answer == 'y' || Answer == 'Y')
	{
		GlobalClient.Balance -= Amount;
		SaveDataToFile(vClients);
		std::cout << "Done Successfully, New balance is: " << GlobalClient.Balance << std::endl;
	} 
}

// Shows the normal withdraw menu
void ShowNormalWithdrawMenu()
{
	ShowHeaderScreen("Normal Withdraw");
	PerformNormalWithdraw();
}

// Shows the balance menu
void ShowBalanceMenu()
{
	ShowHeaderScreen("Balance");

	std::cout << "Your Balance is: " << GlobalClient.Balance << "\n\n";
 
}

// Reads a deposit amount from the user
int ReadDepositAmount()
{
	int DepositAmount = 0;
	std::cout << "Enter a Deposit amount: ";
	std::cin >> DepositAmount;
	while (std::cin.fail() || (DepositAmount <= 0))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Amount, ";
		std::cout << "Please enter a valid Deposit Amount: ";
		std::cin >> DepositAmount;
	}

	return DepositAmount;
}

// Performs a deposit operation
void PerformDeposit()
{
	int Amount = ReadDepositAmount();

	char Answer = 'y';

	std::cout << "Are you sure you want to perform this transaction (Y/N): ";
	std::cin >> Answer;
	std::vector <stClients> vClients = LoadDataFromFile();
	if (Answer == 'y' || Answer == 'Y')
	{
		GlobalClient.Balance += Amount;
		SaveDataToFile(vClients);
		std::cout << "\n\nDone Successfully, New balance is: " << GlobalClient.Balance << std::endl;
	}
}

// Shows the deposit menu
void ShowDepositMenu()
{
	ShowHeaderScreen("Deposit Menu");

	PerformDeposit();
}

// Main ATM menu loop
void ATM_MainMenu()
{
	
	enMenuOptions Menu;
   do {
        ATM_MenuScreen();
         Menu = ReadOptions();

        switch (Menu)
        {
        case enMenuOptions::eQuickWithdraw:
            ShowQuickWithdrawMenu();
			system("pause");
            break;
		case enMenuOptions::eNormalWithdraw:
			ShowNormalWithdrawMenu();
			system("pause");
			break;
		case enMenuOptions::eDeposit:
			ShowDepositMenu();
			system("pause");
			break;
		case enMenuOptions::eCheckBalance:
			ShowBalanceMenu();
			system("pause");
			break;
        }
   } while (Menu != enMenuOptions::eLogout);
   LoginScreen();

}

int main()
{
	LoginScreen();
	return 0;
}