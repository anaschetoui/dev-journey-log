#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<cctype>
using namespace std;

class clsString
{
private:
	string _Value;

public:

	clsString()
	{
	}

	clsString(string Value)
	{
		_Value = Value;
	}


	void SetValue(string Value)
	{
		_Value = Value;
	}

	string GetValue()
	{
		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	static void PrintEachLetterOfWord(string Str)
	{
		bool isFirstLetter = true;
		for (size_t i = 0; i < Str.length(); i++)
		{
			if (Str[i] != ' ' && isFirstLetter)
			{
				cout << Str[i] << endl;
			}

			isFirstLetter = (Str[i] == ' ') ? true : false;
		}
	}

	void PrintEachLetterOfWord()
	{
		PrintEachLetterOfWord(_Value);
	}

	static string UpperFirstLetterOfEachWord(string str)
	{
		bool isFirstLetter = true;

		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirstLetter)
				str[i] = toupper(str[i]);

			isFirstLetter = (str[i] == ' ') ? true : false;
		}

		return str;
	}

	string UpperFirstLetterOfEachWord()
	{
		return UpperFirstLetterOfEachWord(_Value);
	}

	static string LowerFirstLetterOfEachWord(string str)
	{
		bool isFirstLetter = true;

		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirstLetter)
				str[i] = tolower(str[i]);

			isFirstLetter = (str[i] == ' ');
		}

		return str;
	}

	string LowerFirstLetterOfEachWord()
	{
		return LowerFirstLetterOfEachWord(_Value);
	}

	static string UPPERCASE(string& str)
	{

		for (size_t i = 0; i < str.length(); i++)
			str[i] = toupper(str[i]);

		return str;
	}

	string  UPPERCASE()
	{
		return UPPERCASE(_Value);
	}

	static string lowercase(string& str)
	{

		for (size_t i = 0; i < str.length(); i++)
			str[i] = tolower(str[i]);


		return str;
	}

	string lowercase()
	{
		return lowercase(_Value);
	}

	static short CountCapitalLetters(string str)
	{
		short Counter = 0;
		for (size_t i = 0; i < str.length(); i++)
			if (isupper(str[i]))
				Counter++;

		return Counter;

	}

	short CountCapitalLetters()
	{
		return CountCapitalLetters(_Value);
	}

	static short CountSmallLetters(string str)
	{
		int Counter = 0;
		for (size_t i = 0; i < str.length(); i++)
			if (islower(str[i]))
				Counter++;

		return Counter;

	}

	short CountSmallLetters()
	{
		return CountSmallLetters(_Value);
	}

	static short CountLettersInString(string& str, char Char)
	{
		short Count = 0;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] == Char)
				Count++;
		}

		return Count;
	}

	short CountLettersInString(char Char)
	{
		return CountLettersInString(_Value, Char);
	}

	static short CountInsensitiveCount(string& str, char Char, bool MatchCase = true)
	{

		short Count = 0;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (MatchCase)
			{
				if (str[i] == Char) Count++;
			}

			else if (tolower(str[i]) == tolower(Char)) Count++;
		}

		return Count;
	}


	short CountInsensitiveCount(char Char, bool MatchCase = true)
	{
		return CountInsensitiveCount(_Value, Char, MatchCase);
	}


	static bool IsVowel(char Char)
	{
		Char = tolower(Char);

		string Vowels = "aeiou";

		for (char V : Vowels)
		{
			if (V == Char)
				return true;
		}
		return false;
	}

	static short CountVowelsInString(const string& str)
	{
		short Count = 0;

		for (char V : str)
			if (IsVowel(V))
				Count++;

		return Count;
	}

	static void PrintAllVowels(const string& str)
	{
		cout << "\nVowels in string are: ";

		for (char V : str)
			if (IsVowel(V))
				cout << V << "   ";
	}

	void PrintAllVowels()
	{
		PrintAllVowels(_Value);
	}

	static short CountEachWordInString(string str)
	{
		string delimiter = " ";
		size_t Pos = 0;
		string sWord = "";

		short Counter = 0;
		while ((Pos = str.find(delimiter)) != std::string::npos)
		{
			sWord = str.substr(0, Pos);

			if (!sWord.empty())
				Counter++;


			str.erase(0, Pos + delimiter.length());
		}
		if (!str.empty())
			Counter++;

		return Counter;
	}

	short CountEachWordInString()
	{
		return CountEachWordInString(_Value);
	}

	static vector <string> vSplitString(string str, string Separator)
	{
		vector <string> vString;

		size_t Pos = 0;
		string sWord = "";

		while ((Pos = str.find(Separator)) != std::string::npos)
		{
			sWord = str.substr(0, Pos);

			if (!sWord.empty())
				vString.push_back(sWord);

			str.erase(0, Pos + Separator.length());
		}

		if (!str.empty()) vString.push_back(str);

		return vString;
	}

	vector <string> vSplitString(string Separator)
	{
		return vSplitString(_Value, Separator);
	}

	static string TrimLeft(string str)
	{
		for (size_t i = 0; i < str.length(); i++)
			if (!(str[i] == ' '))
				return str.substr(i);

		return "";
	}

	string TrimLeft()
	{
		return TrimLeft(_Value);
	}


	static string TrimRight(string str)
	{
		for (int i = str.length() - 1; i >= 0; i--)
			if (str[i] != ' ')
				return str.substr(0, i + 1);

		return "";
	}

	string TrimRight()
	{
		return TrimRight(_Value);
	}

	static string Trim(string str)
	{
		return TrimLeft(TrimRight(str));
	}

	string Trim()
	{
		return Trim(_Value);
	}

	static string JoinString(const vector <string>& vString, string Separator)
	{
		string S2 = "";
		for (const string& S : vString)
			S2 += S + Separator;

		return (S2.empty() ? "" : S2.substr(0, S2.length() - Separator.length()));
	}

	string JoinString(string arr[], short arrlength, string Separator)
	{
		string S2 = "";
		for (size_t i = 0; i < arrlength; i++)
			S2 += arr[i] + Separator;

		return (S2.empty() ? "" : S2.substr(0, S2.length() - Separator.length()));
	}

	static string ReverseString(string str)
	{
		vector <string> vString = vSplitString(str, " ");
		string S = "";

		vector <string>::iterator iter = vString.end();

		while (iter != vString.begin())
		{
			iter--;

			S += *iter + " ";
		}

		return S.substr(0, S.length() - 1);

	}

	string ReverseString()
	{
		return ReverseString(_Value);
	}

	static string ReplaceWords(string Str, string WordToReplace, string ReplaceTo, bool MatchCase = true)
	{
		vector <string> vS = vSplitString(Str, " ");

		for (string& S : vS)
		{
			if (MatchCase)
			{
				if (S == WordToReplace)
					S = ReplaceTo;
			}

			else
			{
				if (UPPERCASE(S) == UPPERCASE(WordToReplace))
					S = ReplaceTo;

			}
		}

		return JoinString(vS, " ");
	}

	string ReplaceWords(string WordToReplace, string ReplaceTo, bool MatchCase = true)
	{
		return ReplaceWords(_Value, WordToReplace, ReplaceTo, MatchCase);
	}


	static string RemovePunctuations(string str)
	{
		string S = "";
		for (size_t i = 0; i < str.length(); i++)
		{
			if (!ispunct(str[i])) //check every char if there is a punctuation
				S = +str[i];
		}
		return S;
	}

	string RemovePunctuations()
	{
		return RemovePunctuations(_Value);
	}




};

