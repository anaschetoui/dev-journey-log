/*
Problem #43:

Write a program to replace words in string using custom function:

Original String:
Welcome to Jordan, Jordan is a nice country

Replace with match case:
Welcome to Jordan, Jordan is a nice country

Replace with dont match case:
Welcome to USA, USA is a nice country

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

string JoinString(const vector <string>& vString, string Separator)
{
	string S2 = "";
	for (const string& S : vString)
		S2 += S + Separator;

	return (S2.empty() ? "" : S2.substr(0, S2.length() - Separator.length()));
}

string UPPERCASE(string str)
{

	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);

	return str;
}

string ReplaceWords(string Str, string WordToReplace, string ReplaceTo, bool MatchCase = true)
{
	vector <string> vS = vSplitString(Str, " ");

	for (string& S : vS)
	{
		if (MatchCase)
		{
			if (S == WordToReplace)
				S = ReplaceTo;
		}

		else
		{
			if (UPPERCASE(S) == UPPERCASE(WordToReplace))
				S = ReplaceTo;

		}
	}

	return JoinString(vS, " ");
}

int main()
{
	string Str = "Welcome to Jordan , Jordan is a nice country", WordToReplace ="Jordan",
		ReplaceTo = "Morocco";

	cout << "\nOriginal String              | " << Str << endl;
	cout << "Replace with match case      | " << ReplaceWords(Str, WordToReplace, ReplaceTo) << endl;
	cout << "Replace with dont match case | " << ReplaceWords(Str, WordToReplace, ReplaceTo,false) << endl;

	return 0;
}
