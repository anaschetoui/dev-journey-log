/*
Problem #21:

Write a program to print Fibonacci Series of 10.

       [1][1][2][3][5][8][13][21][34][55]
*/

#include <iostream>
using namespace std;

void PrintFibonacciUsingForLoop(int B)
{
    int pvr1 = 1, pvr2 = 0, Febbonacci = 0;
    cout << "1 ";
    for(int i = 2; i<=B;++i)
    {
        Febbonacci = pvr1 + pvr2;
        cout << Febbonacci << ' ';

        pvr2 = pvr1;
        pvr1 = Febbonacci;
    }


}

int main()
{
    PrintFibonacciUsingForLoop(10);

    return 0;
}

