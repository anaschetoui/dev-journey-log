#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector <string>vString, string Sperator = " ")
{
	string S1;

	for (string& S : vString)
	{
		S1 =S1+ S + Sperator;

	}
	return S1.substr(0, S1.length() - Sperator.length());
	
}

int main()
{
	vector <string>vString = { "Ayoub","Anas","Jamal","Nour-eddine" };

	cout << "vector after join: \n" << JoinString(vString, "-");
		
	system("pause>0");
}