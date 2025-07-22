#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(string Message="Enter a string: ")
{
	string S = "";
	cout << Message;
	getline(cin, S);

	return S;
}
bool isVowel(char x)
{
	x = tolower(x);
	return ((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u'));
}

short CountAllVowel(string S)
{
	short count = 0;	
	for (short i = 0; i < S.length();i++)
	{
		if (isVowel(S[i]))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string S = ReadString();
	
	cout << "Number Of Vowels is: " << CountAllVowel(S)<<endl;
	return 0;
}