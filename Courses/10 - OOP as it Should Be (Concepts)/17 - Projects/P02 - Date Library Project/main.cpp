#include "clsDate.h"
#include "clsPeriod.h"
#include "P01 - String Library Project/clsString.h"
using namespace std;

int main()
{

    clsDate Date1(12, 9, 2002);

    cout << "Date1: ";
    Date1.Print();

    clsDate Date2("31/12/2022");

    cout << "Date2: ";
    Date2.Print();

    clsDate Date3(250, 2022);

    cout << "Date3: ";
    Date3.Print();

    clsDate Date4;

    cout << "Date4 System Date: ";
    Date4.Print();


    cout << "\n";

    cout << "Day: " << Date1.Day << endl;
    cout << "Month: " << Date1.Month << endl;
    cout << "Year: " << Date1.Year << endl;


    cout << "\n";

    cout << "Leap Year 2024: "
        << (clsDate::isLeapYear(2024) ? "Yes" : "No") << endl;

    cout << "Leap Year 2025: "
        << (clsDate::isLeapYear(2025) ? "Yes" : "No") << endl;


    cout << "\n";

    cout << "Days in February 2024: "
        << clsDate::GetDaysInMonth(clsDate::February, 2024)
        << endl;

    cout << "Days in September 2025: "
        << clsDate::GetDaysInMonth(clsDate::September, 2025)
        << endl;


    cout << "\n";

    cout << "Day Order: "
        << Date1.GetDayOrder() << endl;

    cout << "Day Name: "
        << Date1.GetDayName() << endl;

    cout << "Month Name: "
        << Date1.GetMonthName() << endl;


    cout << "\n";

    cout << "Days From Beginning Of Year: "
        << Date1.GetDaysFromBeginningOfYear()
        << endl;


    cout << "\n";

    cout << "Date String: "
        << Date1.GetDateString()
        << endl;

    cout << "Formatted Date: "
        << Date1.FormatDate("Day:dd, Month:mm, Year:yyyy")
        << endl;


    cout << "\n";

    cout << "Days In Year: "
        << Date1.GetDaysInYear()
        << endl;

    cout << "Hours In Year: "
        << Date1.GetHoursInYear()
        << endl;

    cout << "Minutes In Year: "
        << Date1.GetMinutesInYear()
        << endl;

    cout << "Seconds In Year: "
        << Date1.GetSecondsInYear()
        << endl;


    cout << "\n";

    cout << "Days In Month: "
        << Date1.GetDaysInMonth()
        << endl;

    cout << "Hours In Month: "
        << Date1.GetHoursInMonth()
        << endl;

    cout << "Minutes In Month: "
        << Date1.GetMinutesInMonth()
        << endl;

    cout << "Seconds In Month: "
        << Date1.GetSecondsInMonth()
        << endl;


    cout << "\n";

    clsDate Date5(28, 2, 2024);

    cout << "Date5: ";
    Date5.Print();

    cout << "Add 1 Day: ";
    Date5.AddDaysToDate(1).Print();

    Date5.IncreaseDateByOneDay();

    cout << "After Increase One Day: ";
    Date5.Print();


    cout << "\n";

    clsDate Date6(31, 12, 2024);

    cout << "Date6: ";
    Date6.Print();

    Date6.IncreaseDateByOneDay();

    cout << "After Increase One Day: ";
    Date6.Print();


    cout << "\n";

    clsDate Date7(1, 1, 2025);

    Date7.DecreaseDateByOneDay();

    cout << "After Decrease One Day: ";
    Date7.Print();


    cout << "\n";

    clsDate Date8(1, 1, 2025);
    clsDate Date9(10, 1, 2025);

    cout << "Date8 Before Date9: "
        << (Date8.IsDate1BeforeDate2(Date9) ? "Yes" : "No")
        << endl;

    cout << "Date8 Equal Date9: "
        << (Date8.isDate1EqualtoDate2(Date9) ? "Yes" : "No")
        << endl;

    cout << "Date8 After Date9: "
        << (Date8.IsDate1AfterDate2(Date9) ? "Yes" : "No")
        << endl;


    cout << "\n";

    cout << "Compare Dates: ";

    switch (Date8.CompareTwoDates(Date9))
    {
    case clsDate::Before:
        cout << "Before";
        break;

    case clsDate::Equal:
        cout << "Equal";
        break;

    case clsDate::After:
        cout << "After";
        break;
    }

    cout << endl;


    cout << "\n";

    clsDate Date10(31, 12, 2025);

    cout << "Date10 Is Valid: "
        << (Date10.IsValid() ? "Yes" : "No")
        << endl;

    clsDate Date11(31, 2, 2025);

    cout << "Date11 Is Valid: "
        << (Date11.IsValid() ? "Yes" : "No")
        << endl;


    cout << "\n";

    clsDate Date12(1, 1, 2025);
    clsDate Date13(10, 1, 2025);

    cout << "Difference In Days: "
        << Date12.GetDiffrenceInDays(Date13)
        << endl;


    cout << "\n";

    cout << "Is Weekend: "
        << (Date1.isWeekend() ? "Yes" : "No")
        << endl;

    cout << "Is Business Day: "
        << (Date1.isBusinessDay() ? "Yes" : "No")
        << endl;


    cout << "\n";

    cout << "Days Until End Of Week: "
        << Date1.DaysUntilEndOfWeek()
        << endl;

    cout << "Days Until End Of Month: "
        << Date1.DaysUntilEndOfMonth()
        << endl;

    cout << "Days Until End Of Year: "
        << Date1.DaysUntilEndOfYear()
        << endl;


    cout << "\n";

    clsDate Date14(1, 9, 2025);
    clsDate Date15(10, 9, 2025);

    clsPeriod Period1(Date14, Date15);

    clsDate Date16(5, 9, 2025);
    clsDate Date17(15, 9, 2025);

    clsPeriod Period2(Date16, Date17);

    cout << "Period 1 Start Date: ";
    Period1.StartDate.Print();

    cout << "Period 1 End Date: ";
    Period1.EndDate.Print();

    cout << "\n";

    cout << "Period 2 Start Date: ";
    Period2.StartDate.Print();

    cout << "Period 2 End Date: ";
    Period2.EndDate.Print();


    cout << "\n";

    cout << "Period 1 Length: "
        << clsPeriod::PeriodLengthInDays(Period1)
        << endl;

    cout << "Period 2 Length: "
        << clsPeriod::PeriodLengthInDays(Period2)
        << endl;


    cout << "\n";

    cout << "Periods Overlap: "
        << (clsPeriod::IsOverlapPeriod(Period1, Period2)
            ? "Yes"
            : "No")
        << endl;

    cout << "Period1 Is Overlap With Period2: "
        << (Period1.IsOverLapWith(Period2)
            ? "Yes"
            : "No")
        << endl;


    cout << "\n";

    clsDate DateToCheck(7, 9, 2025);

    cout << "Date Within Period1: "
        << (clsPeriod::IsDateWithinPeriod(Period1, DateToCheck)
            ? "Yes"
            : "No")
        << endl;


    cout << "\n";

    cout << "Overlap Days: "
        << clsPeriod::CountOverLapInTwoPeriods(Period1, Period2)
        << endl;


    cout << "\n";

    clsPeriod Period3(
        clsDate(1, 1, 2025),
        clsDate(5, 1, 2025)
    );

    clsPeriod Period4(
        clsDate(10, 1, 2025),
        clsDate(15, 1, 2025)
    );

    cout << "Period3 and Period4 Overlap: "
        << (clsPeriod::IsOverlapPeriod(Period3, Period4)
            ? "Yes"
            : "No")
        << endl;

    cout << "Overlap Days Period3 and Period4: "
        << clsPeriod::CountOverLapInTwoPeriods(Period3, Period4)
        << endl;


    cout << "\n";

    clsDate Date18(3, 1, 2025);

    cout << "Date18: ";
    Date18.Print();

    cout << "Date18 Within Period3: "
        << (clsPeriod::IsDateWithinPeriod(Period3, Date18)
            ? "Yes"
            : "No")
        << endl;


    cout << "\n";

    clsDate Date19(10, 1, 2025);

    cout << "Date19: ";
    Date19.Print();

    cout << "Date19 Within Period3: "
        << (clsPeriod::IsDateWithinPeriod(Period3, Date19)
            ? "Yes"
            : "No")
        << endl;


    cout << "\n";

    Date1.PrintMonthCalendar();

    cout << "\n";

    Date1.PrintYearCalendar();


    system("pause > 0");
    return 0;
}