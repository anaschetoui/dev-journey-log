<div dir="rtl">

<a id="arabic-arrays"></a>
[English ↙](#english-arrays)

# 🗃️ المصفوفات | Arrays

## 🎯 المقدمة

المصفوفات (Arrays) هي من أهم الأدوات في البرمجة التي يجب على كل مبرمج تعلمها. توجد المصفوفات في جميع لغات البرمجة وتعتبر أداة أساسية في هياكل البيانات (Data Structures) لتخزين واسترجاع والبحث عن المعلومات.

## 💡 المفاهيم الأساسية

### ما هي المصفوفات؟

**المصفوفات (Arrays)** هي:
- متغيرات يمكنها تخزين عدة قيم تحت اسم واحد
- جميع القيم يجب أن تكون من نفس النوع (نفس Data Type)
- تعتبر من الأنواع المشتقة (Derived Data Types)
- تبدأ فهارسها (Indexes) من الصفر (0)

### أنواع البيانات والمصفوفات

```
أنواع البيانات في C++:
├── الأنواع الأساسية (Fundamental)
│   ├── int, float, double, char, bool
├── الأنواع المعرفة من المستخدم (User Defined)  
│   ├── Enums, Structures
└── الأنواع المشتقة (Derived)
    ├── الدوال (Functions)
    └── **المصفوفات (Arrays)**
```

### العلاقة بين المصفوفات والنصوص (Strings)
- **String** هو في الأساس **Array of Characters**
- كل ما ينطبق على المصفوفات ينطبق على النصوص

## 🛠️ أمثلة عملية

### 📝 مثال أساسي للمصفوفات

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    // تعريف مصفوفة أعداد صحيحة مع تهيئة القيم
    int x[5] = {22, 18, 2, 55, 520};
    
    // طباعة عناصر المصفوفة
    cout << "x[0] = " << x[0] << endl;  // 22
    cout << "x[1] = " << x[1] << endl;  // 18
    cout << "x[4] = " << x[4] << endl;  // 520
    
    // عمليات حسابية على عناصر المصفوفة
    int sum = x[0] + x[4];
    cout << "x[0] + x[4] = " << sum << endl;  // 542
    
    return 0;
}
```

</div>

### 📝 تمثيل المصفوفة في الذاكرة

```
المصفوفة: int x[5] = {22, 18, 2, 55, 520}

الذاكرة:
+-------+-------+-------+-------+-------+
| x[0]  | x[1]  | x[2]  | x[3]  | x[4]  |
|  22   |  18   |   2   |  55   |  520  |
+-------+-------+-------+-------+-------+
Index:    0       1       2       3       4
```

### 📝 أنواع مختلفة من المصفوفات

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    // مصفوفة أعداد حقيقية
    float prices[4] = {10.5, 20.3, 15.7, 8.9};
    
    // مصفوفة أحرف
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};
    
    // مصفوفة قيم منطقية
    bool flags[3] = {true, false, true};
    
    // تعريف مصفوفة بدون تهيئة أولية
    int numbers[3];
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    
    cout << "Sum: " << numbers[0] + numbers[1] << endl;  // 30
    
    return 0;
}
```

</div>

## ❌ الأخطاء الشائعة

### 1. تجاوز حدود المصفوفة

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - الفهرس يبدأ من 0 وينتهي بـ (الحجم-1)
int arr[5] = {1, 2, 3, 4, 5};
cout << arr[5];  // خطأ! الفهرس 5 غير موجود

// ✅ صحيح - الفهرس من 0 إلى 4
int arr[5] = {1, 2, 3, 4, 5};
cout << arr[4];  // صحيح - الفهرس 4
```

</div>

### 2. نسيان أن الفهرس يبدأ من الصفر

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - العنصر الأول هو arr[0] وليس arr[1]
int arr[3] = {10, 20, 30};
cout << arr[1];  // هذا يطبع 20 وليس 10

// ✅ صحيح - العنصر الأول هو arr[0]
int arr[3] = {10, 20, 30};
cout << arr[0];  // يطبع 10
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام تهيئة واضحة للمصفوفات

<div dir="ltr" align="left">

```cpp
// ✅ تهيئة واضحة ومنظمة
int studentScores[5] = {85, 90, 78, 92, 88};
float temperatures[7] = {25.5, 26.0, 24.8, 27.2, 26.5, 25.0, 24.2};
char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

