#include <iostream>
#include <string>
#include <cctype>


using namespace std;



string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		
		if(S1[i]!=' ')
		{
			return S1.substr(i, S1.length() - 1);
		}
	}
	return "";	
}

string TrimRight(string S1)
{
	for (short i = S1.length(); i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}
	return "";
}

string Trim(string S1)
{
	return TrimLeft(TrimRight(S1));
}

int main()
{
	string S1 = "      Anas From Morocco        ";

	cout << "String   : " << S1;

	cout << "\n\nTrim Left :"<<TrimLeft(S1);
	cout << "\nRight Left:"<<TrimRight(S1);
	cout << "\nTrim      :" << Trim(S1);

	return 0;

}