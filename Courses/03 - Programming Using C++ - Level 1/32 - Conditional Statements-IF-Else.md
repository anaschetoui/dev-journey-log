<div dir="rtl">

<a id="arabic-conditional-statements"></a>
[English ↙](#english-conditional-statements)

# 🔀 الجمل الشرطية: IF, IF Else Statement

## 🎯 المقدمة

في هذا الدرس، سنتعلم الجمل الشرطية (Conditional Statements) التي تعتبر أساس البرمجة. هذه الجمل تتحكم في تدفق البرنامج وتحدد أي كود سيتم تنفيذه بناءً على شروط معينة.

## 💡 المفاهيم الأساسية

### ما هي الجمل الشرطية؟

**الجمل الشرطية**:
- تتحكم في تدفق البرنامج (Program Flow)
- تقرر أي كود سيتم تنفيذه بناءً على شروط
- تستخدم في جميع لغات البرمجة
- تشبه القرارات في الحياة الواقعية

### أنواع الجمل الشرطية:
1. **if statement** - شرط وحيد
2. **if else statement** - شرطين (صح/خطأ)
3. **أنواع أخرى** - سنتعلمها لاحقاً

## 🛠️ أمثلة عملية

### 📝 مثال أساسي: IF Statement

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    // if statement أساسي
    if (x > 5) {
        cout << "The code of if body has executed" << endl;
    }
    
    cout << "The code after if body is always executed" << endl;
    
    return 0;
}
```

**النتيجة:**
```
The code of if body has executed
The code after if body is always executed
```

</div>

### 📝 مثال: IF مع شرط مركب

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    // AND باستخدام if مع 
    if (x > 5 && x <= 20) {
        cout << "x is between 5 and 20" << endl;
    }
    
    // OR باستخدام if مع 
    if (x > 5 || x < 8) {
        cout << "x is greater than 5 OR less than 8" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
x is between 5 and 20
x is greater than 5 OR less than 8
```

</div>

### 📝 مثال: IF Else Statement

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    
    cout << "Please enter your number: ";
    cin >> x;
    
    // if else statement
    if (x > 5) {
        cout << "Yes, x is greater than 5" << endl;
    } else {
        cout << "No, x is less than 5" << endl;
    }
    
    cout << "The code after if body is always executed" << endl;
    
    return 0;
}
```

**النتيجة عندما ندخل 10:**
```
Please enter your number: 10
Yes, x is greater than 5
The code after if body is always executed
```

**النتيجة عندما ندخل 4:**
```
Please enter your number: 4
No, x is less than 5
The code after if body is always executed
```

</div>

### 📝 مثال: تطبيق عملي (نظام تسجيل الدخول)

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string storedPassword = "password123";
    string enteredPassword;
    
    cout << "Enter your password: ";
    cin >> enteredPassword;
    
    // if else للتطبيقات العملية
    if (enteredPassword == storedPassword) {
        cout << "Login successful! Welcome to the system." << endl;
    } else {
        cout << "Invalid username and password!" << endl;
    }
    
    return 0;
}
```

</div>

## 🔧 بناء الجمل الشرطية

### بناء IF Statement

<div dir="ltr" align="left">

```cpp
if (condition) {
    // الكود هنا ينفذ إذا كان الشرط صحيح
    // يمكن أن يحتوي على أي عدد من الأسطر
    // يمكن استدعاء دوال، عمليات حسابية، إلخ
}
// الكود هنا ينفذ دائماً بغض النظر عن الشرط
```

</div>

### بناء IF Else Statement

<div dir="ltr" align="left">

```cpp
if (condition) {
    // الكود هنا ينفذ إذا كان الشرط صحيح
} else {
    // الكود هنا ينفذ إذا كان الشرط خاطئ
}
// الكود هنا ينفذ دائماً
```

</div>

## 🎯 الشروط (Conditions)

### أنواع الشروط المستخدمة:

<div dir="ltr" align="left">

