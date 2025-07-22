#include <iostream>
#include <string>
#include <cctype>
using namespace std;


string RemovePunctInString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (ispunct(S1[i]))
		{
			S1[i]=S1.empty();
		}
	}
	return S1;
}

int main()
{
	string S1 = "Welcome to VsCode, vscode: is the Best IDE.";
	cout << "The original String: " << S1 << endl;
	cout << "The changed  String: " << RemovePunctInString(S1);

	return 0;
}