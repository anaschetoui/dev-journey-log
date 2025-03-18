<a id="arabic"></a>
[English ↙](#english)

# Declaration vs Definition
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">


في هذا الدرس، سنتعلم الفرق بين declaration وdefinition للدوال في لغة ++C، وكيف يمكن استخدام declarations لحل مشكلة ترتيب الدوال في الكود.

---

## المشكلة الأساسية

عندما نعرف دالة تحت الدالة `main()` ونحاول استدعاءها، يواجه المترجم مشكلة:

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    add(10, 20);  // ❌ خطأ: add غير معرّف
    return 0;
}

// تعريف الدالة بعد main
void add(int a, int b) {
    cout << a + b << endl;
}
```

**الخطأ:**
```
error: 'add' was not declared in this scope
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### الحل التقليدي

كنا سابقاً ننقل تعريف الدالة فوق الدالة `main()`:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// تعريف الدالة قبل main
void add(int a, int b) {
    cout << a + b << endl;
}

int main() {
    add(10, 20);  // ✓ يعمل
    return 0;
}
```

**الإخراج:**
```
30
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الفرق بين Declaration وDefinition

### Declaration

Declaration هو إخبار المترجم بوجود دالة معينة، دون ذكر تفاصيل تنفيذها. هو مثل العنوان الذي يخبر المترجم: "يا مترجم، عندي دالة اسمها add تأخذ عددين صحيحين".

```cpp
void add(int, int);  // ← declaration
```

### Definition

Definition هو التنفيذ الكامل للدالة بما في ذلك الجسم والأوامر داخل الدالة.

```cpp
void add(int a, int b) {  // ← definition
    cout << a + b << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

## الحل باستخدام Declaration

```cpp
#include <iostream>
using namespace std;

// declaration للدالة
void add(int, int);

int main() {
    add(10, 20);  // ✓ يعمل بسبب declaration
    return 0;
}

// definition للدالة بعد main
void add(int a, int b) {
    cout << a + b << endl;
}
```

**الإخراج:**
```
30
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## لماذا نحتاج Declarations؟

### عندما يكون لدينا دوال تستدعي بعضها

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// declarations للدوال
void functionA();
void functionB();

int main() {
    functionA();
    return 0;
}

void functionA() {
    cout << "Inside functionA" << endl;
    functionB();  // ✓ يستدعي functionB
}

void functionB() {
    cout << "Inside functionB" << endl;
}
```

**الإخراج:**
```
Inside functionA
Inside functionB
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### في البرامج الكبيرة متعددة الدوال

عندما يكون لديك 10 أو 20 دالة، يمكن وضع جميع declarations في الأعلى وdefinitions في الأسفل:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f0f0; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// منطقة declarations
void add(int, int);
int multiply(int, int);
float divide(float, float);

int main() {
    add(10, 20);
    cout << multiply(5, 6) << endl;
    cout << divide(10.0, 2.0) << endl;
    return 0;
}

