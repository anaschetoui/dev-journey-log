#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector <string> vString, string Sperator = " ")
{
	string S1 = "";

	for (string &S : vString)
	{
		S1 = S1 + S + Sperator;
	}
	return S1.substr(0, S1.length() - Sperator.length());
}

string JoinString(string arr[100], short length, string Sperator = " ")
{
	string S1 = "";

	for (short i = 0; i < length; i++)
	{
		S1 = S1 + arr[i] + Sperator;

	}
	return S1.substr(0, S1.length() - Sperator.length());
}

int main()
{
	string arr[4] = { "Anas","Ayoub","Asmae","Hayatam" };
	vector <string> vString = { "Anas","Ayoub","Asmae","Haytam" };

	cout << "Vector after join: \n" << JoinString(vString, "-") << endl << endl;
	cout << "Array after  join: \n" << JoinString(arr, 4, "-");

	return 0;
}