<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# الفرق بين الصيغة القبلية والبعدية في لغة C++ 
## Postfix vs Prefix: ++ A vs A++, --A vs A--

## مقدمة

في هذا الدرس سنتعلم الفرق الجوهري بين الصيغة القبلية (Prefix) والصيغة البعدية (Postfix) لمشغلي الزيادة والنقصان، وهو فرق حاسم في فهم كيفية تنفيذ العمليات.

---

## الفرق الأساسي

### الصيغة البعدية (Postfix) 🎯

عندما يأتي المشغل بعد المتغير `A++` أو `A--`:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = A++;  // الصيغة البعدية
    
    cout << "A = " << A << endl;  // 11
    cout << "B = " << B << endl;  // 10
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

**التنفيذ خطوة بخطوة:**
1. تؤخذ القيمة الحالية لـ A (10) وتخزن في B
2. تزيد A بمقدار 1 لتصبح 11
3. النتيجة: B = 10, A = 11

---

### الصيغة القبلية (Prefix)

عندما يأتي المشغل قبل المتغير `++A` أو `--A`:

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = ++A;  // الصيغة القبلية
    
    cout << "A = " << A << endl;  // 11
    cout << "B = " << B << endl;  // 11
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

**التنفيذ خطوة بخطوة:**
1. تزيد A بمقدار 1 لتصبح 11
2. تؤخذ القيمة الجديدة لـ A (11) وتخزن في B
3. النتيجة: B = 11, A = 11

---

## أمثلة مقارنة شاملة

### مقارنة بين الصيغتين

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 5;
    int a, b;
    
    // الصيغة البعدية
    a = x++;  // a = 5, x = 6
    
    // الصيغة القبلية  
    b = ++y;  // b = 6, y = 6
    
    cout << "Postfix - a: " << a << ", x: " << x << endl;
    cout << "Prefix - b: " << b << ", y: " << y << endl;
    
    return 0;
}
```

**Output:**
```
Postfix - a: 5, x: 6
Prefix - b: 6, y: 6
```
</div>

<div dir="rtl" style="text-align: right;">

### مثال مع مشغل النقصان

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int m = 8, n = 8;
    int p, q;
    
    // الصيغة البعدية للنقصان
    p = m--;  // p = 8, m = 7
    
    // الصيغة القبلية للنقصان
    q = --n;  // q = 7, n = 7
    
    cout << "Postfix-- - p: " << p << ", m: " << m << endl;
    cout << "Prefix-- - q: " << q << ", n: " << n << endl;
    
    return 0;
}
```

**Output:**
```
Postfix-- - p: 8, m: 7
Prefix-- - q: 7, n: 7
```
</div>

<div dir="rtl" style="text-align: right;">

---

## التطبيق العملي

### مثال تفصيلي من المحاضرة

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B;
    
    // الحالة الأولى: الصيغة البعدية
    B = A++;  // B تأخذ 10 ثم A تزيد إلى 11
    
    cout << "After A++:" << endl;
    cout << "A = " << A << endl;  // 11
    cout << "B = " << B << endl;  // 10
    
    // إعادة التعيين
    A = 10;
    
    // الحالة الثانية: الصيغة القبلية
    B = ++A;  // A تزيد إلى 11 ثم B تأخذ 11
    
    cout << "After ++A:" << endl;
    cout << "A = " << A << endl;  // 11
    cout << "B = " << B << endl;  // 11
    
    return 0;
}
```

**Output:**
```
After A++:
A = 11
B = 10
After ++A:
A = 11
B = 11
```
</div>

<div dir="rtl" style="text-align: right;">

---

## الخلاصة

### القواعد الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 الصيغة البعدية A++:
   - تؤخذ القيمة الحالية أولاً
   - ثم تزيد/تنقص القيمة

🎯 الصيغة القبلية ++A:
   - تزيد/تنقص القيمة أولاً
   - ثم تؤخذ القيمة الجديدة

🔤 A++ تعطي القيمة الأصلية ثم التعديل
🔤 ++A تعطي القيمة المعدلة مباشرة
⚡ الفرق يظهر عند الاستخدام في التعيين
💡 نفس النتيجة عند الاستخدام في سطر منفصل
```
</div>

