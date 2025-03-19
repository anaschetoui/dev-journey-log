<a id="arabic"></a>
[English ↙](#english)

## Setw Manipulator

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## ما هو Setw؟

**Setw** (Set Width) هو manipulator يستخدم لتعيين عرض محدد لعرض البيانات على الشاشة.

---

## المشكلة بدون Setw

### مثال: عرض جدول بدون تنسيق

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Code | Name | Mark" << endl;
    cout << "C101 | Introduction to Programming 1 | 95" << endl;
    cout << "C102 | Computer Hardware | 88" << endl;
    cout << "C1035243 | Network | 75" << endl;
    
    return 0;
}
```

**الإخراج:**
```
Code | Name | Mark
C101 | Introduction to Programming 1 | 95
C102 | Computer Hardware | 88
C1035243 | Network | 75
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

**المشكلة:** الجدول غير مرتب لأن أطوال النصوص مختلفة.

---

## الحل باستخدام Setw

### مثال: عرض جدول مع Setw

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <iomanip>  // ⭐ مكتبة مطلوبة لاستخدام setw
using namespace std;

int main() {
    cout << "-------------------------------------------------" << endl;
    cout << " Code     | Name                          | Mark" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << setw(9) << "C101" << " |" 
         << setw(32) << "Introduction to Programming 1" << " |" 
         << setw(9) << "95" << " |" << endl;
    
    cout << setw(9) << "C102" << " |" 
         << setw(32) << "Computer Hardware" << " |" 
         << setw(9) << "88" << " |" << endl;
    
    cout << setw(9) << "C1035243" << " |" 
         << setw(32) << "Network" << " |" 
         << setw(9) << "75" << " |" << endl;
    
    cout << "-------------------------------------------------" << endl;
    
    return 0;
}
```

**الإخراج:**
```
-------------------------------------------------
 Code     | Name                          | Mark
-------------------------------------------------
     C101 | Introduction to Programming 1 |      95 |
     C102 |         Computer Hardware     |      88 |
 C1035243 |                     Network   |      75 |
-------------------------------------------------
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;>

---

## كيف يعمل Setw؟

### 1. `setw(9)` للكود
```cpp
cout << setw(9) << "C101";
```
- **9** هو عدد الخانات المطلوبة
- **"C101"** طوله 4 أحرف
- **النتيجة:** `"     C101"` (4 مسافات + "C101")

### 2. `setw(32)` للاسم
```cpp
cout << setw(32) << "Introduction to Programming 1";
```
- **32** هو عدد الخانات المطلوبة
- **النص** طوله 28 حرف
- **النتيجة:** `"Introduction to Programming 1"` (4 مسافات + النص)

### 3. `setw(9)` للعلامة
```cpp
cout << setw(9) << "95";
```
- **9** هو عدد الخانات المطلوبة
- **"95"** طوله 2 حرف
- **النتيجة:** `"      95"` (7 مسافات + "95")

---

## قواعد استخدام Setw

### 1. المكتبة المطلوبة
```cpp
#include <iomanip>  // ⭐ إلزامي لاستخدام setw
```

### 2. محاذاة لليمين (Right Alignment)
```cpp
setw(10) << "Text"  // "      Text" (6 مسافات + Text)
```
- **المحاذاة الافتراضية:** يمين
- **يضيف مسافات** على اليسار

### 3. تحديد العرض بناءً على أطول نص
```cpp
setw(9)   // للكود: لأن أطول كود هو "C1035243" (8 أحرف)
setw(32)  // للاسم: لأن أطول اسم هو "Introduction to Programming 1" (28 حرف)
setw(9)   // للعلامة: لأن العلامات كلها مكونة من رقمين
```

---

## فوائد استخدام Setw

### 1. جداول مرتبة
- جميع الأعمدة بنفس العرض
- سهولة قراءة البيانات

### 2. تلقائية التنسيق
- لا حاجة لإضافة مسافات يدوياً
- يتعامل مع نصوص بأطوال مختلفة

### 3. احترافية العرض
- يبدو البرنامج أكثر احترافية
- مناسب للتقارير والجداول

---

## الخلاصة

### المفاهيم الأساسية:

1. **Setw** هو manipulator لتعيين عرض العرض
2. **يستخدم مع** مكتبة `<iomanip>`
3. **محاذاة افتراضية** يمين
4. **يضيف مسافات** على اليسار إذا كان النص أقصر من العرض المحدد

### كيف تختار العرض المناسب:

