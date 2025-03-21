/* ### Exercise 1: Professional Employees System
**Requirements:**
1. Create a struct `stEmployee` containing:
   - `FullName`
   - `Salary`
   - `Department`
2. In the `main` function:
   - Ask the user How many employees.
   - Allocate a dynamic array of `stEmployee` in the Heap.
3. Create a function `ReadEmployeesData` to fill the array.
4. Create a function `PrintEmployeesReport` to display the data in a table-like format.
5. Create a function `FindTotalSalaries` that calculates the sum of all salaries using **Pointer Arithmetic** .
6. **Memory Management:** Delete the array and set the pointer to `nullptr`.

*/
#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
using namespace std;

struct stEmployee
{
    string FullName = "";
    float Salary = 0.00f;
    string Department = "";
};

int ReadNumber(string Message)
{
    int Num = 0;
    do
    {
        cout << Message;
        cin >> Num;
        cin.ignore();
    } while (Num <= 0);
    return Num;
}

void ReadEmployeesData(stEmployee* ptr, int Length)
{
    system("cls");
    for (int i = 0; i <= Length - 1; i++)
    {
        printf("Employee [%02d]\n\n", i + 1);
        cout << "Enter Full Name: ";
        getline(cin, ptr[i].FullName);

        cout << "Enter Salary: ";
        cin >> (ptr + i)->Salary; // ptr+i & ptr[i] --> are the same
        cin.ignore();

        cout << "Enter Department: ";
        getline(cin, ptr[i].Department);
        cout << "\n\n";

    }
}

void PrintEmployeesReport(stEmployee* ptr, int Length)
{
    system("cls");

    cout << string(59, '-') << '\n';
    cout << right
        << " " << setw(4)
        << "|"
        << left
        << setw(20) << "Full Name"
        << "|"
        << setw(23) << "Department"
        << "|"
        << setw(8) << "Salary"
        << "|\n";
    cout << string(59, '-') << '\n';

    for (int i = 0; i <= Length - 1; i++)
    {
        cout << right
            << "#" << i + 1 << setw(3)
            << "|"
            << left
            << setw(20) << ptr[i].FullName
            << "|"
            << setw(23) << ptr[i].Department
            << "|"
            << setw(8) << right << (ptr + i)->Salary
            << "|\n";
        cout << string(59, '-') << '\n';
    }
}

float FindTotalSalaries(stEmployee* ptr, int Length)
{
    float Sum = 0.00f;

    for (int i = 0; i <= Length - 1; i++)
        Sum += (ptr + i)->Salary;

    return Sum;
}

int main()
{
    int NumberOfEmployees = ReadNumber("How many employees do you want to add: ");

    stEmployee* ptr = nullptr; //set ptr usig 'nullptr'

    ptr = new stEmployee[NumberOfEmployees];

    ReadEmployeesData(ptr, NumberOfEmployees);
    PrintEmployeesReport(ptr, NumberOfEmployees);

    cout << "\n\n\t====================================\n";
    cout << "\t\tTotal Saleries -> " << FindTotalSalaries(ptr, NumberOfEmployees);
    cout << "\n\t====================================\n";

    delete[] ptr; //realase Memory

    return 0;
}