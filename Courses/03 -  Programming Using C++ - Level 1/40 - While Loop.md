<div dir="rtl">

<a id="arabic-while-loop"></a>
[English ↙](#english-while-loop)

# 🔄 حلقات التكرار: While Loop

## 🎯 المقدمة

في هذا الدرس، سنتعلم **حلقات التكرار While Loop** التي تُستخدم عندما لا نعرف عدد مرات التكرار مسبقاً، على عكس For Loop التي نستخدمها عندما نعرف عدد التكرارات مقدماً.

## 💡 المفاهيم الأساسية

### ما هي While Loop؟

**While Loop** هي جملة تكرارية تنفذ كود معين طالما كان الشرط المحدد صحيحاً (true).

### متى نستخدم While Loop؟

- **عندما لا نعرف عدد التكرارات** مسبقاً
- **للتحقق من صحة المدخلات** من المستخدم
- **لتنفيذ عمليات** حتى يتحقق شرط معين
- **عندما نريد التكرار** بناءً على حالة وليس عدد

## 🛠️ أمثلة عملية من المحاضرة

### 📝 المثال الأول: المقارنة بين For Loop و While Loop

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    // باستخدام For Loop (عندما نعرف عدد التكرارات)
    cout << "Using For Loop (1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    
    // باستخدام While Loop (نفس النتيجة لكن بطريقة مختلفة)
    cout << "Using While Loop (1 to 5):" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << endl;
        i++;
    }
    
    return 0;
}
```

**النتيجة:**
```
Using For Loop (1 to 5):
1
2
3
4
5
Using While Loop (1 to 5):
1
2
3
4
5
```

</div>

### 📝 المثال الثاني: التحقق من الأرقام الموجبة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Please enter a positive number: ";
    cin >> number;
    
    // While Loop للتحقق من صحة المدخل
    while (number < 0) {
        cout << "Wrong number! Please enter a positive number: ";
        cin >> number;
    }
    
    cout << "The number you entered is: " << number << endl;
    
    return 0;
}
```

**مثال على التنفيذ:**
```
Please enter a positive number: -5
Wrong number! Please enter a positive number: -10
Wrong number! Please enter a positive number: -20
Wrong number! Please enter a positive number: 4
The number you entered is: 4
```

</div>

