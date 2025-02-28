//Problem 32 --> Algorithms & Problem Solving Level 1
// after finding the results use round and print the final results

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int Num, M;

	cout << "Enter a Number: ";
	cin >> Num;

	cout << "Enter M: ";
	cin >> M;

	int Counter = 0, Power = 1;

	if (Counter < M)
	{
		Power = pow(Num, M);
		Counter++;
	}

	cout << "before round: " << Power;
	cout << "\nAfter round: " << Power;

	return 0;
}