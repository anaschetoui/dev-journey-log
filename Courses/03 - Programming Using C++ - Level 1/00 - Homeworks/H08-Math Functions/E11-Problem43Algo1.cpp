//Problem 43 --> Algorithms & Problem Solving Level 1
// after finding the results use round and print the final results
#include <iostream>
#include <cmath>

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

    cout << round(Days) << ":" << round(Hours) << ":" << round(Minutes) << ":" << round(TSeconds);

    return 0;
}