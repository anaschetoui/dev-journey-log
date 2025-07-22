#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(string Message)
{
	string S;
	cout << Message;
	getline(cin, S);

	return S;
}

string LowerAllLetter(string S)
{
	for (short i = 0; i < S.length(); i++)
	{
		if (S[i] != ' ')
		{
			S[i] = tolower(S[i]);
		}

	}
	return S;
}

string UpperAllLetter(string S)
{
	for (short i = 0; i < S.length(); i++)
	{
		if (S[i] != ' ')
		{
			S[i] = toupper(S[i]);
		}

	}
	return S;
}

int  main()
{
	string S = ReadString("Enter a string: ");

	S = LowerAllLetter(S);
	cout << " \nLower:\n" << S << endl;

	S = UpperAllLetter(S);
	cout << " \nUpper:\n" << S<<endl;

	return 0;
}