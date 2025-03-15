// P21-Generate-Keys

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

short ReadShortPositiveNumber(string Message)
{
	short Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int GetRandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

enum enChar { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

char GetRandomChar(enChar CharType)
{
	switch (CharType)
	{
	case enChar::SmallLetter:
		return char(RandomNumber(97, 122));
	case enChar::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enChar::SpecialChar:
		return char(RandomNumber(33, 47));
	case enChar::Digit:
		return char(RandomNumber(48, 57));
	default:
		return '?';
	}
}

string GenerateWord(enChar enCharType, short WordLength)
{
	string Word = "";

	for (int i = 1; i <= WordLength; i++)
	{
		Word += GetRandomChar(enCharType);
	}

	return Word;

}

string GenerateOneKey()
{
	string Key = "";

	for (int i = 1; i <= 4; i++)
	{
		Key += GenerateWord(enChar::CapitalLetter, 4);

		if (i < 4)
			Key += '-';
	}
	
	return Key;
}

void GenarateKeys(short Number)
{
	for (int i = 1; i <= Number; i++)
	{
		cout << "Key [" << i << "]: " << GenerateOneKey() << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	GenarateKeys(ReadShortPositiveNumber("Enter How Many Keys Do you Want to Generate: "));

	return 0;
}