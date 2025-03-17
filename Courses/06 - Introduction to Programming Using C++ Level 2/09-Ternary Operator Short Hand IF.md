<div dir="rtl" style="text-align: right;">

<a id="arabic-ternary-operator"></a>
[English ↙](#english-ternary-operator)

# 🔀 العامل الثلاثي: IF المختصر (Ternary Operator: Short Hand IF)

## 🎯 المقدمة

في هذا الدرس، سنتعلم عن **العامل الثلاثي (Ternary Operator)** الذي يعتبر اختصاراً لعبارة IF-ELSE، ويسمح لنا بكتابة شروط بسيطة في سطر واحد بشكل أكثر كفاءة.

## 💡 المفاهيم الأساسية

### ما هو العامل الثلاثي (Ternary Operator)؟

**العامل الثلاثي** هو عامل في لغة C++ يسمح بكتابة **عبارات شرطية مختصرة في سطر واحد**. وهو بديل مختصر لعبارة IF-ELSE التقليدية للحالات البسيطة.

### بناء الجملة (Syntax):

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
condition ? expression_if_true : expression_if_false;
```

</div>

## 💻 المقارنة بين IF العادي والعامل الثلاثي

### الطريقة التقليدية باستخدام IF-ELSE:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int mark = 90;
    string result;
    
    if (mark >= 50) {
        result = "Pass";
    } else {
        result = "Fail";
    }
    
    cout << "Result: " << result << endl;
    
    return 0;
}
```

</div>

### الطريقة المختصرة باستخدام Ternary Operator:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int mark = 90;
    string result;
    
    result = (mark >= 50) ? "Pass" : "Fail";
    
    cout << "Result: " << result << endl;
    
    return 0;
}
```

</div>

## 🔍 شرح تفصيلي للعامل الثلاثي

### تحليل البنية:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
البنية الكاملة:
result = (condition) ? expression_if_true : expression_if_false;

التفصيل:
1. (condition)        ← الشرط الذي يتم تقييمه
2. ?                 ← علامة الاستفهام تفصل الشرط عن النتائج
3. expression_if_true  ← التعبير الذي ينفذ إذا كان الشرط صحيحاً
4. :                 ← النقطتان تفصلان بين الحالتين
5. expression_if_false ← التعبير الذي ينفذ إذا كان الشرط خاطئاً
```

</div>

### كيف يعمل:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
التنفيذ:
1. يتم تقييم الشرط (condition)
2. إذا كان الشرط صحيحاً (true):
   - ينفذ expression_if_true
   - تعتبر قيمته هي نتيجة العامل الثلاثي
3. إذا كان الشرط خاطئاً (false):
   - ينفذ expression_if_false
   - تعتبر قيمته هي نتيجة العامل الثلاثي
```

</div>

## 💡 أمثلة عملية متنوعة

### المثال 1: التحقق من العمر

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    string status;
    
    // باستخدام Ternary Operator
    status = (age >= 18) ? "Adult" : "Minor";
    
    cout << "Age: " << age << " - Status: " << status << endl;
    
    return 0;
}
```

</div>

### المثال 2: العثور على الرقم الأكبر

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int maxNumber;
    
    // إيجاد الرقم الأكبر
    maxNumber = (a > b) ? a : b;
    
    cout << "Maximum number is: " << maxNumber << endl;
    
    return 0;
}
```

</div>

### المثال 3: التحقق من الرقم الزوجي أو الفردي

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 7;
    string type;
    
    // التحقق إذا كان الرقم زوجياً أو فردياً
    type = (number % 2 == 0) ? "Even" : "Odd";
    
    cout << number << " is " << type << endl;
    
    return 0;
}
```

</div>

## 🛠️ استخدامات متقدمة للعامل الثلاثي

### استخدام مع العمليات الحسابية:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int score = 85;
    string grade;
    
    // تحديد الدرجة بناءً على النتيجة
    grade = (score >= 90) ? "A" :
            (score >= 80) ? "B" :
            (score >= 70) ? "C" :
            (score >= 60) ? "D" : "F";
    
    cout << "Score: " << score << " - Grade: " << grade << endl;
    
    return 0;
}
```

</div>

### استخدام مع استدعاء الدوال:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void printPass() {
    cout << "Student Passed!" << endl;
}

void printFail() {
    cout << "Student Failed!" << endl;
}

int main() {
    int mark = 44;
    
    // استدعاء دالة مختلفة بناءً على الشرط
    (mark >= 50) ? printPass() : printFail();
    
    return 0;
}
```

</div>

### استخدام مباشر مع cout:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int mark = 44;
    
    // استخدام مباشر بدون متغير وسيط
    cout << "Result: " << ((mark >= 50) ? "Pass" : "Fail") << endl;
    
    return 0;
}
```

</div>

## 🔄 مقارنة شاملة

### IF-ELSE التقليدي:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int mark = 90;
string result;

if (mark >= 50) {
    result = "Pass";
} else {
    result = "Fail";
}

cout << result;
```

**المزايا:**
- أوضح للقراءة مع الشروط المعقدة
- يدعم كتل كود متعددة الأسطر
- أفضل مع الشروط المتعددة

