#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stClient
{
	string AcountNumber = "";
	string PINcode = "";
	string Name = "";
	string Phone = "";
	double AcounBalance ;
};

vector<string> SplitString(string S, string delimter = " ") {
	short pos = 0;
	string word = "";
	vector<string> vSplit;
	while ((pos = S.find(delimter)) != string::npos) {
		word = S.substr(0, pos);
		if (word != "") {
			vSplit.push_back(word);
		}
		S.erase(0, pos + delimter.length());
	}

	if (S != "") {
		vSplit.push_back(S);
	}
	return vSplit;
}
stClient toData(string Record,string Sperator)
{
	stClient Data;
	vector<string>vData;
	vData = SplitString(Record, Sperator);

	Data.AcountNumber = vData.at(0);
	Data.PINcode = vData.at(1);
	Data.Name = vData.at(2);
	Data.Phone = vData.at(3);
	Data.AcounBalance = stod(vData.at(4));
	return Data;
}

void PrintData(stClient Client)
{
	cout << "Acount Number : " << Client.AcountNumber << endl;
	cout << "PIN Code      : " << Client.PINcode << endl;
	cout << "Name          : " << Client.Name << endl;
	cout << "Phone         : " << Client.Phone << endl;
	cout << "Acount Balance: " << Client.AcounBalance << endl;
}

int main()
{
	string Record = "A150#//#1234#//#Anas Chetoui#//#07999999#//#5720.000000";

	stClient Client1 = toData(Record, "#//#");
	PrintData(Client1);
	return 0;
}