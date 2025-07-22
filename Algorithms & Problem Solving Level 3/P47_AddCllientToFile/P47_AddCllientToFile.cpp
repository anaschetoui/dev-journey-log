#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct stData {
	string AcountNumber = "";
	string PINcode = "1234";
	string Name = "";
	string Phone = "";
	double AcountBalance = 0;
};

string DataToRecord(stData Client, string Sperator = "#//#")
{
	string Record ;
	Record += Sperator + Client.AcountNumber + Sperator;
	Record += Client.PINcode + Sperator;
	Record += Client.Name + Sperator;
	Record += Client.Phone + Sperator;
	Record += to_string(Client.AcountBalance) + Sperator;

	return Record;
}

stData ClientRecord()
{
	stData Client1;
	char AddNew = 'N';
		cout << "Adding New Client: \n\n";
		cout << "Enter Account Number: ";
		cin.ignore();
		getline(cin, Client1.AcountNumber);
		cout << "Enter PINCode: ";
		getline(cin, Client1.PINcode);
		cout << "Enter Name: ";
		getline(cin, Client1.Name);
		cout << "Enter Phone: ";
		getline(cin, Client1.Phone);
		cout << "Enter Acount Balance: ";
		cin >> Client1.AcountBalance;
	return Client1;
}


void SaveRecordToFile(string FileName)
{
	char AddNew = 'N';
	do
	{
		system("cls");
		stData Client1 = ClientRecord();
		string Record = DataToRecord(Client1);
		fstream MyFile;
		MyFile.open(FileName, ios::app);

		if(MyFile.is_open())
		{
			MyFile << Record << endl;
			MyFile.close();
		}
		cout << "\n\nClient Added Successfully, Do You Want To Add More Clients: ";
		cin >> AddNew;
	} while (AddNew == 'Y' || AddNew == 'y');
	
}


int main()
{
	
	SaveRecordToFile("MyFile.txt");

	return 0;
}