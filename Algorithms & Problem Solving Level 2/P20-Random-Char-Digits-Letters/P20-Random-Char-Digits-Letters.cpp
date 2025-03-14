// P20-Random-SmallLetter-CapitalLetter-SpecialChar-and-Digit-in-Order

#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

enum enChar { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

int RandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

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

int main()
{
	srand((unsigned)time(NULL));

	cout << "\nThis is a Random      Small Letter: " << GetRandomChar(enChar::SmallLetter);
	cout << "\nThis is a Random    Capital Letter: " << GetRandomChar(enChar::CapitalLetter);
	cout << "\nThis is a Random Special Character: " << GetRandomChar(enChar::SpecialChar);
	cout << "\nThis is a Random             Digit: " << GetRandomChar(enChar::Digit) << '\n';
	

	return 0;
}