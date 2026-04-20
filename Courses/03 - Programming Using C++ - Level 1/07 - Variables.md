# Variables in C++

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## المتغيرات (Variables)

### مقدمة

في هذا الدرس، سنتعلم مفهوم **المتغيرات (Variables)** في لغة C++ وكيفية تعريفها واستخدامها.

---

## ما هي المتغيرات؟ 🎯

**المتغيرات (Variables)** هي أماكن في الذاكرة نخزن فيها البيانات. يمكن اعتبارها كـ **حاويات (Containers)** تخزن القيم التي نتعامل معها في البرنامج.

### تعريف المتغير:
هو مكان في الذاكرة نخزن فيه بيانات من نوع معين.

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int myAge = 45;
    cout << myAge << endl;
    return 0;
}
```

**Output:**
```
45
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## أنواع البيانات الأساسية (Fundamental Data Types)

### 1. الأنواع الرقمية الصحيحة (Integral Types)

#### أ. الأعداد الصحيحة (Integer)

<div dir="rtl" style="text-align: right;">

```cpp
int myNumber = 52;
```

يخزن أعداداً صحيحة مثل: `10`, `20`, `30`, `15`

#### ب. الأحرف (Character)

<div dir="rtl" style="text-align: right;">

```cpp
char myLetter = 'A';
```

يخزن حرفاً واحداً فقط

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 52;
    char letter = 'A';
    
    cout << number << endl;
    cout << letter << endl;
    return 0;
}
```

**Output:**
```
52
A
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 2. الأنواع العشرية (Floating Types)

#### أ. الأعداد العشرية (Float)

<div dir="rtl" style="text-align: right;">

```cpp
float myFloatNumber = 7.84;
```

يخزن أعداداً تحتوي على كسور

#### ب. الأعداد العشرية المزدوجة (Double)

<div dir="rtl" style="text-align: right;">

```cpp
double myDoubleNumber = 21.0;
```

نفس `float` لكن بدقة أعلى ومساحة أكبر

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    float floatNum = 7.84;
    double doubleNum = 21.5;
    
    cout << floatNum << endl;
    cout << doubleNum << endl;
    return 0;
}
```

**Output:**
```
7.84
21.5
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 3. أنواع أخرى

#### أ. القيم المنطقية (Boolean)

<div dir="rtl" style="text-align: right;">

```cpp
bool myBoolean = true;
```

يخزن `true` أو `false` فقط

#### ب. النصوص (String)

<div dir="rtl" style="text-align: right;">

```cpp
string myText = "Mohammed";
```

يخزن نصوصاً أو جمل كاملة

#### ج. النوع الفارغ (Void)

<div dir="rtl" style="text-align: right;">

```cpp
void
```

نوع فارغ لا يخزن أي قيمة

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    bool isActive = true;
    string name = "Mohammed";
    
    cout << isActive << endl;
    cout << name << endl;
    return 0;
}
```

**Output:**
```
1
Mohammed
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## طرق تعريف المتغيرات

### الطريقة الأولى: التعريف مع التهيئة

<div dir="rtl" style="text-align: right;">

```cpp
int myAge = 45;
```

### الطريقة الثانية: التعريف ثم التهيئة

<div dir="rtl" style="text-align: right;">

```cpp
int myAge;
myAge = 45;
```

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // الطريقة الأولى
    int age1 = 25;
    
    // الطريقة الثانية
    int age2;
    age2 = 30;
    
    cout << age1 << endl;
    cout << age2 << endl;
    return 0;
}
```

**Output:**
```
25
30
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### تغيير قيم المتغيرات

<div dir="rtl" style="text-align: right;">

يمكن تغيير قيمة المتغير أثناء تنفيذ البرنامج:

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int myAge = 45;
    cout << myAge << endl;  // 45
    
    myAge = 27;
    cout << myAge << endl;  // 27
    
    return 0;
}
```

**Output:**
```
45
27
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## العمليات الحسابية على المتغيرات

<div dir="rtl" style="text-align: right;">

