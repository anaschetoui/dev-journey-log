/*
Problem #36:

Write a program to read a string then count each word in that string.

Enter Your String: Mohammed Abu-Hadhoud @ProgrammingAdvices

The number of words in your string is: 3

*/

#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string str = "";

	cout << "Enter Your String: ";
	getline(cin, str);

	return str;
}

short CountEachWordInString(string str)
{
	string delimiter = " ";
	size_t Pos = 0;
	string sWord = "";

	short Counter = 0;
	while ((Pos = str.find(delimiter)) != std::string::npos)
	{
		sWord = str.substr(0, Pos);

		if (!sWord.empty())
			Counter++;
		

		str.erase(0,Pos + delimiter.length());
	}
	if (!str.empty())
		Counter++;

	return Counter;
}

int main()
{
	string str = ReadString();

	cout << "\nThe number of words in your string is: " << CountEachWordInString(str) << endl;

	return 0;
}