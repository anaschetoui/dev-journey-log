<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# المشغلات المنطقية (Logical Operators) في C++

## مقدمة

في هذا الدرس، سنتعرف على **المشغلات المنطقية (Logical Operators)**. تعتبر هذه المشغلات من أهم المفاهيم في أي لغة برمجة، لأن المنطق البرمجي بأكمله يعتمد عليها.

-----

## ملاحظة هامة: متطلب سابق 💡


```
لفهم هذا الدرس بعمق، يُنصح بشدة بمشاهدة **الدرس الخامس عشر** من سلسلة "أساسيات مهمة لكل مبرمج". يشرح هذا الدرس بوابات **AND, OR, NOT** بالتفصيل، وهو أساس المفاهيم التي سنبني عليها هنا. بدون فهم تلك الأساسيات، قد تبدو البرمجة صعبة.
```

-----

## المفاهيم الأساسية: AND, OR, NOT

المشغلات المنطقية تُستخدم لربط أو تعديل التعبيرات المنطقية (التي نتيجتها إما `true` أو `false`). في C++، نتعامل مع `true` كالرقم `1` و `false` كالرقم `0`.

### جدول المشغلات المنطقية

</div>




| المشغل | الاسم | الوصف | مثال (A=true, B=false) |
|---|---|---|---|
| `&&` | **AND** | يُرجع `true` (1) **فقط** إذا كان كلا الطرفين `true` | `A && B` (false) |
| `||` | **OR** | يُرجع `true` (1) إذا كان **أحد** الطرفين (أو كلاهما) `true` | `A || B` (true) |
| `!` | **NOT** | يعكس القيمة (true تصبح false، و false تصبح true) | `!A` (false) |


<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

-----

## مثال عملي: تحليل الكود 🎯

دعنا نرى كيف تعمل هذه المشغلات في كود C++ بسيط.

</div>



```cpp
#include <iostream>
using namespace std;

int main() {
    bool a = 1; // 1 = true
    bool b = 0; // 0 = false
    
    cout << "a && b (true AND false): " << (a && b) << endl;
    cout << "a || b (true OR false): " << (a || b) << endl;
    cout << "!a (NOT true): " << (!a) << endl;        
    cout << "!b (NOT false): " << (!b) << endl;        
    
    // الجمع بين العمليات
    cout << "!(a && b) (NOT (false)): " << !(a && b) << endl;
    cout << "!(a || b) (NOT (true)): " << !(a || b) << endl;
    
    return 0;
}
```

**Output:**

```
a && b (true AND false): 0
a || b (true OR false): 1
!a (NOT true): 0
!b (NOT false): 1
!(a && b) (NOT (false)): 1
!(a || b) (NOT (true)): 0
```

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

-----

## الأخطاء الشائعة ❌

### 1. AND المنطقية (`&&`) مقابل AND الثنائية (`&`)

يجب **دائماً** استخدام `&&` (علامتين) للعمليات المنطقية. استخدام `&` (علامة واحدة) لن يعطي خطأ في بناء الجملة (Syntax Error)، لكنه سيؤدي إلى "Binary AND"، وهي عملية مختلفة تماماً وستعطي نتائج غير متوقعة في هذا السياق.

</div>



```cpp
bool a = true;
bool b = false;

// ❌ خطأ (Binary AND)
cout << (a & b); 

// ✅ صحيح (Logical AND)
cout << (a && b);
```

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 2. المساواة (`==`) مقابل الإسناد (`=`)

عند المقارنة (كما في المثال التالي)، تذكر استخدام `==` (مرتين) للمقارنة، وليس `=` (مرة واحدة) التي تُستخدم للإسناد (تخزين القيمة).

</div>


```cpp
int x = 5;

// ❌ خطأ (هذا إسناد، سيجعل x تساوي 7)
if (x = 7) { ... } 

// ✅ صحيح (هذه مقارنة)
if (x == 7) { ... }
```

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;'">

-----

## مثال متقدم: أسبقية العمليات (Precedence)

عند تقييم تعبيرات معقدة، تتبع C++ قواعد أسبقية (Precedence).

1.  **`!` (NOT)** لها الأولوية القصوى.
2.  **`&&` (AND)** تأتي في المرتبة الثانية.
3.  **`||` (OR)** لها الأولوية الأدنى.

لنحلل هذا المثال خطوة بخطوة:

</div>

