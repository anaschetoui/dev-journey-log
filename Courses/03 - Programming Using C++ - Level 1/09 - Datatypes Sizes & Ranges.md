# Data Types Sizes and Ranges in C++

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## أحجام ونطاقات أنواع البيانات في لغة C++

### مقدمة

في هذا الدرس، سنتعلم عن **أحجام ونطاقات أنواع البيانات** في لغة C++. هذا الموضوع مهم لاختيار النوع المناسب لكل متغير وتجنب إهدار موارد الذاكرة.

---

## أنواع البيانات الأساسية وأحجامها

### الجدول الأول: الأنواع الأساسية

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

| النوع | المعنى | النطاق | الحجم (بايت) |
|-------|---------|---------|-------------|
| `int` | عدد صحيح | 2,147,483,648- إلى 2,147,483,647+ | 4 |
| `float` | عدد عشري | 1.17549e-38 إلى 3.40282e+38 | 4 |
| `double` | عدد عشري مزدوج | 2.22507e-308 إلى 1.79769e+308 | 8 |
| `char` | حرف | 127- إلى 127 | 1 |
| `wchar_t` | حرف عريض | - | 2 |
| `bool` | قيمة منطقية | 0 إلى 1 | 1 |
| `void` | فارغ | - | 0 |
| `string` | سلسلة نصية | - | 12 |

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### الجدول الثاني: معدلات الأنواع (Type Modifiers)

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

| النوع | الإشارة | النطاق | الحجم |
|-------|----------|---------|--------|
| `short int` | signed | 32,768- إلى 32,767+ | 2 بايت |
| `short` | unsigned | 0 إلى 65,536 | 2 بايت |
| `int` | signed | 2,147,483,648- إلى 2,147,483,647+ | 4 بايت |
| `long int` | unsigned | 0 إلى 4,294,967,295 | 4 بايت |
| `long` | signed | 2,147,483,648- إلى 2,147,483,647+ | 4 بايت |
| `long` | unsigned | 0 إلى 4,294,967,295 | 4 بايت |
| `long long int` | signed | (2^63)- إلى (2^63)-1 | 8 بايت |
| `long long` | unsigned | 0 إلى 18,446,744,073,709,551,615 | 8 بايت |

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## شرح المفاهيم الأساسية

### لماذا نهتم بأحجام البيانات؟ ☕

<div dir="rtl" style="text-align: right;">

**مثال عملي:** عندما تشرب فنجان قهوة، تستخدم فنجاناً بحجم مناسب. لا تستخدم طنجرة كبيرة! نفس المبدأ ينطبق على المتغيرات:

- ✓ استخدام `short` للعمر (لا يتجاوز 150)
- ✗ استخدام `int` للعمر (يهدر الذاكرة)

</div>

### معدلات الأنواع (Type Modifiers)

<div dir="rtl" style="text-align: right;">

هي كلمات مفتاحية تعدل خصائص أنواع البيانات:

- **`signed`**: يسمح بالقيم الموجبة والسالبة (افتراضي)
- **`unsigned`**: يسمح بالقيم الموجبة فقط
- **`short`**: يقلل الحجم والنطاق
- **`long`**: يزيد الحجم والنطاق

**ملاحظة:** هذه المعدلات تستخدم فقط مع `int`، `double`، `char`

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // التعريف الأساسي
    int age = 25;                    // signed by default
    
    // استخدام المعدلات
    unsigned int positiveNumber = 100;
    short int smallNumber = 30000;
    long int largeNumber = 2000000;
    
    cout << "Age: " << age << endl;
    cout << "Positive Number: " << positiveNumber << endl;
    cout << "Small Number: " << smallNumber << endl;
    cout << "Large Number: " << largeNumber << endl;
    
    return 0;
}
```

**Output:**
```
Age: 25
Positive Number: 100
Small Number: 30000
Large Number: 2000000
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الفرق بين `signed` و `unsigned`

