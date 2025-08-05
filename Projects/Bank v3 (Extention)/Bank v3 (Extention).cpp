/****************************************************************
 * Bank Management System (Version 3)                           *
 * This program implements a banking management system with:    *
 * - Client account management (add, delete, update, find)      *
 * - User management with permission control				    *
 * - Transaction operations (deposit, withdraw, balance reports)*
 * - Login system with role-based access control				*
 * Data is stored in text files for both clients and users      *
 ****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cstdlib>

 // File paths for storing client and user data
const std::string ClientFile = "ClientFile.txt";
const std::string UserFile = "UserFile.txt";

// Forward declarations of main functions
void MainMenuScreen();
void TransactionsMenuScreen();
void Login();
void PrintManageUsersMenu();
void PrintListUsers();
void PrintAddNewUser();
void PrintDeleteUser();
void PrintFindUser();
void PrintUpdateUser();

// Permission flags using bitwise operations
const short READ_SHOW_CLIENT = 1;     // 0001
const short ADD_NEW_CLIENT = 2;       // 0010
const short DELETE_CLIENT = 4;        // 0100
const short UPDATE_CLIENT = 8;        // 1000
const short FIND_CLIENT = 16;         // 10000
const short TRANSACTIONS_ACCESS = 32; // 100000
const short MANAGE_USERS_ACCESS = 64; // 1000000
const short ALLPERMISSIONS = -1;      // All bits set to 1 (11111...)

/**
 * Client data structure
 * Contains all information about a bank client
 */
struct stClients
{
	std::string AccountNumber;
	std::string PIN_Code;
	std::string Name;
	std::string Phone;
	double Balance = 0.00;
	bool MarktoClient = false; // Used for marking records for deletion/update
};

/**
 * Displays a formatted header for different screens
 * @param HeaderType Text to display in the header
 */
void ShowHeader(std::string HeaderType)
{
	system("cls");

	std::cout << "================================\n";
	std::cout << "\t  " << HeaderType << "\n";
	std::cout << "================================\n";
}

// Enum for main menu options
enum enMenuOptions
{
	eShowClients = 1, eAddNewClient = 2, eDeleteClient = 3,
	eUpdateClient = 4, eFindClient = 5, eTransactions = 6,
	eManageUsers = 7, eLogout = 8
};

/**
 * Gets and validates menu option from user
 * @param Message Prompt to display to user
 * @return The selected menu option
 */
enMenuOptions ReadOptions(std::string Message = "Choose an option (1-8): ")
{
	short Options = 0;
	do {
		std::cout << Message;
		std::cin >> Options;
		while (std::cin.fail())
		{
			system("ClS");
			MainMenuScreen();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Number ,Please enter a valid number (1-8): ";
			std::cin >> Options;
		}
	} while (Options <= 0 || Options > 8);
	return (enMenuOptions)Options;
}

/**
 * Displays the main menu options
 */
void MainMenuScreen()
{
	ShowHeader("Main Menu");
	std::cout << "\t[1] Show All Clients.\n";
	std::cout << "\t[2] Add New Client.\n";
	std::cout << "\t[3] Delete Client.\n";
	std::cout << "\t[4] Update Client.\n";
	std::cout << "\t[5] Find Client.\n";
	std::cout << "\t[6] Transactions.\n";
	std::cout << "\t[7] Manage Users.\n";
	std::cout << "\t[8] Logout.\n";
	std::cout << "================================\n";
}

/**
 * Splits a string based on a separator
 * @param Line String to split
 * @param Separator Delimiter string
 * @return Vector of substrings
 */