```cpp
int x = 10, y = 5;

// المقارنات الأساسية
if (x > y)     // أكبر من
if (x < y)     // أصغر من
if (x >= y)    // أكبر من أو يساوي
if (x <= y)    // أصغر من أو يساوي
if (x == y)    // يساوي
if (x != y)    // لا يساوي

// الشروط المركبة
if (x > 5 && x < 20)   // AND
if (x > 5 || x < 3)    // OR
if (!(x == y))         // NOT
```

</div>

### أمثلة على الشروط المعقدة:

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    bool hasDiploma = true;
    float gpa = 3.8;
    
    // شروط معقدة
    if (age >= 18 && hasDiploma && gpa > 3.5) {
        cout << "You are eligible for the scholarship" << endl;
    }
    
    if (age < 18 || gpa < 2.0) {
        cout << "You need to meet the requirements" << endl;
    }
    
    return 0;
}
```

</div>

## ❌ الأخطاء الشائعة

### 1. نسيان الأقواس {}

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - نسيان الأقواس
if (x > 5)
    cout << "x is greater than 5" << endl;
    cout << "This will always execute!" << endl;  // ❌ سينفذ دائماً

// ✅ صحيح - استخدام الأقواس
if (x > 5) {
    cout << "x is greater than 5" << endl;
    cout << "This will only execute if condition is true" << endl;
}
```

</div>

### 2. استخدام = بدلاً من ==

<div dir="ltr" align="left">

```cpp
int x = 10;

// ❌ خطأ - استخدام = بدلاً من ==
if (x = 5) {  // ❌ هذا تعيين وليس مقارنة
    cout << "This will always execute!" << endl;
}

// ✅ صحيح - استخدام == للمقارنة
if (x == 5) {  // ✅ هذا مقارنة صحيحة
    cout << "This will only execute if x equals 5" << endl;
}
```

</div>

### 3. نسيان الأقواس في الشرط

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - نسيان أقواس الشرط
if x > 5 {  // ❌ خطأ في الصيغة
    cout << "Error!" << endl;
}

// ✅ صحيح - أقواس الشرط مطلوبة
if (x > 5) {  // ✅ صحيح
    cout << "Correct!" << endl;
}
```

</div>

## 🏆 أفضل الممارسات

### 1. دائماً استخدم الأقواس {}

<div dir="ltr" align="left">

```cpp
// ✅ صحيح - دائماً استخدم الأقواس
if (condition) {
    // كود
}

// حتى لو كان سطر واحد
if (x > 5) {
    cout << "x is greater than 5" << endl;
}
```

</div>

### 2. استخدم تنسيق واضح للكود

<div dir="ltr" align="left">

```cpp
// ✅ صحيح - تنسيق واضح
if (userAge >= 18 && hasDriverLicense) {
    cout << "You can rent a car" << endl;
    calculateRentalPrice();
    printReceipt();
} else {
    cout << "You cannot rent a car" << endl;
    showRequirements();
}
```

</div>

### 3. اكتب شروط سهلة القراءة

<div dir="ltr" align="left">

```cpp
// ✅ صحيح - شروط واضحة
bool isEligibleForLoan = (age >= 21);
bool hasGoodCredit = (creditScore > 650);
bool hasStableJob = (employmentYears >= 2);

if (isEligibleForLoan && hasGoodCredit && hasStableJob) {
    approveLoan();
}
```

</div>

## 📊 التطبيقات العملية

### نظام الدرجات:

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "Enter your score: ";
    cin >> score;
    
    if (score >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    
    return 0;
}
```

### نظام الخصومات:

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    float purchaseAmount;
    
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;
    
    if (purchaseAmount > 1000) {
        cout << "You get 20% discount!" << endl;
    } else if (purchaseAmount > 500) {
        cout << "You get 10% discount!" << endl;
    } else {
        cout << "No discount available" << endl;
    }
    
    return 0;
}
```

## 📝 الملخص

### المفاهيم الأساسية:
- **الجمل الشرطية** تتحكم في تدفق البرنامج
- **if** ينفذ كود إذا كان الشرط صحيح
- **if else** ينفذ كود بديل إذا كان الشرط خاطئ

### بناء الجمل:

```cpp
if (condition) {
    // كود إذا الشرط صحيح
}