</div>

### Ternary Operator:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int mark = 90;
string result;

result = (mark >= 50) ? "Pass" : "Fail";

cout << result;
```

**المزايا:**
- أكثر إيجازاً واختصاراً
- يعمل في سطر واحد
- مفيد للتعبيرات البسيطة
- يمكن دمجه مباشرة في العمليات

</div>

## 🎯 أمثلة إضافية

### مثال 1: حساب الخصم

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    double purchaseAmount = 120.0;
    double discountRate;
    
    // حساب نسبة الخصم بناءً على قيمة الشراء
    discountRate = (purchaseAmount > 100.0) ? 0.10 : 0.05;
    
    double discount = purchaseAmount * discountRate;
    double finalAmount = purchaseAmount - discount;
    
    cout << "Purchase: $" << purchaseAmount << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Amount: $" << finalAmount << endl;
    
    return 0;
}
```

</div>

### مثال 2: رسالة ترحيب مخصصة

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Ali";
    bool isMorning = true;
    string greeting;
    
    // رسالة ترحيب مختلفة حسب الوقت
    greeting = isMorning ? "Good Morning, " + name + "!" 
                         : "Good Evening, " + name + "!";
    
    cout << greeting << endl;
    
    return 0;
}
```

</div>

### مثال 3: تحديد الفئة العمرية

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    string ageGroup;
    
    // تحديد الفئة العمرية
    ageGroup = (age < 13) ? "Child" :
               (age < 20) ? "Teenager" :
               (age < 60) ? "Adult" : "Senior";
    
    cout << "Age: " << age << " - Group: " << ageGroup << endl;
    
    return 0;
}
```

</div>

## ⚠️ ملاحظات مهمة

### متى تستخدم Ternary Operator؟

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ استخدم Ternary Operator عندما:
- الشرط بسيط وواضح
- تحتاج تعبيراً في سطر واحد
- القيم المراد تعيينها بسيطة
- تريد كوداً أكثر إيجازاً

❌ تجنب Ternary Operator عندما:
- الشرط معقد أو متعدد المستويات
- تحتاج تنفيذ كتل كود متعددة
- الكود يحتاج إلى شرح وتوضيح
- قد يؤثر على قابلية قراءة الكود
```

</div>

### نصائح للاستخدام:

1. **الأقواس مهمة** للوضوح: `(condition) ? true_expr : false_expr`
2. **تجنب التعقيد** الزائد في التعبيرات
3. **استخدم IF-ELSE** للشروط المعقدة
4. **حافظ على قابلية القراءة** كأولوية

## 📊 الخلاصة

### الفوائد الرئيسية:

| الفائدة | الشرح |
|:---|:---|
| **الإيجاز** | كتابة الشروط البسيطة في سطر واحد |
| **الكفاءة** | تقليل عدد أسطر الكود |
| **المرونة** | يمكن دمجه في تعبيرات أكبر |
| **السرعة** | تنفيذ أسرع للحالات البسيطة |

### بناء الجملة المتكرر:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
متغير = (شرط) ? قيمة_إذا_صح : قيمة_إذا_خطأ;

أمثلة:
string result = (score >= 50) ? "Pass" : "Fail";
int max = (a > b) ? a : b;
double discount = (amount > 100) ? 0.1 : 0.05;
```

</div>

**تذكر:** العامل الثلاثي أداة قوية للشروط البسيطة، لكن **استخدمه بحكمة** للحفاظ على قابلية قراءة كودك! 🎯

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

<a id="english-ternary-operator"></a>
[العربية ↗](#arabic-ternary-operator)

# 🔀 Ternary Operator: Short Hand IF

## 🎯 Introduction

In this lesson, we'll learn about the **Ternary Operator** which is a shorthand for IF-ELSE statements, allowing us to write simple conditions in one line more efficiently.

## 💡 Core Concepts

### What is the Ternary Operator?

The **Ternary Operator** is an operator in C++ that allows writing **conditional statements in one line**. It's a concise alternative to traditional IF-ELSE statements for simple cases.

### Syntax:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
condition ? expression_if_true : expression_if_false;
```

</div>

## 💻 Comparison Between Regular IF and Ternary Operator

### Traditional Method using IF-ELSE:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int mark = 90;
    string result;
    
    if (mark >= 50) {
        result = "Pass";
    } else {
        result = "Fail";
    }
    
    cout << "Result: " << result << endl;
    
    return 0;
}
```

</div>

### Shorthand Method using Ternary Operator:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int mark = 90;
    string result;
    
    result = (mark >= 50) ? "Pass" : "Fail";
    
    cout << "Result: " << result << endl;
    
    return 0;
}
```

</div>

## 🔍 Detailed Explanation of Ternary Operator

### Structure Analysis:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Complete Structure:
result = (condition) ? expression_if_true : expression_if_false;

Details:
1. (condition)        ← Condition to evaluate
2. ?                 ← Question mark separates condition from results
3. expression_if_true  ← Expression executed if condition is true
4. :                 ← Colon separates the two cases
5. expression_if_false ← Expression executed if condition is false
```

</div>

