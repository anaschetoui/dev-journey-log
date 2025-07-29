# Year Calendar Program

A C++ program that generates and displays a complete calendar for any given year.

## Features

- Displays a full year calendar with all 12 months
- Handles leap years correctly
- Input validation for year (1-2999)
- Clean, formatted output with proper alignment
- Cross-platform compatible

## How it Works

The program uses Zeller's congruence algorithm to calculate the day of the week for any given date. It then formats and displays each month in a traditional calendar layout.

## Functions

- `ReadYear()` - Gets year input from user with validation
- `IsLeapYear()` - Determines if a year is a leap year
- `FindDayPosition()` - Calculates the starting day of the week for any date
- `MonthName()` - Returns the abbreviated month name
- `NumberOfDayInMonth()` - Returns the number of days in a given month
- `PrintMonthCalendar()` - Displays a single month's calendar
- `PrintYearCalendar()` - Displays the complete year calendar

## Usage
The program will prompt you to enter a year (1-2999) and then display the complete calendar for that year.

## Example Output

-Input 
```
Enter a Year = 2025
```

-Output

```
Enter a Year : 2025

===================================
          Calendar - 2025
===================================

________________Jan________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                   1    2    3    4
    5    6    7    8    9   10   11
   12   13   14   15   16   17   18
   19   20   21   22   23   24   25
   26   27   28   29   30   31
____________________________________

________________Feb________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                                  1
    2    3    4    5    6    7    8
    9   10   11   12   13   14   15
   16   17   18   19   20   21   22
   23   24   25   26   27   28
____________________________________

________________Mar________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                                  1
    2    3    4    5    6    7    8
    9   10   11   12   13   14   15
   16   17   18   19   20   21   22
   23   24   25   26   27   28   29
   30   31
____________________________________

________________Apr________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
              1    2    3    4    5
    6    7    8    9   10   11   12
   13   14   15   16   17   18   19
   20   21   22   23   24   25   26
   27   28   29   30
____________________________________

________________May________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                        1    2    3
    4    5    6    7    8    9   10
   11   12   13   14   15   16   17
   18   19   20   21   22   23   24
   25   26   27   28   29   30   31

____________________________________

________________Jun________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
    1    2    3    4    5    6    7
    8    9   10   11   12   13   14
   15   16   17   18   19   20   21
   22   23   24   25   26   27   28
   29   30
____________________________________

________________Jul________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
              1    2    3    4    5
    6    7    8    9   10   11   12
   13   14   15   16   17   18   19
   20   21   22   23   24   25   26
   27   28   29   30   31
____________________________________

________________Aug________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                             1    2
    3    4    5    6    7    8    9
   10   11   12   13   14   15   16
   17   18   19   20   21   22   23
   24   25   26   27   28   29   30
   31
____________________________________

________________Sep________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
         1    2    3    4    5    6
    7    8    9   10   11   12   13
   14   15   16   17   18   19   20
   21   22   23   24   25   26   27
   28   29   30
____________________________________

________________Oct________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                   1    2    3    4
    5    6    7    8    9   10   11
   12   13   14   15   16   17   18
   19   20   21   22   23   24   25
   26   27   28   29   30   31
____________________________________

________________Nov________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                                  1
    2    3    4    5    6    7    8
    9   10   11   12   13   14   15
   16   17   18   19   20   21   22
   23   24   25   26   27   28   29
   30
____________________________________

________________Dec________________

  Sun  Mon  Tue  Wed  Thu  Fri  Sat
         1    2    3    4    5    6
    7    8    9   10   11   12   13
   14   15   16   17   18   19   20
   21   22   23   24   25   26   27
   28   29   30   31
____________________________________

```



## Author

Anas Chetoui *@anaschetoui*
