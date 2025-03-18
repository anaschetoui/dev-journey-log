<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## Function Overloading

في هذا الدرس، سنتعلم عن خاصية Function Overloading في ++C، والتي تسمح لنا بأن يكون لدينا دوال متعددة بنفس الاسم ولكن بمعاملات مختلفة.

---

## المشكلة بدون Overloading

عندما يكون لدينا دوال متعددة تقوم بنفس العملية ولكن بمعاملات مختلفة، نحتاج لأسماء مختلفة لكل دالة:

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// دوال بأسماء مختلفة لنفس العملية
int MySumTwoIntegerNumbers(int a, int b) {
    return a + b;
}

double MySumTwoDoubleNumbers(double a, double b) {
    return a + b;
}

int MySumThreeIntegerNumbers(int a, int b, int c) {
    return a + b + c;
}

int MySumFourIntegerNumbers(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    cout << MySumTwoIntegerNumbers(10, 20) << endl;
    cout << MySumTwoDoubleNumbers(10.1, 20.1) << endl;
    cout << MySumThreeIntegerNumbers(10, 20, 30) << endl;
    cout << MySumFourIntegerNumbers(10, 20, 30, 40) << endl;
    return 0;
}
```

**الإخراج:**
```
30
30.2
60
100
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الحل باستخدام Function Overloading

يمكننا استخدام نفس الاسم للدوال مع معاملات مختلفة:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// كل الدوال لها نفس الاسم ولكن معاملات مختلفة
int MySum(int a, int b) {
    return a + b;
}

double MySum(double a, double b) {
    return a + b;
}

int MySum(int a, int b, int c) {
    return a + b + c;
}

int MySum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    cout << MySum(10, 20) << endl;          // يستدعي الدالة الأولى
    cout << MySum(10.1, 20.1) << endl;      // يستدعي الدالة الثانية
    cout << MySum(10, 20, 30) << endl;      // يستدعي الدالة الثالثة
    cout << MySum(10, 20, 30, 40) << endl;  // يستدعي الدالة الرابعة
    return 0;
}
```

**الإخراج:**
```
30
30.2
60
100
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## كيف يعمل Overloading؟

### الكومبايلر يميز بين الدوال عن طريق:

1. **عدد المعاملات (Parameters Count)**
2. **نوع المعاملات (Parameters Type)**

### مثال:

```cpp
MySum(10, 20);           // ↳ يستدعي int MySum(int, int)
MySum(10.1, 20.1);       // ↳ يستدعي double MySum(double, double)
MySum(10, 20, 30);       // ↳ يستدعي int MySum(int, int, int)
MySum(10, 20, 30, 40);   // ↳ يستدعي int MySum(int, int, int, int)
```

---

## قواعد Overloading

### 1. يجب أن يكون هناك اختلاف في المعاملات

```cpp
// صحيح ✓ - عدد مختلف من المعاملات
int calculate(int a, int b);
int calculate(int a, int b, int c);

// خطأ ✗ - نفس عدد ونوع المعاملات
int calculate(int x, int y);
int calculate(int a, int b);  // ❌ لن يعمل
```

### 2. يجب أن يكون هناك اختلاف في نوع المعاملات أو عددها

```cpp
// صحيح ✓ - أنواع مختلفة
void process(int a);
void process(double a);
void process(int a, double b);

// خطأ ✗ - فقط اختلاف في أسماء المعاملات
void print(int x);
void print(int y);  // ❌ لن يعمل
```

### 3. يمكن أن يكون هناك اختلاف في نوع الإرجاع فقط إذا اختلفت المعاملات

```cpp
// صحيح ✓ - أنواع إرجاع مختلفة مع معاملات مختلفة
int getValue(int a);
double getValue(double a);

// خطأ ✗ - نفس المعاملات ولكن نوع إرجاع مختلف
int calculate(int a, int b);
double calculate(int a, int b);  // ❌ لن يعمل
```

---

## فوائد Function Overloading

### 1. بساطة في الاستخدام
يحتاج المبرمج إلى تذكر اسم واحد فقط للدوال المتشابهة.

### 2. تحسين قابلية القراءة
الكود يصبح أكثر تنظيماً ووضوحاً.

### 3. مرونة في الاستدعاء
يمكن استدعاء الدالة بعدة طرق حسب الحاجة.

### 4. توافق مع الدوال الجاهزة
العديد من الدوال المبنية في ++C تستخدم Overloading مثل `max()` و `min()`.

---

## مثال من الدوال الجاهزة

دالة `max()` المبنية في ++C تستخدم Overloading:

```cpp
max(10, 20);           // مقارنة عددين صحيحين
max(10.5, 20.3);       // مقارنة عددين عشريين
max(10, 20, 30);       // مقارنة ثلاثة أعداد
```

---

## الخلاصة

### المفاهيم الأساسية:

