<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# مشغلات المقارنة في لغة C++
## Relational Operators

## مقدمة

في هذا الدرس سنتعلم استخدام مشغلات المقارنة في لغة C++، وهي أدوات أساسية لإجراء المقارنات بين المتغيرات واتخاذ القرارات في البرامج.

---

## المشغلات الأساسية

### مشغلات المقارنة في C++ 🎯

هذه هي مشغلات المقارنة الأساسية المستخدمة للمقارنة بين قيمتين:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    cout << (A == B) << endl;  // التساوي
    cout << (A != B) << endl;  // عدم التساوي
    cout << (A > B) << endl;   // أكبر من
    cout << (A < B) << endl;   // أصغر من
    cout << (A >= B) << endl;  // أكبر من أو يساوي
    cout << (A <= B) << endl;  // أصغر من أو يساوي
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### شرح المشغلات

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المشغل       المعنى            المثال        النتيجة
==         يساوي            10 == 20     false (0)
!=         لا يساوي         10 != 20     true (1)
>          أكبر من          10 > 20      false (0)
<          أصغر من          10 < 20      true (1)
>=         أكبر أو يساوي    10 >= 20     false (0)
<=         أصغر أو يساوي    10 <= 20     true (1)
```

</div>

<div dir="rtl" style="text-align: right;">

---

## التحذير المهم

### الفرق بين = و ==

**خطأ شائع يجب تجنبه:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    // ❌ خطأ - هذا تعيين وليس مقارنة
    if (A = B) {
        cout << "A equals B" << endl;
    }
    
    // ✅ صحيح - هذا مقارنة
    if (A == B) {
        cout << "A equals B" << endl;
    }
    
    return 0;
}
```
</div>

<div dir="rtl" style="text-align: right;">

- **`=`**: تعيين (Assignment) - يخزن قيمة في متغير
- **`==`**: مقارنة (Comparison) - يقارن بين قيمتين

---

## أمثلة عملية

### مثال تفصيلي من المحاضرة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    cout << "A = " << A << ", B = " << B << endl;
    cout << "A == B: " << (A == B) << endl;  // 0 (false)
    cout << "A != B: " << (A != B) << endl;  // 1 (true)
    cout << "A > B: " << (A > B) << endl;    // 0 (false)
    cout << "A < B: " << (A < B) << endl;    // 1 (true)
    cout << "A >= B: " << (A >= B) << endl;  // 0 (false)
    cout << "A <= B: " << (A <= B) << endl;  // 1 (true)
    
    return 0;
}
```

**Output:**
```
A = 10, B = 20
A == B: 0
A != B: 1
A > B: 0
A < B: 1
A >= B: 0
A <= B: 1
```
</div>

<div dir="rtl" style="text-align: right;">

### مثال بقيم متساوية

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 20;
    int B = 20;
    
    cout << "A = " << A << ", B = " << B << endl;
    cout << "A == B: " << (A == B) << endl;  // 1 (true)
    cout << "A != B: " << (A != B) << endl;  // 0 (false)
    cout << "A > B: " << (A > B) << endl;    // 0 (false)
    cout << "A < B: " << (A < B) << endl;    // 0 (false)
    cout << "A >= B: " << (A >= B) << endl;  // 1 (true)
    cout << "A <= B: " << (A <= B) << endl;  // 1 (true)
    
    return 0;
}
```

**Output:**
```
A = 20, B = 20
A == B: 1
A != B: 0
A > B: 0
A < B: 0
A >= B: 1
A <= B: 1
```
</div>

<div dir="rtl" style="text-align: right;">

---

## القيم المرجعة

### فهم النتائج

- **true**: يتم تمثيله بالقيمة **1**
- **false**: يتم تمثيله بالقيمة **0**

---

## الخلاصة

