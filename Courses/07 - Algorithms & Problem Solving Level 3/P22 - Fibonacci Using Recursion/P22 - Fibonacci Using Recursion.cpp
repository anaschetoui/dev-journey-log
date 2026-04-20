/*
Problem #22:

Write a program to print Fibonacci Series of 10 Using Recursion.

       [1][1][2][3][5][8][13][21][34][55]
*/

#include <iostream>
using namespace std;

void PrintFibonacciUsingRecursion(int Base, int pvr1=1, int pvr2=0)
{

    if (Base >= 2)
    {

        int FabbNumber = pvr1 + pvr2;
        cout << FabbNumber << ' ';

        PrintFibonacciUsingRecursion(Base - 1, FabbNumber, pvr1);
    }

}

int main()
{
    cout << "1 ";
    PrintFibonacciUsingRecursion(10);

    return 0;
}

