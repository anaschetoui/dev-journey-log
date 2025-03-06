<div dir="rtl">

<a id="arabic-do-while-loop"></a>
[English ↙](#english-do-while-loop)

# 🔄 حلقات التكرار: Do While Loop

## 🎯 المقدمة

في هذا الدرس، سنتعلم **حلقات التكرار Do While Loop** التي تُنفذ الكود مرة واحدة على الأقل ثم تتحقق من الشرط، على عكس While Loop التي تتحقق من الشرط أولاً.

## 💡 المفاهيم الأساسية

### ما هي Do While Loop؟

**Do While Loop** هي جملة تكرارية تنفذ الكود مرة واحدة على الأقل، ثم تتحقق من الشرط لتقرر是否 الاستمرار في التكرار.

### الفرق بين While Loop و Do While Loop:

- **While Loop**: تتحقق من الشرط أولاً، ثم تنفذ الكود
- **Do While Loop**: تنفذ الكود أولاً، ثم تتحقق من الشرط

## 🛠️ أمثلة عملية من المحاضرة

### 📝 المثال الأول: المقارنة بين While و Do While

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 6;
    
    // Using While Loop
    cout << "Using While Loop:" << endl;
    while (i <= 5) {
        cout << "Mohammed" << endl;
        i++;
    }
    // لن يطبع anything لأن الشرط false من البداية
    
    // Using Do While Loop
    cout << "Using Do While Loop:" << endl;
    i = 6;
    do {
        cout << "Mohammed" << endl;
        i++;
    } while (i <= 5);
    // سيطبع "Mohammed" مرة واحدة على الأقل
    
    return 0;
}
```

**النتيجة:**
```
Using While Loop:
Using Do While Loop:
Mohammed
```

</div>

### 📝 المثال الثاني: قراءة رقم ضمن نطاق باستخدام While Loop

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int ReadIntegerNumberInRangeUsingWhile(int from, int to) {
    int number;
    
    // القراءة الأولى قبل الدخول في الحلقة
    cout << "Please enter a number between " << from << " and " << to << ": ";
    cin >> number;
    
    // التحقق من الشرط ثم التكرار
    while (number < from || number > to) {
        cout << "Wrong number! Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    }
    
    return number;
}

int main() {
    int num = ReadIntegerNumberInRangeUsingWhile(1, 10);
    cout << "You entered: " << num << endl;
    
    return 0;
}
```

</div>

