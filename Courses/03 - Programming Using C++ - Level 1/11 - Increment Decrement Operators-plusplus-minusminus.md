<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# Increment Decrement Operators ++, --

## مقدمة

في هذا الدرس سنتعلم استخدام مشغلي الزيادة `++` والنقصان `--` في لغة C++، وهما أداتان مهمتان لتبسيط عمليات الزيادة والنقصان على المتغيرات.

---

## الأساسيات

### المشغلات الأساسية 🎯

مشغلا الزيادة والنقصان هما اختصار لعمليات الزيادة والنقصان بواحد:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    
    a++;  // زيادة a بواحد ← تصبح 11
    b--;  // نقصان b بواحد ← تصبح 19
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### النتائج المتوقعة

**Output:**
```
a = 11
b = 19
```

---

## الصيغ المختلفة

### الصيغة البعدية والصيغة القبلية

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 5;
    
    // الصيغة البعدية (Postfix)
    x++;  // تعادل x = x + 1
    
    // الصيغة القبلية (Prefix)  
    ++y;  // تعادل y = y + 1
    
    cout << "x = " << x << endl;  // 6
    cout << "y = " << y << endl;  // 6
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### عند استخدامها في سطر منفصل

- **`a++`** و **`++a`** يعطيان نفس النتيجة
- **`b--`** و **`--b`** يعطيان نفس النتيجة
- الفرق يظهر عند استخدامها في تعبيرات أكبر

---

## أمثلة عملية

### مثال شامل للزيادة والنقصان

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    
    // استخدام مشغلي الزيادة والنقصان
    num1++;      // num1 تصبح 11
    num2--;      // num2 تصبح 19
    
    ++num1;      // num1 تصبح 12
    --num2;      // num2 تصبح 18
    
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    
    return 0;
}
```

**Output:**
```
num1 = 12
num2 = 18
```
</div>

<div dir="rtl" style="text-align: right;">

### المقارنة مع العمليات العادية

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 5;
    
    // الطريقة العادية
    x = x + 1;    // x تصبح 6
    
    // الطريقة المختصرة
    y++;          // y تصبح 6
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    return 0;
}
```

**Output:**
```
x = 6
y = 6
```
</div>

<div dir="rtl" style="text-align: right;">

---

## الخلاصة

### النقاط الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 ++ لزيادة القيمة بواحد
🎯 -- لنقصان القيمة بواحد
🔤 a++ تعادل a = a + 1
🔤 b-- تعادل b = b - 1
⚡ اختصار للعمليات الشائعة
💡 نفس النتيجة عند استخدامها في سطر منفصل
```
</div>

<div dir="rtl" style="text-align: right;">

### الملاحظة المهمة:
> **"عند استخدام `a++` أو `++a` في سطر منفصل، تعطيان نفس النتيجة. الفرق يظهر عند استخدامها ضمن تعبيرات أكبر"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)


# Increment Decrement Operators ++, --

## Introduction

In this lesson, we will learn how to use the increment `++` and decrement `--` operators in C++, which are important tools for simplifying increment and decrement operations on variables.

---

## Basics

### Basic Operators 🎯

The increment and decrement operators are shortcuts for increasing and decreasing by one:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    
    a++;  // increment a by one ← becomes 11
    b--;  // decrement b by one ← becomes 19
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### Expected Results

**Output:**
```
a = 11
b = 19
```

---

## Different Forms

### Postfix and Prefix Forms

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 5;
    
    // Postfix form
    x++;  // equivalent to x = x + 1
    
    // Prefix form  
    ++y;  // equivalent to y = y + 1
    
    cout << "x = " << x << endl;  // 6
    cout << "y = " << y << endl;  // 6
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### When Used in Separate Lines

- **`a++`** and **`++a`** give the same result
- **`b--`** and **`--b`** give the same result
- The difference appears when used in larger expressions

---

## Practical Examples

### Comprehensive Increment Decrement Example

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    
    // Using increment and decrement operators
    num1++;      // num1 becomes 11
    num2--;      // num2 becomes 19
    
    ++num1;      // num1 becomes 12
    --num2;      // num2 becomes 18
    
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    
    return 0;
}
```

**Output:**
```
num1 = 12
num2 = 18
```
</div>

<div dir="rtl" style="text-align: right;">

### Comparison with Regular Operations

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 5;
    
    // Regular method
    x = x + 1;    // x becomes 6
    
    // Shortcut method
    y++;          // y becomes 6
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    return 0;
}
```

**Output:**
```
x = 6
y = 6
```
</div>

<div dir="rtl" style="text-align: right;">

---

## Summary

### Key Points:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 ++ to increase value by one
🎯 -- to decrease value by one
🔤 a++ equivalent to a = a + 1
🔤 b-- equivalent to b = b - 1
⚡ Shortcut for common operations
💡 Same result when used in separate lines
```
</div>

<div dir="rtl" style="text-align: right;">

### Important Note:
> **"When using `a++` or `++a` in separate lines, they give the same result. The difference appears when used within larger expressions"**

</div>

---
*Anas Chetoui* - `@anaschetoui`