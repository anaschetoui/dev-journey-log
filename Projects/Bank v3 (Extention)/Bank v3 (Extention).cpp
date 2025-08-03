#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cstdlib>

const std::string ClientFile = "ClientFile.txt";
const std::string UserFile = "UserFile.txt";

void MainMenuScreen();
void TransactionsMenuScreen();
void Login();
void PrintManageUsersMenu();
void PrintListUsers();

const short RAEDUSERS = 1;
const short ADDUSER = 2;
const short DELETEUSER = 4;
const short UPDATEUSER = 8;
const short FINDUSER = 16;
const short TRANSACTONS = 32;
const short ManageUsers = 64;
const short ALLPERMISSIONS = -1;


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
	std::cout << "\t  " << HeaderType << "\n";
	std::cout << "================================\n";
}

enum enMenuOptions
{
	eShowClients = 1, eAddNewClient = 2, eDeleteClient = 3,
	eUpdateClient = 4, eFindClient = 5, eTransactions = 6,
	eManageUsers = 7, eLogout = 8

};

enMenuOptions ReadOptions(std::string Message = "Choose an option (1-8): ")
{
	short Options = 0;
	do {
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
			std::cout << "Invalid Number ,Please enter a valid number (1-8): ";
			std::cin >> Options;
		}
	} while (Options <= 0 || Options > 8);
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
	std::cout << "\t[7] Manage Users.\n";
	std::cout << "\t[8] Logout.\n";
	std::cout << "================================\n";
}

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

stClients ReadClient(std::vector <stClients> vClients, bool SkipAccountNum = false)
{
	stClients NewClient;

	if (SkipAccountNum == false)
	{
		std::cout << "Enter Account number: ";
		getline(std::cin >> std::ws, NewClient.AccountNumber);
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

std::string ConvertRecordToLine(stClients Client, std::string Seperator = "#//#")
{
	return Client.AccountNumber + Seperator +
		Client.PIN_Code + Seperator +
		Client.Name + Seperator +
		Client.Phone + Seperator +
		std::to_string(Client.Balance);
}

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
std::string ReadAccountNumber(std::string Message = "Enter the account Number: ")
{
	std::string AccountNumber;
	std::cout << Message;
	std::cin >> AccountNumber;
	return AccountNumber;
}

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

void MarktoClient(std::vector <stClients>& vClients, std::string AccountNumber)
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

void PrintClientCard(stClients Client)
{
	std::cout << "Account Number : " << Client.AccountNumber << std::endl;
	std::cout << "PIN Code       : " << Client.PIN_Code << std::endl;
	std::cout << "Name           : " << Client.Name << std::endl;
	std::cout << "Phone          : " << Client.Phone << std::endl;
	std::cout << "Balance        : " << Client.Balance << std::endl;
}

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
			if (UpdateFile == true)
			{
				if (Client.MarktoClient == true)
				{
					Line = ConvertRecordToLine(NewClient);
					MyFile << Line << std::endl;
				}
				else
				{
					Line = ConvertRecordToLine(Client);
					MyFile << Line << std::endl;
				}

			}
			else
			{
				if (Client.MarktoClient == false)
				{
					Line = ConvertRecordToLine(Client);
					MyFile << Line << std::endl;
				}
			}
		}
		MyFile.close();
	}
}

void PrintDeleteClientScreen()
{
	HeaderPart("Delete Client");
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
			MarktoClient(vClients, AccountNumber);
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

void PrintFindClientScreen()
{
	HeaderPart("Find Client");
	stClients Client;
	std::vector <stClients> vClients = LoadDataFromFile();
	std::string AccountNumber = ReadAccountNumber();
	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		system("CLS");
		HeaderPart("Find Client");
		PrintClientCard(Client);
	}
	else
	{
		std::cout << "\nClient with Account Number [" << AccountNumber << "] not found.\n";
	}
}


