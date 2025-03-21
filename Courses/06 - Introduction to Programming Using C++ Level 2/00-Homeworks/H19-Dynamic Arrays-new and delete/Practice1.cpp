/*
Write a program that asks the user for the number of students.
Dynamically allocate an array to store their grades (as float).
Use a loop to enter the grades, then calculate and print the average grade.
Finally, release the memory.
*/

#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
    int num;
    do
    {
        cout << Message;
        cin >> num;
    } while (num <= 0);
    return num;
}

int main()
{

    int Num = ReadNumber("Enter How Many Students: ");

    float Sum = 0, Avg = 0;

    float* ptr = new float[Num];

    for (int i = 0; i < Num; i++)
    {
        cout << "Enter Grade For Student #" << i + 1 << ": ";
        cin >> ptr[i]; // or *(ptr+i) is the same.
        Sum += ptr[i];
    }

    Avg = Sum / Num;

    cout << "\n\n==================\n";
    cout << "Average = " << Avg;
    cout << "\n==================\n\n";

    delete[] ptr;

    return 0;
}