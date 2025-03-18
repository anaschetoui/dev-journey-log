<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## Recursion

---

## ما هو Recursion؟

**Recursion** هو عندما تستدعي الدالة **نفسها**. مثل الشخص الذي يتحدث مع نفسه.

---

## مثال: طباعة الأرقام من 1 إلى 4

### الكود باستخدام Recursion

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void printNumbers(int n, int m) {
    if (n <= m) {
        cout << n << " ";
        printNumbers(n + 1, m);  // ⭐ استدعاء الدالة نفسها
    }
}

int main() {
    printNumbers(1, 4);
    return 0;
}
```

**الإخراج:**
```
1 2 3 4
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## كيف يعمل؟

### خطوة بخطوة لـ `printNumbers(1, 4)`

1. `printNumbers(1, 4)` → طباعة: 1 → استدعاء `printNumbers(2, 4)`
2. `printNumbers(2, 4)` → طباعة: 2 → استدعاء `printNumbers(3, 4)`
3. `printNumbers(3, 4)` → طباعة: 3 → استدعاء `printNumbers(4, 4)`
4. `printNumbers(4, 4)` → طباعة: 4 → استدعاء `printNumbers(5, 4)`
5. `printNumbers(5, 4)` → `5 <= 4` خطأ → توقف

---

## Call Stack في Recursion

كل استدعاء للدالة يضاف إلى الـ Call Stack:

```
[main, printNumbers(1,4), printNumbers(2,4), printNumbers(3,4), printNumbers(4,4), printNumbers(5,4)]
```

عندما تنتهي الدالة `printNumbers(5,4)`، تُزال من الـ Stack، ثم `printNumbers(4,4)`، وهكذا حتى `main`.

---

## المشكلة: Stack Overflow

### مثال يسبب Stack Overflow

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void printNumbers(int n, int m) {
    if (n <= m) {
        cout << n << " ";
        printNumbers(n + 1, m);
    }
}

int main() {
    printNumbers(1, 1000000);  // ❌ سيسبب Stack Overflow
    return 0;
}
```

**الخطأ:**
```
Stack Overflow
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### لماذا يحدث Stack Overflow؟

- كل استدعاء للدالة يحتاج مساحة في الذاكرة (في الـ Call Stack)
- الـ Call Stack حجمه محدود
- عندما يمتلئ الـ Stack → Stack Overflow → البرنامج ينهار

---

## Recursion vs Loops

### النصيحة العملية:

> **"استخدم Loops (for, while) للأمور العادية، واستخدم Recursion فقط عندما تكون واثقاً أنك لن تصل إلى Stack Overflow"**

### أسباب استخدام Loops بدلاً من Recursion:

1. **الـ Stack حجمه محدود** في جميع لغات البرمجة:
   - Python: حجم Stack صغير
   - C++: حجم Stack أكبر ولكن محدود
   - Java: حجم Stack قابل للتعديل ولكن محدود

2. **في التطبيقات الواقعية**، قد يدخل المستخدم بيانات كبيرة تسبب Stack Overflow

3. **الـ Loops أسرع** وأكثر أماناً في معظم الحالات

---

## متى تستخدم Recursion؟

### استخدم Recursion فقط عندما:

1. **تكون واثقاً** أن عدد الاستدعاءات محدود ومعروف
2. **تكون الخوارزمية** أكثر وضوحاً باستخدام Recursion
3. **يكون العمق** صغيراً (مثلاً 5-10 مستويات)

### تجنب Recursion عندما:

1. **العمق كبير** أو غير معروف
2. **تتعامل مع بيانات المستخدم** (قد يدخل أرقام كبيرة)
3. **الأداء مهم** (الـ Recursion أبطأ من الـ Loops)

---

## الخلاصة

### المفاهيم الأساسية:

1. **Recursion**: دالة تستدعي نفسها
2. **Stack Overflow**: يحدث عندما يمتلئ الـ Call Stack
3. **Call Stack**: يتابع استدعاءات الدوال

### القاعدة الذهبية:

> **"لا تستخدم Recursion فقط لأنك تعرف كيف تكتبه. في 90% من الحالات، الـ Loops تكون كافية وآمنة."**

### تذكر:

تعلم Recursion لفهمه، ولكن استخدم Loops في مشاريعك الحقيقية إلا إذا كنت متأكداً من أن Recursion هو الخيار الأفضل والأكثر أماناً.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Recursion

---

## What is Recursion?

**Recursion** is when a function calls **itself**. Like a person talking to themselves.

---

## Example: Printing Numbers from 1 to 4

### Code Using Recursion

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void printNumbers(int n, int m) {
    if (n <= m) {
        cout << n << " ";
        printNumbers(n + 1, m);  // ⭐ Calling the function itself
    }
}

int main() {
    printNumbers(1, 4);
    return 0;
}
```

**Output:**
```
1 2 3 4
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Does It Work?

### Step by Step for `printNumbers(1, 4)`

1. `printNumbers(1, 4)` → Print: 1 → Call `printNumbers(2, 4)`
2. `printNumbers(2, 4)` → Print: 2 → Call `printNumbers(3, 4)`
3. `printNumbers(3, 4)` → Print: 3 → Call `printNumbers(4, 4)`
4. `printNumbers(4, 4)` → Print: 4 → Call `printNumbers(5, 4)`
5. `printNumbers(5, 4)` → `5 <= 4` false → Stop

---

## Call Stack in Recursion

Each function call is added to the Call Stack:

```
[main, printNumbers(1,4), printNumbers(2,4), printNumbers(3,4), printNumbers(4,4), printNumbers(5,4)]
```

When `printNumbers(5,4)` ends, it's removed from the Stack, then `printNumbers(4,4)`, and so on until `main`.

---

## Problem: Stack Overflow

### Example Causing Stack Overflow

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void printNumbers(int n, int m) {
    if (n <= m) {
        cout << n << " ";
        printNumbers(n + 1, m);
    }
}

int main() {
    printNumbers(1, 1000000);  // ❌ Will cause Stack Overflow
    return 0;
}
```

**Error:**
```
Stack Overflow
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Why Does Stack Overflow Happen?

- Each function call needs memory space (in Call Stack)
- Call Stack has limited size
- When Stack fills up → Stack Overflow → Program crashes

---

## Recursion vs Loops

### Practical Advice:

> **"Use Loops (for, while) for normal tasks, and use Recursion only when you're sure you won't reach Stack Overflow"**

### Reasons to Use Loops Instead of Recursion:

1. **Stack size is limited** in all programming languages:
   - Python: Stack size small
   - C++: Stack size larger but limited
   - Java: Stack size adjustable but limited

2. **In real applications**, users may enter large data causing Stack Overflow

3. **Loops are faster** and safer in most cases

---

## When to Use Recursion?

### Use Recursion Only When:

1. **You're sure** the number of calls is limited and known
2. **The algorithm** is clearer using Recursion
3. **The depth** is small (e.g., 5-10 levels)

### Avoid Recursion When:

1. **Depth is large** or unknown
2. **Dealing with user data** (may enter large numbers)
3. **Performance matters** (Recursion is slower than Loops)

---

## Summary

### Core Concepts:

1. **Recursion**: Function calls itself
2. **Stack Overflow**: Happens when Call Stack fills up
3. **Call Stack**: Tracks function calls

### Golden Rule:

> **"Don't use Recursion just because you know how to write it. In 90% of cases, Loops are sufficient and safe."**

### Remember:

Learn Recursion to understand it, but use Loops in your real projects unless you're sure Recursion is the best and safest choice.

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>