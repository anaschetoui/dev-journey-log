/*
Problem #31:

Write a program to read a string and read a character then count the character in that string (Match Case or Not)

Enter Your String: Mohammed Abu-Hadhoud Programming Advices

Enter a Character: m

Letter 'm' Count = 4
Letter 'm' Or 'M' Count = 5

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



short CountInsensitiveCount(string &str, char Char,bool MatchCase=true)
{
	
	short Count = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (MatchCase)
		{
			if (str[i] == Char) Count++;
		}

		else if (tolower(str[i]) == tolower(Char)) Count++;
	}

	return Count;
}

int main()
{
	string str = ReadString();
	cout << '\n';
	char Char = ReadChar();

	cout << "\nLetter '" << Char << "' count = " << CountInsensitiveCount(str, Char) << endl;

	Char = tolower(Char);
	cout << "\nLetter \'" << Char << "\' Or \'";

	Char = toupper(Char);
	cout <<Char<<"\' count = " << CountInsensitiveCount(str, Char,false) << endl;

	return 0;
}