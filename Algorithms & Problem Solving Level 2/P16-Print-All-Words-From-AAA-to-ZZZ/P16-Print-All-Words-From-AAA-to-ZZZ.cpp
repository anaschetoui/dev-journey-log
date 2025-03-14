// P16-Print-All-Words-From-AAA-to-ZZZ

#include <iostream>
using namespace std;

void PrintAllWordsFromAAAToZZZ()
{

	for (int i = 65; i <= 90; i++)
	{
	

		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				cout << char(i) << char(j) << char(k) << endl;
			}
		}
		
	}
}

int main()
{
	PrintAllWordsFromAAAToZZZ();

	return 0;
}