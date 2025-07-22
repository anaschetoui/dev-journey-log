#include <iostream>
#include <string>

std::string ReplaceWord(std::string S1, std::string Replacefrom,std::string Replaceto)
{
	short pos = S1.find(Replacefrom);

	while (pos != std::string::npos)
	{
		S1.replace(pos, Replacefrom.length(), Replaceto);
		pos = S1.find(Replacefrom);
	}

	return S1;	
}

int main()
{
	
	std::string S1 = "I'm Anas from Morocco. Morocco is the best country in the world";
	
	std::cout << "The Orignal is: " << S1 << std::endl;
	
	std::cout << "The Replace is: "<<ReplaceWord(S1, "Morocco", "USA");


	return 0;

	
}