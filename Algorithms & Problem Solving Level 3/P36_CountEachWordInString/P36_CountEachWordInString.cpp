//P36_CountEachWordInString
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString(string  Message = "Enter a string: ")
{
	string S = "";
	cout << Message;
	getline(cin, S);

	return S;
}

short CountEachWord(string S)
{
	string delim = " ";
	short pos = 0;
	short count = 0;

	string word = "";

	while ((pos = S.find(delim)) != string::npos)
	{
		word = S.substr(0, pos);
		if (word != "")
		{
			count++;
		}

		S.erase(0, pos + delim.length());

	}

	if (S != "")
	{
		count++;
	}
	return count;

}

int main()
{

	string S = ReadString();

	cout << "\nThe Number Of Words In Your String is :" << CountEachWord(S) << endl;

	return 0;
}