std::vector <std::string> vSplitString(std::string Line, std::string Seperator = "#//#")
{
	std::vector <std::string> vString;
	size_t pos = 0;
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

/**
 * Converts a string vector to client record
 * @param vString Vector containing client data fields
 * @return Populated client structure
 */
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

/**
 * Loads client data from file
 * @param FileName Path to client data file
 * @return Vector of client records
 */
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

/**
 * Displays table header for client list
 */
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

/**
 * Prints a single client record in tabular format
 * @param Client Client data to display
 */
void PrintClient(stClients Client)
{
	std::cout
		<< "| " << std::left << std::setw(15) << Client.AccountNumber
		<< "| " << std::setw(10) << Client.PIN_Code
		<< "| " << std::setw(25) << Client.Name
		<< "| " << std::setw(15) << Client.Phone
		<< "| " << std::setw(12) << Client.Balance
		<< "|\n";
}

/**
 * Displays all client records in a table
 */
void PrintShowAllClients()
{
	system("CLS");
	std::vector<stClients> vClients = LoadDataFromFile();
	std::cout << "\t\t\t\t[" << vClients.size() << "] Client(s)\n";
	ShowClientHeader();
	for (stClients Client : vClients)
	{
		PrintClient(Client);
	}

	std::cout << std::string(88, '-') << "\n";
}

/**
 * Gets client data from user input
 * @param vClients Existing clients list (for validation)
 * @param SkipAccountNum Whether to skip account number input
 * @return New client record
 */
stClients ReadClient(std::vector <stClients> vClients, bool SkipAccountNum = false)
{
	stClients NewClient;

	if (SkipAccountNum == false)
	{
		std::cout << "Enter Account number: ";
		getline(std::cin >> std::ws, NewClient.AccountNumber);
		// Check for duplicate account numbers
		for (stClients Client : vClients)
		{
			while (NewClient.AccountNumber == Client.AccountNumber)
			{
				std::cout << "This Account Number [" << NewClient.AccountNumber
					<< "] is already exist.\nEnter a different Account Number: ";
				getline(std::cin >> std::ws, NewClient.AccountNumber);
			}
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
		std::cout << "Invalid input.\nPlease enter a valid balance: ";
	}

	return NewClient;
}

/**
 * Converts client record to string for file storage
 * @param Client Client data to convert
 * @param Separator Field delimiter
 * @return Formatted string
 */
std::string ConvertRecordToLine(stClients Client, std::string Seperator = "#//#")
{
	return Client.AccountNumber + Seperator +
		Client.PIN_Code + Seperator +
		Client.Name + Seperator +
		Client.Phone + Seperator +
		std::to_string(Client.Balance);
}

/**
 * Appends new client to data file
 * @param NewClient Client data to save
 * @param Filename Target file path
 */
void AddNewClientToFile(stClients NewClient, std::string Filename = ClientFile)
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

/**
 * Handles the add client screen and workflow
 */
void PrintAddClientScreen()
{
	ShowHeader("Add New Client");
	std::vector <stClients> vClients = LoadDataFromFile();

	char Answer = 'N';
	do
	{
		ShowHeader("Add New Client");
		stClients NewClient = ReadClient(vClients);
		AddNewClientToFile(NewClient);
		std::cout << "\nClient Added successfully.\nDo You want to add more (Y/N): ";
		std::cin >> Answer;
	} while (Answer == 'Y' || Answer == 'y');
}

/**
 * Gets account number from user
 * @param Message Prompt to display
 * @return Account number string
 */
std::string ReadAccountNumber(std::string Message = "Enter the account Number: ")
{
	std::string AccountNumber;
	std::cout << Message;
	std::cin >> AccountNumber;
	return AccountNumber;
}

/**
 * Searches for a client by account number
 * @param vClients Client list to search
 * @param Client Output parameter for found client
 * @param AccountNumber Account number to find
 * @return True if found, false if not
 */
bool FindClientByAccountNumber(std::vector <stClients> vClients, stClients& Client, std::string AccountNumber)
{
	for (stClients& C : vClients)
	{
		if (AccountNumber == C.AccountNumber)
		{
			Client = C;
			return true;
		}

	}
	return false;
}

/**
 * Marks a client record for update/deletion
 * @param vClients Client list
 * @param AccountNumber Account to mark
 */
void MarkClientFlag(std::vector <stClients>& vClients, std::string AccountNumber)
{
	for (stClients& Client : vClients)
	{
		if (Client.AccountNumber == AccountNumber)
		{
			Client.MarktoClient = true;
			break;
		}
	}
}

/**
 * Displays client data in card format
 * @param Client Client to display
 */
void PrintClientCard(stClients Client)
{
	std::cout << "Account Number : " << Client.AccountNumber << std::endl;
	std::cout << "PIN Code       : " << Client.PIN_Code << std::endl;
	std::cout << "Name           : " << Client.Name << std::endl;
	std::cout << "Phone          : " << Client.Phone << std::endl;
	std::cout << "Balance        : " << Client.Balance << std::endl;
}

/**
 * Saves client data to file, handling updates or deletions
 * @param vClients Client list
 * @param Filename Target file path
 * @param NewClient Updated client data (for updates)
 * @param UpdateFile Whether to update or delete records
 */
void SaveDataToFile(std::vector <stClients> vClients, std::string Filename = ClientFile,
	stClients NewClient = stClients(), bool UpdateFile = false)
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::out);
	std::string Line;

    if (MyFile.is_open())
    {
		for (stClients Client : vClients)
		{
			if (UpdateFile)
			{
				// When updating, use NewClient for marked clients, otherwise use original client
				Line = ConvertRecordToLine(Client.MarktoClient ? NewClient : Client);
				MyFile << Line << std::endl;
			}
			else
			{
				// When deleting, only write unmarked clients
				if (!Client.MarktoClient)
				{
					Line = ConvertRecordToLine(Client);
					MyFile << Line << std::endl;
				}
			}
		}
    MyFile.close();
    }
}

