# Project 1: Calculator — Requirements

## Project Goal

Create/use a small `clsCalculator` project to review the OOP concepts learned so far.

The calculator's internal implementation is hidden. You should interact with the calculator through its available public methods without needing to know how the internal code works.

This project reinforces:

- Classes and Objects
- Class Members
- Access Specifiers
- Encapsulation
- Data Hiding
- Abstraction
- Using an object through a simple interface

---

# 1. Calculator Object

Create an object from the `clsCalculator` class.

Example:

```cpp
clsCalculator Calculator1;
```

The calculator object is the way the outside code interacts with the calculator.

---

# 2. Required Operations

The calculator should provide methods for the following operations:

- `Clear()`
- `Add()`
- `Subtract()`
- `Divide()`
- `Multiply()`
- `PrintResult()`

The exact internal implementation of these methods should remain hidden.

---

# 3. Clear

`Clear()` resets the calculator's current result to `0`.

Example:

```cpp
Calculator1.Clear();
Calculator1.PrintResult();
```

Expected format:

```text
Result After Clear 0 is: 0
```

---

# 4. Add

`Add()` receives a number and adds it to the calculator's current result.

Example:

```cpp
Calculator1.Add(100);
Calculator1.PrintResult();
```

If the current result was `10`, the output should be:

```text
Result After Adding 100 is: 110
```

The output must show:

- The operation: `Adding`
- The value that was added: `100`
- The current result: `110`

---

# 5. Subtract

`Subtract()` receives a number and subtracts it from the calculator's current result.

Example:

```cpp
Calculator1.Subtract(20);
Calculator1.PrintResult();
```

If the current result was `110`, the output should be:

```text
Result After Subtracting 20 is: 90
```

The output must show:

- The operation: `Subtracting`
- The value that was subtracted: `20`
- The current result: `90`

---

# 6. Divide

`Divide()` receives a number and divides the calculator's current result by it.

Example:

```cpp
Calculator1.Divide(2);
Calculator1.PrintResult();
```

If the current result was `90`, the output should be:

```text
Result After Dividing 2 is: 45
```

The output must show:

- The operation: `Dividing`
- The divisor: `2`
- The current result: `45`

---

# 7. Multiply

`Multiply()` receives a number and multiplies the calculator's current result by it.

Example:

```cpp
Calculator1.Multiply(3);
Calculator1.PrintResult();
```

If the current result was `45`, the output should be:

```text
Result After Multiplying 3 is: 135
```

The output must show:

- The operation: `Multiplying`
- The value used: `3`
- The current result: `135`

---

# 8. PrintResult

`PrintResult()` displays the result of the most recent operation.

The output must identify the operation that was performed.

Examples:

```text
Result After Adding 100 is: 110
```

```text
Result After Subtracting 20 is: 90
```

```text
Result After Dividing 2 is: 45
```

```text
Result After Multiplying 3 is: 135
```

```text
Result After Clear 0 is: 0
```

The calculator itself should handle displaying the result.

Do **not** create or use a `GetResult()` method for this project.

---

# 9. Operation Order

There is **no required order** for the operations.

You are free to choose the sequence of:

- `Add()`
- `Subtract()`
- `Divide()`
- `Multiply()`
- `Clear()`

What matters is that each operation works correctly and that `PrintResult()` displays the correct operation, input value, and resulting value.

For example:

```cpp
Calculator1.Add(100);
Calculator1.PrintResult();

Calculator1.Subtract(20);
Calculator1.PrintResult();
```

Should produce:

```text
Result After Adding 100 is: 110
Result After Subtracting 20 is: 90
```

Another valid sequence could be:

```cpp
Calculator1.Add(50);
Calculator1.Multiply(2);
Calculator1.Subtract(10);
Calculator1.PrintResult();
```

The sequence itself is not the requirement. Correct behavior is.

---

# 10. Main Requirement

After performing an operation, call:

```cpp
Calculator1.PrintResult();
```

For example:

```cpp
Calculator1.Add(100);
Calculator1.PrintResult();
```

Not:

```cpp
cout << Calculator1.GetResult();
```

The outside code should not directly retrieve or manipulate the calculator's internal result.

---

# 11. Encapsulation Requirement

The calculator's internal implementation must remain hidden.

The developer using the class should not need to know:

- Where the result is stored.
- How `Add()` changes the result.
- How `Subtract()` changes the result.
- How `Divide()` changes the result.
- How `Multiply()` changes the result.
- How `Clear()` resets the result.
- How `PrintResult()` accesses the internal result.

The developer only needs to know which public methods are available and what they do.

---

# 12. Black-Box Idea

Treat `clsCalculator` as a **black box**.

You interact with it through its public interface:

```cpp
Calculator1.Add(100);
Calculator1.Subtract(20);
Calculator1.Divide(2);
Calculator1.Multiply(3);
Calculator1.Clear();
Calculator1.PrintResult();
```

You do not need to see the internal implementation.

For example, when you write:

```cpp
Calculator1.Add(100);
```

you only care that `100` is added to the current result.

You do not need to know how the calculator performs the addition internally.

---

# Expected Behavior Examples

Starting with a result of `10`:

```cpp
Calculator1.Add(100);
Calculator1.PrintResult();
```

Output:

```text
Result After Adding 100 is: 110
```

Then:

```cpp
Calculator1.Subtract(20);
Calculator1.PrintResult();
```

Output:

```text
Result After Subtracting 20 is: 90
```

Then:

```cpp
Calculator1.Divide(2);
Calculator1.PrintResult();
```

Output:

```text
Result After Dividing 2 is: 45
```

Then:

```cpp
Calculator1.Multiply(3);
Calculator1.PrintResult();
```

Output:

```text
Result After Multiplying 3 is: 135
```

Finally:

```cpp
Calculator1.Clear();
Calculator1.PrintResult();
```

Output:

```text
Result After Clear 0 is: 0
```

---

# Project Objective

The main purpose of this project is to practice using a class through its public interface while its internal implementation remains hidden.

You should be able to use the calculator without knowing how the calculator works internally.

> **Use what the class provides. Do not depend on what the class hides.**
