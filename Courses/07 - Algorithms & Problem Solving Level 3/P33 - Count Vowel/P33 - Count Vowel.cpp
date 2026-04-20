/*
Problem #33:

Write a program to read a string then count all vowels in that string (Vowels are: a, e ,i ,o ,u )

Enter Your String: Mohammed Abu-Hadhoud Programming Advices

Number of vowels is: 14

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
	string str;

	cout << "Enter Your String: ";
	getline(cin, str);

	return str;
}

bool IsVowel(char Char)
{
	Char = tolower(Char);

	string Vowels = "aeiou";

	for (char V : Vowels)
	{
		if (V == Char)
			return true;
	}
	return false;
}

short CountVowelsInString(const string &str)
{
	short Count = 0;

	for (char V : str)
		if (IsVowel(V))
			Count++;

	return Count;
}


int main()
{
	string str = ReadString();

	cout << "\nNumber Of Vowels is: " << CountVowelsInString(str) << endl;

	return 0;
}