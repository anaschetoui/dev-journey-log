/*
Problem #41: 

Write a program to read string and reverse its words.

Enter Your String: Mohammed Abu-Hadhoud I'm From Jordan

String after reversing words:
Jordan From I'm Abu-Hadhoud Mohammed

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
	string str;

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

string MyReverseString(string str)
{
	vector <string> vString = vSplitString(str, " ");
	string S = "";

	

	while(vString.size()>0)
	{
		S += vString.back()+" ";
		vString.pop_back();
	}

	return S.substr(0, S.length() - 1);

} 

string ReverseString(string str)
{
	vector <string> vString = vSplitString(str, " ");
	string S = "";

	vector <string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		iter--;

		S += *iter + " ";
	}

	return S.substr(0, S.length() - 1);

}

int main()
{
	string str = ReadString();


	cout << "\nString after reversing words: \n";
	cout << MyReverseString(str) << endl;

	return 0;
}