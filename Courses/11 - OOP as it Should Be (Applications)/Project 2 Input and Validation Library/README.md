# Input Validation Library

## Project Requirements

Create a reusable input and validation library named:

```text
clsInputValidate.h
```

Create the class:

```cpp
clsInputValidate
```

All functions in this class must be `static`.

### Required Functions

#### 1. IsNumberBetween - Integer

Function name:

```cpp
IsNumberBetween
```

Requirements:

- Receive an integer number.
- Receive a minimum value.
- Receive a maximum value.
- Return whether the number is between the given range.

The function must have an integer version.

---

#### 2. IsNumberBetween - Double

Function name:

```cpp
IsNumberBetween
```

Requirements:

- Use the same function name with overloading.
- Receive a `double` number.
- Receive a minimum `double`.
- Receive a maximum `double`.
- Return whether the number is between the given range.

---

#### 3. IsDateBetween

Function name:

```cpp
IsDateBetween
```

Requirements:

- Receive a `clsDate`.
- Receive a `from` date.
- Receive a `to` date.
- Check whether the date is between the two given dates.
- Return `true` or `false`.

---

#### 4. ReadIntegerNumber

Function name:

```cpp
ReadIntegerNumber
```

Requirements:

- Read an integer number from the user.
- If the input is invalid, display an invalid-number message.
- Ask the user to enter the number again.
- Return the valid integer number.

---

#### 5. ReadDoubleNumber

Function name:

```cpp
ReadDoubleNumber
```

Requirements:

- Read a `double` number from the user.
- If the input is invalid, display an invalid-number message.
- Ask the user to enter the number again.
- Return the valid `double` number.

---

#### 6. ReadIntegerNumberBetween

Function name:

```cpp
ReadIntegerNumberBetween
```

Requirements:

- Read an integer number from the user.
- Receive `From` and `To` values.
- Check that the entered number is inside the specified range.
- If the number is outside the range, display an error message.
- The error message must be supplied through a parameter.
- Keep asking until the user enters a valid number.
- Return the valid integer number.

---

#### 7. ReadDoubleNumberBetween

Function name:

```cpp
ReadDoubleNumberBetween
```

Requirements:

- Read a `double` number from the user.
- Receive `From` and `To` values.
- Check that the entered number is inside the specified range.
- If the number is outside the range, display the supplied error message.
- Keep asking until the user enters a valid number.
- Return the valid `double` number.

---

#### 8. IsValidDate

Function name:

```cpp
IsValidDate
```

Requirements:

- Receive a `clsDate`.
- Check whether the date is valid.
- Return `true` for a valid date.
- Return `false` for an invalid date.

Example of an invalid date:

```text
35/12
```

## Design Requirements

- Class name: `clsInputValidate`
- Header file: `clsInputValidate.h`
- All functions must be `static`.
- The library should be reusable in future projects.
- More input and validation functions may be added to the library later as needed.

## Goal

Build a reusable Input Validation Library containing the common input and validation functions that will be used in future projects.
