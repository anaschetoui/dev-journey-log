// P33-Fill-Array-With-Keys

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumebr(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int RandomNumber(int from, int to)
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

void FillArrayWithKeys(string arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateOneKey();
	}
}

void PrintArray(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array["<<i<<"]: " << arr[i] << endl;
	}
	cout << '\n';
}


int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int arrLength = ReadPositiveNumebr("Enter How Many Keys Do You Want To Generate: ");

	FillArrayWithKeys(arr, arrLength);

	cout << '\n';
	PrintArray(arr, arrLength);
	return 0;
}