يمكن إجراء عمليات حسابية على المتغيرات:

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #ffe6cc; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 4;
    int y = 10;
    int sum = x + y;
    
    cout << sum << endl;  // 14
    cout << x + y << endl; // 14 (بدون متغير)
    
    return 0;
}
```

**Output:**
```
14
14
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## قواعد تسمية المتغيرات

### القواعد الأساسية:

<div dir="rtl" style="text-align: right;">

1. **يجب أن تبدأ بحرف** أو `_` (underscore)
   - ✓ `age`, `_name`, `student1`
   - ✗ `2student`, `1age`

2. **لا يمكن أن تحتوي على مسافات**
   - ✓ `firstName`, `first_name`
   - ✗ `first name`

3. **حساسة لحالة الأحرف (Case Sensitive)**
   - `age` ≠ `Age` ≠ `AGE`

4. **لا يمكن استخدام كلمات محجوزة**
   - ✗ `cout`, `int`, `for`

5. **يجب أن تكون الأسماء فريدة**

</div>

### أمثلة على أسماء صحيحة:

<div dir="rtl" style="text-align: right;">

```cpp
int studentAge;
float averageScore;
string firstName;
bool isActive;
```

### أمثلة على أسماء خاطئة:

<div dir="rtl" style="text-align: right;">

```cpp
int 2ndYear;      // يبدأ برقم
float average score; // يحتوي على مسافة
int for;          // كلمة محجوزة
```

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f0f0; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // أسماء صحيحة
    int studentAge = 20;
    string firstName = "Anas";
    
    // أسماء خاطئة (ستسبب أخطاء)
    // int 2ndYear = 2;
    // float average score = 85.5;
    // int for = 10;
    
    cout << studentAge << endl;
    cout << firstName << endl;
    return 0;
}
```

**Output:**
```
20
Anas
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الثوابت (Constants)

### ما هي الثوابت؟

<div dir="rtl" style="text-align: right;">

**الثوابت** هي متغيرات لا يمكن تغيير قيمتها بعد تعيينها. نستخدم الكلمة المفتاحية `const` لتعريفها.

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #e8eaf6; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    const int minutesPerHour = 60;
    const float PI = 3.14;
    
    cout << minutesPerHour << endl;
    cout << PI << endl;
    
    // هذا سيتسبب في خطأ:
    // minutesPerHour = 70; // Error!
    
    return 0;
}
```

**Output:**
```
60
3.14
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### المفاهيم الأساسية:

<div dir="rtl" style="text-align: right;">

- **المتغيرات**: أماكن في الذاكرة لتخزين البيانات
- **أنواع البيانات**: `int`, `float`, `double`, `char`, `bool`, `string`
- **تعريف المتغيرات**: بنوع واسم وقيمة
- **تغيير القيم**: يمكن تعديلها أثناء التنفيذ
- **قواعد التسمية**: تبدأ بحرف، لا مسافات، حساسة لحالة الأحرف
- **الثوابت**: متغيرات لا تتغير (`const`)

### الفكرة الرئيسية:
> **"المتغيرات هي الحاويات التي تخزن بيانات البرنامج، والثوابت هي متغيرات مؤمنة ضد التغيير"**

</div>

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Variables

## Introduction

In this lesson, we will learn about **Variables** in C++ and how to define and use them.

---

## What are Variables? 🎯

**Variables** are memory locations where we store data. They can be considered as **containers** that store values we work with in the program.

### Variable Definition:
It's a place in memory where we store data of a specific type.

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int myAge = 45;
    cout << myAge << endl;
    return 0;
}
```

**Output:**
```
45
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Fundamental Data Types

### 1. Integral Types

#### A. Integer

```cpp
int myNumber = 52;
```

Stores whole numbers like: `10`, `20`, `30`, `15`

#### B. Character

```cpp
char myLetter = 'A';
```

Stores a single character only

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 52;
    char letter = 'A';
    
    cout << number << endl;
    cout << letter << endl;
    return 0;
}
```

**Output:**
```
52
A
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 2. Floating Types

#### A. Float

