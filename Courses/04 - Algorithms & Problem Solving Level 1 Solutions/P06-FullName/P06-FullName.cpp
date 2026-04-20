// P05-FullName

#include <iostream>
using namespace std;

struct stFullName
{
	string FirstName = "";
	string LastName = "";
};


stFullName ReadFullName()
{
	stFullName FullName;

	cout << "Enter Your First Name: ";
	cin >> FullName.FirstName;

	cout << "Enter Your Last Name: ";
	cin >> FullName.LastName;

	return FullName;
}



string GetFullName(stFullName FullName)
{
	 
	return  FullName.FirstName + ' ' + FullName.LastName;
}

void PrintFullName(string FullName)
{
	cout << '\n' << FullName << '\n';
}

int main()
{
	PrintFullName(GetFullName(ReadFullName()));

	return 0;
}
