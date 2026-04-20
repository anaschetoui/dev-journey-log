/*
Problem #34: 

Write a program to read a string then print all vowels in that string (Vowels are: a, e ,i ,o ,u )

Enter Your String: Mohammed Abu-Hadhoud @ProrgammingAdvices

Vowels in string are: o   a   e   A   u   a   o   u   o   a   i   A   i   e

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

void PrintAllVowels(const string& str)
{
	cout << "\nVowels in string are: ";

	for (char V : str)
		if (IsVowel(V))
			cout << V << "   ";
}


int main()
{
	string str = ReadString();

	PrintAllVowels(str);

	return 0;
}