// ❌ تجنب المصفوفات غير المهيئة
int scores[100];  // قد تحتوي على قيم عشوائية
```

</div>

### 2. استخدام ثوابت لأحجام المصفوفات

<div dir="ltr" align="left">

```cpp
// ✅ استخدام ثوابت للحجم
const int CLASS_SIZE = 30;
const int DAYS_IN_WEEK = 7;

int studentGrades[CLASS_SIZE];
float dailyTemperatures[DAYS_IN_WEEK];

// ❌ استخدام أرقام ثابتة مباشرة
int grades[30];  // ماذا يعني 30؟
```

</div>

### 3. معالجة جميع عناصر المصفوفة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {10, 20, 30, 40, 50};
    
    // ✅ معالجة جميع العناصر
    int sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += numbers[i];
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }
    
    cout << "Total sum: " << sum << endl;
    
    return 0;
}
```

</div>

## 📊 فوائد استخدام المصفوفات

### بدون مصفوفات
- `int student1, student2, student3, ..., student100;`
- صعوبة في إدارة المتغيرات الكثيرة
- تعقيد في معالجة البيانات
- صعوبة في التحديث والصيانة

### مع مصفوفات
- `int students[100];`
- تنظيم وإدارة سهلة للبيانات
- سهولة المعالجة باستخدام الحلقات
- مرونة في التحديث والصيانة

## 📝 الملخص

### المفاهيم الأساسية:
- **المصفوفة**: متغير يخزن عدة قيم من نفس النوع
- **الفهرس (Index)**: يبدأ من 0 وينتهي بـ (الحجم-1)
- **النوع المشتق**: لا توجد بمفردها، بل من نوع آخر

### قواعد مهمة:
1. **التعريف**: `نوع_البيانات اسم_المصفوفة[الحجم];`
2. **التهيئة**: `{قيمة1, قيمة2, ..., قيمةN}`
3. **الوصول**: `اسم_المصفوفة[فهرس]`
4. **النوع**: جميع العناصر يجب أن تكون من نفس النوع

### فوائد الاستخدام:
- **التنظيم**: تجميع البيانات المتعلقة معاً
- **الكفاءة**: معالجة multiple بيانات بسهولة
- **المرونة**: سهولة التعديل والإضافة
- **إعادة الاستخدام**: استخدام في تطبيقات متعددة

### أمثلة عملية:
- **علامات الطلاب**: `int scores[100]`
- **درجات الحرارة**: `float temperatures[365]`
- **أحرف النص**: `char text[1000]`

### الفكرة الأساسية:
المصفوفات تحول البرمجة من التعامل مع متغيرات منفردة إلى التعامل مع مجموعات منظمة من البيانات، مما يجعل البرامج أكثر كفاءة وسهولة في الصيانة.

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

