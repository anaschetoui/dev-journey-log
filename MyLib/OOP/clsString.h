#pragma once
#include <iostream>



class clsString
{
private:
	std::string _strValue="";
	char _x=0;
public:

	clsString()
	{
		//this is default constractor

		_strValue = "";
	}

	clsString(std::string strValue)
	{
		_strValue = strValue;


	}


	void setString(std::string str)
	{
		_strValue = str;
	}

	std::string getString()
	{
		return _strValue;
	}

	static void PrintFirstLetterFromEachWord(std::string Str)
	{
		for (size_t i = 0; i < Str.length(); i++)
		{
			if (i == 0)
			{
				std::cout << Str.at(i) << std::endl;
			}
			else if (Str.at(i) == ' ' && (i + 1) < Str.length())
			{
				std::cout << Str.at(i + 1) << std::endl;
			}
		}
	}
	void PrintFirstLetterFromEachWord()
	{
		PrintFirstLetterFromEachWord(_strValue);
	}

	__declspec(property(get = getString, put = setString)) std::string strValue; //This only work in MSVC

	static std::string UpperFirstLetter(std::string str) //static Function
	{
		bool isFirst = true; //by default true cause the we will start with first letter

		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirst)
			{
				str[i] = toupper(str[i]);
			}

			isFirst = (str[i] == ' ') ? true : false;
		}

		return str;

	}

	std::string UpperFirstLetter()
	{
		return UpperFirstLetter(_strValue);
	}

	static std::string LowerFirsLetter(std::string str)
	{
		bool isFirst = true;

		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirst)
			{
				str[i] = tolower(str[i]);
			}
			isFirst = (str[i] == ' ') ? true : false;
		}

		return str;
	}

	std::string LowerFirsLetter()
	{
		return LowerFirsLetter(_strValue);
	}

	static std::string LowerAllLetter(std::string str)
	{
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
			{
				str[i] = tolower(str[i]);
			}

		}
		return str;
	}
	std::string LowerAllLetter()
	{
		return LowerAllLetter(_strValue);
	}


	static std::string UpperAllLetter(std::string str)
	{
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
			{
				str[i] = toupper(str[i]);
			}

		}
		return str;
	}

	std::string UpperAllLetter()
	{
		return UpperAllLetter(_strValue);
	}


	static char InvertChar(char x)
	{
		return (isupper(x)) ? tolower(x) : toupper(x);
	}

	void setChar(char x)
	{
		_x = x;
	}

	char getChar()
	{
		return _x;
	}

	char InvertChar()
	{
		return InvertChar(_x);
	}

	static std::string InvertAllletters(std::string str)
	{
		for (size_t i = 0; i < str.length(); i++)
		{
			str[i] = InvertChar(str[i]);
		}

		return str;
	}

	std::string InvertAllletters()
	{
		return InvertAllletters(_strValue);
	}


	static short CountCapitalLetter(std::string  str)
	{
		short count = 0;

		for (size_t i = 0; i < str.length(); i++)
		{
			if (isupper(str[i]))
			{
				count++;
			}
		}
		return count;
	}

	short CountCapitalLetter()
	{
		return CountCapitalLetter(_strValue);
	}

	static short CountSmallLetter(std::string str)
	{
		short count = 0;

		for (size_t i = 0; i < str.length(); i++)
		{
			if (islower(str[i]))
			{
				count++;
			}
		}
		return count;
	}


	short CountSmallLetter()
	{
		return CountSmallLetter(_strValue);
	}

	static short CountLetterInString(std::string str, char y)
	{
		short count = 0;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] == y)
				count++;
		}
		return count;
	}

	short CountLetterInString()
	{
		return CountLetterInString(_strValue, _x);
	}


	static short MatchCaseCounterLetters(std::string str, char x)
	{
		short Counter = 0;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] == x)
			{

				Counter++;
			}
		}
		return Counter;
	}


	short MatchCaseCounterLetters()
	{
		return MatchCaseCounterLetters(_strValue, _x);
	}

	static bool IsVowel(char x)
	{
		x = tolower(x);
		return ((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u'));
	}

	bool IsVowel()
	{
		return IsVowel(_x);
	}

	static short CountAllVowel(std::string  str)
	{
		short count = 0;
		for (short i = 0; i < str.length(); i++)
		{
			if (IsVowel(str[i]))
			{
				count++;
			}
		}
		return count;
	}

	short CountAllVowel()
	{
		return CountAllVowel(_strValue);
	}


};