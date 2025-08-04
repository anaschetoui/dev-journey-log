#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <limits>

const std::string ClientFile = "ClientFile.txt";

struct stClients
{
	std::string AccountNumber;
	std::string PIN_Code ;
	std::string Name;
	std::string Phone;
	double Balance = 0.00;
	bool MarkFlagClient = false;
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
	short PIN = 0;

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
	short pos = 0;
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

std::vector <stClients> SaveDataToFile(std::vector <stClients> vClients, std::string Filename ,
	stClients ModifiedClient )
{
	std::fstream MyFile;
	MyFile.open(Filename, std::ios::out);
	std::string Line;

	if (MyFile.is_open())
	{
		for (stClients Client : vClients)
		{
				Line = ConvertRecordToLine(Client.MarkFlagClient ? ModifiedClient : Client);
				MyFile << Line << std::endl;
		}
		MyFile.close();
	}
	return vClients;
}

void LoginScreen(std::vector <stClients> vClient)
{
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

short WithdrawMoney(short Choice)
{
	short arr[8] = { 20,50,100,200,400,600,800,1000 };

	return arr[Choice - 1];
}


void Withdraw(stClients& Client,short Choice)
{
	short WithdrawAmount = WithdrawMoney(Choice);
	Client.Balance -= WithdrawAmount;
	Client.MarkFlagClient = true;
}

void QuickWithdrawMainMenu()
{
	std::vector <stClients> vClient = LoadDataFromFile();

	QuickWithdrawMenuScreen();
	std::cout << "Your Balance : " << GlobalClient.Balance<<"\n";
	short Choice = ReadChoices();

	Withdraw(GlobalClient, Choice);

	vClient = SaveDataToFile(vClient, ClientFile, GlobalClient);
}

void ATM_MainMenu()
{
    while (true)
    {
        ATM_MenuScreen();
        enMenuOptions Menu = ReadOptions();

        switch (Menu)
        {
        case enMenuOptions::eQuickWithdraw:
            QuickWithdrawMainMenu();
            break;
        // Add other cases as needed
        case enMenuOptions::eLogout:
            return; // Exit the menu loop
        }
    }
}

int main()
{
	std::vector <stClients> vClient = LoadDataFromFile();
	LoginScreen(vClient);
	ATM_MainMenu();

	return 0;
}