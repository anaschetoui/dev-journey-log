/*
Problem #29:

Write a program to read a string then count small/capital letters in that string

Enter Your String:
Mohammed Abu-Hadhoud

String Length = 20
Capital Letters Count= 3
Small Letters Count= 15

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


short CountCapitalLetters(string str)
{
	short Counter = 0;
	for (size_t i = 0; i < str.length(); i++)
		if (isupper(str[i]))
			Counter++;

	return Counter;

}

short CountSmallLetters(string str)
{
	int Counter = 0;
	for (size_t i = 0; i < str.length(); i++)
		if (islower(str[i]))
			Counter++;

	return Counter;

}

int main()
{
	string str = ReadString();


	cout << "\nString Length        : " << str.length();
	cout << "\nCapital Letters Count: " << CountCapitalLetters(str);
	cout << "\nSmall Letters Count  : " << CountSmallLetters(str) << endl;

	return 0;
}