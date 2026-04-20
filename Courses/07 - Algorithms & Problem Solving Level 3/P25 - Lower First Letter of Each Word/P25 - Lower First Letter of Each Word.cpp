/*
Problem #25:

Write a program to read a string then lowercase the first letter of each word in that string

Enter Your String: Mohammed Saqer Abu-Hadhoud

String after conversion:
mohammed saqer abu-Hadhoud

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

string LowerFirstLetterOfEachWord(string str)
{
	bool isFirstLetter = true;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isFirstLetter)
			str[i] = tolower(str[i]);

		isFirstLetter = (str[i] == ' ');
	}

	return str;
}

int main()
{
	string str = ReadString();

	cout << "\nString after conversion:\n" << LowerFirstLetterOfEachWord(str) << endl;

	return 0;
}