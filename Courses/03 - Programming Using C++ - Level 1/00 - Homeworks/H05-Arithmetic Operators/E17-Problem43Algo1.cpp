// Problem #42 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
    const int SecondsToDay = 24 * 60 * 60;
    const int SecondsToHour = 60 * 60;
    const int SecondsToMinute = 60;

    unsigned  Seconds;

    cout << "Enter Seconds: ";
    cin >> Seconds;

    int Days = Seconds / SecondsToDay;
    int Reminder = Seconds % SecondsToDay;
    int Hours = Reminder / SecondsToHour;
    Reminder = Reminder % SecondsToHour;
    int Minutes = Reminder / SecondsToMinute;
    Reminder = Reminder % SecondsToMinute;
    int TSeconds = Reminder;

    cout << Days << ":" << Hours << ":" << Minutes << ":" << TSeconds;

    return 0;
}