// P02-Read-Name-and-Print-it
#include <iostream>
#include <string>
using namespace std;

string ReadYourName(string Message)
{
	string Name;
	cout << Message;
	getline(cin, Name);

	return Name;
}

void PrintYourName(string Name)
{
	cout << "Your Name is " << Name;
}

int main()
{
	string Name = ReadYourName("Enter Your Name: ");

	PrintYourName(Name+'\n'); // for +'\n' (for New Line) I just want to try it like this

	return 0;
}

