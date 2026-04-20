// Problem #32 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int Num = 0, M = 0, Power = 1;

	cout << "Enter Numebr: ";
	cin >> Num;

	cout << "Enter M: ";
	cin >> M;

	for (int i = 1; i <= M; i++)
	{
		Power *= Num;
	}

	cout << Power;

	return 0;
}