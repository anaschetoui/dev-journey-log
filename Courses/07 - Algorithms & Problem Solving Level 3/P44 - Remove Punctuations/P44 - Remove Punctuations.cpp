/*
Problem #44:

Write a program to remove all punctuations from a string:

Original String:
Welcome to Jordan, Jordan is a nice country; it's amazing.

Pauncuations Removed:
Welcome to Jordan Jordan is a nice country its amazing

*/

#include <iostream>
#include <string>
#include <vector>
#include<cctype>
using namespace std;


string RemovePunctuations(string str)
{
	string S = "";
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!ispunct(str[i])) //check every char if there is a punctuation
			S = +str[i];
	}
	return S;
}

int main()
{
	string str = "Welcome to Jordan, Jordan is a nice country; it's amazing.";

	system("cls"); // this only works in windows

	cout << "Original String      | " << str << endl;
	cout << "\nPauncuations Removed | " << RemovePunctuations(str) << endl;

	return 0;
}