<a id="english-arrays"></a>
[العربية ↗](#arabic-arrays)

# 🗃️ Arrays

## 🎯 Introduction

Arrays are among the most important tools in programming that every programmer must learn. Arrays exist in all programming languages and are fundamental tools in Data Structures for storing, retrieving, and searching information.

## 💡 Core Concepts

### What are Arrays?

**Arrays** are:
- Variables that can store multiple values under one name
- All values must be of the same type (same Data Type)
- Considered Derived Data Types
- Their indexes start from zero (0)

### Data Types and Arrays

```
Data Types in C++:
├── Fundamental Types
│   ├── int, float, double, char, bool
├── User Defined Types  
│   ├── Enums, Structures
└── Derived Types
    ├── Functions
    └── **Arrays**
```

### Relationship Between Arrays and Strings
- **String** is essentially an **Array of Characters**
- Everything that applies to arrays applies to strings

## 🛠️ Practical Examples

### 📝 Basic Array Example

```cpp
#include <iostream>
using namespace std;

int main() {
    // Defining an integer array with initial values
    int x[5] = {22, 18, 2, 55, 520};
    
    // Printing array elements
    cout << "x[0] = " << x[0] << endl;  // 22
    cout << "x[1] = " << x[1] << endl;  // 18
    cout << "x[4] = " << x[4] << endl;  // 520
    
    // Arithmetic operations on array elements
    int sum = x[0] + x[4];
    cout << "x[0] + x[4] = " << sum << endl;  // 542
    
    return 0;
}
```

### 📝 Array Representation in Memory

```
Array: int x[5] = {22, 18, 2, 55, 520}

Memory:
+-------+-------+-------+-------+-------+
| x[0]  | x[1]  | x[2]  | x[3]  | x[4]  |
|  22   |  18   |   2   |  55   |  520  |
+-------+-------+-------+-------+-------+
Index:    0       1       2       3       4
```

### 📝 Different Types of Arrays

```cpp
#include <iostream>
using namespace std;

int main() {
    // Float array
    float prices[4] = {10.5, 20.3, 15.7, 8.9};
    
    // Character array
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};
    
    // Boolean array
    bool flags[3] = {true, false, true};
    
    // Defining array without initial values
    int numbers[3];
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    
    cout << "Sum: " << numbers[0] + numbers[1] << endl;  // 30
    
    return 0;
}
```

## ❌ Common Errors

### 1. Array Bounds Overflow

```cpp
// ❌ Error - Index starts from 0 and ends at (Size-1)
int arr[5] = {1, 2, 3, 4, 5};
cout << arr[5];  // Error! Index 5 doesn't exist

// ✅ Correct - Index from 0 to 4
int arr[5] = {1, 2, 3, 4, 5};
cout << arr[4];  // Correct - Index 4
```

### 2. Forgetting Index Starts from Zero

```cpp
// ❌ Error - First element is arr[0] not arr[1]
int arr[3] = {10, 20, 30};
cout << arr[1];  // This prints 20 not 10

// ✅ Correct - First element is arr[0]
int arr[3] = {10, 20, 30};
cout << arr[0];  // Prints 10
```

## 🏆 Best Practices

### 1. Using Clear Array Initialization

```cpp
// ✅ Clear and organized initialization
int studentScores[5] = {85, 90, 78, 92, 88};
float temperatures[7] = {25.5, 26.0, 24.8, 27.2, 26.5, 25.0, 24.2};
char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

// ❌ Avoid uninitialized arrays
int scores[100];  // May contain random values
```

### 2. Using Constants for Array Sizes

```cpp
// ✅ Using constants for sizes
const int CLASS_SIZE = 30;
const int DAYS_IN_WEEK = 7;

int studentGrades[CLASS_SIZE];
float dailyTemperatures[DAYS_IN_WEEK];

// ❌ Using hard-coded numbers
int grades[30];  // What does 30 mean?
```

### 3. Processing All Array Elements

```cpp
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {10, 20, 30, 40, 50};
    
    // ✅ Processing all elements
    int sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += numbers[i];
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }
    
    cout << "Total sum: " << sum << endl;
    
    return 0;
}
```

## 📊 Benefits of Using Arrays

### Without Arrays
- `int student1, student2, student3, ..., student100;`
- Difficulty managing many variables
- Complexity in data processing
- Difficulty in updates and maintenance

### With Arrays
- `int students[100];`
- Easy organization and data management
- Easy processing using loops
- Flexibility in updates and maintenance

## 📝 Summary

### Basic Concepts:
- **Array**: Variable that stores multiple values of the same type
- **Index**: Starts from 0 and ends at (Size-1)
- **Derived Type**: Doesn't exist alone, but from another type

### Important Rules:
1. **Definition**: `data_type array_name[size];`
2. **Initialization**: `{value1, value2, ..., valueN}`
3. **Access**: `array_name[index]`
4. **Type**: All elements must be of the same type

### Usage Benefits:
- **Organization**: Group related data together
- **Efficiency**: Easy processing of multiple data
- **Flexibility**: Easy modification and addition
- **Reusability**: Use in multiple applications

### Practical Examples:
- **Student scores**: `int scores[100]`
- **Temperature readings**: `float temperatures[365]`
- **Text characters**: `char text[1000]`

### Core Concept:
Arrays transform programming from dealing with individual variables to dealing with organized data groups, making programs more efficient and easier to maintain.

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>