<div dir="rtl" style="text-align: right;">

### القاعدة الذهبية:
> **"في الصيغة البعدية نأخذ القيمة ثم نعدل، وفي الصيغة القبلية نعدل ثم نأخذ القيمة"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Postfix vs Prefix in C++ 
## Postfix vs Prefix: ++A vs A++, --A vs A--

## Introduction

In this lesson, we will learn the fundamental difference between Prefix and Postfix forms of increment and decrement operators, a crucial distinction in understanding how operations are executed.

---

## Basic Difference

### Postfix Form 🎯

When the operator comes after the variable `A++` or `A--`:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = A++;  // Postfix form
    
    cout << "A = " << A << endl;  // 11
    cout << "B = " << B << endl;  // 10
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

**Step-by-step execution:**
1. Current value of A (10) is taken and stored in B
2. A is incremented by 1 to become 11
3. Result: B = 10, A = 11

---

### Prefix Form

When the operator comes before the variable `++A` or `--A`:

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = ++A;  // Prefix form
    
    cout << "A = " << A << endl;  // 11
    cout << "B = " << B << endl;  // 11
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

**Step-by-step execution:**
1. A is incremented by 1 to become 11
2. New value of A (11) is taken and stored in B
3. Result: B = 11, A = 11

---

## Comprehensive Comparison Examples

### Comparison Between Both Forms

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 5;
    int a, b;
    
    // Postfix form
    a = x++;  // a = 5, x = 6
    
    // Prefix form  
    b = ++y;  // b = 6, y = 6
    
    cout << "Postfix - a: " << a << ", x: " << x << endl;
    cout << "Prefix - b: " << b << ", y: " << y << endl;
    
    return 0;
}
```

**Output:**
```
Postfix - a: 5, x: 6
Prefix - b: 6, y: 6
```
</div>

<div dir="rtl" style="text-align: right;">

### Example with Decrement Operator

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int m = 8, n = 8;
    int p, q;
    
    // Postfix decrement
    p = m--;  // p = 8, m = 7
    
    // Prefix decrement
    q = --n;  // q = 7, n = 7
    
    cout << "Postfix-- - p: " << p << ", m: " << m << endl;
    cout << "Prefix-- - q: " << q << ", n: " << n << endl;
    
    return 0;
}
```

**Output:**
```
Postfix-- - p: 8, m: 7
Prefix-- - q: 7, n: 7
```
</div>

<div dir="rtl" style="text-align: right;">

---

## Practical Application

### Detailed Example from Lecture

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B;
    
    // First case: Postfix form
    B = A++;  // B takes 10 then A increments to 11
    
    cout << "After A++:" << endl;
    cout << "A = " << A << endl;  // 11
    cout << "B = " << B << endl;  // 10
    
    // Reset values
    A = 10;
    
    // Second case: Prefix form
    B = ++A;  // A increments to 11 then B takes 11
    
    cout << "After ++A:" << endl;
    cout << "A = " << A << endl;  // 11
    cout << "B = " << B << endl;  // 11
    
    return 0;
}
```

**Output:**
```
After A++:
A = 11
B = 10
After ++A:
A = 11
B = 11
```
</div>

<div dir="rtl" style="text-align: right;">

---

## Summary

### Basic Rules:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 Postfix A++:
   - Take current value first
   - Then increment/decrement value

🎯 Prefix ++A:
   - Increment/decrement value first
   - Then take new value

🔤 A++ gives original value then modification
🔤 ++A gives modified value directly
⚡ Difference appears when used in assignment
💡 Same result when used in separate lines
```
</div>

<div dir="rtl" style="text-align: right;">

### Golden Rule:
> **"In Postfix we take the value then modify, in Prefix we modify then take the value"**

</div>

---
*Anas Chetoui* - `@anaschetoui`