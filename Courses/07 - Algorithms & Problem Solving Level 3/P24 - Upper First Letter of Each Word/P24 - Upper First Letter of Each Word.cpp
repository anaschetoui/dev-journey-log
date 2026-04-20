/*
Problem #24:

Write a program to read a string then uppercase the first letter of each word in that string

Enter Your String: mohammed saqer abu-Hadhoud

String after conversion:
Mohammed Saqer Abu-Hadhoud

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
	string Str = "";
	cout << "Enter Your String: ";
	getline(cin, Str);

	return Str;
}

string UpperFirstLetterOfEachWord(string str)
{
	bool isFirstLetter = true;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isFirstLetter)
			str[i] = toupper(str[i]);

		isFirstLetter = (str[i] == ' ') ? true : false;
	}

	return str;
}

int main()
{
	string str = ReadString();

	cout << "\nString after conversion:\n" << UpperFirstLetterOfEachWord(str) << endl;

	return 0;
}