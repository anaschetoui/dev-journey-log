/*
Problem #40: 

Write a program to join array of strings into a one string with separators

Vector after join:
Mohammed Faid Ali Maher

Array after join:
Mohammed Faid Ali Maher

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string JoinString(const vector <string>& vString, string Separator)
{
	string S2 = "";
	for (const string& S : vString)
		S2 += S + Separator;

	return (S2.empty() ? "" : S2.substr(0, S2.length() - Separator.length()));
}

string JoinString(string arr[],short arrlength, string Separator)
{
	string S2 = "";
	for (size_t i = 0; i<arrlength;i++)
		S2 += arr[i] + Separator;

	return (S2.empty() ? "" : S2.substr(0, S2.length() - Separator.length()));
}

int main()
{
	vector <string> vString = { "Mohammed","Fadi","Ali","Maher" };
	string arr[]= { "Mohammed","Fadi","Ali","Maher" };

	cout << "Vector after join:\n" << JoinString(vString, " ") << endl;
	cout << "\nArray  after join:\n" << JoinString(arr,4, " ") << endl;

	return 0;
}