if (condition) {
    // كود إذا الشرط صحيح
} else {
    // كود إذا الشرط خاطئ
}
```

### قواعد مهمة:
1. **استخدم ()** حول الشرط
2. **استخدم {}** حول body الـ if
3. **استخدم ==** للمقارنة وليس =
4. **الكود بعد if** ينفذ دائماً

### أفضل الممارسات:
1. **دائماً استخدم {}** حتى لسطر واحد
2. **تنسيق واضح** للكود
3. **شروط قابلة للقراءة**
4. **استخدم if else** لتغطية جميع الاحتمالات

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

<a id="english-conditional-statements"></a>
[العربية ↗](#arabic-conditional-statements)

# 🔀 Conditional Statements: IF, IF Else Statement

## 🎯 Introduction

In this lesson, we'll learn about Conditional Statements which are the foundation of programming. These statements control the program flow and determine which code will be executed based on specific conditions.

## 💡 Core Concepts

### What are Conditional Statements?

**Conditional Statements**:
- Control program flow
- Decide which code executes based on conditions
- Used in all programming languages
- Similar to decisions in real life

### Types of Conditional Statements:
1. **if statement** - single condition
2. **if else statement** - two conditions (true/false)
3. **Other types** - we'll learn later

## 🛠️ Practical Examples

### 📝 Basic Example: IF Statement

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    // Basic if statement
    if (x > 5) {
        cout << "The code of if body has executed" << endl;
    }
    
    cout << "The code after if body is always executed" << endl;
    
    return 0;
}
```

**Result:**
```
The code of if body has executed
The code after if body is always executed
```

### 📝 Example: IF with Compound Condition

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    // if with AND
    if (x > 5 && x <= 20) {
        cout << "x is between 5 and 20" << endl;
    }
    
    // if with OR
    if (x > 5 || x < 8) {
        cout << "x is greater than 5 OR less than 8" << endl;
    }
    
    return 0;
}
```

**Result:**
```
x is between 5 and 20
x is greater than 5 OR less than 8
```

### 📝 Example: IF Else Statement

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    
    cout << "Please enter your number: ";
    cin >> x;
    
    // if else statement
    if (x > 5) {
        cout << "Yes, x is greater than 5" << endl;
    } else {
        cout << "No, x is less than 5" << endl;
    }
    
    cout << "The code after if body is always executed" << endl;
    
    return 0;
}
```

**Result when entering 10:**
```
Please enter your number: 10
Yes, x is greater than 5
The code after if body is always executed
```

**Result when entering 4:**
```
Please enter your number: 4
No, x is less than 5
The code after if body is always executed
```

### 📝 Example: Practical Application (Login System)

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string storedPassword = "password123";
    string enteredPassword;
    
    cout << "Enter your password: ";
    cin >> enteredPassword;
    
    // if else for practical applications
    if (enteredPassword == storedPassword) {
        cout << "Login successful! Welcome to the system." << endl;
    } else {
        cout << "Invalid username and password!" << endl;
    }
    
    return 0;
}
```

## 🔧 Conditional Statements Syntax

### IF Statement Syntax

```cpp
if (condition) {
    // Code here executes if condition is true
    // Can contain any number of lines
    // Can call functions, perform operations, etc.
}
// Code here always executes regardless of condition
```

### IF Else Statement Syntax

```cpp
if (condition) {
    // Code here executes if condition is true
} else {
    // Code here executes if condition is false
}
// Code here always executes
```

## 🎯 Conditions

### Types of Conditions Used:

```cpp
int x = 10, y = 5;

