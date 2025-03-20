/*
Declare a void pointer.

    Declare three variables: int i = 5;, float f = 10.5;, and char c = 'A';.

    Make the pointer point to the int variable, then print its value using static_cast<int*>.

    Reassign the same pointer to point to the float variable and print its value.

    Reassign the pointer to the char variable and print its value
*/

#include <iostream>

using namespace std;



int main()
{
    void* ptr;

    int i = 5;
    float f = 10.5;
    char c = 'A';

    ptr = &i;

    cout << *(static_cast<int*>(ptr)) << endl;

    ptr = &f;

    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = &c;

    cout << *(static_cast<char*>(ptr)) << endl;
    return 0;
}