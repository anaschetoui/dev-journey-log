<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">


# Omitting Namespace

## مقدمة

في هذا الدرس سنتعلم كيفية استخدام `using namespace` لتبسيط كتابة الكود في لغة C++ وتجنب التكرار غير الضروري.

---

## المشكلة والحل

### المشكلة: التكرار في الكتابة

بدون استخدام `using namespace`، نضطر لتكرار كتابة `std::` قبل كل أمر:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>

int main() {
    std::cout << "Mohammed Abu-Hadhoud";
    std::cout << std::endl;
    std::cout << "This is my first C++ program";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### الحل: استخدام using namespace

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abu-Hadhoud";
    cout << endl;
    cout << "This is my first C++ program";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

---

## التطبيق العملي

### الخطوات الأساسية

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. إضافة using namespace std بعد #include
2. حذف جميع حالات std:: من الكود
3. التأكد من عمل البرنامج بشكل صحيح
```

</div>

<div dir="rtl" style="text-align: right;">

### مثال توضيحي

**الكود الأصلي:**
</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>

int main() {
    std::cout << "Name: Mohammed Abu-Hadhoud" << std::endl;
    std::cout << "This is my first C++ program" << std::endl;
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

**بعد التبسيط:**
</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Mohammed Abu-Hadhoud" << endl;
    cout << "This is my first C++ program" << endl;
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

---


## مفهوم Namespaces

### ما هي مساحات الأسماء؟

- وسيلة لتنظيم الكود ومنع تعارض الأسماء
- تجميع الوظائف المتعلقة ببعضها
- إعطاء سياق للأوامر والمتغيرات

---

## الأخطاء الشائعة

### الخطأ: نسيان using namespace

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>

int main() {
    cout << "Hello World";  // خطأ
    return 0;
}
```
</div>

<div dir="rtl" style="text-align: right;">

### الخطأ: الترتيب الخاطئ

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
using namespace std;  // خطأ
#include <iostream>

// الصحيح:
#include <iostream>
using namespace std;
```
</div>

<div dir="rtl" style="text-align: right;">

---

## الخلاصة

### النقاط الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
using namespace std تبسط كتابة الكود
تجنب التكرار غير الضروري
```
</div>

<div dir="rtl" style="text-align: right;">

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Omitting Namespace in C++ - Part 3
## Omitting Namespace

## Introduction

In this lesson, we will learn how to use `using namespace` to simplify code writing in C++ and avoid unnecessary repetition.

---

## Problem and Solution

### Problem: Repetitive Writing

Without using `using namespace`, we have to repeat writing `std::` before every command:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>

int main() {
    std::cout << "Mohammed Abu-Hadhoud";
    std::cout << std::endl;
    std::cout << "This is my first C++ program";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### Solution: Using namespace

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abu-Hadhoud";
    cout << endl;
    cout << "This is my first C++ program";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Practical Implementation

### Basic Steps

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Add using namespace std after #include
2. Remove all std:: instances from code
3. Ensure program works correctly
```

</div>

<div dir="rtl" style="text-align: right;">

### Demonstration Example

**Original Code:**
</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>

int main() {
    std::cout << "Name: Mohammed Abu-Hadhoud" << std::endl;
    std::cout << "This is my first C++ program" << std::endl;
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

**After Simplification:**
</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Mohammed Abu-Hadhoud" << endl;
    cout << "This is my first C++ program" << endl;
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

---



## Namespaces Concept

### What are Namespaces?

- Method to organize code and prevent name conflicts
- Group related functions together
- Provide context for commands and variables

---

## Common Errors

### Error: Forgetting using namespace

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>

int main() {
    cout << "Hello World";  // Error
    return 0;
}
```
</div>

<div dir="rtl" style="text-align: right;">

### Error: Wrong Order

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
using namespace std;  // Error
#include <iostream>

// Correct:
#include <iostream>
using namespace std;
```
</div>

<div dir="rtl" style="text-align: right;">

---

## Summary

### Key Points:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
using namespace std simplifies code writing
Avoid unnecessary repetition
```
</div>

<div dir="rtl" style="text-align: right;">

---
*Anas Chetoui* - `@anaschetoui`