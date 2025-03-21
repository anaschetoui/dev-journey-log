#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

short ReadShortNumber(string Message)
{
    short Num;
    do
    {
        cout << Message;
        cin >> Num;
        cin.ignore();
    } while (Num <= 0);
    return Num;
}

void FillTasks(string* ptr, short Length)
{
    system("CLS");
    cout << "=======Enter Your Tasks=======\n";
    for (int i = 0; i <= Length - 1; i++)
    {
        printf("Task #%02d: ", i + 1);
        getline(cin, ptr[i]);

    }
}
void PrintTasks(string* ptr, short Length)
{
    system("CLS");
    cout << "======Your Daily Tasks======\n";

    for (int i = 0; i <= Length - 1; i++)
    {
        printf("Task #%02d --> ", i + 1);
        cout << ptr[i] << endl;
    }
    cout << "============================\n";
}

int main()
{

    int Length = ReadShortNumber("Enter How Many Daily Tasks: ");


    string* ptr = new string[Length];



    FillTasks(ptr, Length);
    PrintTasks(ptr, Length);

    delete[] ptr;
    return 0;
}