void PrintUpdateClientScreen()
{
	HeaderPart("Update Client");
	stClients Client;
	std::vector <stClients> vClients = LoadDataFromFile();
	char Answer = 'y';
	std::string AccountNumber = ReadAccountNumber("Enter The Account Number: ");
	if (FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		system("CLS");
		HeaderPart("Update Client");
		PrintClientCard(Client);
		std::cout << "Do you want to update this Client (Y/N): ";
		std::cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{
			system("CLS");
			HeaderPart("Update Client");
			stClients NewClient = ReadClient(vClients, true);
			NewClient.AccountNumber = AccountNumber;
			MarktoClient(vClients, AccountNumber);
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

enum enTransactionsMenuOptions
{
	eDeposit = 1, Withdraw = 2,
	eTototalBalances = 3, MainMenu = 4
};

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

void TransactionsMenuScreen()
{
	HeaderPart("Transactions Menu");
	std::cout << "\t[1] Deposit.\n";
	std::cout << "\t[2] Withdraw.\n";
	std::cout << "\t[3] Total Balances.\n";
	std::cout << "\t[4] Main Menu.\n";
	std::cout << "================================\n";

}

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
void SaveDataToFile_DepositWithdraw(std::vector <stClients>& vClients, double DepositWithdrawAmount, std::string Filename, bool Deposit = true)
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::out);
	std::string Line;

	if (MyFile.is_open())
	{
		for (stClients& Client : vClients)
		{
			if (Deposit)
			{
				if (Client.MarktoClient == true)
				{
					Client.Balance += DepositWithdrawAmount;
					Line = ConvertRecordToLine(Client);
					MyFile << Line << std::endl;
				}
				else
				{
					Line = ConvertRecordToLine(Client);
					MyFile << Line << std::endl;
				}
			}
			else
			{
				if (Client.MarktoClient == true)
				{
					Client.Balance -= DepositWithdrawAmount;
					Line = ConvertRecordToLine(Client);
					MyFile << Line << std::endl;
				}
				else
				{
					Line = ConvertRecordToLine(Client);
					MyFile << Line << std::endl;
				}
			}

		}
		MyFile.close();
	}
}

void PrintDepositScreenMenu()
{
	stClients Client;
	std::vector <stClients> vClients = LoadDataFromFile();
	HeaderPart("Deposit Menu");
	std::string AccountNumber = ReadAccountNumber();
	char Answer = 'n';
	while (!FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		HeaderPart("Deposit Menu");
		std::cout << "Client with Account Number [" << AccountNumber << "] not found.\n";
		AccountNumber = ReadAccountNumber("Please Enter an exist client: ");
	}
	HeaderPart("Deposit Menu");
	PrintClientCard(Client);
	std::cout << "\n";
	double DepositAmount = ReadDepositWithdrawNumber();
	std::cout << "Are you sure you want to add this transactions (Y/N): ";
	std::cin >> Answer;
	if (Answer == 'Y' || Answer == 'y')
	{
		MarktoClient(vClients, AccountNumber);
		SaveDataToFile_DepositWithdraw(vClients, DepositAmount, ClientFile);
		vClients = LoadDataFromFile();
		std::cout << "\nDeposit completed successfully,New Balance is : " << Client.Balance + DepositAmount << std::endl;
	}
}

void PrintWithdrawScreenMenu()
{
	std::vector <stClients> vClients = LoadDataFromFile();
	stClients Client;
	HeaderPart("Withdraw Menu");
	std::string AccountNumber = ReadAccountNumber();
	char Answer = 'N';
	while (!FindClientByAccountNumber(vClients, Client, AccountNumber))
	{
		HeaderPart("Withdraw Menu");
		std::cout << "Client with Account Number [" << AccountNumber << "] not found.\n";
		AccountNumber = ReadAccountNumber("Please Enter an exist client: ");
	}

	PrintClientCard(Client);

	double WithdrawAmount = ReadDepositWithdrawNumber("\nPlease Enter Withdraw Amount: ");

	while (WithdrawAmount > Client.Balance)
	{
		std::cout << "Withdraw amount cannot be greater than the current balance: " << Client.Balance;
		WithdrawAmount = ReadDepositWithdrawNumber("\nPlease enter a valid amount: ");
	}
	std::cout << "Are you sure you want to add this transactions (Y/N): ";
	std::cin >> Answer;
	if (Answer == 'Y' || Answer == 'y')
	{
		MarktoClient(vClients, AccountNumber);
		SaveDataToFile_DepositWithdraw(vClients, WithdrawAmount, ClientFile, false);

		vClients = LoadDataFromFile();
		std::cout << "Withdraw completed successfully,New Balance is : " << (Client.Balance - WithdrawAmount) << std::endl;
	}
}

double TotalBalances(std::vector <stClients> vClient)
{
	double Total = 0.00;
	for (stClients Client : vClient)
	{
		Total += Client.Balance;
	}
	return Total;
}

void ShowTotalBalancesTable(stClients Client)
{
	std::cout
		<< "| " << std::left << std::setw(15) << Client.AccountNumber
		<< "| " << std::setw(25) << Client.Name
		<< "| " << std::setw(12) << Client.Balance
		<< "|\n";

}

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
			std::cout << "Press any key to back to Transactions Menu...";
			system("pause>0");
			break;
		case enTransactionsMenuOptions::Withdraw:
			PrintWithdrawScreenMenu();
			std::cout << "Press any key to back to Transactions Menu...";
			system("pause>0");
			break;
		case enTransactionsMenuOptions::eTototalBalances:
			PrintTotalBalancesScreenMenu();
			std::cout << "Press any key to back to Transactions Menu...";
			system("pause>0");
			break;
		}
	} while (eTransactionOptions != enTransactionsMenuOptions::MainMenu);

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
			PrintDeleteClientScreen();
			system("pause");
			break;
		case enMenuOptions::eUpdateClient:
			PrintUpdateClientScreen();
			system("pause");
			break;
		case enMenuOptions::eFindClient:
			PrintFindClientScreen();
			system("pause");
			break;
		case enMenuOptions::eTransactions:
			PrintTransactionsMenu();
			break;
		case enMenuOptions::eManageUsers:
			PrintManageUsersMenu();
			system("pause");
			break;
		}
	} while (MenuOption != enMenuOptions::eLogout);
	system("CLS");
	Login();

}


