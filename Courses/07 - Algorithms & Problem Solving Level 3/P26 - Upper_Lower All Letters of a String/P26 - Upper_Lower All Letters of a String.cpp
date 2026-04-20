/*
Problem #26:

Write a program to read a string then upper all letters , then lower all letters , and print them.


Enter Your String: mohammed Abu-Hadhoud

String after Upper:
MOHAMMED ABU-HADHOUD

String after Lower:
mohammed abu-hadhoud
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

string UPPERCASE(string &str)
{

	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);

	return str;
}

string lowercase(string &str)
{

	for (size_t i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
		

	return str;
}

int main()
{
	string str = ReadString();

	cout << "\nString after Upper:\n" << UPPERCASE(str) << endl;

	cout << "\n\nString after lower:\n" << lowercase(str) << endl;

	return 0;
}