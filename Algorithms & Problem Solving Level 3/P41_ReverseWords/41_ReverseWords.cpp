#include <iostream>
#include <string>
#include <vector>

std::string ReadString(std::string Message = "Enter a string: ")
{
	std::string S1 = "";

	std::cout << Message;
	getline(std::cin,S1) ;

	return S1;
}


std::vector <std::string> SplitWords(std::string S1, std::string delimter = " ")
{
	std::string word = "";
	short pos = 0;
	std::vector <std::string> vSplitString;

	while ((pos = S1.find(delimter)) != std::string::npos)
	{
		word = S1.substr(0, pos);
		if (word != "")
		{
			vSplitString.push_back(word);
		}
		S1.erase(0, pos + delimter.length());
	}
	if (S1 != "") {
		vSplitString.push_back(S1);
	}


	return vSplitString;
}

std::string ReverseString(std::string S1)
{
	std::vector <std::string>vString;
		
	std::string S2 = "";
	vString = SplitWords(S1);
	std::vector <std::string>::iterator iter;

	iter = vString.end();
	while (iter != vString.begin())
	{
		--iter;
		S2+= *iter + " ";
	}

	S2=S2.substr(0, S2.length() - 1);

	return S2;
	
}

int main()
{
	std::string S1 = ReadString();
	std::cout << "Vector after Reversing: ";
	std::cout<<ReverseString(S1);
	std::cout << std::endl;
	return 0;
}