# Period Overlap Checker

This C++ program reads two periods (each defined by a start and end date) and checks if they overlap.

## Features

- Prompts user to enter start and end dates for two periods.
- Uses custom date and period structures.
- Determines if the periods overlap using date comparison utilities.


## Dependencies

- `DateUtils.h` (located in `../../../MyLib/DateUtils.h`): Provides `stDate`, `ReadDate()`, and date comparison functions.

## Example

- ``input``
```
Period 1:
Enter Start Date:
Enter a Year : 2025
Enter a Month : 08
Enter a Day : 01


Enter End Date:
Enter a Year : 2025
Enter a Month : 08
Enter a Day : 20


Period 2:
Enter Start Date:
Enter a Year : 2025
Enter a Month : 08
Enter a Day : 15


Enter End Date:
Enter a Year : 2025
Enter a Month : 08
Enter a Day : 30
```

- ``output``
 ```
 Yes is Overlap Period.
 ```
----
# Author

- Anas Chetoui ``@anaschetoui``
