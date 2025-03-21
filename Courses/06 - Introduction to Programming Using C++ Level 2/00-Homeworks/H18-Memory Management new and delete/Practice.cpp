#include <iostream>
using namespace std;

int ReadNumber()
{
    int num;
    do
    {
        cout << "Enter a Number: ";
        cin >> num;
    } while (num < 0);
    return num;
}

int main()
{
    int* ptr;

    int Number = ReadNumber();

    int* x;

    if (Number >= 50)
    {
        x = new int;
        *x = 100;
        cout << *x;
        delete x;
        cout << "\nThe memory has been released\n";
    }

    else if (Number < 50)
    {
        x = new int;

        *x = 0;
        cout << *x;
        delete x;
        cout << "\nThe memory has been released\n";
    }





    return 0;
}