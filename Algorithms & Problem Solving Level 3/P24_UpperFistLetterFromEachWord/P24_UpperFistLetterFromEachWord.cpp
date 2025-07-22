#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(string Message)
{
	string S = "";
	cout << Message;
	getline(cin, S);

	return S;
}

 string UpperFirstLetter(string S)
{
	 bool isFirst = true;

	for (short i = 0; i < S.length(); i++)
	{
		if (S[i] != ' ' && isFirst)
		{
			S[i] = toupper(S[i]);
		}

		isFirst = (S[i] == ' ') ? true : false;
	}

	return S;
	
}

int main()
{
	string S = ReadString("Enter a string: ");


	S=UpperFirstLetter(S);
	cout << "\nString after conversion\n" << S << endl;
	

	return 0;
}