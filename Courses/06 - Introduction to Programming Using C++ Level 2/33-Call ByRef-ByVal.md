# Call ByRef / ByVal Important Review

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## مراجعة مهمة: Call By Reference vs Call By Value

---

## المفاهيم الأساسية

### 🔍 **ما هي المتغيرات في الذاكرة؟**

كل متغير في البرنامج يحتوي على:

1. **الاسم (Name)** → المعرف المستخدم في الكود
2. **القيمة (Value)** → البيانات المخزنة
3. **العنوان (Address)** → موقع التخزين في الذاكرة

### 📝 **مثال توضيحي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **في الذاكرة:**

| العنصر | المثال | الوصف |
|--------|--------|-------|
| **الاسم** | `a` | المعرف المستخدم |
| **القيمة** | `10` | البيانات المخزنة |
| **العنوان** | `0x7fff...` | موقع في الذاكرة |

---

## Call By Value (تمرير بالقيمة)

### 📝 **المثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void functionOne(int x) {
    x++;  // تعديل على النسخة
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int a = 10;
    
    cout << "Before function: a = " << a << endl;
    functionOne(a);  // تمرير بالقيمة
    cout << "After function: a = " << a << endl;
    
    return 0;
}
```

**النتيجة:**
```
Before function: a = 10
Inside function: x = 11
After function: a = 10
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **كيف يعمل:**

1. **في main:** 
   - `a = 10` في عنوان ذاكرة معين (مثلاً `0x1000`)

2. **عند استدعاء الدالة:**
   - يتم **إنشاء متغير جديد** `x` في عنوان ذاكرة مختلف (مثلاً `0x2000`)
   - يتم **نسخ قيمة** `a` إلى `x` → `x = 10`

3. **في الدالة:**
   - `x++` → `x = 11` (في `0x2000`)
   - `a` لا تتغير (تبقى `10` في `0x1000`)

4. **بعد الخروج من الدالة:**
   - `x` يتم تدميره (مؤقت)
   - `a` تبقى كما هي `10`

### 📊 **الرسم التوضيحي:**

```
الذاكرة:
0x1000: [a = 10]  ← المتغير الأصلي

عند استدعاء الدالة:
0x1000: [a = 10]
0x2000: [x = 10]  ← نسخة جديدة

في الدالة:
0x1000: [a = 10]
0x2000: [x = 11]  ← تم التعديل على النسخة

بعد الدالة:
0x1000: [a = 10]  ← لم تتغير
0x2000: [x]       ← تم تدميره
```

---

## Call By Reference (تمرير بالمرجع)

### 📝 **المثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void functionOne(int &x) {  // & تعني reference
    x++;  // تعديل على المتغير الأصلي
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int a = 10;
    
    cout << "Before function: a = " << a << endl;
    functionOne(a);  // تمرير بالمرجع
    cout << "After function: a = " << a << endl;
    
    return 0;
}
```

**النتيجة:**
```
Before function: a = 10
Inside function: x = 11
After function: a = 11
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **كيف يعمل:**

1. **في main:** 
   - `a = 10` في عنوان ذاكرة معين (مثلاً `0x1000`)

2. **عند استدعاء الدالة:**
   - **لا يتم إنشاء متغير جديد**
   - `x` يصبح **اسم آخر** لنفس موقع الذاكرة
   - `x` يشير إلى نفس عنوان `a` (`0x1000`)

3. **في الدالة:**
   - `x++` → `x = 11` (في `0x1000`)
   - بما أن `x` و `a` نفس الموقع → `a = 11`

4. **بعد الخروج من الدالة:**
   - `x` يختفي (اسم مؤقت)
   - `a` أصبحت `11`

### 📊 **الرسم التوضيحي:**

```
الذاكرة:
0x1000: [a = 10]  ← المتغير الأصلي

عند استدعاء الدالة:
0x1000: [a = 10, x = 10]  ← نفس الموقع، اسمان مختلفان

في الدالة:
0x1000: [a = 11, x = 11]  ← نفس الموقع، تم التعديل

بعد الدالة:
0x1000: [a = 11]  ← تغيرت القيمة
```

---

## مقارنة شاملة

### 📊 **جدول المقارنة:**

| الجانب | Call By Value | Call By Reference |
|--------|---------------|-------------------|
| **المعامل** | `void func(int x)` | `void func(int &x)` |
| **الذاكرة** | ينشئ نسخة جديدة | يستخدم نفس الموقع |
| **التعديل** | لا يؤثر على الأصل | يؤثر على الأصل |
| **الأداء** | أبطأ (نسخ) | أسرع (لا نسخ) |
| **الاستخدام** | عندما لا نريد التعديل على الأصل | عندما نريد التعديل على الأصل |

### 📝 **مثال مقارنة مباشر:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Call By Value
void incrementByValue(int num) {
    num++;
    cout << "Inside ByValue: " << num << endl;
}

