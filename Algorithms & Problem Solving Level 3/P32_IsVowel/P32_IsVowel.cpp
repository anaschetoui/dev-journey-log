#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char ReadChar(string Message)
{
	char x = 65;
	cout << Message;
	cin >> x;
	return x;
}

bool IsVowel(char x)
{
	const char vowel[5] = { 'a','e','i','o','u'};
	for (short i = 0; i < 5; i++)
	{
		if (vowel[i] == tolower(x))
		return true;
	}
	return false;
}

int main()
{
	char x=ReadChar("Enter a char: ");

	(IsVowel(x)) ? cout << "YES Letter \'" << x << "\' is vowel." : cout << "NO Letter \'" << x << "\' isn't vowel.";

	return 0;
}