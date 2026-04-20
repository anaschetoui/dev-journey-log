<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# Literal Types & Escape Sequences

### مقدمة

في هذا الدرس، سنتعلم مفهومي **Literal Types** و **Escape Sequences** في لغة C++.

---

## الجزء الأول: Literal Types

### ما هي Literal Types؟ 🎯

**Literal Types** هي قيم ثابتة تظهر مباشرة في الكود المصدري.

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 42 << endl;      // Integer literal
    cout << 3.14 << endl;    // Floating-point literal  
    cout << 'A' << endl;     // Character literal
    return 0;
}
```

**Output:**
```
42
3.14
A
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### أنواع Literal Types

#### 1. Integer Literals (الأعداد الصحيحة)

<div dir="rtl" style="text-align: right;">

**الأنظمة العددية:**

- **عشري (Decimal):** `0`, `-9`, `22`
- **ثماني (Octal):** `021`, `077`, `033` 
- **سداسي عشر (Hexadecimal):** `0x7f`, `0x2a`, `0x521`

في لغة C++، يبدأ النظام الثماني بالرقم `0`، بينما يبدأ النظام السداسي عشر بـ `0x`.

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 22 << endl;      // Decimal
    cout << 033 << endl;     // Octal
    cout << 0x2a << endl;    // Hexadecimal
    return 0;
}
```

**Output:**
```
22
27
42
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 2. Floating-Point Literals (الأعداد العشرية)

<div dir="rtl" style="text-align: right;">

**أمثلة:** `13.5`, `1.99`, `-8.07`

هي أعداد تحتوي على نقطة عشرية ويمكن أن تكون موجبة أو سالبة.

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 13.5 << endl;
    cout << -8.07 << endl;
    return 0;
}
```

**Output:**
```
13.5
-8.07
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 3. Character Literals (الأحرف المفردة)

<div dir="rtl" style="text-align: right;">

**أمثلة:** `A`, `b`, `z`, `$`, `#`

هي أحرف مفردة توضع بين علامتي اقتباس مفردة في الكود.

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 'A' << endl;
    cout << 'z' << endl; 
    cout << '$' << endl;
    cout << '#' << endl;
    return 0;
}
```

**Output:**
```
A
z
$
#
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الجزء الثاني: Escape Sequences

### ما هي Escape Sequences؟ 🚀

<div dir="rtl" style="text-align: right;">

**Escape Sequences** هي رموز خاصة تبدأ بشرطة مائلة عكسية `\` تستخدم لتمثيل رموز لا يمكن كتابتها مباشرة في النصوص.

</div>

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### جدول Escape Sequences

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

| Escape Sequence | المعنى |
|----------------|--------|
| `\\` | Backslash |
| `\t` | Tab |
| `\n` | Newline |
| `\"` | Double quote |
| `\'` | Single quote |
| `\a` | Audio bell |

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### أمثلة على استخدام Escape Sequences

<div dir="rtl" style="text-align: right;">

يظهر هذا المثال الفرق بين استخدام `\n` و `\\` في النصوص.

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "M1VM2 \n";
    cout << "M1\\VM2";
    return 0;
}
```

**Output:**
```
M1VM2 
M1\VM2
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### مثال شامل لـ Escape Sequences

<div dir="rtl" style="text-align: right;">

يوضح هذا المثال مختلف أنواع **Escape Sequences** وكيفية استخدامها في البرنامج.

</div>

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Line1\nLine2" << endl;
    cout << "Tab:\tText" << endl;
    cout << "Backslash: \\" << endl;
    cout << "Quote: \"Hello\"" << endl;
    cout << "Bell: \a" << endl;
    return 0;
}
```

**Output:**
```
Line1
Line2
Tab:   Text
Backslash: \
Quote: "Hello"
Bell: (bell sound)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### المفاهيم الأساسية:

<div dir="rtl" style="text-align: right;">

- **Literal Types**: قيم ثابتة في الكود
- **Integer Literals**: أعداد صحيحة (عشري، ثماني، سداسي عشر)  
- **Floating-Point**: أعداد عشرية
- **Character Literals**: أحرف مفردة
- **Escape Sequences**: رموز خاصة تبدأ بـ `\`

### الفكرة الرئيسية:
> **"Literal Types تمثل القيم الأساسية، بينما Escape Sequences تمكننا من استخدام الرموز الخاصة"**

</div>

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Literal Types & Escape Sequences in C++

## Introduction

In this lesson, we will learn about **Literal Types** and **Escape Sequences** in C++.

---

## Part 1: Literal Types

### What are Literal Types? 🎯

**Literal Types** are constant values that appear directly in the source code.

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 42 << endl;      // Integer literal
    cout << 3.14 << endl;    // Floating-point literal  
    cout << 'A' << endl;     // Character literal
    return 0;
}
```

**Output:**
```
42
3.14
A
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Types of Literal Types

#### 1. Integer Literals (Whole Numbers)

**Number Systems:**

- **Decimal:** `0`, `-9`, `22`
- **Octal:** `021`, `077`, `033`
- **Hexadecimal:** `0x7f`, `0x2a`, `0x521`

In C++ programming, octal starts with a 0, and hexadecimal starts with a 0x.

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 22 << endl;      // Decimal
    cout << 033 << endl;     // Octal
    cout << 0x2a << endl;    // Hexadecimal
    return 0;
}
```

**Output:**
```
22
27
42
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 2. Floating-Point Literals (Decimal Numbers)

**Examples:** `13.5`, `1.99`, `-8.07`

These are numbers that contain a decimal point and can be positive or negative.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 13.5 << endl;
    cout << -8.07 << endl;
    return 0;
}
```

**Output:**
```
13.5
-8.07
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 3. Character Literals (Single Characters)

**Examples:** `A`, `b`, `z`, `$`, `#`

These are single characters enclosed in single quotes in the code.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 'A' << endl;
    cout << 'z' << endl;
    cout << '$' << endl;
    cout << '#' << endl;
    return 0;
}
```

**Output:**
```
A
z
$
#
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Part 2: Escape Sequences

### What are Escape Sequences? 🚀

**Escape Sequences** are special symbols starting with a backslash `\` used to represent characters that cannot be typed directly in text.

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Escape Sequences Table

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

| Escape Sequence | Meaning |
|----------------|---------|
| `\\` | Backslash |
| `\t` | Tab |
| `\n` | Newline |
| `\"` | Double quote |
| `\'` | Single quote |
| `\a` | Audio bell |

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Examples of Escape Sequences Usage

This example shows the difference between using `\n` and `\\` in texts.

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "M1VM2 \n";
    cout << "M1\\VM2";
    return 0;
}
```

**Output:**
```
M1VM2 
M1\VM2
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Comprehensive Escape Sequences Example

This example demonstrates different types of **Escape Sequences** and how to use them in a program.

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Line1\nLine2" << endl;
    cout << "Tab:\tText" << endl;
    cout << "Backslash: \\" << endl;
    cout << "Quote: \"Hello\"" << endl;
    cout << "Bell: \a" << endl;
    return 0;
}
```

**Output:**
```
Line1
Line2
Tab:   Text
Backslash: \
Quote: "Hello"
Bell: (bell sound)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### Core Concepts:

- **Literal Types**: Constant values in code
- **Integer Literals**: Whole numbers (decimal, octal, hexadecimal)
- **Floating-Point**: Decimal numbers
- **Character Literals**: Single characters
- **Escape Sequences**: Special symbols starting with `\`

### Main Idea:
> **"Literal Types represent fundamental values, while Escape Sequences allow us to use special characters"**

---

*Anas Chetoui* - `@anaschetoui`

</div>