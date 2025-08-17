#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "../../MyCodingJourney/MyLib/OOP/clsString.h"

// clsDate: A class for handling date operations and calculations.
class clsDate
{

private:

    short _Day = 1;    // Day of the month
    short _Month = 1;  // Month of the year
    short _Year = 1900;// Year

public:

    // Default constructor: Initializes to system date.
    clsDate()
    {
        time_t t = time(0);

        tm now;
        localtime_s(&now, &t);

        _Day = now.tm_mday;
        _Month = now.tm_mon + 1;
        _Year = now.tm_year + 1900;
    }

    // Constructor from string in "DD/MM/YYYY" format.
    clsDate(std::string sDate)
    {
        std::vector<std::string> vDate;
        vDate = clsString::SplitString(sDate, "/");

        _Day = std::stoi(vDate[0]);
        _Month = std::stoi(vDate[1]);
        _Year = std::stoi(vDate[2]);
    }

    // Constructor from day, month, year.
    clsDate(short Day, short Month, short Year)
    {
        _Day = Day;
        _Month = Month;
        _Year = Year;
    }

    // Constructor from day order in year and year.
    clsDate(short DateOrderInYear, short Year)
    {
        clsDate Date1 = GetDateFromDayOrderInYear(DateOrderInYear, Year);
        _Day = Date1.Day;
        _Month = Date1.Month;
        _Year = Date1.Year;
    }

    // Setters and getters for Day, Month, Year.
    void SetDay(short Day) {
        _Day = Day;
    }

    short GetDay() {
        return _Day;
    }
    __declspec(property(get = GetDay, put = SetDay)) short Day;

    void SetMonth(short Month) {
        _Month = Month;
    }

    short GetMonth() {
        return _Month;
    }
    __declspec(property(get = GetMonth, put = SetMonth)) short Month;

    void SetYear(short Year) {
        _Year = Year;
    }

    short GetYear() {
        return _Year;
    }
    __declspec(property(get = GetYear, put = SetYear)) short Year;

    // Print the date in "DD/MM/YYYY" format.
    void PrintDate()
    {
        std::cout << DateToString() << std::endl;
    }

    // Get the current system date.
    static clsDate GetSystemDate()
    {
        time_t t = time(0);

        tm now;
        localtime_s(&now, &t);

        short Day = now.tm_mday;
        short Month = now.tm_mon + 1;
        short Year = now.tm_year + 1900;

        return clsDate(Day, Month, Year);
    }

    // Check if a date is valid.
    static bool IsValidDate(clsDate Date)
    {
        if (Date.Day < 1 || Date.Day > 31)
            return false;

        if (Date.Month < 1 || Date.Month > 12)
            return false;

        if (Date.Month == 2)
        {
            if (isLeapYear(Date.Year))
            {
                if (Date.Day > 29)
                    return false;
            }
            else
            {
                if (Date.Day > 28)
                    return false;
            }
        }

        short DaysInMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (Date.Day > DaysInMonth)
            return false;

        return true;
    }

    // Check if the current date is valid.
    bool IsValid()
    {
        return IsValidDate(*this);
    }

    // Convert a date to string "DD/MM/YYYY".
    static std::string DateToString(clsDate Date)
    {
        return std::to_string(Date.Day) + "/" + std::to_string(Date.Month) + "/" + std::to_string(Date.Year);
    }

    std::string DateToString()
    {
        return DateToString(*this);
    }

    // Check if a year is a leap year.
    static bool isLeapYear(short Year)
    {
        return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
    }

    bool isLeapYear()
    {
        return isLeapYear(_Year);
    }

    // Get number of days in a year.
    static short NumberOfDaysInAYear(short Year)
    {
        return isLeapYear(Year) ? 365 : 364;
    }

    short NumberOfDaysInAYear()
    {
        return NumberOfDaysInAYear(_Year);
    }

    // Get number of hours in a year.
    static short NumberOfHoursInAYear(short Year)
    {
        return NumberOfDaysInAYear(Year) * 24;
    }

    short NumberOfHoursInAYear()
    {
        return NumberOfHoursInAYear(_Year);
    }

