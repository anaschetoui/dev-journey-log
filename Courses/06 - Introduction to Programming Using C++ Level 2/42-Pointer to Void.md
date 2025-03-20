<a id="arabic"></a>
[English ↙](#english)
# Pointers and Void Pointer
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## المؤشرات والمؤشرات من النوع Void

---

## مقدمة

### 🔍 **المشكلة الأساسية:**

المؤشر العادي له نوع محدد (مثل `int*`، `float*`) ولا يمكنه الإشارة إلا إلى متغيرات من نفس النوع.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int* ptr;      // مؤشر من نوع int
float f1 = 10.5;
ptr = &f1;     // خطأ! لا يمكن لمؤشر int أن يشير إلى float
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الحل: Void Pointer

### 📝 **ما هو Void Pointer؟**

مؤشر من النوع `void` (بدون نوع) يمكنه الإشارة إلى أي نوع من البيانات في وقت التنفيذ.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void* ptr;     // مؤشر من نوع void (عام)
float f1 = 10.5;
int x = 50;

ptr = &f1;     // صحيح! يمكنه الإشارة إلى float
ptr = &x;      // صحيح! يمكنه الإشارة إلى int
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## استخدام Void Pointer

### 📝 **كيفية التعريف والإشارة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void* ptr;      // تعريف مؤشر void
float f1 = 10.5;
int x = 50;

ptr = &f1;      // الإشارة إلى float
cout << ptr << endl;  // طباعة العنوان

ptr = &x;       // تغيير الإشارة إلى int في وقت التنفيذ
cout << ptr << endl;  // طباعة العنوان الجديد
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **النتيجة:**
```
0x64  // عنوان المتغير f1
0x44  // عنوان المتغير x
```

---

## المشكلة: كيفية الوصول للقيمة

### ⚠️ **لا يمكن استخدام المؤشر مباشرة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void* ptr = &f1;
cout << *ptr << endl;  // خطأ! المترجم لا يعرف النوع
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الحل: Static Cast

### 📝 **تحويل النوع صراحةً (Explicit Casting):**

يجب تحويل `void*` إلى النوع الصحيح قبل استخدامه.

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// للإشارة إلى float
cout << *(static_cast<float*>(ptr)) << endl;  // 10.5

// للإشارة إلى int
cout << *(static_cast<int*>(ptr)) << endl;    // 50
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    void* ptr;          // مؤشر void
    int x = 50;         // متغير int
    float f1 = 10.5;    // متغير float
    
    // الإشارة إلى float
    ptr = &f1;
    cout << "Address of f1: " << ptr << endl;
    cout << "Value of f1: " << *(static_cast<float*>(ptr)) << endl;
    
    cout << "---------------" << endl;
    
    // الإشارة إلى int (تغيير في وقت التنفيذ)
    ptr = &x;
    cout << "Address of x: " << ptr << endl;
    cout << "Value of x: " << *(static_cast<int*>(ptr)) << endl;
    
    return 0;
}
```

**النتيجة:**
```
Address of f1: 0x64
Value of f1: 10.5
---------------
Address of x: 0x44
Value of x: 50
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### 🔑 **القواعد المهمة:**

1. **Void Pointer** (`void*`) → مؤشر عام يمكنه الإشارة إلى أي نوع
2. **مشكلته** → لا يمكن الوصول للقيمة مباشرة لأنه لا يعرف النوع
3. **حل المشكلة** → استخدام `static_cast<النوع*>(ptr)`
4. **التغيير في Runtime** → يمكن تغيير ما يشير إليه في وقت التنفيذ

### 💡 **ملاحظات مهمة:**
- `void*` مفيد عندما لا تعرف النوع مسبقاً
- يجب دائماً معرفة النوع عند الوصول للقيمة
- `static_cast` هو تحويل آمن للنوع

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Pointers and Void Pointer

---

## Introduction

### 🔍 **The Basic Problem:**

A regular pointer has a specific type (like `int*`, `float*`) and can only point to variables of the same type.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int* ptr;      // pointer of type int
float f1 = 10.5;
ptr = &f1;     // Error! int pointer cannot point to float
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Solution: Void Pointer

### 📝 **What is Void Pointer?**

A pointer of type `void` (no type) that can point to any data type at runtime.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void* ptr;     // void pointer (generic)
float f1 = 10.5;
int x = 50;

ptr = &f1;     // Correct! Can point to float
ptr = &x;      // Correct! Can point to int
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Using Void Pointer

### 📝 **How to Define and Point:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void* ptr;      // define void pointer
float f1 = 10.5;
int x = 50;

ptr = &f1;      // point to float
cout << ptr << endl;  // print address

ptr = &x;       // change to point to int at runtime
cout << ptr << endl;  // print new address
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Result:**
```
0x64  // address of f1
0x44  // address of x
```

---

## Problem: How to Access the Value

### ⚠️ **Cannot Use Pointer Directly:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void* ptr = &f1;
cout << *ptr << endl;  // Error! Compiler doesn't know the type
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Solution: Static Cast

### 📝 **Explicit Type Casting:**

Must cast `void*` to the correct type before using it.

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// When pointing to float
cout << *(static_cast<float*>(ptr)) << endl;  // 10.5

// When pointing to int
cout << *(static_cast<int*>(ptr)) << endl;    // 50
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    void* ptr;          // void pointer
    int x = 50;         // int variable
    float f1 = 10.5;    // float variable
    
    // Point to float
    ptr = &f1;
    cout << "Address of f1: " << ptr << endl;
    cout << "Value of f1: " << *(static_cast<float*>(ptr)) << endl;
    
    cout << "---------------" << endl;
    
    // Point to int (change at runtime)
    ptr = &x;
    cout << "Address of x: " << ptr << endl;
    cout << "Value of x: " << *(static_cast<int*>(ptr)) << endl;
    
    return 0;
}
```

**Result:**
```
Address of f1: 0x64
Value of f1: 10.5
---------------
Address of x: 0x44
Value of x: 50
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 🔑 **Important Rules:**

1. **Void Pointer** (`void*`) → generic pointer that can point to any type
2. **Its problem** → cannot access value directly because type is unknown
3. **Solution** → use `static_cast<type*>(ptr)`
4. **Change at Runtime** → can change what it points to at runtime

### 💡 **Important Notes:**
- `void*` useful when you don't know the type in advance
- Must always know the type when accessing the value
- `static_cast` is a safe type conversion

</div>

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>