### 📝 المثال الثالث: دالة للتحقق من النطاق

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// دالة لقراءة رقم ضمن نطاق محدد
int ReadIntegerNumberInRange(int from, int to) {
    int number;
    
    cout << "Please enter a number between " << from << " and " << to << ": ";
    cin >> number;
    
    // التحقق من أن الرقم ضمن النطاق المطلوب
    while (number < from || number > to) {
        cout << "Wrong number! Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    }
    
    return number;
}

int main() {
    // استخدام الدالة للتحقق من العمر (18-45)
    int age = ReadIntegerNumberInRange(18, 45);
    cout << "Your age is: " << age << endl;
    
    // استخدام الدالة للتحقق من الدرجات (0-100)
    int grade = ReadIntegerNumberInRange(0, 100);
    cout << "Your grade is: " << grade << endl;
    
    return 0;
}
```

**مثال على التنفيذ:**
```
Please enter a number between 18 and 45: 17
Wrong number! Please enter a number between 18 and 45: 66
Wrong number! Please enter a number between 18 and 45: 22
Your age is: 22
Please enter a number between 0 and 100: -5
Wrong number! Please enter a number between 0 and 100: 150
Wrong number! Please enter a number between 0 and 100: 85
Your grade is: 85
```

</div>

## 🔧 بناء جملة While Loop

### الهيكل الأساسي

<div dir="ltr" align="left">

```cpp
while (condition) {
    // الكود الذي سيتم تنفيذه
    // طالما الشرط صحيح (true)
}
```

</div>

### شرح المكونات:

- **`condition`**: الشرط الذي يتم التحقق منه قبل كل تكرار
- **`body`**: الكود الذي يتم تنفيذه إذا كان الشرط صحيحاً
- **يجب تحديث المتغيرات** في الجسم لتجنب الحلقات اللانهائية

## 🎯 آلية العمل

### كيف تعمل While Loop خطوة بخطوة؟

<div dir="ltr" align="left">

```cpp
int i = 1;
while (i <= 3) {
    cout << "i = " << i << endl;
    i++;
}
```

**خطوات التنفيذ:**

1. **i = 1** → التحقق: `1 <= 3` → true → التنفيذ → i = 2
2. **i = 2** → التحقق: `2 <= 3` → true → التنفيذ → i = 3
3. **i = 3** → التحقق: `3 <= 3` → true → التنفيذ → i = 4
4. **i = 4** → التحقق: `4 <= 3` → false → الخروج من الحلقة

**النتيجة:**
```
i = 1
i = 2
i = 3
```

</div>

## 🔄 الفرق بين For Loop و While Loop

### For Loop (عندما نعرف عدد التكرارات)

<div dir="ltr" align="left">

```cpp
// نستخدم For Loop عندما نعرف عدد التكرارات مسبقاً
for (int i = 1; i <= 10; i++) {
    cout << i << endl;
}
```

</div>

### While Loop (عندما لا نعرف عدد التكرارات)

<div dir="ltr" align="left">

```cpp
// نستخدم While Loop عندما لا نعرف عدد التكرارات
int number;
cout << "Enter a positive number: ";
cin >> number;

while (number <= 0) {
    cout << "Invalid! Enter a positive number: ";
    cin >> number;
}
```

</div>

## 💡 تطبيقات عملية

### التحقق من كلمات المرور

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "password123";
    string enteredPassword;
    
    cout << "Enter password: ";
    cin >> enteredPassword;
    
    while (enteredPassword != correctPassword) {
        cout << "Wrong password! Try again: ";
        cin >> enteredPassword;
    }
    
    cout << "Login successful!" << endl;
    
    return 0;
}
```

</div>

### القوائم التفاعلية

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "You selected Option 1" << endl;
                break;
            case 2:
                cout << "You selected Option 2" << endl;
                break;
            case 3:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);
    
    return 0;
}
```

</div>

## ⚠️ الأخطاء الشائعة

### 1. الحلقات اللانهائية

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - حلقة لا نهائية
int i = 1;
while (i <= 5) {
    cout << i << endl;
    // نسيان i++ سيسبب حلقة لا نهائية
}

// ✅ صحيح - تحديث العداد
int i = 1;
while (i <= 5) {
    cout << i << endl;
    i++;  // لا تنسى تحديث العداد
}
```

</div>

### 2. الشرط الذي لا يتغير أبداً

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - شرط ثابت
bool condition = true;
while (condition) {
    cout << "This will run forever!" << endl;
    // condition تبقى true دائماً
}

// ✅ صحيح - تحديث الشرط
bool condition = true;
int counter = 0;
while (condition) {
    cout << "Counter: " << counter << endl;
    counter++;
    if (counter >= 5) {
        condition = false;  // تحديث الشرط
    }
}
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام دوال للتحقق من المدخلات

<div dir="ltr" align="left">

```cpp
// ✅ دالة معادة الاستخدام
int GetValidNumber(int min, int max) {
    int number;
    cin >> number;
    
    while (number < min || number > max) {
        cout << "Invalid! Enter between " << min << " and " << max << ": ";
        cin >> number;
    }
    
    return number;
}
```

</div>

### 2. تقديم رسائل واضحة للمستخدم

<div dir="ltr" align="left">

