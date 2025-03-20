/*
Define a struct named stCar containing the following members:
        Brand
        Model
        Price
    -Create an instance of the struct.
    -Create a pointer of type stCar and point it to the address of MyCar1.
Important: Assign values to the car members (Brand, Model, Price) only through the pointer using the arrow operator ->.
Print the car's data to the console using the pointer.
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct stCar {
    string Brand = "";
    string Model = "";
    float Price = 0.00f;
};

int main()
{
    stCar stMyCar, * ptr = &stMyCar;

    ptr->Brand = "TOYOTA";
    ptr->Model = "XYZ2022";
    ptr->Price = 20449.99;

    printf("Car Brand: %s\n", ptr->Brand.c_str());
    printf("Car Model: %s\n", ptr->Model.c_str());
    printf("Car Price: %0.2f\n", ptr->Price);

    return 0;
}