/*
AA
AB
AC
AD
-
-
-
ZZ
*/

#include <iostream>
using namespace std;



int main()
{
	for (char i = 'A'; i <= 'Z'; i++)
	{
		for (char j = 'A'; j <= 'Z'; j++)
		{
			cout << i << j << endl;
		}
	}

	return 0;
}