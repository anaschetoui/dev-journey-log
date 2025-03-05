/*

12345678910
123456789
12345678
1234567
123456
12345
1234
123
12
1


*/

#include <iostream>
using namespace std;



int main()
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << '\n';
	}


	return 0;
}