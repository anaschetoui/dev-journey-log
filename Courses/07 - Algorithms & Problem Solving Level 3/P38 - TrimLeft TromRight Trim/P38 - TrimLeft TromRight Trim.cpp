/*
Problem #38:

Write a program to read a string then Trim Left, Right , All

String     =     Mohammed Abu-Hahdoud      

Trim Left  = Mohammed Abu-Hahdoud
Trim Right =     Mohammed Abu-Hahdoud
Trim       = Mohammed Abu-Hahdoud

*/

#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string str="";

	cout << "Enter Your Strng: ";
	getline(cin, str);

	return str;
}


string TrimLeft(string str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (!(str[i] == ' '))
			return str.substr(i);

	return "";
}

string TrimRight(string str)
{
	for (int i = str.length() - 1; i >= 0; i--)
		if (str[i] != ' ')
			return str.substr(0, i+1);

	return "";
}

string Trim(string str)
{
	return TrimLeft(TrimRight(str));
}

int main()
{
	string Str = ReadString();

	cout << "String     : |" << Str << "|" << endl;
	cout << "Trim Left  : |" << TrimLeft(Str) << "|" << endl;
	cout << "Trim Right : |" << TrimRight(Str) << "|" << endl;
	cout << "Trim       : |" << Trim(Str) << "|" << endl;

	return 0;
}