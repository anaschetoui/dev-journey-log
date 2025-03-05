<div dir="rtl">

<a id="arabic-nested-functions-enums"></a>
[English ↙](#english-nested-functions-enums)

# 🔀 الدوال المتداخلة مع الـ Enums

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيفية إنشاء **دوال متداخلة** و**دوال من نوع Enum**، وكيفية استدعاء دوال داخل دوال أخرى لإنشاء برامج منظمة وسهلة الصيانة.

## 💡 المفاهيم الأساسية

### ما هي الدوال المتداخلة (Nested Functions)؟

**الدوال المتداخلة** هي استدعاء دوال داخل دوال أخرى، حيث تكون نتيجة دالة مدخلاً لدالة أخرى.

### ما هي دوال الـ Enum؟

هي دوال يكون نوع الإرجاع الخاص بها من نوع Enum، مما يجعل الكود أكثر أماناً وسهولة في القراءة.

## 🛠️ مثال عملي: نظام أيام الأسبوع

### 📝 الهيكل العام للبرنامج

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

// تعريف الـ Enum لأيام الأسبوع
enum enWeekDay { 
    Sunday = 1, 
    Monday = 2, 
    Tuesday = 3, 
    Wednesday = 4, 
    Thursday = 5, 
    Friday = 6, 
    Saturday = 7 
};

// البروتوتايات (التعريفات المبدئية) للدوال
void ShowWeekDayMenu();
enWeekDay ReadWeekDay();
string GetWeekDayName(enWeekDay day);

int main() {
    // العرض الرئيسي للبرنامج
    ShowWeekDayMenu();
    
    cout << "Today is " << GetWeekDayName(ReadWeekDay()) << endl;
    
    return 0;
}
```

</div>

### 📝 الدالة 1: عرض القائمة

<div dir="ltr" align="left">

```cpp
void ShowWeekDayMenu() {
    cout << "**************************" << endl;
    cout << "       Week Days Menu     " << endl;
    cout << "**************************" << endl;
    cout << "(1) Sunday" << endl;
    cout << "(2) Monday" << endl;
    cout << "(3) Tuesday" << endl;
    cout << "(4) Wednesday" << endl;
    cout << "(5) Thursday" << endl;
    cout << "(6) Friday" << endl;
    cout << "(7) Saturday" << endl;
    cout << "**************************" << endl;
    cout << "Please enter the number of the day: ";
}
```

</div>

### 📝 الدالة 2: قراءة اليوم (دالة من نوع Enum)

<div dir="ltr" align="left">

```cpp
enWeekDay ReadWeekDay() {
    int weekDayNumber;
    cin >> weekDayNumber;
    
    // تحويل int إلى Enum
    return (enWeekDay)weekDayNumber;
}
```

</div>

### 📝 الدالة 3: الحصول على اسم اليوم

<div dir="ltr" align="left">

```cpp
string GetWeekDayName(enWeekDay day) {
    switch (day) {
        case Sunday:
            return "Sunday";
        case Monday:
            return "Monday";
        case Tuesday:
            return "Tuesday";
        case Wednesday:
            return "Wednesday";
        case Thursday:
            return "Thursday";
        case Friday:
            return "Friday";
        case Saturday:
            return "Saturday";
        default:
            return "Not a week day";
    }
}
```

</div>

## 🔧 شرح مفصل للدوال

### الدوال المتداخلة في العمل

<div dir="ltr" align="left">

```cpp
int main() {
    ShowWeekDayMenu();
    
    // 🔥 استدعاء دوال متداخلة
    // ReadWeekDay() تُستدعى أولاً ثم نتيجتها تُمرر إلى GetWeekDayName()
    cout << "Today is " << GetWeekDayName(ReadWeekDay()) << endl;
    
    return 0;
}
```

**النتيجة:**
```
**************************
       Week Days Menu     
**************************
(1) Sunday
(2) Monday
(3) Tuesday
(4) Wednesday
(5) Thursday
(6) Friday
(7) Saturday
**************************
Please enter the number of the day: 3
Today is Tuesday
```

</div>

### كيف تعمل الدوال المتداخلة خطوة بخطوة؟

1. **`ShowWeekDayMenu()`** تعرض القائمة
2. **`ReadWeekDay()`** تقرأ الرقم من المستخدم وتحوله إلى Enum
3. **`GetWeekDayName()`** تأخذ الـ Enum وتعيد اسم اليوم كـ string
4. **النتيجة** تطبع على الشاشة

## 🎯 فوائد هذا التصميم

### 1. تقسيم المهام (Separation of Concerns)

<div dir="ltr" align="left">

```cpp
// ✅ كل دالة لها مسؤولية واحدة
ShowWeekDayMenu();    // مسؤولية: عرض القائمة فقط
ReadWeekDay();        // مسؤولية: قراءة المدخل فقط  
GetWeekDayName();     // مسؤولية: تحويل Enum لاسم فقط
```

</div>

### 2. إعادة الاستخدام (Reusability)

<div dir="ltr" align="left">

```cpp
// ✅ يمكن استخدام الدوال في أماكن متعددة
void DisplayWeekSchedule() {
    enWeekDay today = ReadWeekDay();
    string dayName = GetWeekDayName(today);
    cout << "Schedule for " << dayName << ":" << endl;
    // عرض الجدول...
}

void CheckIfWeekend() {
    enWeekDay day = ReadWeekDay();
    if (day == Saturday || day == Sunday) {
        cout << "It's weekend!" << endl;
    }
}
```

</div>

### 3. سهولة الصيانة

<div dir="ltr" align="left">

```cpp
// ✅ لتغيير شكل القائمة، نعدل دالة واحدة فقط
void ShowWeekDayMenu() {
    // التعديل هنا فقط
    cout << "🎯 Choose your day:" << endl;
    cout << "1. Sunday" << endl;
    // ... باقي الأيام
}
```

</div>

## 🔄 أنواع الدوال المستخدمة

### 1. دالة بدون إرجاع (Void Function)

<div dir="ltr" align="left">

```cpp
void ShowWeekDayMenu() {
    // تنفيذ عمليات بدون إرجاع قيمة
    // تستخدم للعرض أو التعديل المباشر
}
```

</div>

### 2. دالة بإرجاع Enum

<div dir="ltr" align="left">

```cpp
enWeekDay ReadWeekDay() {
    // تقرأ المدخل وترجع قيمة من نوع Enum
    return (enWeekDay)userInput;
}
```

</div>

### 3. دالة بإرجاع String

<div dir="ltr" align="left">

```cpp
string GetWeekDayName(enWeekDay day) {
    // تأخذ Enum وترجع string مقابلة
    return "Day Name";
}
```

</div>

## 🏆 أفضل الممارسات

### 1. تسمية الدوال بشكل معبر

<div dir="ltr" align="left">

```cpp
// ✅ تسمية جيدة
enWeekDay ReadWeekDayFromUser();
string ConvertWeekDayToString(enWeekDay day);
void DisplayWeekDayMenu();

// ❌ تسمية غير واضحة
enWeekDay GetInput();
string Convert(enWeekDay d);
void ShowMenu();
```

</div>

### 2. كل دالة لها مسؤولية واحدة

<div dir="ltr" align="left">

```cpp
// ✅ كل دالة لها مهمة واحدة
void ShowMenu() { /* عرض القائمة فقط */ }
enWeekDay ReadInput() { /* قراءة المدخل فقط */ }
string GetName(enWeekDay day) { /* التحويل فقط */ }

// ❌ دالة تقوم بمهام متعددة
void DoEverything() {
    ShowMenu();
    ReadInput();
    ConvertToString();
    // مهام متعددة في دالة واحدة
}
```

</div>

### 3. استخدام الـ Enums للقيم المحدودة

<div dir="ltr" align="left">

```cpp
// ✅ استخدام Enum للقيم المحدودة
enum enWeekDay { Sunday = 1, Monday, Tuesday, /* ... */ };

// ❌ استخدام أرقام مباشرة
if (day == 1) { /* ماذا يعني 1؟ */ }
```

</div>

## 📝 مثال متقدم مع تحسينات

### 📝 النسخة المحسنة مع معالجة الأخطاء

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

enum enWeekDay { 
    Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday 
};

void ShowWeekDayMenu() {
    cout << "**************************" << endl;
    cout << "       Week Days Menu     " << endl;
    cout << "**************************" << endl;
    for (int i = Sunday; i <= Saturday; i++) {
        cout << "(" << i << ") " << GetWeekDayName((enWeekDay)i) << endl;
    }
    cout << "**************************" << endl;
}

enWeekDay ReadWeekDay() {
    int weekDayNumber;
    
    while (true) {
        cout << "Please enter the number of the day (1-7): ";
        cin >> weekDayNumber;
        
        if (weekDayNumber >= Sunday && weekDayNumber <= Saturday) {
            break;
        }
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }
    
    return (enWeekDay)weekDayNumber;
}

string GetWeekDayName(enWeekDay day) {
    string dayNames[] = {
        "Invalid", "Sunday", "Monday", "Tuesday", 
        "Wednesday", "Thursday", "Friday", "Saturday"
    };
    
    if (day >= Sunday && day <= Saturday) {
        return dayNames[day];
    }
    return "Not a week day";
}

void PrintDayInfo(enWeekDay day) {
    string dayName = GetWeekDayName(day);
    cout << "📅 Today is " << dayName << endl;
    
    if (day == Saturday || day == Sunday) {
        cout << "🎉 It's weekend! Time to relax." << endl;
    } else {
        cout << "💼 It's a working day." << endl;
    }
}

int main() {
    ShowWeekDayMenu();
    enWeekDay selectedDay = ReadWeekDay();
    PrintDayInfo(selectedDay);
    
    return 0;
}
```

</div>

## 📊 تحليل الكود

### تدفق التنفيذ:

1. **`main()`** تبدأ البرنامج
2. **`ShowWeekDayMenu()`** تعرض القائمة
3. **`ReadWeekDay()`** تقرأ وتتحقق من المدخل
4. **`GetWeekDayName()`** تحول الـ Enum لاسم
5. **`PrintDayInfo()`** تعرض المعلومات النهائية

### مزايا التصميم:

- **مرن**: يسهل إضافة أيام جديدة
- **آمن**: تحقق من صحة المدخلات
- **قابل للصيانة**: كل دالة مستقلة
- **قابل للتوسعة**: يسهل إضافة مميزات جديدة

## 📝 الملخص

### المفاهيم الأساسية:

- **الدوال المتداخلة**: استدعاء دوال داخل دوال أخرى
- **دوال الـ Enum**: دوال ترجع قيماً من نوع Enum
- **تقسيم المهام**: كل دالة لها مسؤولية واحدة

### فوائد هذا النهج:

1. **كود أنظف** وأسهل للقراءة
2. **إعادة استخدام** الدوال في أماكن متعددة
3. **سهولة الصيانة** والتحديث
4. **تقليل الأخطاء** من خلال التحقق من المدخلات

### هيكل البرنامج النموذجي:

```cpp
// 1. تعريف الـ Enum
enum enType { Value1, Value2, Value3 };

// 2. دوال المساعدة
void ShowMenu() { /* ... */ }
enType ReadInput() { /* ... */ }
string ConvertToString(enType value) { /* ... */ }

// 3. الدالة الرئيسية
int main() {
    ShowMenu();
    enType value = ReadInput();
    string result = ConvertToString(value);
    // ...
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

<a id="english-nested-functions-enums"></a>
[العربية ↗](#arabic-nested-functions-enums)

# 🔀 Nested Functions with Enums

## 🎯 Introduction

In this lesson, we'll learn how to create **nested functions** and **functions of Enum type**, and how to call functions inside other functions to create organized and maintainable programs.

## 💡 Core Concepts

### What are Nested Functions?

**Nested functions** are functions called within other functions, where the result of one function becomes the input for another.

### What are Enum Functions?

These are functions whose return type is Enum, making the code safer and easier to read.

## 🛠️ Practical Example: Week Day System

### 📝 Overall Program Structure

```cpp
#include <iostream>
#include <string>
using namespace std;

// Define Enum for week days
enum enWeekDay { 
    Sunday = 1, 
    Monday = 2, 
    Tuesday = 3, 
    Wednesday = 4, 
    Thursday = 5, 
    Friday = 6, 
    Saturday = 7 
};

// Function prototypes
void ShowWeekDayMenu();
enWeekDay ReadWeekDay();
string GetWeekDayName(enWeekDay day);

int main() {
    // Main program display
    ShowWeekDayMenu();
    
    cout << "Today is " << GetWeekDayName(ReadWeekDay()) << endl;
    
    return 0;
}
```

### 📝 Function 1: Display Menu

```cpp
void ShowWeekDayMenu() {
    cout << "**************************" << endl;
    cout << "       Week Days Menu     " << endl;
    cout << "**************************" << endl;
    cout << "(1) Sunday" << endl;
    cout << "(2) Monday" << endl;
    cout << "(3) Tuesday" << endl;
    cout << "(4) Wednesday" << endl;
    cout << "(5) Thursday" << endl;
    cout << "(6) Friday" << endl;
    cout << "(7) Saturday" << endl;
    cout << "**************************" << endl;
    cout << "Please enter the number of the day: ";
}
```

### 📝 Function 2: Read Day (Enum Function)

```cpp
enWeekDay ReadWeekDay() {
    int weekDayNumber;
    cin >> weekDayNumber;
    
    // Convert int to Enum
    return (enWeekDay)weekDayNumber;
}
```

### 📝 Function 3: Get Day Name

```cpp
string GetWeekDayName(enWeekDay day) {
    switch (day) {
        case Sunday:
            return "Sunday";
        case Monday:
            return "Monday";
        case Tuesday:
            return "Tuesday";
        case Wednesday:
            return "Wednesday";
        case Thursday:
            return "Thursday";
        case Friday:
            return "Friday";
        case Saturday:
            return "Saturday";
        default:
            return "Not a week day";
    }
}
```

## 🔧 Detailed Function Explanation

### Nested Functions in Action

```cpp
int main() {
    ShowWeekDayMenu();
    
    // 🔥 Nested function calls
    // ReadWeekDay() is called first, then its result is passed to GetWeekDayName()
    cout << "Today is " << GetWeekDayName(ReadWeekDay()) << endl;
    
    return 0;
}
```

**Result:**
```
**************************
       Week Days Menu     
**************************
(1) Sunday
(2) Monday
(3) Tuesday
(4) Wednesday
(5) Thursday
(6) Friday
(7) Saturday
**************************
Please enter the number of the day: 3
Today is Tuesday
```

### How Nested Functions Work Step-by-Step?

1. **`ShowWeekDayMenu()`** displays the menu
2. **`ReadWeekDay()`** reads the number from user and converts it to Enum
3. **`GetWeekDayName()`** takes the Enum and returns the day name as string
4. **Result** is printed on screen

## 🎯 Benefits of This Design

### 1. Separation of Concerns

```cpp
// ✅ Each function has single responsibility
ShowWeekDayMenu();    // Responsibility: display menu only
ReadWeekDay();        // Responsibility: read input only  
GetWeekDayName();     // Responsibility: convert Enum to name only
```

### 2. Reusability

```cpp
// ✅ Functions can be used in multiple places
void DisplayWeekSchedule() {
    enWeekDay today = ReadWeekDay();
    string dayName = GetWeekDayName(today);
    cout << "Schedule for " << dayName << ":" << endl;
    // Display schedule...
}

void CheckIfWeekend() {
    enWeekDay day = ReadWeekDay();
    if (day == Saturday || day == Sunday) {
        cout << "It's weekend!" << endl;
    }
}
```

### 3. Easy Maintenance

```cpp
// ✅ To change menu appearance, modify only one function
void ShowWeekDayMenu() {
    // Modification here only
    cout << "🎯 Choose your day:" << endl;
    cout << "1. Sunday" << endl;
    // ... other days
}
```

## 🔄 Types of Functions Used

### 1. Void Function (No Return)

```cpp
void ShowWeekDayMenu() {
    // Execute operations without returning value
    // Used for display or direct modification
}
```

### 2. Enum Return Function

```cpp
enWeekDay ReadWeekDay() {
    // Read input and return Enum value
    return (enWeekDay)userInput;
}
```

### 3. String Return Function

```cpp
string GetWeekDayName(enWeekDay day) {
    // Take Enum and return corresponding string
    return "Day Name";
}
```

## 🏆 Best Practices

### 1. Descriptive Function Names

```cpp
// ✅ Good naming
enWeekDay ReadWeekDayFromUser();
string ConvertWeekDayToString(enWeekDay day);
void DisplayWeekDayMenu();

// ❌ Unclear naming
enWeekDay GetInput();
string Convert(enWeekDay d);
void ShowMenu();
```

### 2. Single Responsibility per Function

```cpp
// ✅ Each function has one task
void ShowMenu() { /* display menu only */ }
enWeekDay ReadInput() { /* read input only */ }
string GetName(enWeekDay day) { /* conversion only */ }

// ❌ Function doing multiple tasks
void DoEverything() {
    ShowMenu();
    ReadInput();
    ConvertToString();
    // Multiple tasks in one function
}
```

### 3. Use Enums for Limited Values

```cpp
// ✅ Use Enum for limited values
enum enWeekDay { Sunday = 1, Monday, Tuesday, /* ... */ };

// ❌ Use direct numbers
if (day == 1) { /* What does 1 mean? */ }
```

## 📝 Advanced Example with Improvements

### 📝 Enhanced Version with Error Handling

```cpp
#include <iostream>
#include <string>
using namespace std;

enum enWeekDay { 
    Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday 
};

void ShowWeekDayMenu() {
    cout << "**************************" << endl;
    cout << "       Week Days Menu     " << endl;
    cout << "**************************" << endl;
    for (int i = Sunday; i <= Saturday; i++) {
        cout << "(" << i << ") " << GetWeekDayName((enWeekDay)i) << endl;
    }
    cout << "**************************" << endl;
}

enWeekDay ReadWeekDay() {
    int weekDayNumber;
    
    while (true) {
        cout << "Please enter the number of the day (1-7): ";
        cin >> weekDayNumber;
        
        if (weekDayNumber >= Sunday && weekDayNumber <= Saturday) {
            break;
        }
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }
    
    return (enWeekDay)weekDayNumber;
}

string GetWeekDayName(enWeekDay day) {
    string dayNames[] = {
        "Invalid", "Sunday", "Monday", "Tuesday", 
        "Wednesday", "Thursday", "Friday", "Saturday"
    };
    
    if (day >= Sunday && day <= Saturday) {
        return dayNames[day];
    }
    return "Not a week day";
}

void PrintDayInfo(enWeekDay day) {
    string dayName = GetWeekDayName(day);
    cout << "📅 Today is " << dayName << endl;
    
    if (day == Saturday || day == Sunday) {
        cout << "🎉 It's weekend! Time to relax." << endl;
    } else {
        cout << "💼 It's a working day." << endl;
    }
}

int main() {
    ShowWeekDayMenu();
    enWeekDay selectedDay = ReadWeekDay();
    PrintDayInfo(selectedDay);
    
    return 0;
}
```

## 📊 Code Analysis

### Execution Flow:

1. **`main()`** starts the program
2. **`ShowWeekDayMenu()`** displays the menu
3. **`ReadWeekDay()`** reads and validates input
4. **`GetWeekDayName()`** converts Enum to name
5. **`PrintDayInfo()`** displays final information

### Design Advantages:

- **Flexible**: Easy to add new days
- **Safe**: Input validation
- **Maintainable**: Each function is independent
- **Extensible**: Easy to add new features

## 📝 Summary

### Core Concepts:

- **Nested Functions**: Calling functions within other functions
- **Enum Functions**: Functions that return Enum values
- **Separation of Concerns**: Each function has single responsibility

### Benefits of This Approach:

1. **Cleaner code** that's easier to read
2. **Reusability** of functions in multiple places
3. **Easy maintenance** and updates
4. **Fewer errors** through input validation

### Typical Program Structure:

```cpp
// 1. Define Enum
enum enType { Value1, Value2, Value3 };

// 2. Helper functions
void ShowMenu() { /* ... */ }
enType ReadInput() { /* ... */ }
string ConvertToString(enType value) { /* ... */ }

// 3. Main function
int main() {
    ShowMenu();
    enType value = ReadInput();
    string result = ConvertToString(value);
    // ...
}
```

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>