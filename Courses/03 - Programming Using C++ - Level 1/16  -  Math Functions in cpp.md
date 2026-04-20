<div dir="rtl">

<a id="arabic-logical"></a>
[English ↙](#english-logical)

# 🧠 العوامل المنطقية | Logical Operators

## 🎯 المقدمة

العوامل المنطقية (Logical Operators) تعتبر من أهم الأساسيات في أي لغة برمجة لأن كل البرمجة تعتمد عليها. في هذا الدرس سنتعلم العوامل الثلاثة الأساسية: **AND**، **OR**، **NOT** وكيفية استخدامها في لغة C++.

> **📚 prerequisite ضروري**: يجب مشاهدة الدرس الخامس عشر من سلسلة "أساسيات مهمة لكل مبرمج" لفهم البوابات المنطقية (AND gate, OR gate, NOT gate) بشكل مفصل قبل متابعة هذا الدرس.

## 💡 المفاهيم الأساسية

### العوامل المنطقية الأساسية في C++

<div dir="ltr" align="left">

| Operator | C++ Symbol | Description |
|----------|------------|-------------|
| **AND** | `&&` | يعطي `true` فقط إذا كلا الطرفين `true` |
| **OR** | `\|\|` | يعطي `true` إذا كان أحد الطرفين على الأقل `true` |
| **NOT** | `!` | يعكس القيمة المنطقية |

</div>

### ⚠️ تحذيرات هامة

- **استخدم `&&` وليس `&`**: `&` تعني Binary AND وهي مفهوم متقدم ليس هذا وقته
- **استخدم `\|\|` وليس `|`**: `|` تعني Binary OR وهي مفهوم متقدم
- **التساوي يستخدم `=` وليس `==`**: بينما `==`المقارنة

## 🛠️ أمثلة عملية

### 📝 مثال أساسي

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    bool a = true;   // 1
    bool b = false;  // 0
    
    cout << "a && b: " << (a && b) << endl;  // false (0)
    cout << "a || b: " << (a || b) << endl;  // true (1)
    cout << "!a: " << (!a) << endl;          // false (0)
    cout << "!b: " << (!b) << endl;          // true (1)
    
    return 0;
}
```

</div>

### 🔍 تحليل التعبيرات المعقدة

<div dir="ltr" align="left">

```cpp
bool result = !(5 > 6) || (7 == 7) && !(true || false);

// التحليل خطوة بخطوة:
// 1. (5 > 6) = false
// 2. !(5 > 6) = !false = true
// 3. (7 == 7) = true
// 4. (true || false) = true
// 5. !(true || false) = !true = false
// 6. (7 == 7) && !(true || false) = true && false = false
// 7. النتيجة النهائية: true || false = true
```

</div>

## ❌ الأخطاء الشائعة

### 1. استخدام عامل واحد بدلاً من اثنين

<div dir="ltr" align="left">

```cpp
// ❌ خطأ
if (a & b)  // Binary AND - ليس ما نريده

// ✅ صحيح
if (a && b) // Logical AND - هذا ما نريده
```

</div>

### 2. الخلط بين = و ==

<div dir="ltr" align="left">

```cpp
// ❌ خطأ
if (a = true)  // تعيين وليس مقارنة

// ✅ صحيح  
if (a == true) // مقارنة صحيحة
```

</div>

### 3. أولويات العمليات

<div dir="ltr" align="left">

```cpp
// ❌ قد يعطي نتائج غير متوقعة
if (a || b && c)

// ✅ استخدام الأقواس للوضوح
if (a || (b && c))
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام الأقواس للوضوح

<div dir="ltr" align="left">

```cpp
// ✅ واضح وسهل القراءة
bool result = (a && b) || (c && !d);
```

</div>

### 2. تبسيط التعبيرات المعقدة

<div dir="ltr" align="left">

```cpp
// ✅ أفضل - مقسم إلى أجزاء
bool part1 = (x > 5) && (y < 10);
bool part2 = (z == 0) || (w != 1);
bool finalResult = part1 && part2;
```

</div>

### 3. تسمية المتغيرات بشكل واضح

<div dir="ltr" align="left">

```cpp
// ✅ تسمية توضيحية
bool isUserLoggedIn = true;
bool hasValidSubscription = false;
bool canAccessContent = isUserLoggedIn && hasValidSubscription;
```

</div>

## 📊 جدول الحقائق المنطقية

### جدول AND (`&&`)

<div dir="ltr" align="left">

| A | B | A && B |
|---|---|--------|
| true | true | true |
| true | false | false |
| false | true | false |
| false | false | false |

</div>

### جدول OR (`||`)

<div dir="ltr" align="left">

| A | B | A \|\| B |
|---|---|---------|
| true | true | true |
| true | false | true |
| false | true | true |
| false | false | false |

</div>

### جدول NOT (`!`)

