/* #39 Call by Reference: Using pointers | Multiply And Swap

Write a function named MultiplyAndSwap that takes two pointers of type int.
Inside the function:
Multiply the first value by 10.
Multiply the second value by 20.
Swap the two new values .

*/

#include <iostream>
using namespace std;

void MultiplyAndSwap(int* x, int* y)
{
    *x *= 10;
    *y *= 20;

    int Temp = *x;
    *x = *y;
    *y = Temp;

}

int main()
{
    int x = 5, y = 10;

    MultiplyAndSwap(&x,&y);

    cout << "This x --> "<<x << endl;
    cout << "This y --> "<<y << endl;

    return 0;
}