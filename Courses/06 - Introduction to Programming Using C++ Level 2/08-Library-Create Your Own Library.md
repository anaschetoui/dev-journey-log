<div dir="rtl" style="text-align: right;">

<a id="arabic-create-library"></a>
[English ↙](#english-create-library)

# 📚 المكتبات: إنشاء مكتبتك الخاصة (Create Your Own Library)

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيفية **إنشاء مكتبات (Libraries) خاصة** في لغة C++. المكتبات تسمح لك بتنظيم الكود وإعادة استخدامه في مشاريع متعددة، مما يزيد من كفاءتك كمبرمج.

## 💡 المفاهيم الأساسية

### ما هي المكتبة (Library)؟

**المكتبة** هي مجموعة من الدوال (Functions) والإجراءات (Procedures) المصنفة معاً في ملف واحد أو عدة ملفات، يمكن استدعاؤها واستخدامها في مشاريع متعددة دون الحاجة لإعادة كتابتها.

### فوائد استخدام المكتبات:

- **إعادة الاستخدام (Reusability)**: كتابة الكود مرة واحدة واستخدامه في مشاريع عديدة
- **تنظيم الكود (Code Organization)**: تقسيم الكود إلى أجزاء منطقية
- **تبسيط الصيانة (Easy Maintenance)**: التعديل في مكان واحد يؤثر على جميع المشاريع
- **زيادة الإنتاجية (Increased Productivity)**: التركيز على المنطق الجديد بدلاً من إعادة كتابة الكود القديم

## 🔧 إنشاء مكتبة محلية (Local Library)

### الخطوة 1: فتح Solution Explorer

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. افتح Visual Studio
2. اذهب إلى View → Solution Explorer
3. أو استخدم الاختصار: Ctrl + Alt + L
```

</div>

### الخطوة 2: إنشاء ملف Header جديد

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. انقر بزر الماوس الأيمن على "Header Files"
2. اختر "Add" → "New Item"
3. اختر "Header File (.h)"
4. أعطها اسم مثل: mylib.h
5. اضغط "Add"
```

</div>

### الخطوة 3: هيكلة ملف المكتبة

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// mylib.h
#pragma once  // ← موجود تلقائياً عند إنشاء الملف

#include <iostream>
using namespace std;

namespace mylib {
    void testFunction() {
        cout << "This is my first function in my first library" << endl;
    }
    
    int sumTwoNumbers(int num1, int num2) {
        return num1 + num2;
    }
}
```

</div>

## 💻 مثال عملي: مكتبتي الأولى

### ملف المكتبة: mylib.h

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#pragma once
#include <iostream>
using namespace std;

namespace mylib {
    void testFunction() {
        cout << "This is my first function in my first library" << endl;
    }
    
    int sumTwoNumbers(int num1, int num2) {
        return num1 + num2;
    }
    
    double calculateAverage(double a, double b) {
        return (a + b) / 2.0;
    }
}
```

</div>

### ملف البرنامج الرئيسي: main.cpp

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include "mylib.h"

using namespace std;

int main() {
    mylib::testFunction();
    
    int result = mylib::sumTwoNumbers(10, 20);
    cout << "Sum: " << result << endl;
    
    double avg = mylib::calculateAverage(15.5, 25.5);
    cout << "Average: " << avg << endl;
    
    return 0;
}
```

</div>

## 🛠️ إنشاء مكتبات متخصصة

### مثال: مكتبة إدخال البيانات (Input Library)

### الخطوة 1: إنشاء ملف myinputlib.h

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// myinputlib.h
#pragma once
#include <iostream>
using namespace std;

namespace myinputlib {
    int readInteger() {
        int num;
        cout << "Please enter an integer: ";
        cin >> num;
        return num;
    }
    
    double readDouble() {
        double num;
        cout << "Please enter a decimal number: ";
        cin >> num;
        return num;
    }
    
    int readNumberInRange(int min, int max) {
        int num;
        do {
            cout << "Enter a number between " << min << " and " << max << ": ";
            cin >> num;
        } while (num < min || num > max);
        return num;
    }
}
```

</div>

### الخطوة 2: استخدام المكتبة في البرنامج الرئيسي

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include "mylib.h"
#include "myinputlib.h"

using namespace std;

int main() {
    int age = myinputlib::readNumberInRange(1, 120);
    cout << "Your age is: " << age << endl;
    
    double salary = myinputlib::readDouble();
    cout << "Your salary is: " << salary << endl;
    
    int sum = mylib::sumTwoNumbers(age, 5);
    cout << "Age + 5 = " << sum << endl;
    
    return 0;
}
```

</div>

## 📁 تنظيم المشروع مع مكتبات متعددة

### هيكل المشروع النموذجي:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
ProjectName/
├── Header Files/
│   ├── mylib.h
│   ├── myinputlib.h
│   └── mathlib.h
├── Source Files/
│   └── main.cpp
```

</div>

### مثال: مكتبة الدوال الرياضية mathlib.h

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// mathlib.h
#pragma once

namespace mathlib {
    double power(double base, int exponent) {
        double result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
    
    int factorial(int n) {
        if (n <= 1) return 1;
        return n * factorial(n - 1);
    }
    
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
}
```

</div>

## 🔗 طرق تضمين المكتبات

### 1. تضمين مكتبة محلية (من نفس المجلد)

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include "mylib.h"
#include "myinputlib.h"
#include "mathlib.h"
```

</div>

### 2. تضمين مكتبة من مسار مختلف

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include "../libs/mylib.h"
#include "../../shared/mathlib.h"
#include "C:/MyProjects/Libraries/mylib.h"
```

</div>

### 3. تضمين مكتبة من مجلد فرعي

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
هيكل المشروع:
MyProject/
├── main.cpp
└── libraries/
    ├── mylib.h
    └── helpers/
        └── helperlib.h

كود التضمين:
#include "libraries/mylib.h"
#include "libraries/helpers/helperlib.h"
```

</div>

## 🎯 استخدام الـ Namespace

### الطريقة 1: استخدام النطاق الكامل

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
mylib::testFunction();
mathlib::power(2, 3);
myinputlib::readInteger();
```

</div>

### الطريقة 2: استخدام using namespace

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
using namespace mylib;
using namespace mathlib;

testFunction();
power(2, 3);
```

</div>

## 🔍 مثال متكامل: نظام طلبات المطعم

### مكتبة menuLib.h:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// menuLib.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace menulib {
    struct MenuItem {
        int id;
        string name;
        double price;
    };
    
    void displayMenu(MenuItem menu[], int size) {
        cout << "===== Menu =====" << endl;
        for (int i = 0; i < size; i++) {
            cout << menu[i].id << ". " << menu[i].name 
                 << " - $" << menu[i].price << endl;
        }
        cout << "================" << endl;
    }
    
    double calculateTotal(MenuItem items[], int quantities[], int count) {
        double total = 0;
        for (int i = 0; i < count; i++) {
            total += items[i].price * quantities[i];
        }
        return total;
    }
}
```

</div>

### البرنامج الرئيسي:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include "menuLib.h"
#include "myinputlib.h"

using namespace std;
using namespace menulib;

int main() {
    MenuItem menu[] = {
        {1, "Burger", 5.99},
        {2, "Pizza", 8.99},
        {3, "Salad", 4.99},
        {4, "Fries", 2.99}
    };
    int menuSize = 4;
    
    displayMenu(menu, menuSize);
    
    int quantities[4] = {0};
    for (int i = 0; i < menuSize; i++) {
        cout << "How many " << menu[i].name << "? ";
        quantities[i] = myinputlib::readInteger();
    }
    
    double total = calculateTotal(menu, quantities, menuSize);
    cout << "Total: $" << total << endl;
    
    return 0;
}
```

</div>

## 📊 فوائد تنظيم الكود في مكتبات

### قبل استخدام المكتبات:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
main.cpp (1000 سطر)
- دوال إدخال
- دوال حسابية
- دوال تحقق
- دوال عرض
- المنطق الرئيسي
```

</div>

### بعد استخدام المكتبات:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
main.cpp (100 سطر)
- تضمين المكتبات
- المنطق الرئيسي فقط

مكتبات منظمة:
- myinputlib.h
- mathlib.h
- menulib.h
```

</div>

## 💡 خاتمة

### المهارات المكتسبة:

| المهارة | الفائدة |
|:---|:---|
| **إنشاء ملفات .h** | تنظيم الكود في مكتبات |
| **استخدام namespace** | تجميع الدوال المتشابهة |
| **تضمين المكتبات** | إعادة استخدام الكود |
| **تنظيم المشروع** | هيكلة واضحة للمشاريع |

### نقاط مهمة:

1. **#pragma once** يمنع تضمين المكتبة أكثر من مرة
2. **استخدام "" للمكتبات المحلية** و **<> للمكتبات القياسية**
3. **يمكن إنشاء مكتبات متعددة** وتنظيمها حسب الوظيفة
4. **المكتبات توفر الوقت** وتجعل الكود أكثر تنظيماً

**تذكر:** المكتبات الجيدة تجعل كودك **أكثر تنظيماً وأسهل للصيانة** وأسرع للتطوير! 📚⚡

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
<br>
<br>
<br>
<br>
<br>
<br>

<a id="english-create-library"></a>
[العربية ↗](#arabic-create-library)

# 📚 Libraries: Create Your Own Library

## 🎯 Introduction

In this lesson, we'll learn how to **create custom libraries** in C++. Libraries allow you to organize code and reuse it across multiple projects, increasing your efficiency as a programmer.

## 💡 Core Concepts

### What is a Library?

A **library** is a collection of functions and procedures grouped together in one or more files that can be called and used in multiple projects without needing to rewrite them.

### Benefits of Using Libraries:

- **Reusability**: Write code once and use it in many projects
- **Code Organization**: Divide code into logical parts
- **Easy Maintenance**: Modify in one place affects all projects
- **Increased Productivity**: Focus on new logic instead of rewriting old code

## 🔧 Creating a Local Library

### Step 1: Open Solution Explorer

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Open Visual Studio
2. Go to View → Solution Explorer
3. Or use shortcut: Ctrl + Alt + L
```

</div>

### Step 2: Create New Header File

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Right-click on "Header Files"
2. Choose "Add" → "New Item"
3. Select "Header File (.h)"
4. Give it a name like: mylib.h
5. Click "Add"
```

</div>

### Step 3: Structure the Library File

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// mylib.h
#pragma once  // ← Automatically added when creating file

#include <iostream>
using namespace std;

namespace mylib {
    void testFunction() {
        cout << "This is my first function in my first library" << endl;
    }
    
    int sumTwoNumbers(int num1, int num2) {
        return num1 + num2;
    }
}
```

</div>

## 💻 Practical Example: My First Library

### Library File: mylib.h

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#pragma once
#include <iostream>
using namespace std;

namespace mylib {
    void testFunction() {
        cout << "This is my first function in my first library" << endl;
    }
    
    int sumTwoNumbers(int num1, int num2) {
        return num1 + num2;
    }
    
    double calculateAverage(double a, double b) {
        return (a + b) / 2.0;
    }
}
```

</div>

### Main Program File: main.cpp

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include "mylib.h"

using namespace std;

int main() {
    mylib::testFunction();
    
    int result = mylib::sumTwoNumbers(10, 20);
    cout << "Sum: " << result << endl;
    
    double avg = mylib::calculateAverage(15.5, 25.5);
    cout << "Average: " << avg << endl;
    
    return 0;
}
```

</div>

## 🛠️ Creating Specialized Libraries

### Example: Input Data Library

### Step 1: Create myinputlib.h file

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// myinputlib.h
#pragma once
#include <iostream>
using namespace std;

namespace myinputlib {
    int readInteger() {
        int num;
        cout << "Please enter an integer: ";
        cin >> num;
        return num;
    }
    
    double readDouble() {
        double num;
        cout << "Please enter a decimal number: ";
        cin >> num;
        return num;
    }
    
    int readNumberInRange(int min, int max) {
        int num;
        do {
            cout << "Enter a number between " << min << " and " << max << ": ";
            cin >> num;
        } while (num < min || num > max);
        return num;
    }
}
```

</div>

### Step 2: Use Library in Main Program

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include "mylib.h"
#include "myinputlib.h"

using namespace std;

int main() {
    int age = myinputlib::readNumberInRange(1, 120);
    cout << "Your age is: " << age << endl;
    
    double salary = myinputlib::readDouble();
    cout << "Your salary is: " << salary << endl;
    
    int sum = mylib::sumTwoNumbers(age, 5);
    cout << "Age + 5 = " << sum << endl;
    
    return 0;
}
```

</div>

## 📁 Organizing Project with Multiple Libraries

### Typical Project Structure:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
ProjectName/
├── Header Files/
│   ├── mylib.h
│   ├── myinputlib.h
│   └── mathlib.h
├── Source Files/
│   └── main.cpp
```

</div>

### Example: Math Functions Library mathlib.h

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// mathlib.h
#pragma once

namespace mathlib {
    double power(double base, int exponent) {
        double result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
    
    int factorial(int n) {
        if (n <= 1) return 1;
        return n * factorial(n - 1);
    }
    
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
}
```

</div>

## 🔗 Methods for Including Libraries

### 1. Include Local Library (from same folder)

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include "mylib.h"
#include "myinputlib.h"
#include "mathlib.h"
```

</div>

### 2. Include Library from Different Path

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include "../libs/mylib.h"
#include "../../shared/mathlib.h"
#include "C:/MyProjects/Libraries/mylib.h"
```

</div>

### 3. Include Library from Subfolder

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Project Structure:
MyProject/
├── main.cpp
└── libraries/
    ├── mylib.h
    └── helpers/
        └── helperlib.h

Inclusion Code:
#include "libraries/mylib.h"
#include "libraries/helpers/helperlib.h"
```

</div>

## 🎯 Using Namespace

### Method 1: Using Full Scope

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
mylib::testFunction();
mathlib::power(2, 3);
myinputlib::readInteger();
```

</div>

### Method 2: Using using namespace

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
using namespace mylib;
using namespace mathlib;

testFunction();
power(2, 3);
```

</div>

## 🔍 Complete Example: Restaurant Order System

### menuLib.h Library:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// menuLib.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace menulib {
    struct MenuItem {
        int id;
        string name;
        double price;
    };
    
    void displayMenu(MenuItem menu[], int size) {
        cout << "===== Menu =====" << endl;
        for (int i = 0; i < size; i++) {
            cout << menu[i].id << ". " << menu[i].name 
                 << " - $" << menu[i].price << endl;
        }
        cout << "================" << endl;
    }
    
    double calculateTotal(MenuItem items[], int quantities[], int count) {
        double total = 0;
        for (int i = 0; i < count; i++) {
            total += items[i].price * quantities[i];
        }
        return total;
    }
}
```

</div>

### Main Program:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include "menuLib.h"
#include "myinputlib.h"

using namespace std;
using namespace menulib;

int main() {
    MenuItem menu[] = {
        {1, "Burger", 5.99},
        {2, "Pizza", 8.99},
        {3, "Salad", 4.99},
        {4, "Fries", 2.99}
    };
    int menuSize = 4;
    
    displayMenu(menu, menuSize);
    
    int quantities[4] = {0};
    for (int i = 0; i < menuSize; i++) {
        cout << "How many " << menu[i].name << "? ";
        quantities[i] = myinputlib::readInteger();
    }
    
    double total = calculateTotal(menu, quantities, menuSize);
    cout << "Total: $" << total << endl;
    
    return 0;
}
```

</div>

## 📊 Benefits of Organizing Code in Libraries

### Before Using Libraries:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
main.cpp (1000 lines)
- Input functions
- Calculation functions
- Validation functions
- Display functions
- Main logic
```

</div>

### After Using Libraries:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
main.cpp (100 lines)
- Include libraries
- Main logic only

Organized libraries:
- myinputlib.h
- mathlib.h
- menulib.h
```

</div>

## 💡 Conclusion

### Skills Acquired:

| Skill | Benefit |
|:---|:---|
| **Creating .h files** | Organizing code in libraries |
| **Using namespace** | Grouping similar functions |
| **Including libraries** | Reusing code |
| **Organizing project** | Clear project structure |

### Important Points:

1. **#pragma once** prevents including library multiple times
2. **Use "" for local libraries** and **<> for standard libraries**
3. **Can create multiple libraries** organized by function
4. **Libraries save time** and make code more organized

**Remember:** Good libraries make your code **more organized, easier to maintain, and faster to develop**! 📚⚡

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>