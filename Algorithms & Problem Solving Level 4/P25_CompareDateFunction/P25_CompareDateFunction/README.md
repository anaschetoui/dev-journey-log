# Date Comparison Program

This C++ program reads two dates from the user and compares them using a custom function. The comparison returns:
- `-1` if Date1 is before Date2
- `0` if Date1 is equal to Date2
- `1` if Date1 is after Date2

## Features

- Reads two dates from standard input.
- Compares dates using a dedicated function.
- Outputs the comparison result.


## Dependencies

- The program includes `DateUtils.h` from `../../../MyLib/`. Ensure this header and its implementation are available and provide:
  - `struct stDate`
  - `stDate ReadDate()`
  - `bool IsDate1LessThanDate2(stDate, stDate)`
  - `bool IsDate1EqualDate2(stDate, stDate)`

## Example Output

- ``input``
```
Enter Date1:
Enter a Year : 2025
Enter a Month : 08
Enter a Day : 1

Enter Date2:
Enter a Year : 2026
Enter a Month : 08
```

- ``output``
```
Compare Result: -1
```
## Author

Anas Chetoui ``@anaschetoui``
