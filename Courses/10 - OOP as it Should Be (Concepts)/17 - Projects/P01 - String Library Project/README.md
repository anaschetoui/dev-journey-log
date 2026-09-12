# String Library Project

## Overview

Build a reusable C++ String Library using the OOP concepts learned in the course.

The main class is:

`clsString`

The purpose of this project is to take the String functions created in the previous lessons and organize them inside one reusable class.

The library should support both:

- Object-based functions
- Static functions

The object version should reuse the static version instead of duplicating the main algorithm.

---

# Requirements

## 1. Create the Class

Create a class named:

`clsString`

Place the class in:

`clsString.h`

The class must contain a private string member:

`string _Value;`

`_Value` stores the string of the object.

---

## 2. Constructors

Create two constructors.

### Default Constructor

Creates an object with an empty string.

Example:

`clsString S1;`

### Parameterized Constructor

Receives a string and stores it in `_Value`.

Example:

`clsString S1("Anas Chetoui");`

---

## 3. Get and Set

Create:

- Set function
- Get function

for `_Value`.

The class should also support property-style access.

Example:

`S1.Value = "Anas Chetoui";`

and:

`cout << S1.Value;`

---

# 4. Add the Previous String Functions

Move the String functions from the previous String lessons into `clsString`.

## Source Location

The previous String functions are located in:

`Courses/07 - Algorithms & Problem Solving Level 3/`

### String Lessons

| Lesson | Original Function / Topic |
|---|---|
| `P24 - Upper First Letter of Each Word` | `UpperFirstLetterOfEachWord()` |
| `P25 - Lower First Letter of Each Word` | `LowerFirstLetterOfEachWord()` |
| `P26 - Upper_Lower All Letters of a String` | `UPPERCASE()` / `lowercase()` |
| `P27 - Invert Character Case` | `InvertCharacter()` |
| `P28 - Invert All Letters Case` | `InvertAllLettersCase()` |
| `P29 - Count Small-Capital Letters` | `CountCapitalLetters()` / `CountSmallLetters()` |
| `P30 - Count Letters` | `CountLettersInString()` |
| `P31 - Case Insensitive Count` | `CountInsensitiveCount()` |
| `P32 - Is Vowel` | `IsVowel()` |
| `P33 - Count Vowel` | `CountVowelsInString()` |
| `P34 - Print All Vowels In String` | `PrintAllVowels()` |
| `P35 - Print Each Word in String` | `PrintEachWordInString()` |
| `P36 - Count Each Word In String` | `CountEachWordInString()` |
| `P37 - Split String` | `vSplitString()` |
| `P38 - TrimLeft TromRight Trim` | `TrimLeft()` / `TrimRight()` / `Trim()` |
| `P39 - Join String` | `JoinString(vector)` |
| `P40 - Join String (Overloading)` | `JoinString(array)` |
| `P41 - Reverse String Words` | `ReverseString()` |
| `P42 - Replace Words` | Basic `ReplaceWords()` |
| `P43 - Replace Words (Custom)` | Custom `ReplaceWords()` with MatchCase |
| `P44 - Remove Punctuations` | `RemovePunctuations()` |


---

# 5. Implement the String Functions

The project should include the String functions learned in the previous lessons.

### Letter Functions

- `UpperFirstLetterOfEachWord()`
- `LowerFirstLetterOfEachWord()`
- `UPPERCASE()`
- `lowercase()`
- `InvertCharacter()`
- `InvertAllLettersCase()`
- `CountCapitalLetters()`
- `CountSmallLetters()`
- `CountLettersInString()`
- `CountInsensitiveCount()`

### Vowel Functions

- `IsVowel()`
- `CountVowelsInString()`
- `PrintAllVowels()`

### Word Functions

- `PrintEachWordInString()`
- `CountEachWordInString()`
- `vSplitString()`
- `ReverseString()`

### String Editing Functions

- `TrimLeft()`
- `TrimRight()`
- `Trim()`
- `JoinString()`
- `ReplaceWords()`
- `RemovePunctuations()`

---

# 6. Static and Object Versions

For functions that need to work with a string directly, create a static version.

Example:

`clsString::CountEachWordInString("Anas Chetoui");`

The static function receives the string as a parameter.

---

## Object Version

The object version should work directly with `_Value`.

Example:

`S1.CountEachWordInString();`

The object version should call the static version.

Example:

`short CountEachWordInString()
{
    return CountEachWordInString(_Value);
}`

---

# 7. Code Reuse

Do not duplicate the same algorithm.

Use this design:

Static Function
→ Receives a string
→ Contains the main algorithm

Object Function
→ Uses `_Value`
→ Calls the Static Function

---

# 8. Replace Words

Use the custom Replace Words function from:

`P43 - Replace Words (Custom)`

It must support:

- Word to replace
- Replacement word
- Match Case option

Example:

`clsString::ReplaceWords(
    "Anas likes C++",
    "C++",
    "Programming",
    true
);`

The object version should use `_Value`.

Example:

`S1.ReplaceWords(
    "C++",
    "Programming"
);`

---

# 9. Join String Overloading

Use the Join String lessons:

- `P39 - Join String`
- `P40 - Join String (Overloading)`

The class should support joining:

- `vector<string>`
- `string[]`

Example:

`clsString::JoinString(vWords, " ");`

and:

`S1.JoinString(Words, 3, " ");`

---

# 10. Testing

Create a `main()` function to test the library.

The test should cover:

### Constructors

- Default constructor
- Parameterized constructor

### Properties

- Set `Value`
- Get `Value`

### Object Functions

Test the implemented object functions.

### Static Functions

Test the implemented static functions.

### String Operations

Test:

- Upper first letter
- Lower first letter
- Uppercase
- Lowercase
- Invert case
- Capital letter count
- Small letter count
- Letter count
- Case-insensitive count
- Vowel checking
- Vowel counting
- Print vowels
- Print words
- Count words
- Split
- Trim left
- Trim right
- Trim
- Join
- Reverse
- Replace
- Remove punctuation

---

# 11. Main Test Example

Example starting point:

`clsString S1;

S1.Value = "Anas Chetoui";

S1.PrintEachLetterOfWord();

cout << "Upper First Letter of Each Word: "
     << S1.UpperFirstLetterOfEachWord()
     << endl;

cout << "Lower First Letter of Each Word: "
     << S1.LowerFirstLetterOfEachWord()
     << endl;

cout << "Upper case: "
     << S1.UPPERCASE()
     << endl;

cout << "Lower case: "
     << S1.lowercase()
     << endl;`

Continue testing the remaining functions.

---

# 12. OOP Concepts Used

This project should apply:

- Classes
- Objects
- Encapsulation
- Constructors
- Properties
- Function Overloading
- Static Methods
- Code Reuse

---

# Main Goal

Combine the String algorithms from the previous lessons with the OOP concepts learned in this course.

The final result should be a reusable:

`clsString`

String Library that can be used through both:

- Objects
- Static functions