#include <iostream>
#include <string>
using namespace std;

string ReadString(string Message)
{
	string S = "";
	cout << Message;
	getline(cin, S);
	return S;
}


void PrintFirstLetterFromEachWord(string S)
{
	for (int i = 0; i < S.length(); i++)
	{
		if (i == 0)
		{
			cout << S.at(i) << endl;
		}
		else if (S.at(i) == ' ')
		{
			cout << S.at(i + 1) << endl;
		}
	}
}

int main()
{
	string S = ReadString("Enter your string: ");

	cout << "\nfirst letter from each word in this string: \n";
	PrintFirstLetterFromEachWord(S);


	return 0;
		
}
