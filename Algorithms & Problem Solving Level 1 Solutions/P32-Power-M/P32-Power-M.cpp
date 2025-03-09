// P32-Power-M
#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}



int PowerOfM(int N,int M)
{

	if (M == 0)
		return 1;

	int Power = 1;
	for (int i = 1; i <= M; i++)
	{
		Power *= N;
	}
	return Power;
}

int main()
{
	int N = ReadNumber("Enter Number: ");
	int M = ReadNumber("Enter M: ");

	cout << PowerOfM(N, M)<<'\n';

	return 0;
}