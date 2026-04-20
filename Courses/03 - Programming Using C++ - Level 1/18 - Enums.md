<div dir="rtl">

<a id="arabic-enum"></a>
[English ↙](#english-enum)

# 🎯 التعدادات | Enums

## 🎯 المقدمة

التعدادات (Enums) في لغة C++ هي نوع من أنواع البيانات المعرفة من قبل المستخدم (User Defined Data Types). تساعدنا التعدادات على تمثيل مجموعة من القيم المحددة بأسماء ذات معنى بدلاً من استخدام الأرقام مباشرة.

## 💡 المفاهيم الأساسية

### ما هي التعدادات؟

التعدادات هي **تسميات (Labels)** نضعها للأشياء في برنامجنا، حيث يتم تخزين قيم رقمية محددة لكل تسمية.

### كيف تعمل التعدادات؟

- كل تسمية في التعداد تحصل على قيمة رقمية تلقائياً
- تبدأ القيم من 0 وتزداد بمقدار 1
- تجعل الكود أكثر وضوحاً وسهولة في القراءة

## 🛠️ أمثلة عملية

### 📝 مثال أساسي للتعدادات

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// تعريف تعداد الألوان
enum Color {
    RED,      // قيمة 0
    GREEN,    // قيمة 1
    YELLOW,   // قيمة 2
    BLUE      // قيمة 3
};

int main() {
    // إنشاء متغير من نوع التعداد
    Color myColor;
    
    // تعيين القيم باستخدام التسميات
    myColor = GREEN;
    
    // طباعة القيم الرقمية
    cout << "Color value: " << myColor << endl;  // يطبع 1
    
    return 0;
}
```

</div>

### 🔍 أمثلة إضافية من المحاضرة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// تعداد الاتجاهات
enum Direction {
    NORTH,    // قيمة 0
    SOUTH,    // قيمة 1
    EAST,     // قيمة 2
    WEST      // قيمة 3
};

// تعداد أيام الأسبوع
enum Week {
    SATURDAY,   // 0
    SUNDAY,     // 1
    MONDAY,     // 2
    TUESDAY,    // 3
    WEDNESDAY,  // 4
    THURSDAY,   // 5
    FRIDAY      // 6
};

// تعداد الجنس
enum Gender {
    MALE,       // 0
    FEMALE      // 1
};

// تعداد الحالة الاجتماعية
enum Status {
    SINGLE,     // 0
    MARRIED     // 1
};

int main() {
    // استخدام التعدادات المختلفة
    Direction myDirection = SOUTH;
    Week today = WEDNESDAY;
    Gender personGender = MALE;
    Status personStatus = SINGLE;
    
    cout << "Direction: " << myDirection << endl;   // يطبع 1
    cout << "Today: " << today << endl;             // يطبع 4
    cout << "Gender: " << personGender << endl;     // يطبع 0
    cout << "Status: " << personStatus << endl;     // يطبع 0
    
    return 0;
}
```

</div>

## ❌ الأخطاء الشائعة

### 1. محاولة تعيين رقم مباشر

<div dir="ltr" align="left">

```cpp
// ❌ خطأ
enum Color { RED, GREEN, BLUE };
Color myColor = 1;  // خطأ! لا يمكن تعيين رقم مباشرة

// ✅ صحيح
enum Color { RED, GREEN, BLUE };
Color myColor = GREEN;  // صحيح، استخدام التسمية
```

</div>

### 2. نسيان أن التعدادات تعطي قيماً رقمية

<div dir="ltr" align="left">

```cpp
enum Color { RED, GREEN, BLUE };
Color myColor = GREEN;

// يطبع القيمة الرقمية (1) وليس النص "GREEN"
cout << myColor;  // الناتج: 1
```

</div>

## 📝 الملخص

### المميزات الرئيسية:
- **الوضوح**: استخدام أسماء واضحة بدلاً من الأرقام
- **التنظيم**: تجميع القيم المتعلقة معاً
- **السهولة**: لا حاجة لتذكر القيم الرقمية

### قواعد مهمة:
1. **التعريف**: `enum اسم_التعداد { تسمية1, تسمية2, ... };`
2. **القيم**: تبدأ من 0 وتزيد تلقائياً
3. **الاستخدام**: `اسم_التعداد متغير = تسمية;`

### الفكرة الأساسية:
التعدادات تجعل البرمجة أسهل من خلال استخدام أسماء ذات معنى بدلاً من الأرقام المجردة.

</div>

<div dir="ltr">

<a id="english-enum"></a>
[العربية ↗](#arabic-enum)

# 🎯 Enumerations

## 🎯 Introduction

Enumerations (Enums) in C++ are a type of User Defined Data Types. Enums help us represent a set of specific values with meaningful names instead of using numbers directly.

## 💡 Core Concepts

### What are Enums?

Enums are **labels** we assign to things in our program, where specific numeric values are stored for each label.

### How do Enums work?

- Each label in the enum gets a numeric value automatically
- Values start from 0 and increase by 1
- Make code more clear and easier to read

## 🛠️ Practical Examples

### 📝 Basic Enum Example

```cpp
#include <iostream>
using namespace std;

// Color enum definition
enum Color {
    RED,      // value 0
    GREEN,    // value 1
    YELLOW,   // value 2
    BLUE      // value 3
};

int main() {
    // Creating enum variable
    Color myColor;
    
    // Assigning values using labels
    myColor = GREEN;
    
    // Printing numeric values
    cout << "Color value: " << myColor << endl;  // Prints 1
    
    return 0;
}
```

### 🔍 Additional Examples from Lecture

```cpp
#include <iostream>
using namespace std;

// Direction enum
enum Direction {
    NORTH,    // value 0
    SOUTH,    // value 1
    EAST,     // value 2
    WEST      // value 3
};

// Week days enum
enum Week {
    SATURDAY,   // 0
    SUNDAY,     // 1
    MONDAY,     // 2
    TUESDAY,    // 3
    WEDNESDAY,  // 4
    THURSDAY,   // 5
    FRIDAY      // 6
};

// Gender enum
enum Gender {
    MALE,       // 0
    FEMALE      // 1
};

// Marital status enum
enum Status {
    SINGLE,     // 0
    MARRIED     // 1
};

int main() {
    // Using different enums
    Direction myDirection = SOUTH;
    Week today = WEDNESDAY;
    Gender personGender = MALE;
    Status personStatus = SINGLE;
    
    cout << "Direction: " << myDirection << endl;   // Prints 1
    cout << "Today: " << today << endl;             // Prints 4
    cout << "Gender: " << personGender << endl;     // Prints 0
    cout << "Status: " << personStatus << endl;     // Prints 0
    
    return 0;
}
```

## ❌ Common Errors

### 1. Trying to Assign Number Directly

```cpp
// ❌ Wrong
enum Color { RED, GREEN, BLUE };
Color myColor = 1;  // Error! Cannot assign number directly

// ✅ Correct
enum Color { RED, GREEN, BLUE };
Color myColor = GREEN;  // Correct, using label
```

### 2. Forgetting Enums Give Numeric Values

```cpp
enum Color { RED, GREEN, BLUE };
Color myColor = GREEN;

// Prints numeric value (1) not text "GREEN"
cout << myColor;  // Output: 1
```

## 📝 Summary

### Key Features:
- **Clarity**: Use meaningful names instead of numbers
- **Organization**: Group related values together
- **Ease**: No need to remember numeric values

### Important Rules:
1. **Definition**: `enum EnumName { label1, label2, ... };`
2. **Values**: Start from 0 and increase automatically
3. **Usage**: `EnumName variable = label;`

### Core Concept:
Enums make programming easier by using meaningful names instead of abstract numbers.

*Anas Chetoui* - `@anaschetoui`

</div>