/*
Problem #28:

Write a program to read a string then invert all its letter's
case and print it.

Enter Your String: mohammed ABU-HADHOUD

String after Inverting All Letters Case:
MOHAMMED abu-hadhoud


*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
	string str = "";

	cout << "Enter Your String: ";
	getline(cin,str);

	return str;
}

char InvertCharacter(char Char)
{
	return islower(Char) ? toupper(Char) : tolower(Char);
}

string InvertAllLettersCase(string& str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = InvertCharacter(str[i]);

	return str;
}

int main()
{
	string str = ReadString();

	cout << "\nString after Inverting All Letters Case:\n" << InvertAllLettersCase(str) << endl;

	return 0;
}