// Call By Reference
void incrementByRef(int &num) {
    num++;
    cout << "Inside ByRef: " << num << endl;
}

int main() {
    int number = 5;
    
    cout << "Original: " << number << endl;
    
    incrementByValue(number);
    cout << "After ByValue: " << number << endl;
    
    incrementByRef(number);
    cout << "After ByRef: " << number << endl;
    
    return 0;
}
```

**النتيجة:**
```
Original: 5
Inside ByValue: 6
After ByValue: 5
Inside ByRef: 6
After ByRef: 6
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## عرض العنوان في الذاكرة

### 📝 **كيفية عرض عنوان المتغير:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    
    return 0;
}
```

**النتيجة:**
```
Value of a: 10
Address of a: 0x7ffc...
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **شرح النتيجة:**
- `a` → تعرض **القيمة** (10)
- `&a` → تعرض **العنوان** في الذاكرة (Hexadecimal)

---

## متى نستخدم كل طريقة؟

### ✅ **استخدم Call By Value عندما:**

1. **لا تحتاج** تعديل المتغير الأصلي
2. البيانات **صغيرة** (int, char, float)
3. تريد **حماية** البيانات الأصلية من التعديل

```cpp
// مثال: حساب مربع عدد
int square(int num) {
    return num * num;  // لا نعدل على num الأصلي
}
```

### ✅ **استخدم Call By Reference عندما:**

1. **تحتاج** تعديل المتغير الأصلي
2. البيانات **كبيرة** (struct, vector, array)
3. تريد **توفير الذاكرة** (لا نسخ)
4. تريد **إرجاع أكثر من قيمة**

```cpp
// مثال: تبديل قيمتين
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;  // نعدل على المتغيرات الأصلية
}
```

---

## مثال عملي: تبديل القيم (Swap)

### 📝 **الطريقة الخاطئة (By Value):**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void swapWrong(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    // ⚠️ التعديل على النسخ فقط
}

