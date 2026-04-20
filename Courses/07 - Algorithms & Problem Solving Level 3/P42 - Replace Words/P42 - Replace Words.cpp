/*
Problem #42:

Write a program to replace words in string:

Origial String
Welcome to Jordan , Jordan is a nice country

String After Replace:
Welcome to USA , USA is a nice country

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString(string Message)
{
	string str = "";

	cout << Message;
	getline(cin, str);

	return str;
}



string ReplaceWords(string str , string WordToReplace, string ReplaceTo)
{
	short pos = str.find(WordToReplace);

	while (pos != string::npos)
	{
		str = str.replace(pos, WordToReplace.length(), ReplaceTo);
		pos = str.find(WordToReplace,pos+ReplaceTo.length());
	}
	return str;
}

int main()
{
	string Str = ReadString("Enter Your String: "), WordToReplace = ReadString("Enter the word you want to change: "),
		ReplaceTo = ReadString("Enter the Replce word: ");

	cout << "\nOriginal String     | " << Str << endl;
	cout << "String After Replace| " << ReplaceWords(Str, WordToReplace, ReplaceTo) << endl;

	return 0;
}