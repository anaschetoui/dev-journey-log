<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# مشغلات التعيين في لغة C++
## Assignment Operators

## مقدمة

في هذا الدرس سنتعلم استخدام مشغلات التعيين المختصرة في لغة C++، والتي توفر وقتاً وجهداً في كتابة الكود وتجعل البرمجة أكثر كفاءة.

---

## المشغلات الأساسية

### المشغلات المختصرة 🎯

بدلاً من كتابة التعيينات الطويلة، يمكن استخدام هذه المشغلات المختصرة:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    A += B;  // بدل A = A + B
    A -= B;  // بدل A = A - B  
    A *= B;  // بدل A = A * B
    A /= B;  // بدل A = A / B
    A %= B;  // بدل A = A % B
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### المقارنة بين الطريقتين

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الطريقة الطويلة        الطريقة المختصرة
A = A + B           →   A += B
A = A - B           →   A -= B
A = A * B           →   A *= B
A = A / B           →   A /= B
A = A % B           →   A %= B
```

</div>

<div dir="rtl" style="text-align: right;">

---

## التطبيق العملي

### مثال تفصيلي من المحاضرة

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    cout << "Initial values - A: " << A << ", B: " << B << endl;
    
    A += B;  // A = A + B → 10 + 20 = 30
    cout << "After A += B: " << A << endl;
    
    A -= B;  // A = A - B → 30 - 20 = 10  
    cout << "After A -= B: " << A << endl;
    
    A *= B;  // A = A * B → 10 * 20 = 200
    cout << "After A *= B: " << A << endl;
    
    A /= B;  // A = A / B → 200 / 20 = 10
    cout << "After A /= B: " << A << endl;
    
    A %= B;  // A = A % B → 10 % 20 = 10
    cout << "After A %= B: " << A << endl;
    
    return 0;
}
```

**Output:**
```
Initial values - A: 10, B: 20
After A += B: 30
After A -= B: 10
After A *= B: 200
After A /= B: 10
After A %= B: 10
```
</div>

<div dir="rtl" style="text-align: right;">

### شرح خطوة بخطوة

1. **`A += B`**: `A = 10 + 20 = 30`
2. **`A -= B`**: `A = 30 - 20 = 10`
3. **`A *= B`**: `A = 10 × 20 = 200`
4. **`A /= B`**: `A = 200 ÷ 20 = 10`
5. **`A %= B`**: `A = 10 % 20 = 10` (باقي القسمة)

---

## فوائد الاستخدام

### لماذا نستخدم المشغلات المختصرة؟

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ توفير الوقت في الكتابة
✅ كود أنظف وأكثر قراءة
✅ تقليل فرص الأخطاء
✅ معيار شائع في البرمجة الاحترافية
✅ دعم في معظم لغات البرمجة
```

</div>

<div dir="rtl" style="text-align: right;">

### أمثلة إضافية

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;
    
    x += 5;    // x = x + 5 → 10
    y *= 2;    // y = y * 2 → 6
    x -= y;    // x = x - y → 4
    y /= 2;    // y = y / 2 → 3
    
    cout << "x: " << x << ", y: " << y << endl;
    
    return 0;
}
```

**Output:** `x: 4, y: 3`
</div>

<div dir="rtl" style="text-align: right;">

---

## الخلاصة

### المشغلات المتاحة:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 += الجمع مع التعيين
🎯 -= الطرح مع التعيين  
🎯 *= الضرب مع التعيين
🎯 /= القسمة مع التعيين
🎯 %= باقي القسمة مع التعيين
🔤 جميعها تعمل على تحديث المتغير الأيسر
⚡ توفر الوقت وتجعل الكود أنظف
💡 معيار احترافي في البرمجة
```
</div>

<div dir="rtl" style="text-align: right;">

### نصيحة عملية:
> **"تعود على استخدام المشغلات المختصرة فهي ليست مجرد اختصار للكتابة، بل أسلوب برمجة احترافي يوفر الوقت ويقلل الأخطاء"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Assignment Operators in C++
## Assignment Operators

## Introduction

In this lesson, we will learn how to use shorthand assignment operators in C++, which save time and effort in writing code and make programming more efficient.

---

## Basic Operators

### Shorthand Operators 🎯

Instead of writing long assignments, you can use these shorthand operators:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    A += B;  // instead of A = A + B
    A -= B;  // instead of A = A - B  
    A *= B;  // instead of A = A * B
    A /= B;  // instead of A = A / B
    A %= B;  // instead of A = A % B
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### Comparison Between Methods

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Long Method           Shorthand Method
A = A + B           →   A += B
A = A - B           →   A -= B
A = A * B           →   A *= B
A = A / B           →   A /= B
A = A % B           →   A %= B
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Practical Application

### Detailed Example from Lecture

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    cout << "Initial values - A: " << A << ", B: " << B << endl;
    
    A += B;  // A = A + B → 10 + 20 = 30
    cout << "After A += B: " << A << endl;
    
    A -= B;  // A = A - B → 30 - 20 = 10  
    cout << "After A -= B: " << A << endl;
    
    A *= B;  // A = A * B → 10 * 20 = 200
    cout << "After A *= B: " << A << endl;
    
    A /= B;  // A = A / B → 200 / 20 = 10
    cout << "After A /= B: " << A << endl;
    
    A %= B;  // A = A % B → 10 % 20 = 10
    cout << "After A %= B: " << A << endl;
    
    return 0;
}
```

**Output:**
```
Initial values - A: 10, B: 20
After A += B: 30
After A -= B: 10
After A *= B: 200
After A /= B: 10
After A %= B: 10
```
</div>

<div dir="rtl" style="text-align: right;">

### Step-by-Step Explanation

1. **`A += B`**: `A = 10 + 20 = 30`
2. **`A -= B`**: `A = 30 - 20 = 10`
3. **`A *= B`**: `A = 10 × 20 = 200`
4. **`A /= B`**: `A = 200 ÷ 20 = 10`
5. **`A %= B`**: `A = 10 % 20 = 10` (modulus operation)

---

## Benefits of Usage

### Why Use Shorthand Operators?

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Save time in writing
✅ Cleaner and more readable code
✅ Reduce chances of errors
✅ Common standard in professional programming
✅ Supported in most programming languages
```

</div>

<div dir="rtl" style="text-align: right;">

### Additional Examples

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;
    
    x += 5;    // x = x + 5 → 10
    y *= 2;    // y = y * 2 → 6
    x -= y;    // x = x - y → 4
    y /= 2;    // y = y / 2 → 3
    
    cout << "x: " << x << ", y: " << y << endl;
    
    return 0;
}
```

**Output:** `x: 4, y: 3`
</div>

<div dir="rtl" style="text-align: right;">

---

## Summary

### Available Operators:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 += Addition assignment
🎯 -= Subtraction assignment  
🎯 *= Multiplication assignment
🎯 /= Division assignment
🎯 %= Modulus assignment
🔤 All update the left-hand variable
⚡ Save time and make code cleaner
💡 Professional programming standard
```
</div>

<div dir="rtl" style="text-align: right;">

### Practical Tip:
> **"Get accustomed to using shorthand operators - they're not just typing shortcuts, but a professional programming style that saves time and reduces errors"**

</div>

---
*Anas Chetoui* - `@anaschetoui`