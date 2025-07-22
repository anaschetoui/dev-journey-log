#include <iostream>
using namespace std;

void FibonacciSeries(short Numberloop)
{
	short Prv1 = 1, Prv2 = 0;
	short Fib = 0;
	
	cout << "1   ";

	for (short i = 2; i <= Numberloop; i++)
	{
		
		Fib = Prv1 + Prv2;
		cout << Fib<<"   ";
		Prv2 = Prv1;
		Prv1 = Fib;
	}
}

int main()
{
	FibonacciSeries(10);

	return 0;
}