1. **تحديد أطول نص** في العمود
2. **إضافة مسافة إضافية** للراحة البصرية
3. **استخدام نفس العرض** لكل عنصر في العمود

### مثال:
```cpp
// أطول كود: "C1035243" (8 أحرف)
// نضيف 1 للراحة: 8 + 1 = 9
setw(9) << "C101"
```

### النصيحة العملية:

> **"استخدم Setw لعرض الجداول والبيانات بشكل مرتب واحترافي."**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Setw Manipulator

---

## What is Setw?

**Setw** (Set Width) is a manipulator used to set a specific width for displaying data on screen.

---

## Problem Without Setw

### Example: Display Table Without Formatting

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Code | Name | Mark" << endl;
    cout << "C101 | Introduction to Programming 1 | 95" << endl;
    cout << "C102 | Computer Hardware | 88" << endl;
    cout << "C1035243 | Network | 75" << endl;
    
    return 0;
}
```

**Output:**
```
Code | Name | Mark
C101 | Introduction to Programming 1 | 95
C102 | Computer Hardware | 88
C1035243 | Network | 75
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

**Problem:** Table is not aligned because text lengths are different.

---

## Solution Using Setw

### Example: Display Table With Setw

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <iomanip>  // ⭐ Library required for setw
using namespace std;

int main() {
    cout << "-------------------------------------------------" << endl;
    cout << " Code     | Name                          | Mark" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << setw(9) << "C101" << " |" 
         << setw(32) << "Introduction to Programming 1" << " |" 
         << setw(9) << "95" << " |" << endl;
    
    cout << setw(9) << "C102" << " |" 
         << setw(32) << "Computer Hardware" << " |" 
         << setw(9) << "88" << " |" << endl;
    
    cout << setw(9) << "C1035243" << " |" 
         << setw(32) << "Network" << " |" 
         << setw(9) << "75" << " |" << endl;
    
    cout << "-------------------------------------------------" << endl;
    
    return 0;
}
```

**Output:**
```
-------------------------------------------------
 Code     | Name                          | Mark
-------------------------------------------------
     C101 | Introduction to Programming 1 |      95 |
     C102 |         Computer Hardware     |      88 |
 C1035243 |                     Network   |      75 |
-------------------------------------------------
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Does Setw Work?

### 1. `setw(9)` for Code
```cpp
cout << setw(9) << "C101";
```
- **9** is required number of spaces
- **"C101"** length is 4 characters
- **Result:** `"     C101"` (4 spaces + "C101")

### 2. `setw(32)` for Name
```cpp
cout << setw(32) << "Introduction to Programming 1";
```
- **32** is required number of spaces
- **Text** length is 28 characters
- **Result:** `"Introduction to Programming 1"` (4 spaces + text)

### 3. `setw(9)` for Mark
```cpp
cout << setw(9) << "95";
```
- **9** is required number of spaces
- **"95"** length is 2 characters
- **Result:** `"      95"` (7 spaces + "95")

---

## Rules for Using Setw

### 1. Required Library
```cpp
#include <iomanip>  // ⭐ Mandatory for using setw
```

### 2. Right Alignment
```cpp
setw(10) << "Text"  // "      Text" (6 spaces + Text)
```
- **Default alignment:** right
- **Adds spaces** on left

### 3. Determine Width Based on Longest Text
```cpp
setw(9)   // for code: because longest code is "C1035243" (8 chars)
setw(32)  // for name: because longest name is "Introduction to Programming 1" (28 chars)
setw(9)   // for mark: because all marks are 2 digits
```

---

## Benefits of Using Setw

### 1. Organized Tables
- All columns have same width
- Easy to read data

### 2. Automatic Formatting
- No need to add spaces manually
- Handles texts with different lengths

### 3. Professional Display
- Program looks more professional
- Suitable for reports and tables

---

## Summary

### Core Concepts:

1. **Setw** is a manipulator to set display width
2. **Used with** `<iomanip>` library
3. **Default alignment** right
4. **Adds spaces** on left if text is shorter than specified width

### How to Choose Appropriate Width:

1. **Determine longest text** in column
2. **Add extra space** for visual comfort
3. **Use same width** for each element in column

### Example:
```cpp
// Longest code: "C1035243" (8 chars)
// Add 1 for comfort: 8 + 1 = 9
setw(9) << "C101"
```

### Practical Advice:

> **"Use Setw to display tables and data in organized and professional way."**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>