/*
Create a program that manages "Store Items" using everything you learned.

    Struct: Define stItem with Name (string), Price (float), and ID (int).

    Arrays & Pointers: Create an array of 3 items. Use a pointer to fill their data using the arrow operator ->.

    Call by Pointer: Write a function ApplyDiscount(stItem* ptr) that reduces the price by 10%.

    Void Pointer Task: Create a generic function PrintGeneric(void* ptr, string type) that uses static_cast to print either an int ID or a float Price.

    Pointer Arithmetic: Print the memory address of each item in the array using pointer addition.
*/

#include <iostream>
using namespace std;

struct stItem {
    string Product = "";
    float Price = 0.00f;
    int ID = 0;
};

void ApplyDiscount(stItem* ptr, short index = 0)
{
    float Discount = (ptr + index)->Price * 0.1;

    ((ptr + index)->Price -= Discount);
}

void PrintGeneric(void* ptr, string type)
{
    if (type == "float")
        cout << *(static_cast<float*>(ptr)) << endl;
    else if (type == "int")
        cout << *(static_cast<int*>(ptr)) << endl;
}

int main()
{
    stItem arr[3], * ptr = arr;

    //arr[0]
    ptr->Product = "Keyboard";
    ptr->Price = 55.99;
    ptr->ID = 10001;

    //arr[1]
    (ptr + 1)->Product = "Mouse";
    (ptr + 1)->Price = 49.99;
    (ptr + 1)->ID = 10002;

    //arr[2]
    (ptr + 2)->Product = "Headset";
    (ptr + 2)->Price = 29.99;
    (ptr + 2)->ID = 10003;


    cout << "=====Price Discount %10 =====\n";
    cout << ptr->Price << " --> ";
    ApplyDiscount(arr);
    cout << ptr->Price;
    cout << endl << (ptr + 1)->Price << " --> ";
    ApplyDiscount(arr, 1);
    cout << (ptr + 1)->Price;
    cout << endl << (ptr + 2)->Price << " --> ";
    ApplyDiscount(arr, 2);
    cout << (ptr + 2)->Price;
    cout << endl << "==============================\n\n";

    int Num = 500;

    void* ptr2 = &Num;

    PrintGeneric(ptr2, "int");

    cout << "\n=======Array Addresses======\n";
    cout << "[0] --> " << ptr << endl;
    cout << "[1] --> " << ptr + 1 << endl;
    cout << "[2] --> " << ptr + 2 << endl;
    cout << "============================\n";

    return 0;
}