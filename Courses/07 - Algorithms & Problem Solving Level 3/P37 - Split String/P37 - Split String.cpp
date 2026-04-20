/* 
Problem #37:

Write a program to read a string then make a function to split each word in vector.

Enter Your String: Mohammed Abu-Hadhoud @ProgrammingAdvices

Tokens = 3
Mohammed
Abu-Hadhoud
@ProgrammingAdvices

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
	string str = "";

	cout << "Enter Your String: ";
	getline(cin, str);

	return str;
}

vector <string> vSplitString(string str, string Separator)
{
	vector <string> vString;

	size_t Pos = 0;
	string sWord = "";

	while ((Pos = str.find(Separator)) != std::string::npos)
	{
		sWord = str.substr(0, Pos);

		if (!sWord.empty())
			vString.push_back(sWord);

		str.erase(0, Pos + Separator.length());
	}

	if (!str.empty()) vString.push_back(str);

	return vString;
}


int main()
{
	string str = ReadString();
	vector <string> vString = vSplitString(str, " ");

	cout << "\n";

	for (const string& S : vString) //[const] for read only -- [&] for read directly not copy each time
	{
		cout << S << endl;
	}

	return 0;
}