/**
 * Handles the delete client screen and workflow
 */
void PrintDeleteClientScreen()
{
	ShowHeader("Delete Client");
	stClients Client;
	std::vector <stClients> vClients = LoadDataFromFile();
	std::string AccountNumber = ReadAccountNumber();
	char Answer = 'n';
	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		PrintClientCard(Client);
		std::cout << "\nDo you really want to delete this client (Y/N): ";
		std::cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{
			MarkClientFlag(vClients, AccountNumber);
			SaveDataToFile(vClients, ClientFile);
			vClients = LoadDataFromFile();

			std::cout << "Client deleted succussfully.\n";
		}
	}
	else
	{
		std::cout << "\nClient with Account Number [" << AccountNumber << "] not found.\n";
	}
}

/**
 * Handles the find client screen and workflow
 */
void PrintFindClientScreen()
{
	ShowHeader("Find Client");
	stClients Client;
	std::vector <stClients> vClients = LoadDataFromFile();
	std::string AccountNumber = ReadAccountNumber();
	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		system("CLS");
		ShowHeader("Find Client");
		PrintClientCard(Client);
	}
	else
	{
		std::cout << "\nClient with Account Number [" << AccountNumber << "] not found.\n";
	}
}

/**
 * Handles the update client screen and workflow
 */
void PrintUpdateClientScreen()
{
	ShowHeader("Update Client");
	stClients Client;
	std::vector <stClients> vClients = LoadDataFromFile();
	char Answer = 'y';
	std::string AccountNumber = ReadAccountNumber("Enter The Account Number: ");
	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		system("CLS");
		ShowHeader("Update Client");
		PrintClientCard(Client);
		std::cout << "Do you want to update this Client (Y/N): ";
		std::cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{
			system("CLS");
			ShowHeader("Update Client");
			stClients NewClient = ReadClient(vClients, true);
			NewClient.AccountNumber = AccountNumber;
			MarkClientFlag(vClients, AccountNumber);
			SaveDataToFile(vClients, ClientFile, NewClient, true);

			vClients = LoadDataFromFile();
			std::cout << "Client Updated Successfully.\n";

		}
	}
	else
	{
		std::cout << "\nClient with Account Number [" << AccountNumber << "] not found.\n";
	}

}

// Enum for transactions menu options
enum enTransactionsMenuOptions
{
	eDeposit = 1, Withdraw = 2,
	eTototalBalances = 3, MainMenu = 4
};

/**
 * Gets and validates transaction menu option
 * @param Message Prompt to display
 * @return Selected transaction option
 */
enTransactionsMenuOptions eReadTransactionsOptions(std::string Message = "Choose an option (1-4): ")
{
	short Options = 0;
	do {
		system("ClS");
		TransactionsMenuScreen();
		std::cout << Message;
		std::cin >> Options;
		while (std::cin.fail())
		{
			system("ClS");
			TransactionsMenuScreen();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Number ,Please enter a valid number: ";
			std::cin >> Options;
		}
	} while (Options <= 0 || Options > 4);
	return (enTransactionsMenuOptions)Options;
}

/**
 * Displays the transactions menu options
 */
void TransactionsMenuScreen()
{
	ShowHeader("Transactions Menu");
	std::cout << "\t[1] Deposit.\n";
	std::cout << "\t[2] Withdraw.\n";
	std::cout << "\t[3] Total Balances.\n";
	std::cout << "\t[4] Main Menu.\n";
	std::cout << "================================\n";
}

/**
 * Gets and validates deposit/withdraw amount
 * @param Message Prompt to display
 * @return Valid amount
 */
double ReadDepositWithdrawNumber(std::string Message = "Please Enter Deposit Amount: ")
{
	double DepositAmount = 0.00;
	std::cout << Message;
	std::cin >> DepositAmount;

	while (std::cin.fail() || DepositAmount <= 0)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number. Please enter a valid positive number: ";
		std::cin >> DepositAmount;
	}
	return DepositAmount;
}

/**
 * Updates client balance for deposit
 * @param vClients Client list
 * @param DepositAmount Amount to deposit
 * @param AccountNumber Target account
 * @return True if successful
 */
bool Deposit(std::vector <stClients>& vClients, double DepositAmount, std::string AccountNumber)
{
	for (stClients& Client : vClients)
	{
		if (Client.AccountNumber == AccountNumber)
		{
			Client.Balance = Client.Balance + DepositAmount;
			return true;
		}
	}
	return false;
}

/**
 * Updates client data file for deposit/withdraw operations
 * @param vClients Client list
 * @param DepositWithdrawAmount Amount to add/subtract
 * @param Filename Target file
 * @param Deposit True for deposit, false for withdraw
 */
