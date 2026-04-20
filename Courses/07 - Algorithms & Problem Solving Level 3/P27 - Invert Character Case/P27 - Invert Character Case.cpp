/*
Problem 27: 

Write a program to read a character then invert it's case and print it.

Enter a Character: a

Char after inverting case:
A

*/

#include <iostream>
#include <cctype>
using namespace std;

char ReadChar()
{
	char Char = ' ';
	cout << "Enter a Character: ";
	cin >> Char;

	return Char;
}

char InvertCharacter(char Char)
{
	return islower(Char) ? toupper(Char) : tolower(Char);
}

int main()
{
	char Char = ReadChar();

	cout << "\nChar after inverting case:\n" << InvertCharacter(Char) << endl;

	return 0;
}