/*

1
12
123
1234
12345
123456
1234567
12345678
123456789
12345678910


*/

#include <iostream>
using namespace std;



int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << '\n';
	}


	return 0;
}