void SaveDataToFile_DepositWithdraw(std::vector <stClients>& vClients, double DepositWithdrawAmount, std::string Filename, bool Deposit = true)
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::out);
	std::string Line;

    if (MyFile.is_open())
    {
    for (stClients& Client : vClients)
    {
    // Update balance only for marked clients
    if (Client.MarktoClient)
    {
    // Add for deposit, subtract for withdrawal
    Client.Balance += Deposit ? DepositWithdrawAmount : -DepositWithdrawAmount;
    }

    // Write record to file (for all clients)
    Line = ConvertRecordToLine(Client);
    MyFile << Line << std::endl;
    }
	}
}

/**
 * Handles the deposit screen and workflow
 */
void PrintDepositScreenMenu()
{
	stClients Client;
	std::vector <stClients> vClients = LoadDataFromFile();
	ShowHeader("Deposit Menu");
	std::string AccountNumber = ReadAccountNumber();
	char Answer = 'n';
	// Validate account number
	while (!FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		ShowHeader("Deposit Menu");
		std::cout << "Client with Account Number [" << AccountNumber << "] not found.\n";
		AccountNumber = ReadAccountNumber("Please Enter an exist client: ");
	}
	ShowHeader("Deposit Menu");
	PrintClientCard(Client);
	std::cout << "\n";
	double DepositAmount = ReadDepositWithdrawNumber();
	std::cout << "Are you sure you want to add this transactions (Y/N): ";
	std::cin >> Answer;
	if (Answer == 'Y' || Answer == 'y')
	{
		MarkClientFlag(vClients, AccountNumber);
		SaveDataToFile_DepositWithdraw(vClients, DepositAmount, ClientFile);
		vClients = LoadDataFromFile();
		std::cout << "\nDeposit completed successfully,New Balance is : " << Client.Balance + DepositAmount << std::endl;
	}
}

/**
 * Handles the withdraw screen and workflow
 */
void PrintWithdrawScreenMenu()
{
	std::vector <stClients> vClients = LoadDataFromFile();
	stClients Client;
	ShowHeader("Withdraw Menu");
	std::string AccountNumber = ReadAccountNumber();
	char Answer = 'N';
	// Validate account number
	while (!FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		ShowHeader("Withdraw Menu");
		std::cout << "Client with Account Number [" << AccountNumber << "] not found.\n";
		AccountNumber = ReadAccountNumber("Please Enter an exist client: ");
	}

	PrintClientCard(Client);

	double WithdrawAmount = ReadDepositWithdrawNumber("\nPlease Enter Withdraw Amount: ");

	// Ensure withdrawal doesn't exceed balance
	while (WithdrawAmount > Client.Balance)
	{
		std::cout << "Withdraw amount cannot be greater than the current balance: " << Client.Balance;
		WithdrawAmount = ReadDepositWithdrawNumber("\nPlease enter a valid amount: ");
	}
	std::cout << "Are you sure you want to add this transactions (Y/N): ";
	std::cin >> Answer;
	if (Answer == 'Y' || Answer == 'y')
	{
		MarkClientFlag(vClients, AccountNumber);
		SaveDataToFile_DepositWithdraw(vClients, WithdrawAmount, ClientFile, false);

		vClients = LoadDataFromFile();
		std::cout << "Withdraw completed successfully,New Balance is : " << (Client.Balance - WithdrawAmount) << std::endl;
	}
}

/**
 * Calculates sum of all account balances
 * @param vClient Client list
 * @return Total balance
 */
double TotalBalances(std::vector <stClients> vClient)
{
	double Total = 0.00;
	for (stClients Client : vClient)
	{
		Total += Client.Balance;
	}
	return Total;
}

/**
 * Displays client in total balances table format
 * @param Client Client to display
 */
void ShowTotalBalancesTable(stClients Client)
{
	std::cout
		<< "| " << std::left << std::setw(15) << Client.AccountNumber
		<< "| " << std::setw(25) << Client.Name
		<< "| " << std::setw(12) << Client.Balance
		<< "|\n";
}

/**
 * Displays header for total balances table
 */
void HeaderShowTotalBalancesTable()
{
	system("CLS");
	std::cout << "\t\t\tBalances List\n";
	std::cout << std::string(59, '-') << "\n";
	std::cout
		<< "| " << std::left << std::setw(15) << "Account Number"
		<< "| " << std::setw(25) << "Client Name"
		<< "| " << std::setw(12) << "Balance"
		<< "|\n";
}

/**
 * Handles the total balances report screen
 */
void PrintTotalBalancesScreenMenu()
{
	std::vector <stClients> vClients = LoadDataFromFile();

	HeaderShowTotalBalancesTable();

	std::cout << std::string(59, '-') << "\n";
	for (stClients Client : vClients)
	{
		ShowTotalBalancesTable(Client);
	}
	std::cout << std::string(59, '-') << "\n";
	std::cout << "\t     Total Balances = " << std::to_string(TotalBalances(vClients)) << std::endl;
}

