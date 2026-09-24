# Utility Library

## About

This project creates a reusable Utility Library called `clsUtil`.

The goal is to collect useful functions that can be used in many different projects instead of writing the same functions again and again.

All members of `clsUtil` are `static`, so the functions can be used directly without creating an object.

Example:

```cpp
clsUtil::RandomNumber(1, 100);
```

## Requirements

### 1. Srand

Create:

```cpp
Srand()
```

This function initializes the random number generator.

Example:

```cpp
clsUtil::Srand();
```

### 2. Random Number

Create:

```cpp
RandomNumber(int From, int To)
```

Returns a random number between `From` and `To`.

Example:

```cpp
clsUtil::RandomNumber(1, 100);
```

### 3. Random Character

Create:

```cpp
GetRandomCharacter(enCharType CharType)
```

The character types should include:

- `SmallLetter`
- `CapitalLetter`
- `Digit`
- `SpecialCharacter`
- `MixCharacter`

`MixCharacter` should generate a random character from capital letters, small letters, and digits.

Example:

```cpp
clsUtil::GetRandomCharacter(clsUtil::CapitalLetter);
```

### 4. Generate Word

Create:

```cpp
GenerateWord(enCharType CharType, short Length)
```

Generates a random word with the requested length.

Example:

```cpp
clsUtil::GenerateWord(
    clsUtil::MixCharacter,
    8
);
```

### 5. Generate Key

Create:

```cpp
GenerateKey(enCharType CharType)
```

Generates one random key made of four groups.

Example:

```text
ABCD-EFGH-IJKL-MNOP
```

Example usage:

```cpp
clsUtil::GenerateKey(clsUtil::CapitalLetter);
```

### 6. Generate Keys

Create:

```cpp
GenerateKeys(short NumberOfKeys, enCharType CharType)
```

Generates multiple random keys.

Example:

```cpp
clsUtil::GenerateKeys(10, clsUtil::CapitalLetter);
```

### 7. Swap Functions

Create overloaded `Swap` functions for:

```cpp
Swap(int& A, int& B)
Swap(double& A, double& B)
Swap(string& A, string& B)
Swap(clsDate& A, clsDate& B)
```

The same function name should be used with different parameter types.

### 8. Shuffle Array

Create a function to randomly shuffle the elements of an array.

Example:

```cpp
clsUtil::ShuffleArray(Array, Length);
```

### 9. Fill Array With Random Numbers

Create:

```cpp
FillArrayWithRandomNumbers(
    int Array[],
    int Length,
    int From,
    int To
)
```

The function fills the array with random numbers between `From` and `To`.

Example:

```cpp
clsUtil::FillArrayWithRandomNumbers(
    Array,
    5,
    20,
    50
);
```

### 10. Fill Array With Random Words

Create a function that fills an array with random words.

It should receive:

- The array
- Array length
- Word length
- Character type

Example:

```cpp
clsUtil::FillArrayWithRandomWords(
    Array,
    5,
    8,
    clsUtil::MixCharacter
);
```

### 11. Fill Array With Keys

Create:

```cpp
FillArrayWithKeys(
    string Array[],
    int Length,
    enCharType CharType
)
```

Fills the array with generated random keys.

Example:

```cpp
clsUtil::FillArrayWithKeys(
    Array,
    5,
    clsUtil::CapitalLetter
);
```

### 12. Tab

Create a utility function for printing a tab/indentation.

Example:

```cpp
clsUtil::Tab();
```

### 13. Encrypt Text

Move the existing encryption function into `clsUtil`:

```cpp
EncryptText(string Text, string EncryptionKey)
```

Returns the encrypted text.

### 14. Decrypt Text

Move the existing decryption function into `clsUtil`:

```cpp
DecryptText(string Text, string EncryptionKey)
```

Returns the decrypted text.

The existing encryption/decryption algorithm should be reused.

## Class Design

Create:

```text
clsUtil.h
```

All members should be `static`.

Example:

```cpp
class clsUtil
{
public:

    static int RandomNumber(int From, int To);

    // other utility functions
};
```

The functions should be called directly:

```cpp
clsUtil::RandomNumber(1, 100);
```

No object is required.

## Current Testing

The current `main.cpp` tests:

```cpp
clsUtil::Srand();

clsUtil::RandomNumber(1, 100);

clsUtil::GetRandomCharacter(clsUtil::CapitalLetter);

clsUtil::GenerateKey();

clsUtil::GenerateKeys(10, clsUtil::CapitalLetter);
```

## Libraries

The Utility Library is intended to work together with the libraries developed in previous projects:

```text
clsString
clsDate
clsUtil
```

Their responsibilities remain separate:

```text
clsString
→ String operations

clsDate
→ Date operations

clsUtil
→ General reusable utility functions
```

## Goal

The final `clsUtil` library should provide reusable functions that can be used across future projects.

The main idea is:

```text
Create the function once
        ↓
Add it to clsUtil
        ↓
Reuse it in future projects
```

This reduces repeated code and makes future projects easier to build.
