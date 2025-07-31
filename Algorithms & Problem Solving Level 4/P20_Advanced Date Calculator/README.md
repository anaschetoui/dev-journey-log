# Advanced Date Calculator

## Description
This C++ program serves as an advanced date calculator capable of performing various date manipulation operations. It allows users to input a date and apply multiple operations to increase that date by days, weeks, months, years, decades, centuries, or even millennia.

## Features
The program includes the following date manipulation functions:
- **IncreaseDateByOneDay**: Adds one day to the given date
- **IncreaseDateByXDays**: Adds a specified number of days (default: 10)
- **IncreaseDateByOneWeek**: Adds one week to the given date
- **IncreaseDateByXWeeks**: Adds a specified number of weeks (default: 10)
- **IncreaseDateByOneMonth**: Adds one month to the given date
- **IncreaseDateByXMonths**: Adds a specified number of months (default: 5)
- **IncreaseDateByOneYear**: Adds one year to the given date (handles leap years)
- **IncreaseDateByXYears**: Adds a specified number of years (default: 10)
- **IncreaseDateByXYearsFaster**: Faster implementation for adding years
- **IncreaseDateByOneDecade**: Adds 10 years to the given date
- **IncreaseDateByXDecades**: Adds a specified number of decades (default: 10)
- **IncreaseDateByXDecadesFaster**: Faster implementation for adding decades
- **IncreaseDateByOneCentury**: Adds 100 years to the given date
- **IncreaseDateByOneMillennium**: Adds 1000 years to the given date

## Usage
1. Run the program
2. Enter the year (between 1 and 2999)
3. Enter the month (between 1 and 12)
4. Enter the day (valid for the selected month/year)
5. The program will display the date after applying each operation sequentially
# Example Input/Output
- ``input``
```
Enter a Year : 2025
Enter a Month : 07
Enter a Day : 31
```

- ``output``
```
01-Adding one day is: 1/8/2025
02-Adding 10 Days is: 11/8/2025
03-Adding One Week is: 18/8/2025
04-Adding 10 Weeks is: 27/10/2025
05-Adding One Month is: 27/11/2025
06-Adding 5 Month is: 27/4/2026
07-Adding One Year is: 27/4/2027
08-Adding 10 Year is: 27/4/2037
09-Adding 10 Year (Faster) is: 27/4/2047
10-Adding One Decade is: 27/4/2057
11-Adding 10 Decades is: 27/4/2157
12-Adding 10 Decades (Faster) is: 27/4/2257
13-Adding One Century is: 27/4/2357
14-Adding One Millennium is: 27/4/3357
```



---
## Author
Anas Chetoui ``@anaschetoui``