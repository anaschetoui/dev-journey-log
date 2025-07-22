#include <iostream>
#include <string>

using namespace std;

struct stReadData
{
	string AcountNumber = "";
	short PINcode = 0000;
	string Name = "";
	string Phone = "";
	float AcountBalance = 00.00f;
};

stReadData ReadData()
{
	stReadData Data;

	cout << "Enter Account Number: ";
	cin >> Data.AcountNumber;

	do{
		cout << "Enter PIN Code: ";
		cin >> Data.PINcode;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "enter a valid PIN (4 digits): ";
			cin >> Data.PINcode;
		}
	} while (Data.PINcode < 1000 || Data.PINcode>9999);

	cout << "Enter Full Name: ";
	cin.ignore();
	getline(cin, Data.Name);

	cout << "Enter Phone Number: ";
	cin >> Data.Phone;

	cout << "Enter Acount Balance: ";
	cin >> Data.AcountBalance;

	return Data;
}

string JoinData(stReadData Data, string delimter)
{
	
	return Data.AcountNumber + delimter + to_string(Data.PINcode)
		+ delimter + Data.Name + delimter + Data.Phone + delimter +to_string (Data.AcountBalance);	
}

int main()
{
	stReadData Data = ReadData();

	cout << endl << JoinData(Data, "#//#")<<endl;
	return 0;
}