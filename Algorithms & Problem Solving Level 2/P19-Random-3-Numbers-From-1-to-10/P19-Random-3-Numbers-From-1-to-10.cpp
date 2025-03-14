// P19-Random-3-Numbers-From-1-to-10

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int from,int to)
{
	return rand() % (to-from+1)+from;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNumber(1,3);
	return 0;
}