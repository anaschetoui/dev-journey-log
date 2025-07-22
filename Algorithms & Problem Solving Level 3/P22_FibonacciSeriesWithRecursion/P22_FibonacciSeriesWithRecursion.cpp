#include <iostream>
using namespace std;

void PrintFibonacciSeries(short Number, short Prv1, short Prv2)
{

	short Fib = 0;

	if (Number > 0)
	{
		Fib=Prv1+Prv2;
		Prv2 = Prv1;
		Prv1 = Fib;

		cout << Fib << "  ";

		PrintFibonacciSeries(Number - 1, Prv1, Prv2);
	}


}

int main()
{
	PrintFibonacciSeries(10, 0, 1);

	return 0;
}
