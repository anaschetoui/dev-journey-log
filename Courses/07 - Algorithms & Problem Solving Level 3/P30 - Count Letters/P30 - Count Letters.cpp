/*
Problem #30:

Write a program to read a string and read a character then count the character in that string

Enter Your String: Mohammed Abu-Hadhoud

Enter a Character: m

Letter 'm' Count = 2

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

char ReadChar()
{
	char Char = ' ';

	cout << "Enter a Character: ";
	cin >> Char;

	return Char;
}

short CountLettersInString(string &str, char Char)
{
	short Count = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == Char)
			Count++;
	}

	return Count;
}

int main()
{
	string str = ReadString();
	cout << '\n';
	char Char = ReadChar();

	cout << "\nLetter \'" << Char << "\' count = " << CountLettersInString(str, Char) << endl;

	return 0;
}