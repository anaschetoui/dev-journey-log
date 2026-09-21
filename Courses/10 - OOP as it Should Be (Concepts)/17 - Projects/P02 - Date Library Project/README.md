# Date Library Project

## Project Overview

Build a reusable C++ Date Library using the OOP concepts learned in the course.

The main class is:

`clsDate`

The goal is to take the Date functions created in the previous lessons and organize them inside one reusable class.

The project should also demonstrate:

- Constructor Overloading
- Properties
- Static Methods
- Object Methods
- Code Reuse
- Classes instead of Structures

---

# Requirements

## 1. Create the `clsDate` Class

Create a class named:

`clsDate`

The class should contain three main private data members:

- `_Day`
- `_Month`
- `_Year`

These represent the date of the object.

---

## 2. Properties

Create Get and Set functions for:

- Day
- Month
- Year

The class should support property-style access.

Example:

`Date1.Day`

`Date1.Month`

`Date1.Year`

---

# 3. Constructor Overloading

The class must have **4 constructors**.

### Constructor 1 - Default Constructor

The default constructor should create the object using the current system date.

Example:

`clsDate Date1;`

The object should contain today's:

- Day
- Month
- Year

---

### Constructor 2 - String Constructor

The constructor should accept a date as a string.

Example:

`clsDate Date2("31/01/2022");`

The constructor should convert the string into:

- Day
- Month
- Year

---

### Constructor 3 - Day, Month, Year

The constructor should accept three parameters:

- Day
- Month
- Year

Example:

`clsDate Date3(20, 12, 2022);`

---

### Constructor 4 - Day Order in Year

The constructor should accept:

- Day Order in Year
- Year

Example:

`clsDate Date4(250, 2022);`

It should create the corresponding date from the beginning of that year.

This should reuse the previously created function:

`GetDateFromDayOrderInYear()`

---

# 4. Date Functions From Previous Lessons

Move the Date functions created in the previous lessons into `clsDate`.

## Source Location

The Date functions are located in:

`Courses/08 - Algorithms & Problem Solving Level 4/`

### Relevant Lessons

| Lesson | Topic |
|---|---|
| `P02 - Leap Year` | Check Leap Year |
| `P03 - Leap Year (One Line Code)` | Leap Year |
| `P04 - Number of Days-Hours-Minutes-Seconds In a Year` | Year Units |
| `P05 - Number of Days-Hours-Minutes-Seconds In Month` | Month Units |
| `P06 - Number of Days in a Month` | Days in Month |
| `P07 - Day Name` | Day of Week |
| `P08 - Month Calendar` | Print Month Calendar |
| `P09 - Year Calendar` | Print Year Calendar |
| `P10 - Days From Beginning of Year` | Day Order |
| `P11 - Date from Day Order In a Year` | Convert Day Order to Date |
| `P12 - Add Days to a Date` | Add Days |
| `P13 - Date1 Before Date2` | Compare Dates |
| `P14 - Date1 Equals Date2` | Compare Dates |
| `P15 - Last Day Last Month` | Last Day / Last Month |
| `P16 - Increase Date by One Day` | Increase by Day |
| `P17 - Diff In Days` | Difference in Days |
| `P18 - Your Age In Days` | Age in Days |
| `P19 - Diff In Days (Negative Days)` | Difference with Negative Result |
| `P20 - Increase Date By X Days` | Increase by X Days |
| `P21 - Increase Date By One Week` | Increase by One Week |
| `P22 - Increase Date By X Weeks` | Increase by X Weeks |
| `P23 - Increase Date By One Month` | Increase by One Month |
| `P24 - Increase Date By X Months` | Increase by X Months |
| `P25 - Increase Date By One Year` | Increase by One Year |
| `P26 - Increase Date By X Years` | Increase by X Years |
| `P27 - Increase Date By X Years (Faster)` | Faster Year Increase |
| `P28 - Increase Date By One Decade` | Increase by Decade |
| `P29 - Increase Date By X Decades` | Increase by X Decades |
| `P30 - Increase Date By X Decades (Faster)` | Faster Decade Increase |
| `P31 - Increase Date By One Century` | Increase by Century |
| `P32 - Increase Date By One Millennium` | Increase by Millennium |
| `P33 - Decrease Date By One Day` | Decrease by Day |
| `P34 - Decrease Date By X Days` | Decrease by X Days |
| `P35 - Decrease Date By One Week` | Decrease by One Week |
| `P36 - Decrease Date By X Weeks` | Decrease by X Weeks |
| `P37 - Decrease Date By One Month` | Decrease by One Month |
| `P38 - Decrease Date By X Months` | Decrease by X Months |
| `P39 - Decrease Date By One Year` | Decrease by One Year |
| `P40 - Decrease Date By X Years` | Decrease by X Years |
| `P41 - Decrease Date By X Years (Faster)` | Faster Year Decrease |
| `P42 - Decrease Date By One Decade` | Decrease by Decade |
| `P43 - Decrease Date By X Decades` | Decrease by X Decades |
| `P44 - Decrease Date By X Decades (Faster)` | Faster Decade Decrease |
| `P45 - Decrease Date By One Century` | Decrease by Century |
| `P46 - Decrease Date By One Millennium` | Decrease by Millennium |
| `P47 - Overload Day Of Week Order` | Function Overloading |
| `P48 - Is End Of Week` | End of Week |
| `P49 - Is Week End` | Weekend |
| `P50 - Is Business Day` | Business Day |
| `P51 - Days Until End Of Week` | Days Until Week End |
| `P52 - Days Until End Of Month` | Days Until Month End |
| `P53 - Days Until End Of Year` | Days Until Year End |
| `P54 - Calculate Actual Vacation Days` | Vacation Days |
| `P55 - Calculate Vacation Return Date` | Vacation Return Date |
| `P56 - Is Date1 After Date2` | Date Comparison |
| `P57 - Compare Two Dates` | Compare Dates |
| `P58 - Is Overlap Periods` | Period Overlap |
| `P59 - Calculate Period Length` | Period Length |
| `P60 - Is Date Within Period` | Date in Period |
| `P61 - Count Overlap Days Between Two Periods` | Overlap Days |
| `P62 - Validate Date` | Validate Date |
| `P63 - Convert String To Date` | String to Date |
| `P64 - Convert Date To String` | Date to String |
| `P65 - Format Date` | Format Date |