### 📝 المثال الثالث: نفس الوظيفة باستخدام Do While Loop

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int ReadIntegerNumberInRangeUsingDoWhile(int from, int to) {
    int number;
    
    // التنفيذ أولاً ثم التحقق من الشرط
    do {
        cout << "Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    } while (number < from || number > to);
    
    return number;
}

int main() {
    int num = ReadIntegerNumberInRangeUsingDoWhile(1, 10);
    cout << "You entered: " << num << endl;
    
    return 0;
}
```

</div>

## 🔧 بناء جملة Do While Loop

### الهيكل الأساسي

<div dir="ltr" align="left">

```cpp
do {
    // الكود الذي سيتم تنفيذه
    // على الأقل مرة واحدة
} while (condition);
```

</div>

### شرح المكونات:

- **`do`**: يبدأ تنفيذ الكود
- **`body`**: الكود الذي يتم تنفيذه مرة واحدة على الأقل
- **`while (condition)`**: الشرط الذي يتم التحقق منه بعد التنفيذ

## 🎯 آلية العمل

### كيف تعمل Do While Loop خطوة بخطوة؟

<div dir="ltr" align="left">

```cpp
int i = 1;
do {
    cout << "i = " << i << endl;
    i++;
} while (i <= 3);
```

**خطوات التنفيذ:**

1. **التنفيذ الأول**: i = 1 → طباعة "i = 1" → i = 2
2. **التحقق من الشرط**: 2 <= 3 → true → الاستمرار
3. **التنفيذ الثاني**: i = 2 → طباعة "i = 2" → i = 3
4. **التحقق من الشرط**: 3 <= 3 → true → الاستمرار
5. **التنفيذ الثالث**: i = 3 → طباعة "i = 3" → i = 4
6. **التحقق من الشرط**: 4 <= 3 → false → الخروج

**النتيجة:**
```
i = 1
i = 2
i = 3
```

</div>

## 🔄 المقارنة بين أنواع الحلقات

### While Loop (التحقق أولاً)

<div dir="ltr" align="left">

```cpp
// قد لا ينفذ الكود إطلاقاً
while (condition) {
    // كود
}
```

</div>

### Do While Loop (التنفيذ أولاً)

<div dir="ltr" align="left">

```cpp
// ينفذ الكود مرة واحدة على الأقل
do {
    // كود
} while (condition);
```

</div>

### For Loop (عند معرفة عدد التكرارات)

<div dir="ltr" align="left">

```cpp
// عندما نعرف عدد التكرارات مسبقاً
for (int i = 1; i <= 10; i++) {
    // كود
}
```

</div>

## 💡 تطبيقات عملية

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

### التحقق من كلمات المرور

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    
    do {
        cout << "Enter password: ";
        cin >> password;
        
        if (password != "secret123") {
            cout << "Wrong password! Try again." << endl;
        }
    } while (password != "secret123");
    
    cout << "Access granted!" << endl;
    
    return 0;
}
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام Do While للتحقق من المدخلات

<div dir="ltr" align="left">

```cpp
// ✅ Do While مناسبة للتحقق من المدخلات
int GetValidAge() {
    int age;
    do {
        cout << "Enter your age (0-120): ";
        cin >> age;
    } while (age < 0 || age > 120);
    
    return age;
}
```

</div>

### 2. تجنب التكرار غير الضروري في الكود

<div dir="ltr" align="left">

```cpp
// ❌ تكرار في الكود (باستخدام While)
int number;
cout << "Enter number: ";
cin >> number;
while (number < 0) {
    cout << "Enter number: ";
    cin >> number;
}

// ✅ كود أنظف (باستخدام Do While)
int number;
do {
    cout << "Enter number: ";
    cin >> number;
} while (number < 0);
```

</div>

## 📝 متى نستخدم كل نوع؟

### For Loop:
- **عند معرفة عدد التكرارات** مسبقاً
- **التكرار عبر نطاق محدد**
- **المعالجة الرياضية المنظمة**

### While Loop:
- **عند عدم معرفة عدد التكرارات**
- **التحقق من الشروط المعقدة**
- **معالجة البيانات حتى نهاية الملف**

### Do While Loop:
- **التنفيذ مرة واحدة على الأقل**
- **التحقق من المدخلات**
- **القوائم التفاعلية**
- **عندما نريد تجنب تكرار الكود**

## 📝 الملخص

### المفاهيم الأساسية:

- **Do While Loop** تنفذ الكود مرة واحدة على الأقل ثم تتحقق
- **الفرق الرئيسي** بين While و Do While هو توقيت التحقق من الشرط
- **Do While** توفر كوداً أنظف في حالات التحقق من المدخلات

### بناء الجملة:

```cpp
do {
    // كود
} while (condition);
```

### حالات الاستخدام المفضلة:

1. **التحقق من صحة المدخلات**
2. **القوائم التفاعلية**
3. **التطبيقات التي تتطلب تنفيذاً أولياً**
4. **عندما نريد تجنب تكرار الكود**

### قواعد مهمة:

1. **استخدم Do While** عندما تريد تنفيذ الكود مرة واحدة على الأقل
2. **استخدم While** عندما قد لا تحتاج لتنفيذ الكود إطلاقاً
3. **استخدم For** عندما تعرف عدد التكرارات مسبقاً
4. **اختر النوع المناسب** بناءً على متطلبات البرنامج

### فوائد Do While Loop:

1. **كود أنظف** وأقل تكراراً
2. **ضمان التنفيذ** مرة واحدة على الأقل
3. **مناسبة للتحقق** من المدخلات
4. **تحسين تجربة المستخدم** بالقوائم التفاعلية

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

<a id="english-do-while-loop"></a>
[العربية ↗](#arabic-do-while-loop)

# 🔄 Loops: Do While Loop

## 🎯 Introduction

In this lesson, we'll learn about **Do While Loops** which execute the code at least once before checking the condition, unlike While Loops that check the condition first.

## 💡 Core Concepts

### What is Do While Loop?

**Do While Loop** is an iterative statement that executes the code at least once, then checks the condition to decide whether to continue iterating.

### Difference Between While Loop and Do While Loop:

- **While Loop**: Checks condition first, then executes code
- **Do While Loop**: Executes code first, then checks condition

## 🛠️ Practical Examples from the Lecture

### 📝 Example 1: Comparison Between While and Do While

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 6;
    
    // Using While Loop
    cout << "Using While Loop:" << endl;
    while (i <= 5) {
        cout << "Mohammed" << endl;
        i++;
    }
    // Won't print anything because condition is false from start
    
    // Using Do While Loop
    cout << "Using Do While Loop:" << endl;
    i = 6;
    do {
        cout << "Mohammed" << endl;
        i++;
    } while (i <= 5);
    // Will print "Mohammed" at least once
    
    return 0;
}
```

**Result:**
```
Using While Loop:
Using Do While Loop:
Mohammed
```

### 📝 Example 2: Reading Number in Range Using While Loop

```cpp
#include <iostream>
using namespace std;

int ReadIntegerNumberInRangeUsingWhile(int from, int to) {
    int number;
    
    // First read before entering loop
    cout << "Please enter a number between " << from << " and " << to << ": ";
    cin >> number;
    
    // Check condition then iterate
    while (number < from || number > to) {
        cout << "Wrong number! Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    }
    
    return number;
}

int main() {
    int num = ReadIntegerNumberInRangeUsingWhile(1, 10);
    cout << "You entered: " << num << endl;
    
    return 0;
}
```

### 📝 Example 3: Same Function Using Do While Loop

```cpp
#include <iostream>
using namespace std;

int ReadIntegerNumberInRangeUsingDoWhile(int from, int to) {
    int number;
    
    // Execute first then check condition
    do {
        cout << "Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    } while (number < from || number > to);
    
    return number;
}

int main() {
    int num = ReadIntegerNumberInRangeUsingDoWhile(1, 10);
    cout << "You entered: " << num << endl;
    
    return 0;
}
```

## 🔧 Do While Loop Syntax

### Basic Structure

```cpp
do {
    // Code to be executed
    // At least once
} while (condition);
```

### Component Explanation:

- **`do`**: Starts code execution
- **`body`**: Code executed at least once
- **`while (condition)`**: Condition checked after execution

## 🎯 How It Works

### Do While Loop Step-by-Step Execution:

```cpp
int i = 1;
do {
    cout << "i = " << i << endl;
    i++;
} while (i <= 3);
```

**Execution Steps:**

1. **First execution**: i = 1 → print "i = 1" → i = 2
2. **Check condition**: 2 <= 3 → true → continue
3. **Second execution**: i = 2 → print "i = 2" → i = 3
4. **Check condition**: 3 <= 3 → true → continue
5. **Third execution**: i = 3 → print "i = 3" → i = 4
6. **Check condition**: 4 <= 3 → false → exit

**Result:**
```
i = 1
i = 2
i = 3
```

## 🔄 Comparison Between Loop Types

### While Loop (Check First)

```cpp
// May not execute code at all
while (condition) {
    // code
}
```

### Do While Loop (Execute First)

```cpp
// Executes code at least once
do {
    // code
} while (condition);
```

### For Loop (When Knowing Iteration Count)

```cpp
// When we know iteration count in advance
for (int i = 1; i <= 10; i++) {
    // code
}
```

## 💡 Practical Applications

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

### Password Validation

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    
    do {
        cout << "Enter password: ";
        cin >> password;
        
        if (password != "secret123") {
            cout << "Wrong password! Try again." << endl;
        }
    } while (password != "secret123");
    
    cout << "Access granted!" << endl;
    
    return 0;
}
```

## 🏆 Best Practices

### 1. Use Do While for Input Validation

```cpp
// ✅ Do While suitable for input validation
int GetValidAge() {
    int age;
    do {
        cout << "Enter your age (0-120): ";
        cin >> age;
    } while (age < 0 || age > 120);
    
    return age;
}
```

### 2. Avoid Unnecessary Code Repetition

```cpp
// ❌ Code repetition (using While)
int number;
cout << "Enter number: ";
cin >> number;
while (number < 0) {
    cout << "Enter number: ";
    cin >> number;
}