// Basic comparisons
if (x > y)     // greater than
if (x < y)     // less than
if (x >= y)    // greater than or equal
if (x <= y)    // less than or equal
if (x == y)    // equal to
if (x != y)    // not equal to

// Compound conditions
if (x > 5 && x < 20)   // AND
if (x > 5 || x < 3)    // OR
if (!(x == y))         // NOT
```

### Examples of Complex Conditions:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    bool hasDiploma = true;
    float gpa = 3.8;
    
    // Complex conditions
    if (age >= 18 && hasDiploma && gpa > 3.5) {
        cout << "You are eligible for the scholarship" << endl;
    }
    
    if (age < 18 || gpa < 2.0) {
        cout << "You need to meet the requirements" << endl;
    }
    
    return 0;
}
```

## ❌ Common Errors

### 1. Forgetting Braces {}

```cpp
// ❌ Error - forgetting braces
if (x > 5)
    cout << "x is greater than 5" << endl;
    cout << "This will always execute!" << endl;  // ❌ will always execute

// ✅ Correct - using braces
if (x > 5) {
    cout << "x is greater than 5" << endl;
    cout << "This will only execute if condition is true" << endl;
}
```

### 2. Using = instead of ==

```cpp
int x = 10;

// ❌ Error - using = instead of ==
if (x = 5) {  // ❌ this is assignment not comparison
    cout << "This will always execute!" << endl;
}

// ✅ Correct - using == for comparison
if (x == 5) {  // ✅ this is correct comparison
    cout << "This will only execute if x equals 5" << endl;
}
```

### 3. Forgetting Parentheses in Condition

```cpp
// ❌ Error - forgetting condition parentheses
if x > 5 {  // ❌ syntax error
    cout << "Error!" << endl;
}

// ✅ Correct - condition parentheses required
if (x > 5) {  // ✅ correct
    cout << "Correct!" << endl;
}
```

## 🏆 Best Practices

### 1. Always Use Braces {}

```cpp
// ✅ Correct - always use braces
if (condition) {
    // code
}

// Even for single line
if (x > 5) {
    cout << "x is greater than 5" << endl;
}
```

### 2. Use Clear Code Formatting

```cpp
// ✅ Correct - clear formatting
if (userAge >= 18 && hasDriverLicense) {
    cout << "You can rent a car" << endl;
    calculateRentalPrice();
    printReceipt();
} else {
    cout << "You cannot rent a car" << endl;
    showRequirements();
}
```

### 3. Write Readable Conditions

```cpp
// ✅ Correct - readable conditions
bool isEligibleForLoan = (age >= 21);
bool hasGoodCredit = (creditScore > 650);
bool hasStableJob = (employmentYears >= 2);

if (isEligibleForLoan && hasGoodCredit && hasStableJob) {
    approveLoan();
}
```

## 📊 Practical Applications

### Grading System:

```cpp
#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "Enter your score: ";
    cin >> score;
    
    if (score >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    
    return 0;
}
```

### Discount System:

```cpp
#include <iostream>
using namespace std;

int main() {
    float purchaseAmount;
    
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;
    
    if (purchaseAmount > 1000) {
        cout << "You get 20% discount!" << endl;
    } else if (purchaseAmount > 500) {
        cout << "You get 10% discount!" << endl;
    } else {
        cout << "No discount available" << endl;
    }
    
    return 0;
}
```

## 📝 Summary

### Basic Concepts:
- **Conditional statements** control program flow
- **if** executes code if condition is true
- **if else** executes alternative code if condition is false

### Syntax:

```cpp
if (condition) {
    // code if condition true
}

if (condition) {
    // code if condition true
} else {
    // code if condition false
}
```

### Important Rules:
1. **Use ()** around condition
2. **Use {}** around if body
3. **Use ==** for comparison not =
4. **Code after if** always executes

### Best Practices:
1. **Always use {}** even for single line
2. **Clear formatting** for code
3. **Readable conditions**
4. **Use if else** to cover all possibilities

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>