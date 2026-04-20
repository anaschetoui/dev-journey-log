/*
Problem #35:

Write a program to read a string then print each word in that string.

Enter Your String: Mohammed Abu-Hadhoud @ProgrammingAdvices

Your string wrords are:

Mohammed
Abu-Hadhoud
@ProgrammingAdvices

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
	string str = "";

	cout << "Enter Your String: ";
	getline(cin, str);

	return str;
}

void PrintEachWordInString(string Str)
{
	cout << "\nYour string wrords are: \n\n";
	
	string delimiter = " ";
	size_t Pos = 0;
	
	string sWord = "";

	while ((Pos = Str.find(delimiter)) != std::string::npos)
	{
		sWord = Str.substr(0, Pos);

		if (sWord != " ")
		{
			cout << sWord << endl;
		}

		Str.erase(0, Pos + delimiter.length());
	}

	if (Str != "")
		cout << Str << endl;
}

int main()
{
	string Str = ReadString();
	
	PrintEachWordInString(Str);
	
	return 0;
}