/*
Problem #23:

Write a program to read a string then print the first letter of each word in that string

Please enter your string: Mohammed Saqer Abu-Hadhoud @Programming Advices

First Letter of each word in this String:
M
S
A
@
A

*/

#include <iostream>
#include <string>
using namespace std;

void PrintEachLetterOfWord(string Str)
{
	bool isFirstLetter = true;
	for (size_t i = 0; i < Str.length(); i++)
	{
		if (Str[i] != ' ' && isFirstLetter)
		{
			cout << Str[i] << endl;
		}
		
		isFirstLetter = (Str[i] == ' ') ? true : false;
	}
}


int main()
{
	PrintEachLetterOfWord("Mohammed Saqer Abu-Hadhoud @Programming Advices");
	return 0;
}