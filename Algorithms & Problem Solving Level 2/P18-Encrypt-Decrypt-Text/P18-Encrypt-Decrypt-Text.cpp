// P18-Encrypt-Decrypt-Text

#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
	string Text="";

	cout << "Enter Your Text: ";
	getline(cin, Text);

	return Text;

}


string EncryptText(string Text, short key)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] += char(key);

	}
	return Text;
}

string DecryptText(string Text, short key)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] -= char(key);

	}
	return Text;
}

int main()
{
	string Text = ReadText();
	const short Key = 2;

	string EncrptedText = EncryptText(Text, Key);
	string DecrptedText = DecryptText(EncrptedText, Key);

	cout << '\n' << EncrptedText << endl;
	cout << DecrptedText << endl;

	return 0;
}