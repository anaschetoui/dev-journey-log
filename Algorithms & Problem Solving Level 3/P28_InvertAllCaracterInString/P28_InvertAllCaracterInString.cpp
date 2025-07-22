#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(string Message)
{
	cout << Message;
	string S = "";
	getline(cin, S);

	return S;
}

char InvertChar(char x)
{
	return (isupper(x)) ? tolower(x) : toupper(x);
}


string InvertAllletters(string S)
{
	for (short i = 0; i < S.length(); i++)
	{
		S[i] = InvertChar(S[i]);
	}

	return S;
}

int main()
{
	string S = ReadString("Enter a string: ");

	S=InvertAllletters(S);
	cout << "\nString after inverting all letters\n"<<S<<endl;

	return 0;
}