**[Block background: #d4edda]**

```cpp
#include <iostream>
using namespace std;

int main() {
    // التعبير الأصلي: not (5 > 6) or (7 == 7) and not (1 or 0)
    bool result = !(5 > 6) || (7 == 7) && !(1 || 0);
    
    // 1. الأقواس الداخلية أولاً:
    // result = !(false) || (true) && !(true || false)
    
    // 2. إكمال الأقواس:
    // result = !(false) || (true) && !(true)
    
    // 3. تطبيق ! (NOT) (لأن لها أعلى أسبقية):
    // result = (true) || (true) && (false)
    
    // 4. تطبيق && (AND) (لأن لها أسبقية على ||):
    // result = (true) || (true && false)
    // result = (true) || (false)
    
    // 5. تطبيق || (OR):
    // result = (true)
    
    cout << "Result: " << result << endl; // الناتج هو 1 (true)
    return 0;
}
```

**Output:**

```
Result: 1
```

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

-----

## الخلاصة

</div>



```
🎯 && (AND): يجب أن يكون كلا الطرفين true
🎯 || (OR): يكفي أن يكون طرف واحد true
🎯 ! (NOT): يعكس القيمة (true <-> false)
⚡ الأسبقية: ! (الأعلى) ثم && (الأوسط) ثم || (الأدنى)
⚠️ استخدم && و || (مزدوجة) للعمليات المنطقية، وليس & أو | (المفردة)
💡 1 يمثل true، و 0 يمثل false
```

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">
</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Logical Operators in C++

## Introduction

In this lesson, we will learn about **Logical Operators**. These operators are one of the most important concepts in any programming language, because all programming logic depends on them.

-----

## Important Note: Prerequisite 💡



```
To deeply understand this lesson, it is highly recommended to watch **Lesson 15** from the "Important Basics for Every Programmer" series. That lesson explains the **AND, OR, and NOT** gates in detail, which is the foundation for the concepts we will build on here. Without understanding those basics, programming might seem difficult.
```

-----

## Core Concepts: AND, OR, NOT

Logical operators are used to combine or modify logical expressions (which result in either `true` or `false`). In C++, `true` is treated as the number `1` and `false` as the number `0`.

### Logical Operators Table

</div>



| Operator | Name | Description | Example (A=true, B=false) |
|---|---|---|---|
| `&&` | **AND** | Returns `true` (1) **only** if both operands are `true` | `A && B` (false) |
| `||` | **OR** | Returns `true` (1) if **at least one** operand is `true` | `A || B` (true) |
| `!` | **NOT** | Inverts the value (true becomes false, false becomes true) | `!A` (false) |


<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;'">

-----

## Practical Example: Code Analysis 🎯

Let's see how these operators work in a simple C++ code.

</div>



```cpp
#include <iostream>
using namespace std;

int main() {
    bool a = 1; // 1 = true
    bool b = 0; // 0 = false
    
    cout << "a && b (true AND false): " << (a && b) << endl;
    cout << "a || b (true OR false): " << (a || b) << endl;
    cout << "!a (NOT true): " << (!a) << endl;        
    cout << "!b (NOT false): " << (!b) << endl;        
    
    // Combining operations
    cout << "!(a && b) (NOT (false)): " << !(a && b) << endl;
    cout << "!(a || b) (NOT (true)): " << !(a || b) << endl;
    
    return 0;
}
```

**Output:**

```
a && b (true AND false): 0
a || b (true OR false): 1
!a (NOT true): 0
!b (NOT false): 1
!(a && b) (NOT (false)): 1
!(a || b) (NOT (true)): 0
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;'">

-----

## Common Errors ❌

### 1. Logical AND (`&&`) vs. Bitwise AND (`&`)

You must **always** use `&&` (double ampersand) for logical operations. Using a single `&` will not cause a syntax error, but it will perform a "Bitwise AND," which is a completely different operation and will give unexpected results in this context.

</div>



```cpp
bool a = true;
bool b = false;

// ❌ Wrong (Bitwise AND)
cout << (a & b); 

// ✅ Correct (Logical AND)
cout << (a && b);
```

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;'">

### 2. Equality (`==`) vs. Assignment (`=`)

When comparing (as in the next example), remember to use `==` (double equals) for comparison, not `=` (single equals), which is used for assignment (storing a value).

</div>



```cpp
int x = 5;

// ❌ Wrong (This is assignment, it sets x to 7)
if (x = 7) { ... } 

// ✅ Correct (This is comparison)
if (x == 7) { ... }
```

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;'">

-----

## Advanced Example: Operator Precedence

When evaluating complex expressions, C++ follows precedence rules.

1.  **`!` (NOT)** has the highest priority.
2.  **`&&` (AND)** comes second.
3.  **`||` (OR)** has the lowest priority.

Let's analyze this example step-by-step:

</div>



```cpp
#include <iostream>
using namespace std;

int main() {
    // Original expression: not (5 > 6) or (7 == 7) and not (1 or 0)
    bool result = !(5 > 6) || (7 == 7) && !(1 || 0);
    
    // 1. Innermost parentheses first:
    // result = !(false) || (true) && !(true || false)
    
    // 2. Complete parentheses:
    // result = !(false) || (true) && !(true)
    
    // 3. Apply ! (NOT) (highest precedence):
    // result = (true) || (true) && (false)
    
    // 4. Apply && (AND) (has precedence over ||):
    // result = (true) || (true && false)
    // result = (true) || (false)
    
    // 5. Apply || (OR):
    // result = (true)
    
    cout << "Result: " << result << endl; // Output is 1 (true)
    return 0;
}
```

**Output:**

```
Result: 1
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;'">

-----

## Summary

</div>



```
🎯 && (AND): Both sides must be true
🎯 || (OR): At least one side must be true
🎯 ! (NOT): Inverts the value (true <-> false)
⚡ Precedence: ! (Highest) -> && (Medium) -> || (Lowest)
⚠️ Use && and || (double) for logical operations, not & or | (single)
💡 1 represents true, and 0 represents false
```

</div>

-----

*Anas Chetoui* - `@anaschetoui`