    // Get number of minutes in a year.
    static int NumberOfMinutesInAYear(short Year)
    {
        return NumberOfHoursInAYear(Year) * 60;
    }

    int NumberOfMinutesInAYear()
    {
        return NumberOfMinutesInAYear(_Year);
    }

    // Get number of seconds in a year.
    static int NumberOfSecondsInAYear(short Year)
    {
        return NumberOfMinutesInAYear(Year) * 60;
    }

    int NumberOfSecondsInAYear()
    {
        return NumberOfSecondsInAYear(_Year);
    }

    // Get number of days in a month.
    static short NumberOfDaysInAMonth(short Month, short Year)
    {
        if (Month < 1 || Month > 12)
            return 0;

        int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
    }

    short NumberOfDaysInAMonth()
    {
        return NumberOfDaysInAMonth(_Month, _Year);
    }

    // Get number of hours in a month.
    static short NumberOfHoursInAMonth(short Month, short Year)
    {
        return NumberOfDaysInAMonth(Month, Year) * 24;
    }

    short NumberOfHoursInAMonth()
    {
        return NumberOfDaysInAMonth(_Month, _Year) * 24;
    }

    // Get number of minutes in a month.
    static int NumberOfMinutesInAMonth(short Month, short Year)
    {
        return NumberOfHoursInAMonth(Month, Year) * 60;
    }

    int NumberOfMinutesInAMonth()
    {
        return NumberOfHoursInAMonth(_Month, _Year) * 60;
    }

    // Get number of seconds in a month.
    static int NumberOfSecondsInAMonth(short Month, short Year)
    {
        return NumberOfMinutesInAMonth(Month, Year) * 60;
    }

    int NumberOfSecondsInAMonth()
    {
        return NumberOfMinutesInAMonth(_Month, _Year) * 60;
    }

    // Get the day of week order (0=Sun, 6=Sat).
    static short DayOfWeekOrder(short Day, short Month, short Year)
    {
        short a, y, m;
        a = (14 - Month) / 12;
        y = Year - a;
        m = Month + (12 * a) - 2;
        return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    }

    short DayOfWeekOrder()
    {
        return DayOfWeekOrder(_Day, _Month, _Year);
    }

    // Get short name for day of week.
    static std::string DayShortName(short DayOfWeekOrder)
    {
        std::string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
        return arrDayNames[DayOfWeekOrder];
    }

    static std::string DayShortName(short Day, short Month, short Year)
    {
        std::string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
        return arrDayNames[DayOfWeekOrder(Day, Month, Year)];
    }

    std::string DayShortName()
    {
        std::string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
        return arrDayNames[DayOfWeekOrder(_Day, _Month, _Year)];
    }

    // Get short name for month.
    static std::string MonthShortName(short MonthNumber)
    {
        std::string Months[12] = { "Jan", "Feb", "Mar",
                               "Apr", "May", "Jun",
                               "Jul", "Aug", "Sep",
                               "Oct", "Nov", "Dec"
        };
        return (Months[MonthNumber - 1]);
    }

    std::string MonthShortName()
    {
        return MonthShortName(_Month);
    }

    // Print calendar for a month.
    static void PrintMonthCalendar(short Month, short Year)
    {
        int NumberOfDays;
        int current = DayOfWeekOrder(1, Month, Year);
        NumberOfDays = NumberOfDaysInAMonth(Month, Year);
        std::printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());
        std::printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
        int i;
        for (i = 0; i < current; i++)
            std::printf("     ");

