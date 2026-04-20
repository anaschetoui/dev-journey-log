/*
Problem #32:

Write a program to read a character the check if it is a vowel or not (Vowels are: a, e ,i ,o ,u )

Enter a Character: a 

YES Letter 'a' is vowel

*/

#include <iostream>
#include <cctype>
using namespace std;

char ReadChar()
{
	char Char = ' ';

	do
	{
		cout << "Enter a Character: ";
		cin >> Char;
	} while ((Char < 65 || Char > 90) && (Char < 97 || Char >122));

	return Char;
}

bool IsVowel(char Char)
{
	
	string Vowels = "aeiou";
	Char = tolower(Char);
	for (char V : Vowels)
	{
		if (Char == V)
			return true;
	}

	return false;	
}


int main()
{
	char Char = ReadChar();

	IsVowel(Char) ? cout << "\nYES Letter \'" << Char << "\' is a vowel.\n" : cout << "\nNO Letter \'" << Char << "\' is not a vowel.\n";

	return 0;
}