void PressAnyKey(std::string Message)
{
	std::cout << "\nPress any key to back to " << Message << "...";
	system("pause>0");
}

/**
 * Handles the transactions menu and workflow
 */
void PrintTransactionsMenu()
{
	enTransactionsMenuOptions eTransactionOptions;
	do
	{
		TransactionsMenuScreen();
		eTransactionOptions = eReadTransactionsOptions();

		switch (eTransactionOptions)
		{
		case enTransactionsMenuOptions::eDeposit:
			PrintDepositScreenMenu();
			PressAnyKey("Transactions Menu");
			break;
		case enTransactionsMenuOptions::Withdraw:
			PrintWithdrawScreenMenu();
			PressAnyKey("Transactions Menu");
			break;
		case enTransactionsMenuOptions::eTototalBalances:
			PrintTotalBalancesScreenMenu();
			PressAnyKey("Transactions Menu");
			break;
		}
	} while (eTransactionOptions != enTransactionsMenuOptions::MainMenu);
}

/**
 * User data structure
 * Contains username, password and permission flags
 */
struct stUser
{
	std::string Username = "";
	std::string Password = "";
	short Permisions = 0;
	bool MarkUserFlag = false;
};

// Enum for user management menu options
enum enManageUsersMenuOptions
{
	eListUsers = 1, eAddNewUser = 2, eDeleteUser = 3,
	UpdateUser = 4, eFindUser = 5, eMainMenu = 6
};

void ShowAccessDeniedMessage()
{
	system("CLS");
	std::cout << std::string(50, '-') << "\n";
	std::cout << "               ACCESS DENIED\n";
	std::cout << std::string(50, '-') << "\n";
	std::cout << "You don't have permission to access this feature.\n";
	std::cout << "Please contact your administrator for assistance.\n";
	std::cout << std::string(50, '-') << "\n\n";
	system("pause");
}

/**
 * Main menu controller based on user permissions
 * @param UserPermissions Permission bits for logged in user
 */
void StartMenu(short UserPermissions)
{
	enMenuOptions MenuOption;
	do {
		MainMenuScreen();
		MenuOption = ReadOptions();

		switch (MenuOption)
		{
		case enMenuOptions::eShowClients:
			if (UserPermissions & READ_SHOW_CLIENT)
			{
				PrintShowAllClients();
				system("pause");
			}
			else
				ShowAccessDeniedMessage();
			break;
		case enMenuOptions::eAddNewClient:
			if (UserPermissions & ADD_NEW_CLIENT)
			{
				PrintAddClientScreen();
				system("pause");
			}
			else
				ShowAccessDeniedMessage();
			break;
		case enMenuOptions::eDeleteClient:
			if (UserPermissions & DELETE_CLIENT)
			{
				PrintDeleteClientScreen();
				system("pause");
			}
			else
				ShowAccessDeniedMessage();
			break;
		case enMenuOptions::eUpdateClient:
			if (UserPermissions & UPDATE_CLIENT)
			{
				PrintUpdateClientScreen();
				system("pause");
			}
			else
				ShowAccessDeniedMessage();
			break;
		case enMenuOptions::eFindClient:
			if (UserPermissions & FIND_CLIENT)
			{
				PrintFindClientScreen();
				system("pause");
			}
			else
				ShowAccessDeniedMessage();
			break;
		case enMenuOptions::eTransactions:
			if (UserPermissions & TRANSACTIONS_ACCESS)
			{
				PrintTransactionsMenu();
			}
			else
				ShowAccessDeniedMessage();
			break;
		case enMenuOptions::eManageUsers:
			if (UserPermissions & MANAGE_USERS_ACCESS)
				PrintManageUsersMenu();
			else
				ShowAccessDeniedMessage();
			break;
		}
	} while (MenuOption != enMenuOptions::eLogout);
	system("CLS");
	Login(); // Return to login screen after logout
}

/**
 * Gets username/password from user
 * @param Message Prompt to display
 * @return Input string
 */
std::string ReadUsernamePassword(std::string Message)
{
	std::string UserPass = "";
	std::cout << Message;
	std::cin >> UserPass;
	return UserPass;
}

/**
 * Gets and validates user management menu option
 * @param Message Prompt to display
 * @return Selected option
 */
enManageUsersMenuOptions eReadMangeUsersOptions(std::string Message = "Choose an option (1-6): ")
{
	short Options = 0;
	do {
		std::cout << Message;
		std::cin >> Options;
		while (std::cin.fail())
		{
			system("ClS");
			PrintManageUsersMenu();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Number ,Please enter a valid number (1-6): ";
			std::cin >> Options;
		}
	} while (Options <= 0 || Options > 6);
	return (enManageUsersMenuOptions)Options;
}