### `signed` (افتراضي)

<div dir="rtl" style="text-align: right;">

```cpp
int x = -10;        // ✓ مسموح
int y = 10;         // ✓ مسموح
```

يسمح بالقيم الموجبة والسالبة

### `unsigned`

<div dir="rtl" style="text-align: right;">

```cpp
unsigned int x = 10;    // ✓ مسموح
unsigned int y = -10;   // ✗ خطأ (لا يسمح بالقيم السالبة)
```

يضاعف النطاق الموجب باستخدام البت المخصص للإشارة

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    signed int signedNum = -100;     // يسمح بالسالب
    unsigned int unsignedNum = 100;  // لا يسمح بالسالب
    
    cout << "Signed: " << signedNum << endl;
    cout << "Unsigned: " << unsignedNum << endl;
    
    // هذا سيتسبب في مشاكل:
    // unsigned int problem = -50; // خطأ!
    
    return 0;
}
```

**Output:**
```
Signed: -100
Unsigned: 100
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مشكلة تجاوز السعة (Overflow)

<div dir="rtl" style="text-align: right;">

عند تخزين قيمة أكبر من النطاق المسموح، يحدث **تجاوز للسعة** مما يؤدي لنتائج غير متوقعة.

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    short smallVar = 32767;  // أقصى قيمة لـ short
    
    cout << "Original value: " << smallVar << endl;
    
    smallVar = smallVar + 1; // تجاوز السعة!
    cout << "After overflow: " << smallVar << endl; // نتيجة غير متوقعة
    
    return 0;
}
```

**Output:**
```
Original value: 32767
After overflow: -32768
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## تحديد أحجام الأنواع عملياً

<div dir="rtl" style="text-align: right;">

يمكن استخدام `sizeof()` لمعرفة الحجم الفعلي للأنواع على جهازك.

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    
    return 0;
}
```

**Output:**
```
Size of bool: 1 bytes
Size of char: 1 bytes
Size of short: 2 bytes
Size of int: 4 bytes
Size of long: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## تحديد النطاقات عملياً

</div>

<div dir="ltr" style="text-align: left; background-color: #ffe6cc; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "char range: " << int(numeric_limits<char>::min()) 
         << " to " << int(numeric_limits<char>::max()) << endl;
    
    cout << "unsigned char range: 0 to " 
         << int(numeric_limits<unsigned char>::max()) << endl;
    
    cout << "short range: " << numeric_limits<short>::min() 
         << " to " << numeric_limits<short>::max() << endl;
    
    cout << "int range: " << numeric_limits<int>::min() 
         << " to " << numeric_limits<int>::max() << endl;
    
    return 0;
}
```

**Output:**
```
char range: -128 to 127
unsigned char range: 0 to 255
short range: -32768 to 32767
int range: -2147483648 to 2147483647
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## نصائح عملية لاختيار الأنواع

### اختر النوع المناسب للحاجة:

<div dir="rtl" style="text-align: right;">

- **العمر**: `short` أو `unsigned short`
- **الأعداد الصغيرة**: `short`
- **الأعداد المتوسطة**: `int`
- **الأعداد الكبيرة**: `long`
- **الأعداد الضخمة**: `long long`
- **الأعداد العشرية البسيطة**: `float`
- **الأعداد العشرية الدقيقة**: `double`

### تجنب:

<div dir="rtl" style="text-align: right;">

- استخدام `long long` لقيم صغيرة
- استخدام `double` عندما يكفي `float`
- تجاهل مشكلة تجاوز السعة

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f0f0; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // أمثلة على الاختيار الصحيح
    short age = 25;                 // مناسب للعمر
    unsigned short studentCount = 150; // مناسب للأعداد الصغيرة
    int salary = 50000;             // مناسب للأعداد المتوسطة
    float temperature = 23.5f;      // مناسب للقياسات
    double preciseValue = 3.14159265359; // مناسب للدقة العالية
    
    cout << "Age: " << age << endl;
    cout << "Students: " << studentCount << endl;
    cout << "Salary: " << salary << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Precise Value: " << preciseValue << endl;
    
    return 0;
}
```

**Output:**
```
Age: 25
Students: 150
Salary: 50000
Temperature: 23.5
Precise Value: 3.14159
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### المفاهيم الأساسية:

<div dir="rtl" style="text-align: right;">

- **أحجام الأنواع**: تختلف حسب نوع البيانات
- **النطاقات**: تحدد القيم المسموح تخزينها
- **المعدلات**: `signed`، `unsigned`، `short`، `long`
- **تجاوز السعة**: يحدث عند تجاوز النطاق المسموح
- **الاختيار المناسب**: استخدم النوع المناسب للحاجة

### الفكرة الرئيسية:
> **"اختر حجم المتغير كاختيارك للإناء المناسب - لا كبيراً يهدر الموارد، ولا صغيراً يفيض بالمحتوى"**

</div>

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Data Types Sizes and Ranges in C++

## Introduction

In this lesson, we will learn about **data types sizes and ranges** in C++. This topic is important for choosing the appropriate type for each variable and avoiding memory resource waste.

---

## Basic Data Types and Their Sizes

### Table 1: Basic Types

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

| Type | Meaning | Range | Size (Bytes) |
|------|---------|-------|-------------|
| `int` | Integer | -2,147,483,648 to +2,147,483,647 | 4 |
| `float` | Floating-Point | 1.17549e-38 to 3.40282e+38 | 4 |
| `double` | Double Floating-Point | 2.22507e-308 to 1.79769e+308 | 8 |
| `char` | Character | -127 to 127 | 1 |
| `wchar_t` | Wide Character | - | 2 |
| `bool` | Boolean | 0 to 1 | 1 |
| `void` | Empty | - | 0 |
| `string` | String | - | 12 |

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Table 2: Type Modifiers

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

| Type | Sign | Range | Size |
|------|------|-------|------|
| `short int` | signed | -32,768 to +32,767 | 2 bytes |
| `short` | unsigned | 0 to 65,536 | 2 bytes |
| `int` | signed | -2,147,483,648 to +2,147,483,647 | 4 bytes |
| `long int` | unsigned | 0 to 4,294,967,295 | 4 bytes |
| `long` | signed | -2,147,483,648 to +2,147,483,647 | 4 bytes |
| `long` | unsigned | 0 to 4,294,967,295 | 4 bytes |
| `long long int` | signed | -(2^63) to (2^63)-1 | 8 bytes |
| `long long` | unsigned | 0 to 18,446,744,073,709,551,615 | 8 bytes |

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Explanation of Basic Concepts

### Why Care About Data Sizes? ☕

**Practical Example:** When drinking a cup of coffee, you use an appropriately sized cup. You don't use a large pot! The same principle applies to variables:

- ✓ Use `short` for age (doesn't exceed 150)
- ✗ Use `int` for age (wastes memory)

### Type Modifiers

These are keywords that modify data type properties:

- **`signed`**: Allows positive and negative values (default)
- **`unsigned`**: Allows only positive values
- **`short`**: Reduces size and range
- **`long`**: Increases size and range

**Note:** These modifiers are used only with `int`, `double`, `char`

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // Basic definition
    int age = 25;                    // signed by default
    
    // Using modifiers
    unsigned int positiveNumber = 100;
    short int smallNumber = 30000;
    long int largeNumber = 2000000;
    
    cout << "Age: " << age << endl;
    cout << "Positive Number: " << positiveNumber << endl;
    cout << "Small Number: " << smallNumber << endl;
    cout << "Large Number: " << largeNumber << endl;
    
    return 0;
}
```

**Output:**
```
Age: 25
Positive Number: 100
Small Number: 30000
Large Number: 2000000
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Difference Between `signed` and `unsigned`