// ✅ Cleaner code (using Do While)
int number;
do {
    cout << "Enter number: ";
    cin >> number;
} while (number < 0);
```

## 📝 When to Use Each Type?

### For Loop:
- **When knowing iteration count** in advance
- **Iterating through a defined range**
- **Structured mathematical processing**

### While Loop:
- **When not knowing iteration count**
- **Checking complex conditions**
- **Processing data until end of file**

### Do While Loop:
- **Execute at least once**
- **Input validation**
- **Interactive menus**
- **When we want to avoid code repetition**

## 📝 Summary

### Core Concepts:

- **Do While Loop** executes code at least once then checks
- **Main difference** between While and Do While is condition check timing
- **Do While** provides cleaner code for input validation cases

### Syntax:

```cpp
do {
    // code
} while (condition);
```

### Preferred Use Cases:

1. **Input validation**
2. **Interactive menus**
3. **Applications requiring initial execution**
4. **When we want to avoid code repetition**

### Important Rules:

1. **Use Do While** when you want to execute code at least once
2. **Use While** when you might not need to execute code at all
3. **Use For** when you know iteration count in advance
4. **Choose appropriate type** based on program requirements

### Benefits of Do While Loop:

1. **Cleaner code** with less repetition
2. **Guaranteed execution** at least once
3. **Suitable for input validation**
4. **Improved user experience** with interactive menus

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>