/**
 * Displays the user management menu options
 */
void ManageUsersMenuScreen()
{
	ShowHeader("Manage Users");
	std::cout << "\t[1] List Users.\n";
	std::cout << "\t[2] Add New User.\n";
	std::cout << "\t[3] Delete User.\n";
	std::cout << "\t[4] Update User.\n";
	std::cout << "\t[5] Find User.\n";
	std::cout << "\t[6] Main Menu.\n";
	std::cout << "================================\n";
}


/**
 * Handles the user management menu and workflow
 */
void PrintManageUsersMenu()
{
	enManageUsersMenuOptions MenuOptions;
	do
	{
		ManageUsersMenuScreen();
		MenuOptions = eReadMangeUsersOptions();

		switch (MenuOptions)
		{
		case enManageUsersMenuOptions::eListUsers:
			PrintListUsers();
			PressAnyKey("Manage Users Menu");
			break;
		case enManageUsersMenuOptions::eAddNewUser:
			PrintAddNewUser();
			PressAnyKey("Manage Users Menu");
			break;
		case enManageUsersMenuOptions::eDeleteUser:
			PrintDeleteUser();
			PressAnyKey("Manage Users Menu");
			break;
		case enManageUsersMenuOptions::UpdateUser:
			PrintUpdateUser(); 
			PressAnyKey("Manage Users Menu");
			break;
		case enManageUsersMenuOptions::eFindUser:
			PrintFindUser(); 
			PressAnyKey("Manage Users Menu");
			break;
		}
	} while (MenuOptions != enManageUsersMenuOptions::eMainMenu);
}

/**
 * Converts string vector to user record
 * @param vString Vector containing user data fields
 * @return Populated user structure
 */
stUser ConvertLineToUser(std::vector <std::string> vString)
{
	stUser User;

	User.Username = vString[0];
	User.Password = vString[1];
	User.Permisions = stod(vString[2]);

	return User;
}

/**
 * Loads user data from file
 * @param FileName Path to user data file
 * @return Vector of user records
 */
std::vector <stUser> LoadUserFromFile(std::string FileName = UserFile)
{
	std::fstream MyFile;
	std::vector <stUser> vUsers;

	MyFile.open(FileName, std::ios::in);

	if (MyFile.is_open())
	{
		stUser User;
		std::string Line = "";
		while (getline(MyFile, Line))
		{
			User = ConvertLineToUser(vSplitString(Line));
			vUsers.push_back(User);
		}
		MyFile.close();
	}
	return vUsers;
}

/**
 * Displays header for user list table
 */
void ShowUserHeader()
{
	std::cout << std::string(48, '-') << "\n";
	std::cout
		<< "| " << std::left << std::setw(15) << "User"
		<< "| " << std::setw(10) << "Password"
		<< "| " << std::setw(16) << "Permissions"
		<< "|\n";
	std::cout << std::string(48, '-') << "\n";
}

/**
 * Prints a single user record in tabular format
 * @param User User data to display
 */
void PrintUser(stUser User)
{
	std::cout
		<< "| " << std::left << std::setw(15) << User.Username
		<< "| " << std::setw(10) << User.Password
		<< "| " << std::setw(16) << User.Permisions
		<< "|\n";
}

/**
 * Displays all user records in a table
 */
void PrintListUsers()
{
	system("CLS");
	ShowUserHeader();

	std::vector <stUser> vUser = LoadUserFromFile();

	for (stUser User : vUser)
	{
		PrintUser(User);
	}
	std::cout << std::string(48, '-') << "\n";
}

/**
 * Authenticates user by username and password
 * @param vUser User list to search
 * @param User Output parameter for found user
 * @param Username Username to find
 * @param Password Password to match
 * @return True if credentials match
 */
bool FindUserByUsernamePassword(std::vector <stUser>vUser, stUser& User, std::string Username, std::string Password)
{
	for (stUser U : vUser)
	{
		if ((U.Username == Username) && (U.Password == Password))
		{
			User = U;
			return true;
		}
	}
	return false;
}

/**
 * Finds user by username
 * @param vUser User list to search
 * @param User Output parameter for found user
 * @param Username Username to find
 * @return True if found
 */
bool FindUserByUsername(std::vector <stUser>vUser, stUser& User, std::string Username)
{
	for (stUser& U : vUser)
	{
		if (U.Username == Username)
		{
			User = U;
			return true;
		}
	}
	return false;
}

/**
 * Marks a user record for update/deletion
 * @param vUser User list
 * @param Username Username to mark
 * @return True if successful
 */
bool MarkUserFlag(std::vector <stUser>& vUser, std::string Username)
{
	for (stUser& U : vUser)
	{
		if (U.Username == Username)
		{
			U.MarkUserFlag = true;
			return true;
		}
	}
	return false;
}

