#include <iostream>
#include <string>
using namespace std;

string ReplaceWord(string S1, string Replacefrom, string Replaceto)
{

	short pos = 0;
	pos =S1.find(Replacefrom);
	string S2 = S1;
	while (pos != string::npos)
	{
		
		S1.erase(pos, (S1.length() - pos));
		S1 += (S1.substr(pos, (S1.length() - pos)) = Replaceto);
		pos = S1.find(Replacefrom);
	}
	
	return S2;
}




int main()
{
	string S1 = "Welcome to Morocco, is the best country in the world.";

	cout<<ReplaceWord(S1, "Morocco", "China");
	return 0;
}