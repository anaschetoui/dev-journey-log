/*
**Goal:** Build a program that takes a sentence and provides a detailed breakdown of its characters using the `<cctype>` library.

**Requirements:**
1. **Setup:** Ensure you include the necessary libraries.
2. **Input:** Ask the user to enter a full sentence (use `getline` to capture spaces).
3. **The Analysis Loop:** Use a loop to iterate through every character of the string and count the following:
   - **Uppercase Letters:** Count how many characters return a non-zero value for `isupper()`.
   - **Lowercase Letters:** Count how many characters return a non-zero value for `islower()`.
   - **Digits:** Count how many characters are numbers (0-9) using `isdigit()`.
   - **Punctuation:** Count how many characters are symbols or punctuation marks using `ispunct()`.
4. **Transformation:** - Print the sentence again, but convert every character to **Uppercase** using `toupper()`.
   - Print the sentence again, but convert every character to **Lowercase** using `tolower()`.
5. **Logic Guard:** - Check if the *first character* of the sentence is a Digit.
   - If it is, print: "Warning: Sentence starts with a number!".

*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string ReadString()
{
	string str = "";
	cout << "Enter a sentence: ";
	getline(cin, str);

	return str;
}

void CountChar(string str)
{


	short UpperCase = 0, LowerCase = 0, Digits = 0, Punctuation = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (isupper(str[i]))
			UpperCase++;
		if (islower(str[i]))
			LowerCase++;
		if (isdigit(str[i]))
			Digits++;
		if (ispunct(str[i]))
			Punctuation++;
	}

	cout << "\n\n" << str;
	cout << "\nUpper Case  -> " << UpperCase << "\n";
	cout << "Lower Case  -> " << LowerCase << "\n";
	cout << "Digts       -> " << Digits << "\n";
	cout << "Punctuation -> " << Punctuation << "\n";

}

string ConvertToUpperCase(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}

	return str;
}

string ConvertToLowerCase(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = tolower(str[i]);
	}

	return str;
}

bool CheckFirstChar(string str)
{
	return isdigit(str[0]);
}

int main()
{
	string str = ReadString();
	CountChar(str);
	cout << ConvertToUpperCase(str) << endl;
	cout << ConvertToLowerCase(str) << endl;

	if (CheckFirstChar(str))
		cout << "\nWarning: Sentence starts with a number!\n";

	return 0;
}