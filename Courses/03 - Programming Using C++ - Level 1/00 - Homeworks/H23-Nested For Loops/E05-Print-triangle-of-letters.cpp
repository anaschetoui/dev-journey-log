/*

A
AB
ABC
ABCD
ABCDE
ABCDEF

*/

#include <iostream>
using namespace std;



int main()
{
	for (char i = 'A'; i <= 'F'; i++)
	{
		for (char j = 'A'; j <= i; j++)
		{
			cout << j;
		}
		cout << '\n';
	}


	return 0;
}