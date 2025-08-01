#pragma once

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

// Forward declarations for required structs
struct stDate;
struct stYearCaluclation;
struct stPeriod;

struct stDate
{
    short Day;
    short Month;
    short Year;
};

struct stYearCaluclation
{
    int Days;
    int Hours;
    int Minutes;
    int Seconds;
};

struct stPeriod
{
    stDate Start;
    stDate End;
};

enum enCompareDate
{
    BeforeDate = -1, EqualDate = 0, AfterDate = 1
};

// Function declarations
int ReadYear(std::string Message = "Enter a Year : ");
short ReadMonth(std::string Message = "Enter a Month : ");
bool IsLeapYear(short Year);
short DayOfWeekOrder(const stDate& date);
short ReadDay(short Year, short Month, std::string Message = "Enter a Day : ");
stDate ReadDate();
short NumberOfDayInMonth(short Month, short Year);
std::string DayName(short NumberOfday);
bool IsTheWeekend(short DayPosition);
stDate IncreaseDate(stDate& date);
short HowManyDaysInThisYear(short Day, short Month, short Year);
stDate CalculateVactaionsDays(const stDate& Date1, short VacationDays);
std::string MonthName(short MonthNumber);
bool IsDate1LessThanDate2(stDate Date1, stDate Date2);
bool IsDate1EqualDate2(stDate Date1, stDate Date2);
short CompareDate(stDate Date1, stDate Date2);
inline bool IsDayWithinPeriod(const stPeriod& Period1, const stDate& DateToCheck);
bool IsOverlapPeriods(stPeriod Period1, stPeriod Period2);

// Only one version for each function to avoid ambiguity
stDate IncreaseDateByOneDay(stDate& date);
stDate IncreaseDateByXDays(stDate& date, short x = 10);
stDate IncreaseDateByOneWeek(stDate& date);
stDate IncreaseDateByXWeeks(stDate& date, short x = 10);
stDate IncreaseDateByOneMonth(stDate& date);
stDate IncreaseDateByXMonths(stDate& date, short x = 5);
stDate IncreaseDateByOneYear(stDate& date);
stDate IncreaseDateByXYears(stDate& date, short x = 10);
stDate IncreaseDateByXYearsFaster(stDate& date, short x = 10);
stDate IncreaseDateByOneDecade(stDate& date);
stDate IncreaseDateByXDecades(stDate& date, short x = 10);
stDate IncreaseDateByXDecadesFaster(stDate& date, short x = 10);
stDate IncreaseDateByOneCentury(stDate& date);
stDate IncreaseDateByOneMillennium(stDate& date);

stYearCaluclation YearCaluclation(short Year);
short NumberOfHoursInMonth(short Month, short Year);
short NumberOfMinutesInMonth(short Month, short Year);
int NumberOfSecondsInMonth(short Month, short Year);
void PrintCalendar(short Month, short Year);

// Function implementations
int ReadYear(std::string Message)
{
    int Year = 0;
    std::cout << Message;
    std::cin >> Year;
    while ((std::cin.fail() || Year <= 0) || (std::to_string(Year).size() > 4) || Year > 2999)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid Number/Year ,Enter a positive Number: ";
        std::cin >> Year;
    }
    return Year;
}

short ReadMonth(std::string Message)
{
    short Month = 0;
    std::cout << Message;
    std::cin >> Month;
    while (std::cin.fail() || (Month <= 0 || Month > 12))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid Number/Month ,Enter a positive Number: ";
        std::cin >> Month;
    }
    return Month;
}

bool IsLeapYear(short Year)
{
    return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a = (14 - Month) / 12;
    short y = Year - a;
    short m = Month + 12 * a - 2;
    short d = (Day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    return d;
}

short DayOfWeekOrder(const stDate& date)
{
    return DayOfWeekOrder(date.Day, date.Month, date.Year);
}

short ReadDay(short Year, short Month, std::string Message)
{
    short Day = 0;
    short DaysInMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (Month == 2 && IsLeapYear(Year))
    {
        DaysInMonth[2] = 29;
    }
    std::cout << Message;
    std::cin >> Day;
    while (std::cin.fail() || Day <= 0 || Day > DaysInMonth[Month])
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid Day, Enter a valid day for this month/year:  ";
        std::cin >> Day;
    }
    return Day;
}