1. **Function Overloading** هو وجود دوال متعددة بنفس الاسم
2. **يتم التمييز بينها** عن طريق عدد المعاملات ونوعها
3. **لا يمكن** تكرار نفس التوقيع (نفس العدد والنوع من المعاملات)
4. **يجب أن تختلف** في قائمة المعاملات وليس فقط في نوع الإرجاع

### الفكرة الرئيسية:
> **"Overloading هو شكل من أشكال تعدد الأشكال (Polymorphism) حيث يكون للدالة عدة أشكال حسب المعاملات التي تستقبلها"**

### المميزات:
- اسم واحد لوظائف متعددة
- الكومبايلر يختار الدالة المناسبة تلقائياً
- يجعل البرمجة أكثر مرونة واحترافية

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Function Overloading

In this lesson, we will learn about Function Overloading in C++, which allows us to have multiple functions with the same name but different parameters.

---

## Problem Without Overloading

When we have multiple functions that perform the same operation but with different parameters, we need different names for each function:

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Functions with different names for same operation
int MySumTwoIntegerNumbers(int a, int b) {
    return a + b;
}

double MySumTwoDoubleNumbers(double a, double b) {
    return a + b;
}

int MySumThreeIntegerNumbers(int a, int b, int c) {
    return a + b + c;
}

int MySumFourIntegerNumbers(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    cout << MySumTwoIntegerNumbers(10, 20) << endl;
    cout << MySumTwoDoubleNumbers(10.1, 20.1) << endl;
    cout << MySumThreeIntegerNumbers(10, 20, 30) << endl;
    cout << MySumFourIntegerNumbers(10, 20, 30, 40) << endl;
    return 0;
}
```

**Output:**
```
30
30.2
60
100
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Solution Using Function Overloading

We can use the same name for functions with different parameters:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// All functions have same name but different parameters
int MySum(int a, int b) {
    return a + b;
}

double MySum(double a, double b) {
    return a + b;
}

int MySum(int a, int b, int c) {
    return a + b + c;
}

int MySum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    cout << MySum(10, 20) << endl;          // Calls first function
    cout << MySum(10.1, 20.1) << endl;      // Calls second function
    cout << MySum(10, 20, 30) << endl;      // Calls third function
    cout << MySum(10, 20, 30, 40) << endl;  // Calls fourth function
    return 0;
}
```

**Output:**
```
30
30.2
60
100
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Does Overloading Work?

### The compiler distinguishes between functions by:

1. **Parameters Count**
2. **Parameters Type**

### Example:

```cpp
MySum(10, 20);           // ↳ Calls int MySum(int, int)
MySum(10.1, 20.1);       // ↳ Calls double MySum(double, double)
MySum(10, 20, 30);       // ↳ Calls int MySum(int, int, int)
MySum(10, 20, 30, 40);   // ↳ Calls int MySum(int, int, int, int)
```

---

## Overloading Rules

### 1. Must Have Different Parameters

```cpp
// Correct ✓ - Different number of parameters
int calculate(int a, int b);
int calculate(int a, int b, int c);

// Wrong ✗ - Same number and type of parameters
int calculate(int x, int y);
int calculate(int a, int b);  // ❌ Won't work
```

### 2. Must Differ in Parameter Types or Count

```cpp
// Correct ✓ - Different types
void process(int a);
void process(double a);
void process(int a, double b);

// Wrong ✗ - Only parameter names differ
void print(int x);
void print(int y);  // ❌ Won't work
```

### 3. Can Have Different Return Types Only If Parameters Differ

```cpp
// Correct ✓ - Different return types with different parameters
int getValue(int a);
double getValue(double a);

// Wrong ✗ - Same parameters but different return type
int calculate(int a, int b);
double calculate(int a, int b);  // ❌ Won't work
```

---

## Benefits of Function Overloading

### 1. Simplicity in Use
The programmer only needs to remember one name for similar functions.

### 2. Improved Readability
Code becomes more organized and clear.

### 3. Flexibility in Calling
Functions can be called in multiple ways as needed.

### 4. Compatibility with Built-in Functions
Many built-in C++ functions use Overloading like `max()` and `min()`.

---

## Example from Built-in Functions

The built-in `max()` function in C++ uses Overloading:

```cpp
max(10, 20);           // Compare two integers
max(10.5, 20.3);       // Compare two doubles
max(10, 20, 30);       // Compare three numbers
```

---

## Summary

### Core Concepts:

1. **Function Overloading** is having multiple functions with the same name
2. **Distinguished by** parameter count and type
3. **Cannot have** the same signature (same parameter count and type)
4. **Must differ** in parameter list, not just return type

### Main Idea:
> **"Overloading is a form of polymorphism where a function has multiple forms depending on the parameters it receives"**

### Advantages:
- One name for multiple functions
- Compiler automatically chooses the appropriate function
- Makes programming more flexible and professional

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>