/**
 * Gets permission settings for a new/updated user
 * @param User User data with initial values
 * @return Updated user with permissions set
 */
stUser ReadPermissions(stUser User)
{
	char GiveAccess = 'n';
	std::cout << "Do you want to give this user full access: (Y/N): ";
	std::cin >> GiveAccess;

	// Full access shortcut
	if (toupper(GiveAccess) == 'Y') {
		User.Permisions = ALLPERMISSIONS;
		std::cout << "\nFull access granted to this user.\n";
	}

	// Individual permission settings if not full access
	if (User.Permisions != ALLPERMISSIONS) {
		std::cout << "\n== Permission Settings ==\n";
		std::cout << "Answer Y/N for each permission:\n";

		// Show Clients permission
		std::cout << "Grant 'Show Client List' access? (Y/N): ";
		std::cin >> GiveAccess;
		GiveAccess = toupper(GiveAccess);
		if (GiveAccess == 'Y' || GiveAccess == 'y')
			User.Permisions |= READ_SHOW_CLIENT;

		// Add Client permission
		std::cout << "Grant 'Add New Client' access? (Y/N): ";
		std::cin >> GiveAccess;
		GiveAccess = toupper(GiveAccess);
		if (GiveAccess == 'Y' || GiveAccess == 'y')
			User.Permisions |= ADD_NEW_CLIENT;

		// Delete Client permission
		std::cout << "Grant 'Delete Client' access? (Y/N): ";
		std::cin >> GiveAccess;
		GiveAccess = toupper(GiveAccess);
		if (GiveAccess == 'Y')
			User.Permisions |= DELETE_CLIENT;   

		// Update Client permission
		std::cout << "Grant 'Update Client' access? (Y/N): ";
		std::cin >> GiveAccess;
		GiveAccess = toupper(GiveAccess);
		if (GiveAccess == 'Y')
			User.Permisions |= UPDATE_CLIENT;

		// Find Client permission
		std::cout << "Grant 'Find Client' access? (Y/N): ";
		std::cin >> GiveAccess;
		GiveAccess = toupper(GiveAccess);
		if (GiveAccess == 'Y')
			User.Permisions |= FIND_CLIENT;

		// Transactions permission
		std::cout << "Grant 'Transactions' access? (Y/N): ";
		std::cin >> GiveAccess;
		GiveAccess = toupper(GiveAccess);
		if (GiveAccess == 'Y')
			User.Permisions |= TRANSACTIONS_ACCESS;

		// Manage Users permission
		std::cout << "Grant 'Manage Users' access? (Y/N): ";
		std::cin >> GiveAccess;
		GiveAccess = toupper(GiveAccess);
		if (GiveAccess == 'Y')
			User.Permisions |= MANAGE_USERS_ACCESS;

		std::cout << "\nPermissions have been set successfully.\n";
	}

	return User;
}

/**
 * Converts user record to string for file storage
 * @param User User data to convert
 * @param Seperator Field delimiter
 * @return Formatted string
 */
std::string ConvertUserToLine(stUser User, std::string Seperator = "#//#")
{
	return User.Username + Seperator + User.Password +
		Seperator + std::to_string(User.Permisions);
}

/**
 * Gets user data from user input
 * @param vUser Existing users list (for validation)
 * @param SkipUsername Whether to skip username input
 * @return New user record
 */
stUser ReadNewUser(std::vector <stUser> vUser, bool SkipUsername = false)
{
	stUser NewUser;

	if (SkipUsername == false)
	{
		std::cout << "Enter new username: ";
		getline(std::cin >> std::ws, NewUser.Username);
		// Check for duplicate usernames
		for (stUser User : vUser)
		{
			while (NewUser.Username == User.Username)
			{
				std::cout << "This Username [" << NewUser.Username
					<< "] is already exist.\nEnter a different username: ";
				getline(std::cin >> std::ws, NewUser.Username);
			}
		}
	}

	std::cout << "Enter password: ";
	getline(std::cin >> std::ws, NewUser.Password);

	// Set permissions for the new user
	NewUser = ReadPermissions(NewUser);

	return NewUser;
}

/**
 * Appends new user to data file
 * @param NewUser User data to save
 * @param Filename Target file path
 */
void AddNewUserToFile(stUser NewUser, std::string Filename = UserFile)
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::app);
	std::string Line = "";
	if (MyFile.is_open())
	{
		Line = ConvertUserToLine(NewUser);
		MyFile << Line << std::endl;
	}
	MyFile.close();
}

/**
 * Handles the add user screen and workflow
 */