        for (int j = 1; j <= NumberOfDays; j++)
        {
            std::printf("%5d", j);
            if (++i == 7)
            {
                i = 0;
                std::printf("\n");
            }
        }
        std::printf("\n  _________________________________\n");
    }

    void PrintMonthCalendar()
    {
        PrintMonthCalendar(_Month, _Year);
    }

    // Print calendar for a year.
    static void PrintYearCalendar(int Year)
    {
        std::printf("\n  _________________________________\n\n");
        std::printf("           Calendar - %d\n", Year);
        std::printf("  _________________________________\n");
        for (int i = 1; i <= 12; i++)
        {
            PrintMonthCalendar(i, Year);
        }
        return;
    }

    void PrintYearCalendar()
    {
        std::printf("\n  _________________________________\n\n");
        std::printf("           Calendar - %d\n", _Year);
        std::printf("  _________________________________\n");
        for (int i = 1; i <= 12; i++)
        {
            PrintMonthCalendar(i, _Year);
        }
        return;
    }

    // Get number of days from beginning of year.
    static short DaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
    {
        short TotalDays = 0;
        for (int i = 1; i <= Month - 1; i++)
        {
            TotalDays += NumberOfDaysInAMonth(i, Year);
        }
        TotalDays += Day;
        return TotalDays;
    }

    short DaysFromTheBeginingOfTheYear()
    {
        short TotalDays = 0;
        for (int i = 1; i <= _Month - 1; i++)
        {
            TotalDays += NumberOfDaysInAMonth(i, _Year);
        }
        TotalDays += _Day;
        return TotalDays;
    }

    // Get date from day order in year.
    static clsDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
    {
        clsDate Date;
        short RemainingDays = DateOrderInYear;
        short MonthDays = 0;
        Date.Year = Year;
        Date.Month = 1;
        while (true)
        {
            MonthDays = NumberOfDaysInAMonth(Date.Month, Year);
            if (RemainingDays > MonthDays)
            {
                RemainingDays -= MonthDays;
                Date.Month++;
            }
            else
            {
                Date.Day = RemainingDays;
                break;
            }
        }
        return Date;
    }

    // Add days to the current date.
    void AddDays(short Days)
    {
        short RemainingDays = Days + DaysFromTheBeginingOfTheYear(_Day, _Month, _Year);
        short MonthDays = 0;
        _Month = 1;
        while (true)
        {
            MonthDays = NumberOfDaysInAMonth(_Month, _Year);
            if (RemainingDays > MonthDays)
            {
                RemainingDays -= MonthDays;
                _Month++;
                if (_Month > 12)
                {
                    _Month = 1;
                    _Year++;
                }
            }
            else
            {
                _Day = RemainingDays;
                break;
            }
        }
    }

    // Compare if Date1 is before Date2.
    static bool IsDate1BeforeDate2(clsDate Date1, clsDate Date2)
    {
        return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
    }

    bool IsDateBeforeDate2(clsDate Date2)
    {
        return IsDate1BeforeDate2(*this, Date2);
    }

    // Compare if Date1 equals Date2.
    static bool IsDate1EqualDate2(clsDate Date1, clsDate Date2)
    {
        return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
    }

    bool IsDateEqualDate2(clsDate Date2)
    {
        return IsDate1EqualDate2(*this, Date2);
    }

    // Check if date is last day in month.
    static bool IsLastDayInMonth(clsDate Date)
    {
        return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
    }

    bool IsLastDayInMonth()
    {
        return IsLastDayInMonth(*this);
    }

    // Check if month is last in year.
    static bool IsLastMonthInYear(short Month)
    {
        return (Month == 12);
    }

    // Add one day to a date.
    static clsDate AddOneDay(clsDate Date)
    {
        if (IsLastDayInMonth(Date))
        {
            if (IsLastMonthInYear(Date.Month))
            {
                Date.Month = 1;
                Date.Day = 1;
                Date.Year++;
            }
            else
            {
                Date.Day = 1;
                Date.Month++;
            }
        }
        else
        {
            Date.Day++;
        }
        return Date;
    }

    void AddOneDay()
    {
        *this = AddOneDay(*this);
    }

    // Swap two dates.
    static void SwapDates(clsDate& Date1, clsDate& Date2)
    {
        clsDate TempDate;
        TempDate = Date1;
        Date1 = Date2;
        Date2 = TempDate;
    }

    // Get difference in days between two dates.
    static int GetDifferenceInDays(clsDate Date1, clsDate Date2, bool IncludeEndDay = false)
    {
        int Days = 0;
        short SawpFlagValue = 1;
        if (!IsDate1BeforeDate2(Date1, Date2))
        {
            SwapDates(Date1, Date2);
            SawpFlagValue = -1;
        }
        while (IsDate1BeforeDate2(Date1, Date2))
        {
            Days++;
            Date1 = AddOneDay(Date1);
        }
        return IncludeEndDay ? ++Days * SawpFlagValue : Days * SawpFlagValue;
    }

    int GetDifferenceInDays(clsDate Date2, bool IncludeEndDay = false)
    {
        return GetDifferenceInDays(*this, Date2, IncludeEndDay);
    }

    // Calculate age in days from date of birth.
    static short CalculateMyAgeInDays(clsDate DateOfBirth)
    {
        return GetDifferenceInDays(DateOfBirth, clsDate::GetSystemDate(), true);
    }

    // Increase date by one week.
    static clsDate IncreaseDateByOneWeek(clsDate& Date)
    {
        for (int i = 1; i <= 7; i++)
        {
            Date = AddOneDay(Date);
        }
        return Date;
    }

    void IncreaseDateByOneWeek()
    {
        IncreaseDateByOneWeek(*this);
    }

    // Increase date by X weeks.
    clsDate IncreaseDateByXWeeks(short Weeks, clsDate& Date)
    {
        for (short i = 1; i <= Weeks; i++)
        {
            Date = IncreaseDateByOneWeek(Date);
        }
        return Date;
    }

    void IncreaseDateByXWeeks(short Weeks)
    {
        IncreaseDateByXWeeks(Weeks, *this);
    }

    // Increase date by one month.
    clsDate IncreaseDateByOneMonth(clsDate& Date)
    {
        if (Date.Month == 12)
        {
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Month++;
        }
        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);
        if (Date.Day > NumberOfDaysInCurrentMonth)
        {
            Date.Day = NumberOfDaysInCurrentMonth;
        }
        return Date;
    }

    void IncreaseDateByOneMonth()
    {
        IncreaseDateByOneMonth(*this);
    }

    // Increase date by X days.
    clsDate IncreaseDateByXDays(short Days, clsDate& Date)
    {
        for (short i = 1; i <= Days; i++)
        {
            Date = AddOneDay(Date);
        }
        return Date;
    }

    void IncreaseDateByXDays(short Days)
    {
        IncreaseDateByXDays(Days, *this);
    }

    // Increase date by X months.
    clsDate IncreaseDateByXMonths(short Months, clsDate& Date)
    {
        for (short i = 1; i <= Months; i++)
        {
            Date = IncreaseDateByOneMonth(Date);
        }
        return Date;
    }

    void IncreaseDateByXMonths(short Months)
    {
        IncreaseDateByXMonths(Months, *this);
    }

    // Increase date by one year.
    static clsDate IncreaseDateByOneYear(clsDate& Date)
    {
        Date.Year++;
        return Date;
    }

    void IncreaseDateByOneYear()
    {
        IncreaseDateByOneYear(*this);
    }

    // Increase date by X years.
    clsDate IncreaseDateByXYears(short Years, clsDate& Date)
    {
        Date.Year += Years;
        return Date;
    }

    void IncreaseDateByXYears(short Years)
    {
        IncreaseDateByXYears(Years, *this);
    }

    // Increase date by one decade.
    clsDate IncreaseDateByOneDecade(clsDate& Date)
    {
        Date.Year += 10;
        return Date;
    }

    void IncreaseDateByOneDecade()
    {
        IncreaseDateByOneDecade(*this);
    }

    // Increase date by X decades.
    clsDate IncreaseDateByXDecades(short Decade, clsDate& Date)
    {
        Date.Year += Decade * 10;
        return Date;
    }

    void IncreaseDateByXDecades(short Decade)
    {
        IncreaseDateByXDecades(Decade, *this);
    }

    // Increase date by one century.
    clsDate IncreaseDateByOneCentury(clsDate& Date)
    {
        Date.Year += 100;
        return Date;
    }

    void IncreaseDateByOneCentury()
    {
        IncreaseDateByOneCentury(*this);
    }

    // Increase date by one millennium.
    clsDate IncreaseDateByOneMillennium(clsDate& Date)
    {
        Date.Year += 1000;
        return Date;
    }

    clsDate IncreaseDateByOneMillennium()
    {
        IncreaseDateByOneMillennium(*this);
    }

    // Decrease date by one day.
    static clsDate DecreaseDateByOneDay(clsDate Date)
    {
        if (Date.Day == 1)
        {
            if (Date.Month == 1)
            {
                Date.Month = 12;
                Date.Day = 31;
                Date.Year--;
            }
            else
            {
                Date.Month--;
                Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
            }
        }
        else
        {
            Date.Day--;
        }
        return Date;
    }

    void DecreaseDateByOneDay()
    {
        DecreaseDateByOneDay(*this);
    }

    // Decrease date by one week.
    static clsDate DecreaseDateByOneWeek(clsDate& Date)
    {
        for (int i = 1; i <= 7; i++)
        {
            Date = DecreaseDateByOneDay(Date);
        }
        return Date;
    }

    void DecreaseDateByOneWeek()
    {
        DecreaseDateByOneWeek(*this);
    }

    // Decrease date by X weeks.
    static clsDate DecreaseDateByXWeeks(short Weeks, clsDate& Date)
    {
        for (short i = 1; i <= Weeks; i++)
        {
            Date = DecreaseDateByOneWeek(Date);
        }
        return Date;
    }

    void DecreaseDateByXWeeks(short Weeks)
    {
        DecreaseDateByXWeeks(Weeks, *this);
    }

    // Decrease date by one month.
    static clsDate DecreaseDateByOneMonth(clsDate& Date)
    {
        if (Date.Month == 1)
        {
            Date.Month = 12;
            Date.Year--;
        }
        else
            Date.Month--;
        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);
        if (Date.Day > NumberOfDaysInCurrentMonth)
        {
            Date.Day = NumberOfDaysInCurrentMonth;
        }
        return Date;
    }

    void DecreaseDateByOneMonth()
    {
        DecreaseDateByOneMonth(*this);
    }

    // Decrease date by X days.
    static clsDate DecreaseDateByXDays(short Days, clsDate& Date)
    {
        for (short i = 1; i <= Days; i++)
        {
            Date = DecreaseDateByOneDay(Date);
        }
        return Date;
    }

    void DecreaseDateByXDays(short Days)
    {
        DecreaseDateByXDays(Days, *this);
    }

    // Decrease date by X months.
    static clsDate DecreaseDateByXMonths(short Months, clsDate& Date)
    {
        for (short i = 1; i <= Months; i++)
        {
            Date = DecreaseDateByOneMonth(Date);
        }
        return Date;
    }

    void DecreaseDateByXMonths(short Months)
    {
        DecreaseDateByXMonths(Months, *this);
    }

    // Decrease date by one year.
    static clsDate DecreaseDateByOneYear(clsDate& Date)
    {
        Date.Year--;
        return Date;
    }

    void DecreaseDateByOneYear()
    {
        DecreaseDateByOneYear(*this);
    }

    // Decrease date by X years.
    static clsDate DecreaseDateByXYears(short Years, clsDate& Date)
    {
        Date.Year -= Years;
        return Date;
    }

    void DecreaseDateByXYears(short Years)
    {
        DecreaseDateByXYears(Years, *this);
    }

    // Decrease date by one decade.
    static clsDate DecreaseDateByOneDecade(clsDate& Date)
    {
        Date.Year -= 10;
        return Date;
    }

    void DecreaseDateByOneDecade()
    {
        DecreaseDateByOneDecade(*this);
    }

    // Decrease date by X decades.
    static clsDate DecreaseDateByXDecades(short Decades, clsDate& Date)
    {
        Date.Year -= Decades * 10;
        return Date;
    }

    void DecreaseDateByXDecades(short Decades)
    {
        DecreaseDateByXDecades(Decades, *this);
    }

    // Decrease date by one century.
    static clsDate DecreaseDateByOneCentury(clsDate& Date)
    {
        Date.Year -= 100;
        return Date;
    }

    void DecreaseDateByOneCentury()
    {
        DecreaseDateByOneCentury(*this);
    }

    // Decrease date by one millennium.
    static clsDate DecreaseDateByOneMillennium(clsDate& Date)
    {
        Date.Year -= 1000;
        return Date;
    }

    void DecreaseDateByOneMillennium()
    {
        DecreaseDateByOneMillennium(*this);
    }

    // Check if date is end of week (Saturday).
    static short IsEndOfWeek(clsDate Date)
    {
        return DayOfWeekOrder(Date.Day, Date.Month, Date.Year) == 6;
    }

    short IsEndOfWeek()
    {
        return IsEndOfWeek(*this);
    }

    // Check if date is weekend (Friday or Saturday).
    static bool IsWeekEnd(clsDate Date)
    {
        short DayIndex = DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
        return (DayIndex == 5 || DayIndex == 6);
    }

    bool IsWeekEnd()
    {
        return IsWeekEnd(*this);
    }

    // Check if date is a business day (not weekend).
    static bool IsBusinessDay(clsDate Date)
    {
        return !IsWeekEnd(Date);
    }

    bool IsBusinessDay()
    {
        return IsBusinessDay(*this);
    }

    // Get number of days until end of week.
    static short DaysUntilTheEndOfWeek(clsDate Date)
    {
        return 6 - DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
    }

    short DaysUntilTheEndOfWeek()
    {
        return DaysUntilTheEndOfWeek(*this);
    }

    // Get number of days until end of month.
    static short DaysUntilTheEndOfMonth(clsDate Date1)
    {
        clsDate EndOfMontDate;
        EndOfMontDate.Day = NumberOfDaysInAMonth(Date1.Month, Date1.Year);
        EndOfMontDate.Month = Date1.Month;
        EndOfMontDate.Year = Date1.Year;
        return GetDifferenceInDays(Date1, EndOfMontDate, true);
    }

    short DaysUntilTheEndOfMonth()
    {
        return DaysUntilTheEndOfMonth(*this);
    }

    // Get number of days until end of year.
    static short DaysUntilTheEndOfYear(clsDate Date1)
    {
        clsDate EndOfYearDate;
        EndOfYearDate.Day = 31;
        EndOfYearDate.Month = 12;
        EndOfYearDate.Year = Date1.Year;
        return GetDifferenceInDays(Date1, EndOfYearDate, true);
    }

    short DaysUntilTheEndOfYear()
    {
        return DaysUntilTheEndOfYear(*this);
    }

    // Calculate business days between two dates.
    static short CalculateBusinessDays(clsDate DateFrom, clsDate DateTo)
    {
        short Days = 0;
        while (IsDate1BeforeDate2(DateFrom, DateTo))
        {
            if (IsBusinessDay(DateFrom))
                Days++;
            DateFrom = AddOneDay(DateFrom);
        }
        return Days;
    }

    // Calculate vacation days (business days) between two dates.
    static short CalculateVacationDays(clsDate DateFrom, clsDate DateTo)
    {
        return CalculateBusinessDays(DateFrom, DateTo);
    }

    // Calculate vacation return date, skipping weekends.
    static clsDate CalculateVacationReturnDate(clsDate DateFrom, short VacationDays)
    {
        short WeekEndCounter = 0;
        for (short i = 1; i <= VacationDays; i++)
        {
            if (IsWeekEnd(DateFrom))
                WeekEndCounter++;
            DateFrom = AddOneDay(DateFrom);
        }
        for (short i = 1; i <= WeekEndCounter; i++)
            DateFrom = AddOneDay(DateFrom);
        return DateFrom;
    }

    // Check if Date1 is after Date2.
    static bool IsDate1AfterDate2(clsDate Date1, clsDate Date2)
    {
        return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
    }

    bool IsDateAfterDate2(clsDate Date2)
    {
        return IsDate1AfterDate2(*this, Date2);
    }

    // Enum for date comparison result.
    enum enDateCompare { Before = -1, Equal = 0, After = 1 };

    // Compare two dates.
    static enDateCompare CompareDates(clsDate Date1, clsDate Date2)
    {
        if (IsDate1BeforeDate2(Date1, Date2))
            return enDateCompare::Before;
        if (IsDate1EqualDate2(Date1, Date2))
            return enDateCompare::Equal;
        return enDateCompare::After;
    }

    enDateCompare CompareDates(clsDate Date2)
    {
        return CompareDates(*this, Date2);
    }

};
