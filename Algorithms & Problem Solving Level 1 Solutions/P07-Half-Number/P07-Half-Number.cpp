// P07-Half-Number

#include <iostream>
using namespace std;

float ReadNumber()
{
    float Number = 0.00f;
    
    do{
        cout << "Enter a Positive Number: ";
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float HalfNumber(float Number)
{
    return Number / 2;
}

void PrintHalfNumber(float Number)
{
    cout << "Half Number of " << Number << " is " << HalfNumber(Number);
}

int main()
{
    PrintHalfNumber(ReadNumber());

    return 0;
}


