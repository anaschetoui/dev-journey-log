#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString(string Message = "Enter a string: ")
{
	string S;
	cout << Message;
	getline(cin,S);
	return S;
}

//void PrintEachWord(string S)
//{
//	string Space = " ";
//	short Pos = 0;
//	string word = "";
//
//	while ((Pos = S.find(Space)) != string::npos)
//	{
//		word = S.substr(0, Pos);
//		if (word != "")
//		{
//			cout << word << endl;
//		}
//		S.erase(0, Pos + Space.length());
//	}
//	if (S != "")
//	{
//		cout << S << endl;
//	}
//
//}

/*void PrintEachWord(string S)
{
	string word = "";
	for (short i = 0; i < S.length(); i++)
	{
		if (S[i] != ' ')
		{
			word += S[i];
		}
		
		if (S[i] == ' ' || (i + 1 == S.length()))
		{
			cout << word << endl;
			word = "";
		}
	}
}
*/

void PrintEachWord(string S)
{
	string Space = " ";
	short pos = 0;
	string word = "";

	while ((pos = S.find(Space)) != string::npos)
	{
		word = S.substr(0, pos);
		if(word!="")
		{
			cout << word << endl;
		}
		S.erase(0,pos + Space.length());
	}

	if (S != "")
	{
		cout << S << endl;
	}
	
}

int main()
{
	string S = ReadString();

	cout << "\nYour String Words are: \n\n";
	PrintEachWord(S);

	return 0;
}