std::string ReadUsernamePassword(std::string Message,bool IsPassword=false)
{
	std::string UserPass = "";

	std::cout << Message;

	std::cin >> UserPass;

	return UserPass;
}

struct stUser
{
	std::string Username="";
	std::string Password="";
	short Permisions=0;
};

enum enManageUsersMenuOptions
{
	eListUsers = 1, eAddNewUser = 2, eDeleteUser = 3,
	UpdateUser = 4, eFindUser = 5, eMainMenu = 6
};

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

void ManageUsersMenuScreen()
{
	HeaderPart("Manage Users");
	std::cout << "\t[1] List Users.\n";
	std::cout << "\t[2] Add New User.\n";
	std::cout << "\t[3] Delete User.\n";
	std::cout << "\t[4] Update User.\n";
	std::cout << "\t[5] Find User.\n";
	std::cout << "\t[6] Main Menu.\n";
	std::cout << "================================\n";

}

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
			std::cout << "Press any key to back to Manage Users Menu...";
			system("pause>0");
			break;
		case enManageUsersMenuOptions::eAddNewUser:
			//PrintAddNewUser();
			std::cout << "Press any key to back to Manage Users Menu...";
			system("pause>0");
			break;
		case enManageUsersMenuOptions::eDeleteUser:
			//PrintDeleteUser();
			std::cout << "Press any key to back to Manage Users Menu...";
			system("pause>0");
			break;
		case enManageUsersMenuOptions::UpdateUser:
			//PrintUpdateUser();
			std::cout << "Press any key to back to Manage Users Menu...";
			system("pause>0");
		case enManageUsersMenuOptions::eFindUser:
			//PrintFindUser;
			std::cout << "Press any key to back to Manage Users Menu...";
			system("pause>0");
		}
	} while (MenuOptions != enManageUsersMenuOptions::eMainMenu);

}

stUser ConvertLineToUser(std::vector <std::string> vString)
{
	stUser User;

	User.Username = vString[0];
	User.Password = vString[1];
	User.Permisions = stod(vString[2]);
	
	return User;
}

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
void PrintUser(stUser User)
{

	std::cout
		<< "| " << std::left << std::setw(15) << User.Username
		<< "| " << std::setw(10) << User.Password
		<< "| " << std::setw(16) << User.Permisions
		<< "|\n";
}


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


bool FindUserByUsernamePassword(std::vector <stUser>vUser  ,stUser& User, std::string Username, std::string Password)
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



void Login()
{
	HeaderPart("Login Screen");

	stUser User;
	std::vector <stUser> vUser = LoadUserFromFile();

	std::string Username = ReadUsernamePassword("Enter Username: ");
	std::string Password = ReadUsernamePassword("Enetr Password: ",true);
	
	while (!(FindUserByUsernamePassword(vUser, User, Username, Password)))
	{
		system("CLS");
		HeaderPart("Login Screen");
		std::cout << "Invalid Username/Password\n";
		Username = ReadUsernamePassword("Enter Username: ");
		Password = ReadUsernamePassword("Enetr Password: ");
	}

	StartMenu();
}

int main()
{

	Login();

	return 0;
}