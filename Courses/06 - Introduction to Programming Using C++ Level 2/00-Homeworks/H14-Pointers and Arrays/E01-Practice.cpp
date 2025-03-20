/*
1. Define an array of integers.
2. Define a pointer that points to the first element of the array: `int *ptr = arr;`.
3. Use a single `for` loop to print each element in the array using **only the pointer**. For each element, print:
   - Its memory address.
   - Its value using the dereference operator `*`.
4. **Bonus Challenge:** Use the pointer to print the array elements in reverse order (from 500 to 100).

*/

#include <iostream>
using namespace std;



int main()
{
    int arr[5] = { 100, 200, 300, 400, 500 }, * ptr = arr;

    for (int i = 5; i > 0; i--)
        cout << *(ptr + (i - 1)) << " --> " << ptr + (i - 1) << endl;

    return 0;
}