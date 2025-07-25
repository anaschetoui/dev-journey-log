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



void StartMenu()
{
	MainMenuScreen();
	enMenuOptions MenuOption = ReadOptions();

}

int main()
{
	StartMenu();
}