void PrintAddNewUser()
{
	std::vector <stUser> vUser = LoadUserFromFile();
	char AddMore = 'n';
	do
	{
		ShowHeader("Add New User");
		stUser NewUser = ReadNewUser(vUser);
		AddNewUserToFile(NewUser);

		std::cout << "User Added successfully, Do you want to add more Users (Y/N): ";
		std::cin >> AddMore;
	} while (AddMore == 'Y' || AddMore == 'y');
}

/**
 * Saves user data to file, handling updates or deletions
 * @param vUser User list
 * @param Filename Target file path
 * @param NewUser Updated user data (for updates)
 * @param UpdateFile Whether to update or delete records
 */
void SaveUserToFile(std::vector <stUser> vUser, std::string Filename = UserFile,
	stUser NewUser = stUser(), bool UpdateFile = false)
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::out);
	std::string Line;

	if (MyFile.is_open())
        if (MyFile.is_open())
        {
        for (stUser& User : vUser)
        {
        // Skip marked records when deleting
        if (!UpdateFile && User.MarkUserFlag)
        continue;

        // Use NewUser data for marked records during update
        Line = ConvertUserToLine((UpdateFile && User.MarkUserFlag) ? NewUser : User);
        MyFile << Line << std::endl;
        }
        MyFile.close();
        }
}

void PrintUserCard(stUser User)
{
	std::cout << "\n\n";
	std::cout << " User Information\n";
	std::cout << std::string(18, '-') << "\n";
	std::cout << "Username   : " << User.Username;
	std::cout << "\nPassword   : " << User.Password;
	std::cout << "\nPermissions: " << User.Permisions << "\n";
	std::cout << std::string(18, '-') << "\n";
}


/**
 * Handles the delete user screen and workflow
 */
void PrintDeleteUser()
{
	ShowHeader("Delete User");
	std::vector<stUser> vUser = LoadUserFromFile();

	stUser User;
	std::string Username = ReadUsernamePassword("Enter username to delete: ");
	char Answer = 'n';

	// Protect the admin account
	if (Username == "Admin")
	{
		std::cout << "\nThe Admin Account cannot be deleted.\n";
	}
	else if (FindUserByUsername(vUser, User, Username))
	{
		ShowHeader("Delete User");
		PrintUserCard(User);

		std::cout << "\nDo you really want to delete this User (Y/N): ";
		std::cin >> Answer;

		if (Answer == 'Y' || Answer == 'y')
		{
			MarkUserFlag(vUser, Username);
			SaveUserToFile(vUser);

			vUser = LoadUserFromFile();

			std::cout << "The User Deleted successfully.\n";
		}
	}
	else
		std::cout << "This User [" << Username << "] does not exist.\n";
}


/**
 * Handles the find user screen and workflow
 */
void PrintFindUser()
{
	ShowHeader("Find User");
	std::vector<stUser> vUser = LoadUserFromFile();

	stUser User;
	std::string Username = ReadUsernamePassword("Enter username to find: ");

	if (FindUserByUsername(vUser, User, Username))
	{
		ShowHeader("Find User");
		PrintUserCard(User);
	}
	else
		std::cout << "This User [" << Username << "] does not exist.\n";
}

void PrintUpdateUser()
{
	ShowHeader("Update User");

	std::vector<stUser> vUser = LoadUserFromFile();

	stUser User;
	std::string Username = ReadUsernamePassword("Enter username to find: ");

	char Answer = 'n';

	if (FindUserByUsername(vUser, User, Username))
	{
		ShowHeader("UpdateUser");
		PrintUserCard(User);
		
		std::cout << "\n\ndo you want to update this user (Y/N): ";
		std::cin >> Answer;

		if(Answer == 'Y' || Answer == 'y')
		{
			stUser NewUser = ReadNewUser(vUser,true);
			NewUser.Username = Username;

			MarkUserFlag(vUser, Username);
			SaveUserToFile(vUser,UserFile,NewUser,true);

			vUser = LoadUserFromFile();

			std::cout << "The User Updated successfully.\n";
		}

	}
	else
		std::cout << "This User [" << Username << "] does not exist.\n";
}

/**
 * Handles the login screen and user authentication
 */
void Login()
{
	ShowHeader("Login Screen");

	stUser User;
	std::vector <stUser> vUser = LoadUserFromFile();

	std::string Username = ReadUsernamePassword("Enter Username: ");
	std::string Password = ReadUsernamePassword("Enetr Password: ");

	// Validate credentials
	while (!(FindUserByUsernamePassword(vUser, User, Username, Password)))
	{
		system("CLS");
		ShowHeader("Login Screen");
		std::cout << "Invalid Username/Password\n";
		Username = ReadUsernamePassword("Enter Username: ");
		Password = ReadUsernamePassword("Enetr Password: ");
	}

	// Start application with appropriate permissions
	StartMenu(User.Permisions);
}

int main()
{
	Login();
	return 0;
}