```cpp
float myFloatNumber = 7.84;
```

Stores numbers containing fractions

#### B. Double

```cpp
double myDoubleNumber = 21.0;
```

Same as `float` but with higher precision and larger space

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    float floatNum = 7.84;
    double doubleNum = 21.5;
    
    cout << floatNum << endl;
    cout << doubleNum << endl;
    return 0;
}
```

**Output:**
```
7.84
21.5
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 3. Other Types

#### A. Boolean

```cpp
bool myBoolean = true;
```

Stores only `true` or `false`

#### B. String

```cpp
string myText = "Mohammed";
```

Stores texts or complete sentences

#### C. Void

```cpp
void
```

Empty type that stores no value

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    bool isActive = true;
    string name = "Mohammed";
    
    cout << isActive << endl;
    cout << name << endl;
    return 0;
}
```

**Output:**
```
1
Mohammed
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Variable Definition Methods

### Method 1: Definition with Initialization

```cpp
int myAge = 45;
```

### Method 2: Definition then Initialization

```cpp
int myAge;
myAge = 45;
```

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // Method 1
    int age1 = 25;
    
    // Method 2
    int age2;
    age2 = 30;
    
    cout << age1 << endl;
    cout << age2 << endl;
    return 0;
}
```

**Output:**
```
25
30
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Changing Variable Values

We can change variable values during program execution:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int myAge = 45;
    cout << myAge << endl;  // 45
    
    myAge = 27;
    cout << myAge << endl;  // 27
    
    return 0;
}
```

**Output:**
```
45
27
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Arithmetic Operations on Variables

We can perform arithmetic operations on variables:

</div>

<div dir="ltr" style="text-align: left; background-color: #ffe6cc; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 4;
    int y = 10;
    int sum = x + y;
    
    cout << sum << endl;  // 14
    cout << x + y << endl; // 14 (without variable)
    
    return 0;
}
```

**Output:**
```
14
14
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Variable Naming Rules

### Basic Rules:

1. **Must start with a letter** or `_` (underscore)
   - ✓ `age`, `_name`, `student1`
   - ✗ `2student`, `1age`

2. **Cannot contain spaces**
   - ✓ `firstName`, `first_name`
   - ✗ `first name`

3. **Case sensitive**
   - `age` ≠ `Age` ≠ `AGE`

4. **Cannot use reserved words**
   - ✗ `cout`, `int`, `for`

5. **Names must be unique**

### Examples of Correct Names:

```cpp
int studentAge;
float averageScore;
string firstName;
bool isActive;
```

### Examples of Incorrect Names:

```cpp
int 2ndYear;      // starts with number
float average score; // contains space
int for;          // reserved word
```

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f0f0; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // Correct names
    int studentAge = 20;
    string firstName = "Anas";
    
    // Incorrect names (will cause errors)
    // int 2ndYear = 2;
    // float average score = 85.5;
    // int for = 10;
    
    cout << studentAge << endl;
    cout << firstName << endl;
    return 0;
}
```

**Output:**
```
20
Anas
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Constants

### What are Constants?

**Constants** are variables whose values cannot be changed after assignment. We use the `const` keyword to define them.

</div>

<div dir="ltr" style="text-align: left; background-color: #e8eaf6; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    const int minutesPerHour = 60;
    const float PI = 3.14;
    
    cout << minutesPerHour << endl;
    cout << PI << endl;
    
    // This will cause an error:
    // minutesPerHour = 70; // Error!
    
    return 0;
}
```

**Output:**
```
60
3.14
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### Core Concepts:

- **Variables**: Memory locations for storing data
- **Data Types**: `int`, `float`, `double`, `char`, `bool`, `string`
- **Variable Definition**: With type, name, and value
- **Changing Values**: Can be modified during execution
- **Naming Rules**: Start with letter, no spaces, case sensitive
- **Constants**: Unchangeable variables (`const`)

### Main Idea:
> **"Variables are containers that store program data, and constants are variables secured against change"**

---

*Anas Chetoui* - `@anaschetoui`

</div>