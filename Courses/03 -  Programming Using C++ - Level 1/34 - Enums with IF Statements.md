<div dir="rtl">

<a id="arabic-enums-if"></a>
[English ↙](#english-enums-if)

# 🔀 Enums مع الجمل الشرطية IF

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيفية استخدام **Enums** مع **الجمل الشرطية IF** لإنشاء برامج أكثر تنظيماً وسهولة في القراءة والصيانة.

## 💡 الفوائد الأربع للدرس

1. **الفائدة الفعلية من استخدام الـ Enums**
2. **كيفية قراءة الـ Enums من خلال الـ cin**
3. **مراجعة موضوع الـ Casting (تحويل أنواع البيانات)**
4. **مثال عملي على if else statements**

## 🛠️ أمثلة عملية

### 📝 المثال الأول: نظام الألوان

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// تعريف الـ Enum للألوان
enum enScreenColor { 
    Red = 1, 
    Blue = 2, 
    Green = 3, 
    Yellow = 4 
};

int main() {
    // عرض القائمة للمستخدم
    cout << "**************************" << endl;
    cout << "Please choose the number of your color" << endl;
    cout << "(1) Red" << endl;
    cout << "(2) Blue" << endl;
    cout << "(3) Green" << endl;
    cout << "(4) Yellow" << endl;
    cout << "Your Choice: ";
    
    int c;  // متغير لقراءة المدخل
    cin >> c;
    
    // تحويل الـ int إلى enum
    enScreenColor color = (enScreenColor)c;
    
    // استخدام الجمل الشرطية مع الـ Enum
    if (color == Red) {
        system("color 4F");  // لون الخلفية أحمر
        cout << "Screen color changed to Red" << endl;
    }
    else if (color == Blue) {
        system("color 1F");  // لون الخلفية أزرق
        cout << "Screen color changed to Blue" << endl;
    }
    else if (color == Green) {
        system("color 2F");  // لون الخلفية أخضر
        cout << "Screen color changed to Green" << endl;
    }
    else if (color == Yellow) {
        system("color 6F");  // لون الخلفية أصفر
        cout << "Screen color changed to Yellow" << endl;
    }
    else {
        system("color 4F");  // لون افتراضي أحمر
        cout << "Invalid choice! Default color (Red) applied" << endl;
    }
    
    return 0;
}
```

</div>

### 📝 المثال الثاني: نظام الدول

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// تعريف الـ Enum للدول
enum enCountryChoice { 
    Jordan = 1, 
    Tunis = 2, 
    Algeria = 3, 
    Oman = 4, 
    Egypt = 5, 
    Iraq = 6, 
    Other = 7 
};

int main() {
    // عرض القائمة للمستخدم
    cout << "**************************" << endl;
    cout << "Please enter the number of your country" << endl;
    cout << "(1) Jordan" << endl;
    cout << "(2) Tunis" << endl;
    cout << "(3) Algeria" << endl;
    cout << "(4) Oman" << endl;
    cout << "(5) Egypt" << endl;
    cout << "(6) Iraq" << endl;
    cout << "(7) Other" << endl;
    cout << "Your Choice: ";
    
    int c;  // متغير لقراءة المدخل
    cin >> c;
    
    // تحويل الـ int إلى enum
    enCountryChoice country = (enCountryChoice)c;
    
    // استخدام الجمل الشرطية مع الـ Enum
    if (country == Jordan) {
        cout << "See now your country is Jordan" << endl;
    }
    else if (country == Tunis) {
        cout << "See now your country is Tunis" << endl;
    }
    else if (country == Algeria) {
        cout << "See now your country is Algeria" << endl;
    }
    else if (country == Oman) {
        cout << "See now your country is Oman" << endl;
    }
    else if (country == Egypt) {
        cout << "See now your country is Egypt" << endl;
    }
    else if (country == Iraq) {
        cout << "See now your country is Iraq" << endl;
    }
    else if (country == Other) {
        cout << "See now your country is Other" << endl;
    }
    else {
        cout << "Invalid country choice!" << endl;
    }
    
    return 0;
}
```

</div>

## 🔧 المفاهيم الأساسية

### ما هي الـ Enums؟

**الـ Enum** هي نوع بيانات يسمح بتعريف مجموعة من الثوابت المسماة، مما يجعل الكود أكثر قابلية للقراءة والصيانة.

### لماذا نستخدم الـ Enums؟

<div dir="ltr" align="left">

```cpp
// ❌ بدون Enum - صعب القراءة
if (color == 1) {  // ماذا يعني الرقم 1؟
    // كود
}

// ✅ مع Enum - سهل القراءة
if (color == Red) {  // واضح ومباشر
    // كود
}
```

</div>

### فوائد استخدام الـ Enums:

1. **سهولة القراءة**: الأسماء أوضح من الأرقام
2. **تقليل الأخطاء**: تجنب الخلط بين القيم الرقمية
3. **الصيانة السهلة**: تغيير القيم في مكان واحد
4. **التوثيق الذاتي**: الكود يشرح نفسه

## 🎯 كيفية قراءة الـ Enums من الـ cin

### الخطوات المطلوبة:

1. **تعريف الـ Enum**
2. **قراءة القيمة كـ int**
3. **تحويل الـ int إلى Enum باستخدام Casting**

<div dir="ltr" align="left">

```cpp
// 1. تعريف الـ Enum
enum enColor { Red = 1, Blue = 2, Green = 3 };

int main() {
    int c;              // 2. متغير لقراءة المدخل
    cin >> c;           // قراءة القيمة كـ int
    
    // 3. تحويل int إلى Enum
    enColor color = (enColor)c;
    
    // استخدام الـ Enum في الشروط
    if (color == Red) {
        // كود
    }
    
    return 0;
}
```

</div>

## 🔄 الـ Casting (تحويل أنواع البيانات)

### ما هو الـ Casting؟

**الـ Casting** هو عملية تحويل نوع بيانات إلى نوع آخر.

<div dir="ltr" align="left">

```cpp
// الصيغة العامة
(nombre_type) valeur

// أمثلة على الـ Casting
int x = 10;
float y = (float)x;          // تحويل int إلى float
char c = (char)65;           // تحويل int إلى char

// تحويل int إلى Enum
enColor color = (enColor)2;  // تحويل 2 إلى Blue
```

</div>

### لماذا نحتاج الـ Casting مع الـ Enums؟

- **الـ cin** يقرأ البيانات كـ int أو string
- **الـ Enums** تخزن قيم رقمية ولكن بأسماء معنوية
- **التحويل** ضروري لربط مدخل المستخدم مع الـ Enum

## 🏆 أفضل الممارسات

### 1. تسمية الـ Enums بشكل معبر

<div dir="ltr" align="left">

```cpp
// ✅ تسمية جيدة
enum enScreenColor { Red, Blue, Green };
enum enCountry { Jordan, Egypt, Saudi };

// ❌ تسمية غير واضحة
enum enA { A1, A2, A3 };
```

</div>

### 2. استخدام قيم مبتدئة من 1

<div dir="ltr" align="left">

```cpp
// ✅ قيم مبتدئة من 1
enum enChoice { 
    Option1 = 1, 
    Option2 = 2, 
    Option3 = 3 
};

// ❌ قيم مبتدئة من 0 (قد تسبب ارتباكاً للمستخدم)
enum enChoice { 
    Option1 = 0,  // المستخدم يتوقع البدء من 1
    Option2 = 1, 
    Option3 = 2 
};
```

</div>

### 3. التعامل مع القيم غير الصحيحة

<div dir="ltr" align="left">

```cpp
enum enColor { Red = 1, Blue = 2, Green = 3 };

int main() {
    int c;
    cin >> c;
    
    // التحقق من صحة المدخل قبل التحويل
    if (c >= 1 && c <= 3) {
        enColor color = (enColor)c;
        // استخدام color
    } else {
        cout << "Invalid input!" << endl;
    }
    
    return 0;
}
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:

- **الـ Enums** تجعل الكود أكثر قابلية للقراءة والصيانة
- **التحويل من int إلى Enum** ضروري عند القراءة من المستخدم
- **الجمل الشرطية** تصبح أكثر وضوحاً مع الـ Enums

### فوائد استخدام الـ Enums مع الـ IF:

1. **كود أوضح**: `if (color == Red)` بدلاً من `if (color == 1)`
2. **تقليل الأخطاء**: تجنب الخلط بين القيم الرقمية
3. **صيانة أسهل**: تغيير القيم في مكان واحد فقط
4. **توثيق ذاتي**: الكود يشرح نفسه بدون الحاجة لتعليقات

### هيكل استخدام الـ Enums:

```cpp
// 1. تعريف الـ Enum
enum enName { Value1 = 1, Value2 = 2, Value3 = 3 };

// 2. قراءة المدخل
int input;
cin >> input;

// 3. التحويل إلى Enum
enName variable = (enName)input;

// 4. الاستخدام في الشروط
if (variable == Value1) {
    // كود
}
```

</div>

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

<a id="english-enums-if"></a>
[العربية ↗](#arabic-enums-if)

# 🔀 Enums with IF Statements

## 🎯 Introduction

In this lesson, we'll learn how to use **Enums** with **IF Statements** to create more organized, readable, and maintainable programs.

## 💡 Four Benefits of This Lesson

1. **Practical benefit of using Enums**
2. **How to read Enums through cin**
3. **Review of Casting (data type conversion)**
4. **Practical example of if else statements**

## 🛠️ Practical Examples

### 📝 Example 1: Color System

```cpp
#include <iostream>
using namespace std;

// Define Enum for colors
enum enScreenColor { 
    Red = 1, 
    Blue = 2, 
    Green = 3, 
    Yellow = 4 
};

int main() {
    // Display menu to user
    cout << "**************************" << endl;
    cout << "Please choose the number of your color" << endl;
    cout << "(1) Red" << endl;
    cout << "(2) Blue" << endl;
    cout << "(3) Green" << endl;
    cout << "(4) Yellow" << endl;
    cout << "Your Choice: ";
    
    int c;  // Variable to read input
    cin >> c;
    
    // Convert int to enum
    enScreenColor color = (enScreenColor)c;
    
    // Use conditional statements with Enum
    if (color == Red) {
        system("color 4F");  // Red background
        cout << "Screen color changed to Red" << endl;
    }
    else if (color == Blue) {
        system("color 1F");  // Blue background
        cout << "Screen color changed to Blue" << endl;
    }
    else if (color == Green) {
        system("color 2F");  // Green background
        cout << "Screen color changed to Green" << endl;
    }
    else if (color == Yellow) {
        system("color 6F");  // Yellow background
        cout << "Screen color changed to Yellow" << endl;
    }
    else {
        system("color 4F");  // Default red color
        cout << "Invalid choice! Default color (Red) applied" << endl;
    }
    
    return 0;
}
```

### 📝 Example 2: Country System

```cpp
#include <iostream>
using namespace std;

// Define Enum for countries
enum enCountryChoice { 
    Jordan = 1, 
    Tunis = 2, 
    Algeria = 3, 
    Oman = 4, 
    Egypt = 5, 
    Iraq = 6, 
    Other = 7 
};

int main() {
    // Display menu to user
    cout << "**************************" << endl;
    cout << "Please enter the number of your country" << endl;
    cout << "(1) Jordan" << endl;
    cout << "(2) Tunis" << endl;
    cout << "(3) Algeria" << endl;
    cout << "(4) Oman" << endl;
    cout << "(5) Egypt" << endl;
    cout << "(6) Iraq" << endl;
    cout << "(7) Other" << endl;
    cout << "Your Choice: ";
    
    int c;  // Variable to read input
    cin >> c;
    
    // Convert int to enum
    enCountryChoice country = (enCountryChoice)c;
    
    // Use conditional statements with Enum
    if (country == Jordan) {
        cout << "See now your country is Jordan" << endl;
    }
    else if (country == Tunis) {
        cout << "See now your country is Tunis" << endl;
    }
    else if (country == Algeria) {
        cout << "See now your country is Algeria" << endl;
    }
    else if (country == Oman) {
        cout << "See now your country is Oman" << endl;
    }
    else if (country == Egypt) {
        cout << "See now your country is Egypt" << endl;
    }
    else if (country == Iraq) {
        cout << "See now your country is Iraq" << endl;
    }
    else if (country == Other) {
        cout << "See now your country is Other" << endl;
    }
    else {
        cout << "Invalid country choice!" << endl;
    }
    
    return 0;
}
```

## 🔧 Core Concepts

### What are Enums?

**Enum** is a data type that allows defining a set of named constants, making code more readable and maintainable.

### Why Use Enums?

```cpp
// ❌ Without Enum - hard to read
if (color == 1) {  // What does 1 mean?
    // code
}

// ✅ With Enum - easy to read
if (color == Red) {  // Clear and direct
    // code
}
```

### Benefits of Using Enums:

1. **Readability**: Names are clearer than numbers
2. **Error Reduction**: Avoid confusion between numeric values
3. **Easy Maintenance**: Change values in one place
4. **Self-documenting**: Code explains itself

## 🎯 How to Read Enums from cin

### Required Steps:

1. **Define the Enum**
2. **Read value as int**
3. **Convert int to Enum using Casting**

```cpp
// 1. Define Enum
enum enColor { Red = 1, Blue = 2, Green = 3 };

int main() {
    int c;              // 2. Variable to read input
    cin >> c;           // Read value as int
    
    // 3. Convert int to Enum
    enColor color = (enColor)c;
    
    // Use Enum in conditions
    if (color == Red) {
        // code
    }
    
    return 0;
}
```

## 🔄 Casting (Data Type Conversion)

### What is Casting?

**Casting** is the process of converting one data type to another.

```cpp
// General syntax
(type_name) value

// Casting examples
int x = 10;
float y = (float)x;          // Convert int to float
char c = (char)65;           // Convert int to char

// Convert int to Enum
enColor color = (enColor)2;  // Convert 2 to Blue
```

### Why Do We Need Casting with Enums?

- **cin** reads data as int or string
- **Enums** store numeric values but with meaningful names
- **Conversion** is necessary to link user input with Enum

## 🏆 Best Practices

### 1. Use Descriptive Names for Enums

```cpp
// ✅ Good naming
enum enScreenColor { Red, Blue, Green };
enum enCountry { Jordan, Egypt, Saudi };

// ❌ Unclear naming
enum enA { A1, A2, A3 };
```

### 2. Use Values Starting from 1

```cpp
// ✅ Values starting from 1
enum enChoice { 
    Option1 = 1, 
    Option2 = 2, 
    Option3 = 3 
};

// ❌ Values starting from 0 (may confuse users)
enum enChoice { 
    Option1 = 0,  // User expects to start from 1
    Option2 = 1, 
    Option3 = 2 
};
```

### 3. Handle Invalid Values

```cpp
enum enColor { Red = 1, Blue = 2, Green = 3 };

int main() {
    int c;
    cin >> c;
    
    // Validate input before conversion
    if (c >= 1 && c <= 3) {
        enColor color = (enColor)c;
        // Use color
    } else {
        cout << "Invalid input!" << endl;
    }
    
    return 0;
}
```

## 📝 Summary

### Core Concepts:

- **Enums** make code more readable and maintainable
- **Conversion from int to Enum** is necessary when reading from user
- **Conditional statements** become clearer with Enums

### Benefits of Using Enums with IF:

1. **Clearer code**: `if (color == Red)` instead of `if (color == 1)`
2. **Fewer errors**: Avoid confusion between numeric values
3. **Easier maintenance**: Change values in one place only
4. **Self-documenting**: Code explains itself without needing comments

### Structure for Using Enums:

```cpp
// 1. Define Enum
enum enName { Value1 = 1, Value2 = 2, Value3 = 3 };

// 2. Read input
int input;
cin >> input;

// 3. Convert to Enum
enName variable = (enName)input;

// 4. Use in conditions
if (variable == Value1) {
    // code
}
```

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>