# User Input in C++

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## إدخال البيانات من المستخدم (User Input) في لغة C++

### مقدمة

في هذا الدرس، سنتعلم كيفية قراءة البيانات من المستخدم وتخزينها في المتغيرات باستخدام الأمر `cin`.

---

## ما هو `cin`؟ 🎯

**`cin`** هو كائن في لغة C++ يستخدم لقراءة البيانات من المستخدم عبر لوحة المفاتيح. 
- `cout` ← للإخراج (الطباعة)
- `cin` ← للإدخال (القراءة)

### الصيغة الأساسية:

<div dir="rtl" style="text-align: right;">

```cpp
cin >> variableName;
```

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    cout << "You entered: " << number << endl;
    return 0;
}
```

**Output:**
```
// إذا أدخل المستخدم: 25
You entered: 25
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الفرق بين `cout` و `cin`

### `cout` للإخراج:

<div dir="rtl" style="text-align: right;">

```cpp
cout << "Hello";  // ← يرسل البيانات إلى الشاشة
```

### `cin` للإدخال:

<div dir="rtl" style="text-align: right;">

```cpp
cin >> variable;  // → يستقبل البيانات من المستخدم
```

**التذكر:** السهم يشير إلى اتجاه تدفق البيانات

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // cout يرسل البيانات للخارج
    cout << "Enter your age: ";
    
    // cin يستقبل البيانات من المستخدم
    int age;
    cin >> age;
    
    cout << "Your age is: " << age << endl;
    return 0;
}
```

**Output:**
```
Enter your age: 20
Your age is: 20
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## أمثلة عملية على `cin`

### مثال 1: قراءة حرف من المستخدم

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    char myChar;
    
    cout << "Please enter a character: ";
    cin >> myChar;
    
    cout << "You entered character: " << myChar << endl;
    return 0;
}
```

**Output:**
```
Please enter a character: A
You entered character: A
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### مثال 2: قراءة عدد من المستخدم

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int myNumber;
    
    cout << "Please enter a number: ";
    cin >> myNumber;
    
    cout << "You entered number: " << myNumber << endl;
    return 0;
}
```

**Output:**
```
Please enter a number: 42
You entered number: 42
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### مثال 3: قراءة متغيرات متعددة

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    char myChar;
    int myNumber;
    
    cout << "Please enter a character: ";
    cin >> myChar;
    
    cout << "Please enter a number: ";
    cin >> myNumber;
    
    cout << "You entered character: " << myChar << endl;
    cout << "You entered number: " << myNumber << endl;
    return 0;
}
```

**Output:**
```
Please enter a character: B
Please enter a number: 50
You entered character: B
You entered number: 50
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## قراءة متغيرات متعددة في سطر واحد

<div dir="rtl" style="text-align: right;">

يمكن قراءة أكثر من متغير في نفس السطر:

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    char myChar;
    int myNumber;
    
    cout << "Enter a character and a number: ";
    cin >> myChar >> myNumber;
    
    cout << "Character: " << myChar << endl;
    cout << "Number: " << myNumber << endl;
    return 0;
}
```

**Output:**
```
Enter a character and a number: C 75
Character: C
Number: 75
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مثال شامل: برنامج بسيط لجمع رقمين

</div>

<div dir="ltr" style="text-align: left; background-color: #ffe6cc; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    sum = num1 + num2;
    
    cout << "Sum: " << num1 << " + " << num2 << " = " << sum << endl;
    return 0;
}
```

**Output:**
```
Enter first number: 15
Enter second number: 25
Sum: 15 + 25 = 40
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## نصائح مهمة

### 1. استخدم رسائل توضيحية:

<div dir="rtl" style="text-align: right;">

```cpp
// جيد ✓
cout << "Enter your name: ";
cin >> name;

// غير واضح ✗
cin >> name;
```

### 2. تأكد من نوع المتغير:

<div dir="rtl" style="text-align: right;">

```cpp
int age;        // لقراءة أعداد صحيحة
cin >> age;

string name;    // لقراءة نصوص
cin >> name;

char letter;    // لقراءة حرف واحد
cin >> letter;
```

### 3. رسائل المستخدم مهمة:

<div dir="rtl" style="text-align: right;">

بدون رسائل توضيحية، لن يعرف المستخدم ماذا يجب عليه إدخال!

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f0f0; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    
    // بدون هذه الرسائل، لن يعرف المستخدم ماذا يدخل!
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    return 0;
}
```

**Output:**
```
Enter your name: Anas
Enter your age: 25
Hello Anas, you are 25 years old.
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### المفاهيم الأساسية:

