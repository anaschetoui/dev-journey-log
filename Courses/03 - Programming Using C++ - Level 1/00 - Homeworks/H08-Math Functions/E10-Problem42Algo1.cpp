//Problem 42 --> Algorithms & Problem Solving Level 1
// after finding the results use round and print the final results

#include <iostream>
using namespace std;

int main()
{
    int Days;
    int Hours;
    int Minutes;
    int Seconds;

    cout << "Enter Numbers of Days: ";
    cin >> Days;
    cout << "Enter Numbers of Hours: ";
    cin >> Hours;
    cout << "Enter Numbers of Minutes: ";
    cin >> Minutes;
    cout << "Enter Numbers of Seconds: ";
    cin >> Seconds;

    int TaskDuration = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Seconds;

    cout << round(TaskDuration) << " Seconds";

    return 0;
}