```cpp
// ✅ رسائل واضحة
int number;
cout << "Please enter a number between 1 and 100: ";
cin >> number;

while (number < 1 || number > 100) {
    cout << "Invalid input! ";
    cout << "The number must be between 1 and 100: ";
    cin >> number;
}
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:

- **While Loop** تُستخدم عندما لا نعرف عدد التكرارات مسبقاً
- **For Loop** تُستخدم عندما نعرف عدد التكرارات مسبقاً
- **الشرط** يتحقق قبل كل تكرار
- **يجب تحديث المتغيرات** لتجنب الحلقات اللانهائية

### بناء الجملة:

```cpp
while (condition) {
    // كود
    // تحديث المتغيرات
}
```

### حالات الاستخدام:

1. **التحقق من صحة المدخلات**
2. **معالجة البيانات حتى نهاية الملف**
3. **الألعاب والتطبيقات التفاعلية**
4. **العمليات التي تعتمد على ظروف خارجية**

### قواعد مهمة:

1. **استخدم While Loop** عندما لا تعرف عدد التكرارات
2. **تأكد من تحديث** المتغيرات في الشرط
3. **قدم رسائل مفيدة** للمستخدم
4. **تجنب الحلقات اللانهائية** بالتحديث المناسب

### فوائد While Loop:

1. **مرونة** في التعامل مع حالات غير محددة
2. **مناسبة للتحقق** من صحة المدخلات
3. **كفاءة** في معالجة البيانات الديناميكية
4. **تحسين تجربة المستخدم** بالتغذية الراجعة

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

<a id="english-while-loop"></a>
[العربية ↗](#arabic-while-loop)

# 🔄 Loops: While Loop

## 🎯 Introduction

In this lesson, we'll learn about **While Loops** which are used when we don't know the number of iterations in advance, unlike For Loops which we use when we know the iteration count beforehand.

## 💡 Core Concepts

### What is While Loop?

**While Loop** is an iterative statement that executes a specific code as long as the specified condition remains true.

### When to Use While Loop?

- **When we don't know the number of iterations** in advance
- **For validating user input**
- **To perform operations** until a certain condition is met
- **When we want repetition** based on condition rather than count

## 🛠️ Practical Examples from the Lecture

### 📝 Example 1: Comparison Between For Loop and While Loop

```cpp
#include <iostream>
using namespace std;

int main() {
    // Using For Loop (when we know iteration count)
    cout << "Using For Loop (1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    
    // Using While Loop (same result but different approach)
    cout << "Using While Loop (1 to 5):" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << endl;
        i++;
    }
    
    return 0;
}
```

**Result:**
```
Using For Loop (1 to 5):
1
2
3
4
5
Using While Loop (1 to 5):
1
2
3
4
5
```

### 📝 Example 2: Validating Positive Numbers

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Please enter a positive number: ";
    cin >> number;
    
    // While Loop for input validation
    while (number < 0) {
        cout << "Wrong number! Please enter a positive number: ";
        cin >> number;
    }
    
    cout << "The number you entered is: " << number << endl;
    
    return 0;
}
```

**Execution Example:**
```
Please enter a positive number: -5
Wrong number! Please enter a positive number: -10
Wrong number! Please enter a positive number: -20
Wrong number! Please enter a positive number: 4
The number you entered is: 4
```

### 📝 Example 3: Range Validation Function

```cpp
#include <iostream>
using namespace std;

// Function to read a number within specified range
int ReadIntegerNumberInRange(int from, int to) {
    int number;
    
    cout << "Please enter a number between " << from << " and " << to << ": ";
    cin >> number;
    
    // Validate that number is within required range
    while (number < from || number > to) {
        cout << "Wrong number! Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    }
    
    return number;
}

int main() {
    // Using function for age validation (18-45)
    int age = ReadIntegerNumberInRange(18, 45);
    cout << "Your age is: " << age << endl;
    
    // Using function for grade validation (0-100)
    int grade = ReadIntegerNumberInRange(0, 100);
    cout << "Your grade is: " << grade << endl;
    
    return 0;
}
```

**Execution Example:**
```
Please enter a number between 18 and 45: 17
Wrong number! Please enter a number between 18 and 45: 66
Wrong number! Please enter a number between 18 and 45: 22
Your age is: 22
Please enter a number between 0 and 100: -5
Wrong number! Please enter a number between 0 and 100: 150
Wrong number! Please enter a number between 0 and 100: 85
Your grade is: 85
```

## 🔧 While Loop Syntax

### Basic Structure

```cpp
while (condition) {
    // Code to be executed
    // As long as condition is true
}
```

### Component Explanation:

- **`condition`**: Condition checked before each iteration
- **`body`**: Code executed if condition is true
- **Must update variables** in body to avoid infinite loops

## 🎯 How It Works

### While Loop Step-by-Step Execution:

```cpp
int i = 1;
while (i <= 3) {
    cout << "i = " << i << endl;
    i++;
}
```

**Execution Steps:**

1. **i = 1** → Check: `1 <= 3` → true → Execute → i = 2
2. **i = 2** → Check: `2 <= 3` → true → Execute → i = 3
3. **i = 3** → Check: `3 <= 3` → true → Execute → i = 4
4. **i = 4** → Check: `4 <= 3` → false → Exit loop

**Result:**
```
i = 1
i = 2
i = 3
```

## 🔄 Difference Between For Loop and While Loop

### For Loop (When We Know Iteration Count)

```cpp
// Use For Loop when we know iteration count in advance
for (int i = 1; i <= 10; i++) {
    cout << i << endl;
}
```

### While Loop (When We Don't Know Iteration Count)

```cpp
// Use While Loop when we don't know iteration count
int number;
cout << "Enter a positive number: ";
cin >> number;

while (number <= 0) {
    cout << "Invalid! Enter a positive number: ";
    cin >> number;
}
```

## 💡 Practical Applications

### Password Validation

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "password123";
    string enteredPassword;
    
    cout << "Enter password: ";
    cin >> enteredPassword;
    
    while (enteredPassword != correctPassword) {
        cout << "Wrong password! Try again: ";
        cin >> enteredPassword;
    }
    
    cout << "Login successful!" << endl;
    
    return 0;
}
```

### Interactive Menus

```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "You selected Option 1" << endl;
                break;
            case 2:
                cout << "You selected Option 2" << endl;
                break;
            case 3:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);
    
    return 0;
}
```

## ⚠️ Common Errors

### 1. Infinite Loops

```cpp
// ❌ Error - infinite loop
int i = 1;
while (i <= 5) {
    cout << i << endl;
    // Forgetting i++ will cause infinite loop
}

// ✅ Correct - update counter
int i = 1;
while (i <= 5) {
    cout << i << endl;
    i++;  // Don't forget to update counter
}
```

### 2. Condition That Never Changes

```cpp
// ❌ Error - constant condition
bool condition = true;
while (condition) {
    cout << "This will run forever!" << endl;
    // condition remains true forever
}

// ✅ Correct - update condition
bool condition = true;
int counter = 0;
while (condition) {
    cout << "Counter: " << counter << endl;
    counter++;
    if (counter >= 5) {
        condition = false;  // Update condition
    }
}
```

## 🏆 Best Practices

### 1. Use Functions for Input Validation

```cpp
// ✅ Reusable function
int GetValidNumber(int min, int max) {
    int number;
    cin >> number;
    
    while (number < min || number > max) {
        cout << "Invalid! Enter between " << min << " and " << max << ": ";
        cin >> number;
    }
    
    return number;
}
```

### 2. Provide Clear Messages to User

```cpp
// ✅ Clear messages
int number;
cout << "Please enter a number between 1 and 100: ";
cin >> number;

while (number < 1 || number > 100) {
    cout << "Invalid input! ";
    cout << "The number must be between 1 and 100: ";
    cin >> number;
}
```

## 📝 Summary

### Core Concepts:

- **While Loop** used when we don't know iteration count in advance
- **For Loop** used when we know iteration count in advance
- **Condition** checked before each iteration
- **Must update variables** to avoid infinite loops

### Syntax:

```cpp
while (condition) {
    // code
    // update variables
}
```

### Use Cases:

1. **Input validation**
2. **Processing data until end of file**
3. **Games and interactive applications**
4. **Operations dependent on external conditions**

### Important Rules:

1. **Use While Loop** when you don't know iteration count
2. **Ensure updating** variables in condition
3. **Provide helpful messages** to user
4. **Avoid infinite loops** with proper updates

### Benefits of While Loop:

1. **Flexibility** in handling undefined cases
2. **Suitable for validating** user input
3. **Efficiency** in processing dynamic data
4. **Improved user experience** with feedback

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>