### How It Works:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Execution:
1. Condition is evaluated
2. If condition is true:
   - expression_if_true is executed
   - Its value becomes the result of ternary operator
3. If condition is false:
   - expression_if_false is executed
   - Its value becomes the result of ternary operator
```

</div>

## 💡 Various Practical Examples

### Example 1: Age Verification

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    string status;
    
    // Using Ternary Operator
    status = (age >= 18) ? "Adult" : "Minor";
    
    cout << "Age: " << age << " - Status: " << status << endl;
    
    return 0;
}
```

</div>

### Example 2: Finding Maximum Number

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int maxNumber;
    
    // Finding maximum number
    maxNumber = (a > b) ? a : b;
    
    cout << "Maximum number is: " << maxNumber << endl;
    
    return 0;
}
```

</div>

### Example 3: Checking Even or Odd

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 7;
    string type;
    
    // Checking if number is even or odd
    type = (number % 2 == 0) ? "Even" : "Odd";
    
    cout << number << " is " << type << endl;
    
    return 0;
}
```

</div>

## 🛠️ Advanced Uses of Ternary Operator

### Using with Mathematical Operations:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int score = 85;
    string grade;
    
    // Determining grade based on score
    grade = (score >= 90) ? "A" :
            (score >= 80) ? "B" :
            (score >= 70) ? "C" :
            (score >= 60) ? "D" : "F";
    
    cout << "Score: " << score << " - Grade: " << grade << endl;
    
    return 0;
}
```

</div>

### Using with Function Calls:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void printPass() {
    cout << "Student Passed!" << endl;
}

void printFail() {
    cout << "Student Failed!" << endl;
}

int main() {
    int mark = 44;
    
    // Calling different function based on condition
    (mark >= 50) ? printPass() : printFail();
    
    return 0;
}
```

</div>

### Direct Use with cout:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int mark = 44;
    
    // Direct use without intermediate variable
    cout << "Result: " << ((mark >= 50) ? "Pass" : "Fail") << endl;
    
    return 0;
}
```

</div>

## 🔄 Comprehensive Comparison

### Traditional IF-ELSE:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int mark = 90;
string result;

if (mark >= 50) {
    result = "Pass";
} else {
    result = "Fail";
}

cout << result;
```

**Advantages:**
- Clearer to read with complex conditions
- Supports multiple line code blocks
- Better with multiple conditions

</div>

### Ternary Operator:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int mark = 90;
string result;

result = (mark >= 50) ? "Pass" : "Fail";

cout << result;
```

**Advantages:**
- More concise and brief
- Works in one line
- Useful for simple expressions
- Can be integrated directly in operations

</div>

## 🎯 Additional Examples

### Example 1: Discount Calculation

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    double purchaseAmount = 120.0;
    double discountRate;
    
    // Calculating discount rate based on purchase amount
    discountRate = (purchaseAmount > 100.0) ? 0.10 : 0.05;
    
    double discount = purchaseAmount * discountRate;
    double finalAmount = purchaseAmount - discount;
    
    cout << "Purchase: $" << purchaseAmount << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Amount: $" << finalAmount << endl;
    
    return 0;
}
```

</div>

### Example 2: Custom Greeting Message

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Ali";
    bool isMorning = true;
    string greeting;
    
    // Different greeting based on time
    greeting = isMorning ? "Good Morning, " + name + "!" 
                         : "Good Evening, " + name + "!";
    
    cout << greeting << endl;
    
    return 0;
}
```

</div>

### Example 3: Age Group Determination

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    string ageGroup;
    
    // Determining age group
    ageGroup = (age < 13) ? "Child" :
               (age < 20) ? "Teenager" :
               (age < 60) ? "Adult" : "Senior";
    
    cout << "Age: " << age << " - Group: " << ageGroup << endl;
    
    return 0;
}
```

</div>

## ⚠️ Important Notes

### When to Use Ternary Operator?

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Use Ternary Operator when:
- Condition is simple and clear
- You need expression in one line
- Values to assign are simple
- You want more concise code

❌ Avoid Ternary Operator when:
- Condition is complex or multi-level
- You need to execute multiple code blocks
- Code needs explanation and clarification
- May affect code readability
```

</div>

### Usage Tips:

1. **Parentheses are important** for clarity: `(condition) ? true_expr : false_expr`
2. **Avoid excessive complexity** in expressions
3. **Use IF-ELSE** for complex conditions
4. **Maintain readability** as priority

## 📊 Summary

### Main Benefits:

| Benefit | Explanation |
|:---|:---|
| **Conciseness** | Writing simple conditions in one line |
| **Efficiency** | Reducing number of code lines |
| **Flexibility** | Can be integrated into larger expressions |
| **Speed** | Faster execution for simple cases |

### Common Syntax:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
variable = (condition) ? value_if_true : value_if_false;

Examples:
string result = (score >= 50) ? "Pass" : "Fail";
int max = (a > b) ? a : b;
double discount = (amount > 100) ? 0.1 : 0.05;
```

</div>

**Remember:** Ternary operator is a powerful tool for simple conditions, but **use it wisely** to maintain your code's readability! 🎯

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>