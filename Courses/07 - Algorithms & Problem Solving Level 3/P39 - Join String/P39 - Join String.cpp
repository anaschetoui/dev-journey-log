/*
Problem #39:

Write a program to join vector of strings into a one string with separators

Vector after join:
Mohammed Fadi Ali Maher

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string JoinString(const vector <string> &vString, string Separator )
{
	string S2 = "";
	for (const string& S : vString)
		S2 += S + Separator;

	return (S2.empty()? "":S2.substr(0,S2.length()-Separator.length()));
}

int main()
{
	vector <string> vString = { "Mohammed","Fadi","Ali","Maher" };

	cout << "Vector after join:\n" << JoinString(vString," ") << endl;

	return 0;
}