// منطقة definitions
void add(int a, int b) {
    cout << a + b << endl;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(float num1, float num2) {
    return num1 / num2;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## قواعد كتابة Declarations

### Declaration يأخذ سطر واحد فقط

```cpp
// صحيح
void add(int, int);

// خطأ (هذا definition وليس declaration)
void add(int, int) {
    cout << a + b << endl;
}
```

### لا حاجة لأسماء المعاملات في Declaration

```cpp
// جميعها declarations صحيحة
void printInfo(string, int);
void printInfo(string name, int age);
void printInfo(string n, int a);
```

الأسماء في declaration اختيارية، لكن وجودها مفيد للتوثيق.

---

## الخلاصة

### الفرق الرئيسي

| | Declaration | Definition |
|-|-------------|------------|
| **الغرض** | إخبار المترجم بوجود الدالة | تنفيذ الدالة |
| **المحتوى** | نوع الإرجاع + الاسم + المعاملات | الجسم الكامل + الأوامر |
| **عدد الأسطر** | سطر واحد | سطور متعددة |

### متى نستخدم Declarations؟

1. عندما نريد استدعاء دالة موضوعة بعد الدالة الحالية
2. عندما يكون هناك استدعاء متبادل بين الدوال
3. لتنظيم الكود في البرامج الكبيرة

### الفكرة الأساسية
Declaration مثل العنوان، وdefinition مثل المنزل. العنوان يخبرك بالمكان، والمنزل هو المكان نفسه.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Declaration vs Definition

## Introduction

In this lesson, we will learn the difference between function declaration and function definition in C++, and how to use declarations to solve the problem of function order in code.

---

## The Core Problem

When we define a function below the `main()` function and try to call it, the compiler encounters a problem:

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    add(10, 20);  // ❌ Error: add is not defined
    return 0;
}

// Function definition after main
void add(int a, int b) {
    cout << a + b << endl;
}
```

**Error:**
```
error: 'add' was not declared in this scope
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Traditional Solution

Previously, we used to move the function definition above the `main()` function:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Function definition before main
void add(int a, int b) {
    cout << a + b << endl;
}

int main() {
    add(10, 20);  // ✓ Works
    return 0;
}
```

**Output:**
```
30
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Difference Between Declaration and Definition

### Declaration

Declaration is telling the compiler about a function's existence, without mentioning implementation details. It's like an address that tells the compiler: "Hey compiler, I have a function called add that takes two integers".

```cpp
void add(int, int);  // ← Declaration
```

### Definition

Definition is the complete implementation of the function including its body and the commands inside the function.

```cpp
void add(int a, int b) {  // ← Definition
    cout << a + b << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

## Solution Using Declaration

```cpp
#include <iostream>
using namespace std;

// Function declaration
void add(int, int);

int main() {
    add(10, 20);  // ✓ Works because of declaration
    return 0;
}

// Function definition after main
void add(int a, int b) {
    cout << a + b << endl;
}
```

**Output:**
```
30
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Why Do We Need Declarations?

### When We Have Functions Calling Each Other

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Function declarations
void functionA();
void functionB();

int main() {
    functionA();
    return 0;
}

void functionA() {
    cout << "Inside functionA" << endl;
    functionB();  // ✓ Calls functionB
}

void functionB() {
    cout << "Inside functionB" << endl;
}
```

**Output:**
```
Inside functionA
Inside functionB
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### In Large Multi-Function Programs

When you have 10 or 20 functions, you can put all declarations at the top and definitions at the bottom:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f0f0; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Declaration area
void add(int, int);
int multiply(int, int);
float divide(float, float);

int main() {
    add(10, 20);
    cout << multiply(5, 6) << endl;
    cout << divide(10.0, 2.0) << endl;
    return 0;
}

// Definition area
void add(int a, int b) {
    cout << a + b << endl;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(float num1, float num2) {
    return num1 / num2;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Rules for Writing Declarations

### Declaration Takes Only One Line

```cpp
// Correct
void add(int, int);

// Wrong (this is definition, not declaration)
void add(int, int) {
    cout << a + b << endl;
}
```

### No Need for Parameter Names in Declaration

```cpp
// All are correct declarations
void printInfo(string, int);
void printInfo(string name, int age);
void printInfo(string n, int a);
```

Names in declaration are optional, but their presence is useful for documentation.

---

## Summary

### Main Difference

| | Declaration | Definition |
|-|-------------|------------|
| **Purpose** | Tell compiler about function existence | Implement the function |
| **Content** | Return type + Name + Parameters | Full body + Commands |
| **Lines** | One line | Multiple lines |

### When to Use Declarations?

1. When we want to call a function placed after the current function
2. When there is mutual calling between functions
3. To organize code in large programs

### Basic Idea
Declaration is like an address, and definition is like the house. The address tells you the location, the house is the location itself.

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`


</div>