### `signed` (Default)

```cpp
int x = -10;        // ✓ Allowed
int y = 10;         // ✓ Allowed
```

Allows both positive and negative values

### `unsigned`

```cpp
unsigned int x = 10;    // ✓ Allowed
unsigned int y = -10;   // ✗ Error (negative values not allowed)
```

Doubles the positive range by using the sign bit

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    signed int signedNum = -100;     // Allows negative
    unsigned int unsignedNum = 100;  // Doesn't allow negative
    
    cout << "Signed: " << signedNum << endl;
    cout << "Unsigned: " << unsignedNum << endl;
    
    // This will cause problems:
    // unsigned int problem = -50; // Error!
    
    return 0;
}
```

**Output:**
```
Signed: -100
Unsigned: 100
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Overflow Problem

When storing a value larger than the allowed range, **overflow** occurs, leading to unexpected results.

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    short smallVar = 32767;  // Maximum value for short
    
    cout << "Original value: " << smallVar << endl;
    
    smallVar = smallVar + 1; // Overflow!
    cout << "After overflow: " << smallVar << endl; // Unexpected result
    
    return 0;
}
```

**Output:**
```
Original value: 32767
After overflow: -32768
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Practical Type Size Determination

You can use `sizeof()` to find the actual size of types on your machine.

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    
    return 0;
}
```

**Output:**
```
Size of bool: 1 bytes
Size of char: 1 bytes
Size of short: 2 bytes
Size of int: 4 bytes
Size of long: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Practical Range Determination

</div>

<div dir="ltr" style="text-align: left; background-color: #ffe6cc; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "char range: " << int(numeric_limits<char>::min()) 
         << " to " << int(numeric_limits<char>::max()) << endl;
    
    cout << "unsigned char range: 0 to " 
         << int(numeric_limits<unsigned char>::max()) << endl;
    
    cout << "short range: " << numeric_limits<short>::min() 
         << " to " << numeric_limits<short>::max() << endl;
    
    cout << "int range: " << numeric_limits<int>::min() 
         << " to " << numeric_limits<int>::max() << endl;
    
    return 0;
}
```

**Output:**
```
char range: -128 to 127
unsigned char range: 0 to 255
short range: -32768 to 32767
int range: -2147483648 to 2147483647
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Practical Tips for Type Selection

### Choose the Appropriate Type for the Need:

- **Age**: `short` or `unsigned short`
- **Small numbers**: `short`
- **Medium numbers**: `int`
- **Large numbers**: `long`
- **Huge numbers**: `long long`
- **Simple decimals**: `float`
- **Precise decimals**: `double`

### Avoid:

- Using `long long` for small values
- Using `double` when `float` is sufficient
- Ignoring overflow problems

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f0f0; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // Examples of correct choices
    short age = 25;                 // Suitable for age
    unsigned short studentCount = 150; // Suitable for small numbers
    int salary = 50000;             // Suitable for medium numbers
    float temperature = 23.5f;      // Suitable for measurements
    double preciseValue = 3.14159265359; // Suitable for high precision
    
    cout << "Age: " << age << endl;
    cout << "Students: " << studentCount << endl;
    cout << "Salary: " << salary << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Precise Value: " << preciseValue << endl;
    
    return 0;
}
```

**Output:**
```
Age: 25
Students: 150
Salary: 50000
Temperature: 23.5
Precise Value: 3.14159
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### Core Concepts:

- **Type Sizes**: Vary by data type
- **Ranges**: Define allowed stored values
- **Modifiers**: `signed`, `unsigned`, `short`, `long`
- **Overflow**: Occurs when exceeding allowed range
- **Appropriate Choice**: Use the right type for the need

### Main Idea:
> **"Choose variable size like choosing the right container - not too large to waste resources, not too small to overflow with content"**

---

*Anas Chetoui* - `@anaschetoui`

</div>