---

# 5. Convert Structures Into the `clsDate` Class

Some of the previous Date functions used a structure such as:

`stDate`

For this project, replace the structure with:

`clsDate`

The existing Date logic should be reused.

The main idea is:

`stDate`

becomes:

`clsDate`

The Date data remains:

- Day
- Month
- Year

The existing algorithms should not be rewritten unnecessarily.

---

# 6. Static and Object Versions

For functions that can work independently from an object, create two versions.

## Static Version

The static function receives the required Date parameters.

Example:

`clsDate::IsDate1BeforeDate2(Date1, Date2);`

The static version should work without creating a specific object for the current date.

---

## Object Version

The object version should use the current object's date.

Example:

`Date1.IsDateBeforeDate2(Date2);`

The object version should reuse the static function.

Example design:

`return IsDate1BeforeDate2(*this, Date2);`

---

# 7. Code Reuse

Do not copy the complete algorithm twice.

Use this design:

Static Function
→ Receives the required parameters
→ Contains the main algorithm

Object Function
→ Uses the current object
→ Calls the Static Function

This should be applied where appropriate throughout the library.

---

# 8. Date Validation

The class must support checking whether a date is valid.

Example:

`Date2.IsValid();`

It should correctly detect invalid dates such as:

`31/02/2022`

and valid dates such as:

`31/01/2022`

The existing `IsValidDate()` logic from the previous lessons should be reused.

---

# 9. Calendar Functions

The class should support:

- Printing a month calendar
- Printing a year calendar

Example:

`Date4.PrintMonthCalendar();`

and:

`Date4.PrintYearCalendar();`

The current object's month and year should be used by the object versions.

---

# 10. Date Calculations

The library should contain the Date calculations developed in the previous lessons, including:

- Days in year
- Hours in year
- Minutes in year
- Seconds in year
- Days in month
- Hours in month
- Minutes in month
- Seconds in month
- Day of week
- Day order in year
- Date from day order
- Difference between dates
- Age in days

---

# 11. Date Increase and Decrease

The class should include the previous Date increase and decrease operations.

These include:

- Add one day
- Add X days
- Add one week
- Add X weeks
- Add one month
- Add X months
- Add one year
- Add X years
- Add one decade
- Add X decades
- Add one century
- Add one millennium

And the corresponding decrease operations.

---

# 12. Date Comparison

The library should support Date comparisons such as:

- Date1 before Date2
- Date1 equals Date2
- Date1 after Date2
- Compare two dates
- Check if a date is within a period
- Check period overlap

Object versions should use the current object when possible.

---

# 13. Date Conversion

The library should support:

- Convert String to Date
- Convert Date to String
- Format Date

Example:

`clsDate::DateToString(Date1);`

and:

`Date1.DateToString();`

---

# 14. Testing

Create a `main()` function to test the library.

The test should include the four constructors.

### Default Constructor

`clsDate Date1;`

### String Constructor

`clsDate Date2("31/01/2022");`

### Day / Month / Year Constructor

`clsDate Date3(20, 12, 2022);`

### Day Order Constructor

`clsDate Date4(250, 2022);`

---

# 15. Test Object Functions

Use the objects to test the Date functions.

Examples:

`Date1.PrintDate();`

`Date2.IsValid();`

`Date3.IsDateBeforeDate2(Date4);`

`Date4.PrintMonthCalendar();`

`Date4.PrintYearCalendar();`

---

# 16. Test Static Functions

Also test the static versions.

Examples:

`clsDate::IsDate1BeforeDate2(Date1, Date2);`

`clsDate::IsDate1EqualDate2(Date1, Date2);`

`clsDate::GetDateFromDayOrderInYear(250, 2022);`

`clsDate::DateToString(Date1);`

---

# OOP Concepts Used

This project should apply:

- Classes
- Objects
- Encapsulation
- Properties
- Constructor Overloading
- Function Overloading
- Static Methods
- Object Methods
- Code Reuse
- Replacing Structures with Classes

---

# Main Goal

Combine the Date algorithms from the previous lessons with the OOP concepts learned in the course.

The final result should be a reusable:

`clsDate`

Date Library.

The class should provide multiple ways to create a Date object, reuse the Date algorithms from previous lessons, and provide both static and object-based methods where appropriate.