std::string MonthName(short MonthNumber)
{
    std::string Month[13] = { "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    return Month[MonthNumber];
}

stDate ReadDate()
{
    stDate date;
    date.Year = static_cast<short>(ReadYear());
    date.Month = ReadMonth();
    date.Day = ReadDay(date.Year, date.Month);
    return date;
}

stPeriod ReadPeriod()
{
    stPeriod period;
    std::cout << "Enter Start Date:\n";
    period.Start = ReadDate();
    std::cout << "Enter End Date:\n";
    period.End = ReadDate();
    return period;
}

short NumberOfDayInMonth(short Month, short Year)
{
    short DayInMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (Month == 2 && IsLeapYear(Year))
    {
        DayInMonth[2] = 29;
    }
    return DayInMonth[Month];
}

std::string DayName(short NumberOfday)
{
    std::string Day[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
    if (NumberOfday < 0 || NumberOfday > 6)
        return "Invalid";
    return Day[NumberOfday];
}

bool IsTheWeekend(short DayPosition)
{
    return (DayPosition == 0 || DayPosition == 6);
}

stDate IncreaseDate(stDate& date)
{
    if (date.Day == NumberOfDayInMonth(date.Month, date.Year) && date.Month == 12)
    {
        date.Day = 1;
        date.Month = 1;
        date.Year++;
    }
    else if (date.Day == NumberOfDayInMonth(date.Month, date.Year))
    {
        date.Day = 1;
        date.Month++;
    }
    else
    {
        date.Day++;
    }
    return date;
}

short HowManyDaysInThisYear(short Day, short Month, short Year)
{
    short NumberDaysInYear = 0;
    for (short i = 1; i < Month; i++)
    {
        NumberDaysInYear += NumberOfDayInMonth(i, Year);
    }
    NumberDaysInYear += Day;
    return NumberDaysInYear;
}

short HowManyDaysInThisYear(stDate Date)
{
    return  HowManyDaysInThisYear(Date.Day, Date.Month, Date.Year);
}

stDate CalculateVactaionsDays(const stDate& Date1, short VacationDays)
{
    stDate Date2 = Date1;
    while (VacationDays > 0)
    {
        IncreaseDate(Date2);
        if (!IsTheWeekend(DayOfWeekOrder(Date2)))
        {
            VacationDays--;
        }
    }
    return Date2;
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day);
}

bool IsDate1LessThanDate2(stDate Date1, stDate Date2)
{
    if (Date1.Year < Date2.Year)
        return true;
    if (Date1.Year > Date2.Year)
        return false;
    if (Date1.Month < Date2.Month)
        return true;
    if (Date1.Month > Date2.Month)
        return false;
    if (Date1.Day < Date2.Day)
        return true;
    return false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
    if (Date1.Year > Date2.Year)
        return true;
    if (Date1.Year < Date2.Year)
        return false;
    if (Date1.Month > Date2.Month)
        return true;
    if (Date1.Month < Date2.Month)
        return false;
    return Date1.Day > Date2.Day;
}

// Only reference version for all IncreaseDateBy* functions
stDate IncreaseDateByOneDay(stDate& date)
{
    if (date.Day == NumberOfDayInMonth(date.Month, date.Year) && date.Month == 12)
    {
        date.Day = 1;
        date.Month = 1;
        date.Year++;
    }
    else if (date.Day == NumberOfDayInMonth(date.Month, date.Year))
    {
        date.Day = 1;
        date.Month++;
    }
    else
        date.Day++;
    return date;
}

stDate IncreaseDateByXDays(stDate& date, short x)
{
    for (short i = 0; i < x; i++)
    {
        IncreaseDateByOneDay(date);
    }
    return date;
}

stDate IncreaseDateByOneWeek(stDate& date)
{
    for (short i = 0; i < 7; i++)
    {
        IncreaseDateByOneDay(date);
    }
    return date;
}

stDate IncreaseDateByXWeeks(stDate& date, short x)
{
    for (short i = 0; i < x; i++)
    {
        IncreaseDateByOneWeek(date);
    }
    return date;
}

stDate IncreaseDateByOneMonth(stDate& date)
{
    short daysInCurrentMonth = NumberOfDayInMonth(date.Month, date.Year);
    for (short i = 0; i < daysInCurrentMonth; i++)
    {
        IncreaseDateByOneDay(date);
    }
    return date;
}

stDate IncreaseDateByXMonths(stDate& date, short x)
{
    for (short i = 0; i < x; i++)
        IncreaseDateByOneMonth(date);
    return date;
}

stDate IncreaseDateByOneYear(stDate& date)
{
    if (date.Month == 2 && date.Day == 29)
    {
        date.Year++;
        if (!IsLeapYear(date.Year))
        {
            date.Day = 28;
        }
    }
    else
    {
        date.Year++;
    }
    return date;
}

stDate IncreaseDateByXYears(stDate& date, short x)
{
    for (short i = 0; i < x; i++)
    {
        IncreaseDateByOneYear(date);
    }
    return date;
}

stDate IncreaseDateByXYearsFaster(stDate& date, short x)
{
    date.Year += x;
    // If Feb 29, adjust for leap year
    if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
        date.Day = 28;
    return date;
}

stDate IncreaseDateByOneDecade(stDate& date)
{
    return IncreaseDateByXYears(date, 10);
}

stDate IncreaseDateByXDecades(stDate& date, short x)
{
    return IncreaseDateByXYears(date, x * 10);
}

stDate IncreaseDateByXDecadesFaster(stDate& date, short x)
{
    return IncreaseDateByXYearsFaster(date, x * 10);
}

stDate IncreaseDateByOneCentury(stDate& date)
{
    return IncreaseDateByXDecades(date, 10);
}

stDate IncreaseDateByOneMillennium(stDate& date)
{
    return IncreaseDateByXDecades(date, 100);
}

stYearCaluclation YearCaluclation(short Year)
{
    stYearCaluclation YearCalcul;
    if (IsLeapYear(Year))
    {
        YearCalcul.Days = 366;
        YearCalcul.Hours = YearCalcul.Days * 24;
        YearCalcul.Minutes = YearCalcul.Hours * 60;
        YearCalcul.Seconds = YearCalcul.Minutes * 60;
    }
    else
    {
        YearCalcul.Days = 365;
        YearCalcul.Hours = YearCalcul.Days * 24;
        YearCalcul.Minutes = YearCalcul.Hours * 60;
        YearCalcul.Seconds = YearCalcul.Minutes * 60;
    }
    return YearCalcul;
}

short NumberOfHoursInMonth(short Month, short Year)
{
    return NumberOfDayInMonth(Month, Year) * 24;
}

short NumberOfMinutesInMonth(short Month, short Year)
{
    return NumberOfHoursInMonth(Month, Year) * 60;
}

int NumberOfSecondsInMonth(short Month, short Year)
{
    return NumberOfMinutesInMonth(Month, Year) * 60;
}

void PrintCalendar(short Month, short Year)
{
    short NumberOfDay = NumberOfDayInMonth(Month, Year);
    short DayPos = DayOfWeekOrder(1, Month, Year);
    std::cout << '\n';
    short Counter = 0;
    for (Counter = 0; Counter < DayPos; Counter++)
    {
        std::cout << "     ";
    }
    for (short i = 1; i <= NumberOfDay; i++)
    {
        std::cout << std::setw(5) << i;
        if (++Counter == 7)
        {
            Counter = 0;
            std::cout << '\n';
        }
    }
    std::cout << "\n" << std::string(36, '_') << "\n";
}

short CompareDate(stDate Date1, stDate Date2)
{
    // Compares two dates and returns:
    // -1 if Date1 is before Date2
    //  0 if Date1 is equal to Date2
    //  1 if Date1 is after Date2
    return (IsDate1LessThanDate2(Date1, Date2)) ? BeforeDate :
        ((IsDate1EqualDate2(Date1, Date2)) ? EqualDate : AfterDate);
}

bool IsOverlapPeriods(stPeriod Period1, stPeriod Period2)
{
    if (IsDate1LessThanDate2(Period2.End, Period1.Start) || IsDate1AfterDate2(Period2.Start, Period1.End))
    {
        return false;
    }
    return true;
}

// Checks if DateToCheck is strictly within the period (exclusive of start and end)
inline bool IsDayWithinPeriod(const stPeriod& Period1, const stDate& DateToCheck)
{
    return IsDate1AfterDate2(DateToCheck, Period1.Start) && IsDate1LessThanDate2(DateToCheck, Period1.End);
}

short PeriodLengthInDays(stPeriod Period1, bool IncludeEndDay = false)
{

    short LengthDays = 0;
    IncludeEndDay ? LengthDays++ : LengthDays = 0;
    return LengthDays += HowManyDaysInThisYear(Period1.End) - HowManyDaysInThisYear(Period1.Start);
    
}
// Returns the number of days between two dates (inclusive of start and end if needed)
inline int DaysBetweenDates(const stDate& Date1, const stDate& Date2)
{
    // Ensure d1 <= d2
    stDate d1 = Date1;
    stDate d2 = Date2;
    int sign = 1;
    if (IsDate1AfterDate2(d1, d2))
    {
        stDate temp = d1;
        d1 = d2;
        d2 = temp;
        sign = -1;
    }

    int days = 0;
    stDate temp = d1;
    while (!IsDate1EqualDate2(temp, d2))
    {
        IncreaseDateByOneDay(temp);
        days++;
    }
    return days * sign;
}
short OverlapCountDay(stPeriod Period1, stPeriod Period2)
{
    short Counter = 0;

    if (!(IsOverlapPeriods(Period1, Period2)))
        return 0;


    stDate OverlapStart = CompareDate(Period1.Start, Period2.Start) > 0 ? Period1.Start : Period2.Start;
    stDate OverlapEnd = CompareDate(Period1.End, Period2.End) < 0 ? Period1.End : Period2.End;

    Counter = DaysBetweenDates(OverlapStart, OverlapEnd) + 1;

    return Counter;
}
