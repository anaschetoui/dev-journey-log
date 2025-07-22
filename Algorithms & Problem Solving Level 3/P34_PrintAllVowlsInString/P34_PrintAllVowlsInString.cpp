#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(string Message = "Enter a string: ")
{
	string S = "";
	cout << Message;
	getline(cin, S);

	return S;
}

bool IsVowel(char x)
{
	x = tolower(x);
	return ((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u'));
}

void PrintAllVowls(string S)
{
	cout << "Vowels in string are: ";
	for (short i = 0; i<S.length(); i++)
	{
		if (IsVowel(S[i]))
		{
			 cout<<S[i] << "  ";
		}
		
	}
	
}

int main()
{
	string S = ReadString();

	PrintAllVowls(S);
	return 0;
}