int main() {
    int a = 5, b = 10;
    swapWrong(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    // الناتج: a = 5, b = 10  ← لم يتغيرا!
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **الطريقة الصحيحة (By Reference):**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void swapCorrect(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    // ✅ التعديل على المتغيرات الأصلية
}

int main() {
    int a = 5, b = 10;
    swapCorrect(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    // الناتج: a = 10, b = 5  ← تم التبديل!
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### 🔑 **النقاط الرئيسية:**

1. **Call By Value** → **ينسخ** البيانات
   - رمزها: `void func(int x)`
   - التعديلات **لا** تنعكس على الأصل
   - ينشئ متغير جديد في الذاكرة

2. **Call By Reference** → **يشير** إلى البيانات
   - رمزها: `void func(int &x)`
   - التعديلات **تنعكس** على الأصل
   - يستخدم نفس موقع الذاكرة

### 💡 **طريقة التذكر:**

> **"القيمة تننسخ، المرجع يشير"**

### 📝 **ملاحظات مهمة:**

1. **للبيانات الصغيرة** → غالباً By Value
2. **للبيانات الكبيرة** → غالباً By Reference
3. **عند الحاجة للتعديل** → يجب By Reference
4. **للحماية من التعديل** → استخدم By Value

### ⚠️ **تحذيرات:**

- استخدام By Reference مع البيانات الكبيرة يوفر ذاكرة ووقت
- استخدام By Value يحمي البيانات الأصلية
- حدد احتياجك أولاً ثم اختر الطريقة المناسبة

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Call ByRef / ByVal Important Review

---

## Basic Concepts

### 🔍 **What are Variables in Memory?**

Every variable in a program contains:

1. **Name** → Identifier used in code
2. **Value** → Stored data
3. **Address** → Storage location in memory

### 📝 **Illustrative Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **In Memory:**

| Element | Example | Description |
|---------|---------|-------------|
| **Name** | `a` | Identifier used |
| **Value** | `10` | Stored data |
| **Address** | `0x7fff...` | Location in memory |

---

## Call By Value

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void functionOne(int x) {
    x++;  // Modify copy
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int a = 10;
    
    cout << "Before function: a = " << a << endl;
    functionOne(a);  // Call by value
    cout << "After function: a = " << a << endl;
    
    return 0;
}
```

**Output:**
```
Before function: a = 10
Inside function: x = 11
After function: a = 10
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **How it works:**

1. **In main:** 
   - `a = 10` at specific memory address (e.g., `0x1000`)

2. **When calling function:**
   - **Creates new variable** `x` at different address (e.g., `0x2000`)
   - **Copies value** of `a` to `x` → `x = 10`

3. **In function:**
   - `x++` → `x = 11` (at `0x2000`)
   - `a` unchanged (remains `10` at `0x1000`)

4. **After function:**
   - `x` destroyed (temporary)
   - `a` remains `10`

### 📊 **Visual Representation:**

```
Memory:
0x1000: [a = 10]  ← Original variable

When calling function:
0x1000: [a = 10]
0x2000: [x = 10]  ← New copy

In function:
0x1000: [a = 10]
0x2000: [x = 11]  ← Modified copy

After function:
0x1000: [a = 10]  ← Unchanged
0x2000: [x]       ← Destroyed
```

---

## Call By Reference

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void functionOne(int &x) {  // & means reference
    x++;  // Modify original
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int a = 10;
    
    cout << "Before function: a = " << a << endl;
    functionOne(a);  // Call by reference
    cout << "After function: a = " << a << endl;
    
    return 0;
}
```

**Output:**
```
Before function: a = 10
Inside function: x = 11
After function: a = 11
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **How it works:**

1. **In main:** 
   - `a = 10` at specific memory address (e.g., `0x1000`)

2. **When calling function:**
   - **No new variable created**
   - `x` becomes **another name** for same memory location
   - `x` points to same address as `a` (`0x1000`)

3. **In function:**
   - `x++` → `x = 11` (at `0x1000`)
   - Since `x` and `a` same location → `a = 11`

4. **After function:**
   - `x` disappears (temporary name)
   - `a` becomes `11`

### 📊 **Visual Representation:**

```
Memory:
0x1000: [a = 10]  ← Original variable

When calling function:
0x1000: [a = 10, x = 10]  ← Same location, different names

In function:
0x1000: [a = 11, x = 11]  ← Same location, modified

After function:
0x1000: [a = 11]  ← Value changed
```

---

## Comprehensive Comparison

### 📊 **Comparison Table:**

| Aspect | Call By Value | Call By Reference |
|--------|---------------|-------------------|
| **Syntax** | `void func(int x)` | `void func(int &x)` |
| **Memory** | Creates new copy | Uses same location |
| **Modification** | Doesn't affect original | Affects original |
| **Performance** | Slower (copying) | Faster (no copying) |
| **Usage** | When we don't want to modify original | When we want to modify original |

### 📝 **Direct Comparison Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Call By Value
void incrementByValue(int num) {
    num++;
    cout << "Inside ByValue: " << num << endl;
}

// Call By Reference
void incrementByRef(int &num) {
    num++;
    cout << "Inside ByRef: " << num << endl;
}

int main() {
    int number = 5;
    
    cout << "Original: " << number << endl;
    
    incrementByValue(number);
    cout << "After ByValue: " << number << endl;
    
    incrementByRef(number);
    cout << "After ByRef: " << number << endl;
    
    return 0;
}
```

**Output:**
```
Original: 5
Inside ByValue: 6
After ByValue: 5
Inside ByRef: 6
After ByRef: 6
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Displaying Memory Address

### 📝 **How to Display Variable Address:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    
    return 0;
}
```

**Output:**
```
Value of a: 10
Address of a: 0x7ffc...
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Explanation:**
- `a` → shows **value** (10)
- `&a` → shows **address** in memory (Hexadecimal)

---

## When to Use Each Method?

### ✅ **Use Call By Value when:**

1. **Don't need** to modify original variable
2. Data is **small** (int, char, float)
3. Want to **protect** original data from modification

```cpp
// Example: Calculate square
int square(int num) {
    return num * num;  // Don't modify original num
}
```

### ✅ **Use Call By Reference when:**

1. **Need** to modify original variable
2. Data is **large** (struct, vector, array)
3. Want to **save memory** (no copying)
4. Want to **return multiple values**

```cpp
// Example: Swap two values
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;  // Modify original variables
}
```

---

## Practical Example: Swap Values

### 📝 **Wrong Method (By Value):**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void swapWrong(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    // ⚠️ Modifies copies only
}

int main() {
    int a = 5, b = 10;
    swapWrong(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    // Output: a = 5, b = 10  ← Not changed!
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📝 **Correct Method (By Reference):**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void swapCorrect(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    // ✅ Modifies original variables
}

int main() {
    int a = 5, b = 10;
    swapCorrect(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    // Output: a = 10, b = 5  ← Swapped!
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 🔑 **Key Points:**

1. **Call By Value** → **Copies** data
   - Syntax: `void func(int x)`
   - Modifications **don't** reflect on original
   - Creates new variable in memory

2. **Call By Reference** → **References** data
   - Syntax: `void func(int &x)`
   - Modifications **reflect** on original
   - Uses same memory location

### 💡 **Memory Aid:**

> **"Value copies, Reference points"**

### 📝 **Important Notes:**

1. **For small data** → Usually By Value
2. **For large data** → Usually By Reference
3. **When need modification** → Must use By Reference
4. **For protection from modification** → Use By Value

### ⚠️ **Warnings:**

- Using By Reference with large data saves memory and time
- Using By Value protects original data
- Determine your need first, then choose appropriate method


<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>