<div dir="rtl" style="text-align: right;">

- **`cin`**: لقراءة البيانات من المستخدم
- **الصيغة**: `cin >> variableName`
- **الاتجاه**: `>>` يشير إلى دخول البيانات للمتغير
- **الفرق**: `cout` للإخراج، `cin` للإدخال
- **الرسائل**: استخدم `cout` لإرشاد المستخدم

### الفكرة الرئيسية:
> **"`cin` يستقبل البيانات من المستخدم ويخزنها في المتغيرات، بينما `cout` يعرض البيانات للمستخدم"**

</div>

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# User Input in C++

## Introduction

In this lesson, we will learn how to read data from the user and store it in variables using the `cin` command.

---

## What is `cin`? 🎯

**`cin`** is an object in C++ used to read data from the user via the keyboard.
- `cout` ← for output (printing)
- `cin` ← for input (reading)

### Basic Syntax:

```cpp
cin >> variableName;
```

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    cout << "You entered: " << number << endl;
    return 0;
}
```

**Output:**
```
// If user enters: 25
You entered: 25
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Difference Between `cout` and `cin`

### `cout` for Output:

```cpp
cout << "Hello";  // ← sends data to screen
```

### `cin` for Input:

```cpp
cin >> variable;  // → receives data from user
```

**Remember:** The arrow indicates the direction of data flow

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // cout sends data out
    cout << "Enter your age: ";
    
    // cin receives data from user
    int age;
    cin >> age;
    
    cout << "Your age is: " << age << endl;
    return 0;
}
```

**Output:**
```
Enter your age: 20
Your age is: 20
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Practical Examples of `cin`

### Example 1: Reading a Character from User

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    char myChar;
    
    cout << "Please enter a character: ";
    cin >> myChar;
    
    cout << "You entered character: " << myChar << endl;
    return 0;
}
```

**Output:**
```
Please enter a character: A
You entered character: A
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Example 2: Reading a Number from User

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int myNumber;
    
    cout << "Please enter a number: ";
    cin >> myNumber;
    
    cout << "You entered number: " << myNumber << endl;
    return 0;
}
```

**Output:**
```
Please enter a number: 42
You entered number: 42
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Example 3: Reading Multiple Variables

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    char myChar;
    int myNumber;
    
    cout << "Please enter a character: ";
    cin >> myChar;
    
    cout << "Please enter a number: ";
    cin >> myNumber;
    
    cout << "You entered character: " << myChar << endl;
    cout << "You entered number: " << myNumber << endl;
    return 0;
}
```

**Output:**
```
Please enter a character: B
Please enter a number: 50
You entered character: B
You entered number: 50
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Reading Multiple Variables in One Line

You can read multiple variables in the same line:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    char myChar;
    int myNumber;
    
    cout << "Enter a character and a number: ";
    cin >> myChar >> myNumber;
    
    cout << "Character: " << myChar << endl;
    cout << "Number: " << myNumber << endl;
    return 0;
}
```

**Output:**
```
Enter a character and a number: C 75
Character: C
Number: 75
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Comprehensive Example: Simple Program to Add Two Numbers

</div>

<div dir="ltr" style="text-align: left; background-color: #ffe6cc; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    sum = num1 + num2;
    
    cout << "Sum: " << num1 << " + " << num2 << " = " << sum << endl;
    return 0;
}
```

**Output:**
```
Enter first number: 15
Enter second number: 25
Sum: 15 + 25 = 40
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Important Tips

### 1. Use Clear Messages:

```cpp
// Good ✓
cout << "Enter your name: ";
cin >> name;

// Unclear ✗
cin >> name;
```

### 2. Ensure Correct Variable Type:

```cpp
int age;        // for reading whole numbers
cin >> age;

string name;    // for reading text
cin >> name;

char letter;    // for reading single character
cin >> letter;
```

### 3. User Messages are Important:

Without clear messages, the user won't know what to input!

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f0f0; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    
    // Without these messages, the user won't know what to enter!
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    return 0;
}
```

**Output:**
```
Enter your name: Anas
Enter your age: 25
Hello Anas, you are 25 years old.
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### Core Concepts:

- **`cin`**: For reading data from user
- **Syntax**: `cin >> variableName`
- **Direction**: `>>` indicates data flowing into variable
- **Difference**: `cout` for output, `cin` for input
- **Messages**: Use `cout` to guide the user

### Main Idea:
> **"`cin` receives data from the user and stores it in variables, while `cout` displays data to the user"**

---

*Anas Chetoui* - `@anaschetoui`

</div>