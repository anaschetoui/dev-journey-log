// Problem 32 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

int Power(int Number, int M)
{
	int Counter = 0, Power = 1;

	if (Counter < M)
	{
		Power = pow(Number, M);
		Counter++;
	}

	return Power;
}


int main()
{
	int Number, M;

	cout << "Enter Number: ";
	cin >> Number;

	cout << "Enter M: ";
	cin >> M;


	cout << Power(Number,M)
	return 0;
}