<div dir="ltr" align="left">

| A | !A |
|---|----|
| true | false |
| false | true |

</div>

## 📝 الملخص

- **`&&` (AND)**: يعطي `true` فقط إذا كلا الطرفين `true`
- **`||` (OR)**: يعطي `true` إذا كان أحد الطرفين `true` على الأقل  
- **`!` (NOT)**: يعكس القيمة المنطقية
- **الأولوية**: `!` → `&&` → `||` (استخدم الأقواس للوضوح)
- **تجنب الأخطاء**: استخدم `&&` و `||` و `==` بدلاً من `&` و `|` و `=`

</div>

<div dir="ltr">

<a id="english-logical"></a>
[العربية ↗](#arabic-logical)

# 🧠 Logical Operators

## 🎯 Introduction

Logical Operators are among the most fundamental concepts in any programming language because all programming depends on them. In this lesson, we'll learn the three basic operators: **AND**, **OR**, **NOT** and how to use them in C++.

> **📚 Prerequisite**: You must watch lesson 15 from the "Essential Basics for Every Programmer" series to understand logic gates (AND gate, OR gate, NOT gate) in detail before continuing with this lesson.

## 💡 Core Concepts

### Basic Logical Operators in C++

| Operator | C++ Symbol | Description |
|----------|------------|-------------|
| **AND** | `&&` | Returns `true` only if both operands are `true` |
| **OR** | `\|\|` | Returns `true` if at least one operand is `true` |
| **NOT** | `!` | Inverts the boolean value |

### ⚠️ Important Warnings

- **Use `&&` not `&`**: `&` means Binary AND which is an advanced concept
- **Use `\|\|` not `|`**: `|` means Binary OR which is an advanced concept  
- **Equality uses `==` not `=`**: `=` is for assignment while `==` is for comparison

## 🛠️ Practical Examples

### 📝 Basic Example

```cpp
#include <iostream>
using namespace std;

int main() {
    bool a = true;   // 1
    bool b = false;  // 0
    
    cout << "a && b: " << (a && b) << endl;  // false (0)
    cout << "a || b: " << (a || b) << endl;  // true (1)
    cout << "!a: " << (!a) << endl;          // false (0)
    cout << "!b: " << (!b) << endl;          // true (1)
    
    return 0;
}
```

### 🔍 Complex Expression Analysis

```cpp
bool result = !(5 > 6) || (7 == 7) && !(true || false);

// Step-by-step analysis:
// 1. (5 > 6) = false
// 2. !(5 > 6) = !false = true
// 3. (7 == 7) = true
// 4. (true || false) = true
// 5. !(true || false) = !true = false
// 6. (7 == 7) && !(true || false) = true && false = false
// 7. Final result: true || false = true
```

## ❌ Common Errors

### 1. Using Single Operator Instead of Double
```cpp
// ❌ Wrong
if (a & b)  // Binary AND - not what we want

// ✅ Correct
if (a && b) // Logical AND - this is what we want
```

### 2. Confusing = and ==
```cpp
// ❌ Wrong
if (a = true)  // Assignment not comparison

// ✅ Correct  
if (a == true) // Correct comparison
```

### 3. Operator Precedence Issues
```cpp
// ❌ May give unexpected results
if (a || b && c)

// ✅ Use parentheses for clarity
if (a || (b && c))
```

## 🏆 Best Practices

### 1. Use Parentheses for Clarity
```cpp
// ✅ Clear and readable
bool result = (a && b) || (c && !d);
```

### 2. Simplify Complex Expressions
```cpp
// ✅ Better - broken into parts
bool part1 = (x > 5) && (y < 10);
bool part2 = (z == 0) || (w != 1);
bool finalResult = part1 && part2;
```

### 3. Use Descriptive Variable Names
```cpp
// ✅ Descriptive naming
bool isUserLoggedIn = true;
bool hasValidSubscription = false;
bool canAccessContent = isUserLoggedIn && hasValidSubscription;
```

## 📊 Truth Tables

### AND (`&&`) Table
| A | B | A && B |
|---|---|--------|
| true | true | true |
| true | false | false |
| false | true | false |
| false | false | false |

### OR (`||`) Table  
| A | B | A \|\| B |
|---|---|---------|
| true | true | true |
| true | false | true |
| false | true | true |
| false | false | false |

### NOT (`!`) Table
| A | !A |
|---|----|
| true | false |
| false | true |

## 📝 Summary

- **`&&` (AND)**: Returns `true` only if both operands are `true`
- **`||` (OR)**: Returns `true` if at least one operand is `true`  
- **`!` (NOT)**: Inverts the boolean value
- **Precedence**: `!` → `&&` → `||` (Use parentheses for clarity)
- **Avoid errors**: Use `&&`, `||`, and `==` instead of `&`, `|`, and `=`

---

*Anas Chetoui* - `@anaschetoui`

</div>