### المشغلات الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 == مقارنة التساوي
🎯 != مقارنة عدم التساوي
🎯 >  أكبر من
🎯 <  أصغر من
🎯 >= أكبر من أو يساوي
🎯 <= أصغر من أو يساوي
🔤 جميعها ترجع true (1) أو false (0)
⚡ احذر من الخلط بين = و ==
💡 أساسية لاتخاذ القرارات في البرامج
```
</div>

<div dir="rtl" style="text-align: right;">

### نصيحة مهمة:
> **"احرص دائماً على استخدام `==` للمقارنات وليس `=`، فالفرق بينهما هو فرق بين المقارنة والتعيين"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Relational Operators in C++
## Relational Operators

## Introduction

In this lesson, we will learn how to use relational operators in C++, which are fundamental tools for comparing variables and making decisions in programs.

---

## Basic Operators

### Relational Operators in C++ 🎯

These are the basic relational operators used to compare two values:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    cout << (A == B) << endl;  // equality
    cout << (A != B) << endl;  // inequality
    cout << (A > B) << endl;   // greater than
    cout << (A < B) << endl;   // less than
    cout << (A >= B) << endl;  // greater than or equal
    cout << (A <= B) << endl;  // less than or equal
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### Operator Explanation

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Operator    Meaning           Example      Result
==         equal to          10 == 20     false (0)
!=         not equal to      10 != 20     true (1)
>          greater than      10 > 20      false (0)
<          less than         10 < 20      true (1)
>=         greater or equal  10 >= 20     false (0)
<=         less or equal     10 <= 20     true (1)
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Important Warning

### Difference Between = and ==

**Common mistake to avoid:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    // ❌ Error - this is assignment not comparison
    if (A = B) {
        cout << "A equals B" << endl;
    }
    
    // ✅ Correct - this is comparison
    if (A == B) {
        cout << "A equals B" << endl;
    }
    
    return 0;
}
```
</div>

<div dir="rtl" style="text-align: right;">

- **`=`**: Assignment - stores a value in a variable
- **`==`**: Comparison - compares two values

---

## Practical Examples

### Detailed Example from Lecture

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    cout << "A = " << A << ", B = " << B << endl;
    cout << "A == B: " << (A == B) << endl;  // 0 (false)
    cout << "A != B: " << (A != B) << endl;  // 1 (true)
    cout << "A > B: " << (A > B) << endl;    // 0 (false)
    cout << "A < B: " << (A < B) << endl;    // 1 (true)
    cout << "A >= B: " << (A >= B) << endl;  // 0 (false)
    cout << "A <= B: " << (A <= B) << endl;  // 1 (true)
    
    return 0;
}
```

**Output:**
```
A = 10, B = 20
A == B: 0
A != B: 1
A > B: 0
A < B: 1
A >= B: 0
A <= B: 1
```
</div>

<div dir="rtl" style="text-align: right;">

### Example with Equal Values

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 20;
    int B = 20;
    
    cout << "A = " << A << ", B = " << B << endl;
    cout << "A == B: " << (A == B) << endl;  // 1 (true)
    cout << "A != B: " << (A != B) << endl;  // 0 (false)
    cout << "A > B: " << (A > B) << endl;    // 0 (false)
    cout << "A < B: " << (A < B) << endl;    // 0 (false)
    cout << "A >= B: " << (A >= B) << endl;  // 1 (true)
    cout << "A <= B: " << (A <= B) << endl;  // 1 (true)
    
    return 0;
}
```

**Output:**
```
A = 20, B = 20
A == B: 1
A != B: 0
A > B: 0
A < B: 0
A >= B: 1
A <= B: 1
```
</div>

<div dir="rtl" style="text-align: right;">

---

## Return Values

### Understanding Results

- **true**: represented by value **1**
- **false**: represented by value **0**

---

## Summary

### Basic Operators:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 == equality comparison
🎯 != inequality comparison
🎯 >  greater than
🎯 <  less than
🎯 >= greater than or equal
🎯 <= less than or equal
🔤 All return true (1) or false (0)
⚡ Be careful not to confuse = and ==
💡 Essential for decision making in programs
```
</div>

<div dir="rtl" style="text-align: right;">

### Important Tip:
> **"Always use `==` for comparisons and not `=`, the difference between them is the difference between comparison and assignment"**

</div>

---
*Anas Chetoui* - `@anaschetoui`