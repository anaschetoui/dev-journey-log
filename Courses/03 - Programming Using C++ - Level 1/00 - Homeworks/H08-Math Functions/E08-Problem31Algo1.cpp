//Problem 31 --> Algorithms & Problem Solving Level 1
// after finding the results use round and print the final results

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int Num;

	cout << "Enter a Number: ";
	cin >> Num;

	int Pow2 = pow(Num, 2);
	int Pow3 = pow(Num, 3);
	int Pow4 = pow(Num, 4);

	cout << round(Pow2) << endl;
	cout << round(Pow3) << endl;
	cout << round(Pow4) << endl;


	return 0;
}