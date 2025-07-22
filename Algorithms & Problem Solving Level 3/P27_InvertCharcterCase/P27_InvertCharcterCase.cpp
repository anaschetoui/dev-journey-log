#include <iostream>
#include <cctype>
using namespace std;

char ReadChar(string Message)
{
	char x = 65;
	cout << Message;
	cin >> x;
	return x;
}

char InvertChar(char x)
{
	return (isupper(x)) ? tolower(x) : toupper(x);
}

int main()
{
	char x = 65;
	x=InvertChar(ReadChar("Enter a Charcter: "));
	cout << "\nCharacter after invert case: " << x << endl;

	return 0;
}