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

short CountCapitalLetter(string S)
{
	short count = 0;

	for (short i = 0; i < S.length(); i++)
	{
		if (isupper(S[i]))
		{
			count++;
		}
	}
	return count;
}

short CountSmallLetter(string S)
{
	short count = 0;

	for (short i = 0; i < S.length(); i++)
	{
		if (islower(S[i]))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string S = ReadString("Enter a string: ");
	short LowerCount = CountSmallLetter(S), UpperCount = CountCapitalLetter(S);

	cout << "\nString Length        : " << S.length();
	cout << "\nCapital Letter Count : " << UpperCount;
	cout << "\nSmall Letter Count   : " << LowerCount;

	return 0;
}