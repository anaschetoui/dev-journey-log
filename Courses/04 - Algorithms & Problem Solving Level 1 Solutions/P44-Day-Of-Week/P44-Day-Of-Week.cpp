// P44-Day-Of-Week


#include <iostream>
using namespace std;
enum enDayOfWeek {
	Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7
};

enDayOfWeek ReadDay()
{
	int Day = 0;

	do
	{
		cout << "Enter a Day (1-7): ";
		cin >> Day;
	} while (Day < 1 || Day >7);

	return enDayOfWeek(Day);
}

string DayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Monday:
		return "Monday";
	case enDayOfWeek::Tuesday:
		return "Tuesday";
	case enDayOfWeek::Wednesday:
		return "Wednesday";
	case enDayOfWeek::Thursday:
		return "Thursday";
	case enDayOfWeek::Friday:
		return "Friday";
	case enDayOfWeek::Saturday:
		return "Saturday";
	case enDayOfWeek::Sunday:
		return "Sunday";
	default :
		return "";
	}
}

int main()
{
	enDayOfWeek Day = ReadDay();

	cout << "Today is " << DayOfWeek(Day);

	return 0;
}