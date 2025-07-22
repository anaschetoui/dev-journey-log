#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>
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

short CountLetterInString(string S,char y)
{
	short count = 0;
	for (short i = 0; i < S.length(); i++)
	{
		if (S[i] == y)
			count++;
	}
	return count;
}

int main()
{
	string S = ReadString();
	cout << endl;
	char y = ReadChar();

	printf("\nLetter \'%c\' count = %d \n", y, CountLetterInString(S, y));


}