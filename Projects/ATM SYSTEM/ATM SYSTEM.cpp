#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <limits>

const std::string ClientFile = "ClientFile.txt";

void ATM_MainMenu();

struct stClients
{
	std::string AccountNumber;
	std::string PIN_Code ;
	std::string Name;
	std::string Phone;
	double Balance = 0.00;
};

stClients GlobalClient;

enum enMenuOptions
{
	eQuickWithdraw = 1, eNormalWithdraw=2,eDeposit=3,
	eCheckBalance = 4, eLogout=5
};

void ShowHeaderScreen(std::string Message,short N=30)
{
	system("CLS");
	std::cout << std::string(30, '=');
	std::cout << "\n\t" << Message << "\n";
	std::cout << std::string(30, '=') << "\n";
}

std::string ReadAccountNumber(std::string Message= "Enter Account Number: ")
{
	std::string AccountNumber;

	std::cout << Message;
	getline(std::cin>>std::ws,AccountNumber);

	return AccountNumber;
		
}

std::string ReadPINCode(std::string Message = "Enter PIN Code: ")
{
	int PIN = 0;

	std::cout << Message;
	std::cin >> PIN;

	while (std::cin.fail() || std::to_string(PIN).size() != 4) //this because I want user to put pin code from 4 digits & only digits
	{
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "PIN must be a 4-digit number and Digits.\n";
        std::cout << Message;
        std::cin >> PIN;
	}

	return std::to_string(PIN);
}

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

stClients ConvertLineToRecord(std::vector<std::string> vSplit)
{
    stClients Client;
    if (vSplit.size() < 5) {
        // Handle error: not enough fields
        // You could throw, return a default, or log an error
        return Client;
    }

    Client.AccountNumber = vSplit[0];
    Client.PIN_Code = vSplit[1];
    Client.Name = vSplit[2];
    Client.Phone = vSplit[3];
    try {
        Client.Balance = std::stod(vSplit[4]);
    } catch (...) {
        Client.Balance = 0.0; // or handle error as needed
    }

    return Client;
}

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

std::string ConvertRecordToLine(stClients Client, std::string Seperator = "#//#")
{
	return Client.AccountNumber + Seperator +
		Client.PIN_Code + Seperator +
		Client.Name + Seperator +
		Client.Phone + Seperator +
		std::to_string(Client.Balance);
}

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

short GetQuickWithdrawAmount(short Choice)
{
	short arr[8] = { 20,50,100,200,400,600,800,1000 };

	return arr[Choice - 1];
}

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

void ShowQuickWithdrawMenu()
{	
	QuickWithdrawMenuScreen();
	
	short Choice = ReadChoices();
	
	PerformWithdraw(Choice);
}


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

void ShowNormalWithdrawMenu()
{
	ShowHeaderScreen("Normal Withdraw");
	PerformNormalWithdraw();
}

void ShowBalanceMenu()
{
	ShowHeaderScreen("Balance");

	std::cout << "Your Balance is: " << GlobalClient.Balance << "\n\n";
 
}

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

void ShowDepositMenu()
{
	ShowHeaderScreen("Deposit Menu");

	PerformDeposit();
}

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