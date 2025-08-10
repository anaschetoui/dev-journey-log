#pragma once
#include <iostream>
#include <vector>


class clsString
{
private:
	std::string _strValue = "";

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

	_strValue UpperFirstLetter()
	{
		_strValue= UpperFirstLetter(_strValue);
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

	_strValue LowerFirsLetter()
	{
		_strValue = LowerFirsLetter(_strValue);
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
	void LowerAllLetter()
	{
		_strValue = LowerAllLetter(_strValue);
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

	void UpperAllLetter()
	{
		_strValue = UpperAllLetter(_strValue);
	}


	static char InvertChar(char x)
	{
		return (isupper(x)) ? tolower(x) : toupper(x);
	}



	static std::string InvertAllletters(std::string str)
	{
		for (size_t i = 0; i < str.length(); i++)
		{
			str[i] = InvertChar(str[i]);
		}

		return str;
	}

	void InvertAllletters()
	{
	  _strValue = InvertAllletters(_strValue);
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

	void CountCapitalLetter()
	{
		_strValue = CountCapitalLetter(_strValue);
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


	void CountSmallLetter()
	{
		_strValue = CountSmallLetter(_strValue);
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


	static bool IsVowel(char x)
	{
		x = tolower(x);
		return ((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u'));
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

	void CountAllVowel()
	{
		_strValue = CountAllVowel(_strValue);
	}

	static short CountEachWord(std::string str)
	{
		std::string delim = " ";
		short pos = 0;
		short count = 0;

		std::string word = "";

		while ((pos = str.find(delim)) != std::string::npos)
		{
			word = str.substr(0, pos);
			if (word != "")
			{
				count++;
			}

			str.erase(0, pos + delim.length());

		}

		if (str != "")
		{
			count++;
		}
		return count;

	}

	short CountEachWord()
	{
		return CountEachWord(_strValue);
	}

	static std::vector<std::string> SplitString(std::string str, std::string Seperator)
	{
		short pos = 0;
		std::string word = "";
		std::vector<std::string> vSplit;
		while ((pos = str.find(Seperator)) != std::string::npos) {
			word = str.substr(0, pos);
			if (word != "") {
				vSplit.push_back(word);
			}
			str.erase(0, pos + Seperator.length());
		}

		if (str != "") {
			vSplit.push_back(str);
		}
		return vSplit;
	}

	static std::string TrimLeft(std::string str)
	{
		for (short i = 0; i < str.length(); i++)
		{

			if (str[i] != ' ')
			{
				return str.substr(i, str.length() - 1);
			}
		}
		return "";
	}

	void TrimLeft()
	{
		_strValue = TrimLeft(_strValue);
	}

	static std::string TrimRight(std::string str)
	{
		for (short i = str.length(); i >= 0; i--)
		{
			if (str[i] != ' ')
			{
				return str.substr(0, i + 1);
			}
		}
		return "";
	}


	void TrimRight()
	{
		_strValue = TrimRight(_strValue);
	}

	static std::string Trim(std::string str)
	{
		return TrimLeft(TrimRight(str));
	}

	void Trim()
	{
		_strValue = Trim(_strValue);
	}


	static std::string JoinString(std::vector <std::string>vString, std::string Sperator)
	{
		std::string S1;

		for (std::string& S : vString)
		{
			S1 = S1 + S + Sperator;

		}
		return S1.substr(0, S1.length() - Sperator.length());

	}

	static std::string JoinString(std::string arr[], short length, std::string Sperator = " ")
	{
		std::string S1 = "";

		for (short i = 0; i < length; i++)
		{
			S1 = S1 + arr[i] + Sperator;

		}
		return S1.substr(0, S1.length() - Sperator.length());
	}

	static std::string ReverseString(std::string S1)
	{
		std::vector <std::string>vString;

		std::string S2 = "";
		vString = SplitString(S1, " ");
		std::vector <std::string>::iterator iter;

		iter = vString.end();
		while (iter != vString.begin())
		{
			--iter;
			S2 += *iter + " ";
		}

		S2 = S2.substr(0, S2.length() - 1);

		return S2;

	}

	void ReverseString()
	{
		_strValue = ReverseString(_strValue);
	}

	static std::string ReplaceWord(std::string S1, std::string Replacefrom, std::string Replaceto)
	{
		short pos = S1.find(Replacefrom);

		while (pos != std::string::npos)
		{
			S1.replace(pos, Replacefrom.length(), Replaceto);
			pos = S1.find(Replacefrom);
		}

		return S1;
	}

	static std::string RemovePunctInString(std::string str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			if (ispunct(str[i]))
			{
				str[i] = str.empty();
			}
		}
		return str;
	}

	void RemovePunctInString()
	{
		_strValue = RemovePunctInString(_strValue);
	}

};