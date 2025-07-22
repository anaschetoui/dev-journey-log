#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string S;
	cout << "Enter a string: ";
	getline(cin, S);

	return S;
}

char ReadChar()
{
	char x = 65;
	cout << "Enter a charcter: ";
	cin >> x;

	return x;
}

char InvertLetter(char y)
{
	return (islower(y)) ? toupper(y) : tolower(y);
}

short CountSmallCapitalCharacter(string S, char x, bool Matchcase=true)
{
	short count = 0;
	for (short i = 0; i < S.length(); i++)
	{
		if (Matchcase)
		{
			if (S[i] == x)
			{
				count++;
			}
		}
		else
		{
			if (toupper(S[i]) == toupper(x))
			{
				count++;
			}
		}
	}
	return count;
}

int main()
{
	string S = ReadString();
	char x = ReadChar();

	cout << "Letter \'" << x << "\' count: " << CountSmallCapitalCharacter(S, x)<<endl;
	cout << "Letter \'" << x << "\' or \'" << InvertLetter(x) << "\' count : "
		<<CountSmallCapitalCharacter(S,x,false) << endl;


	return 0;
}