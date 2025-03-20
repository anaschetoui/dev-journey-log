<a id="arabic"></a>
[English ↙](#english)
## الإشارة العكسية للمؤشرات (Dereferencing)
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## ما معنى Dereferencing؟

### 🔍 **المفهوم الأساسي:**

عندما يكون لدينا مؤشر (Pointer) يشير إلى عنوان في الذاكرة:
- **دون `*`**: نرى العنوان المخزن فقط
- **مع `*`**: نذهب إلى ذلك العنوان ونرى/نعدل القيمة فيه

### 📝 **المثال البسيط:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;      // متغير عادي
int *p = &a;     // مؤشر يحفظ عنوان a

cout << p;       // يظهر العنوان فقط
cout << *p;      // يذهب للعنوان، يجلب القيمة 10
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## التشبيه التوضيحي

### 🗝️ **المؤشر كدفتر عناوين:**

- **المؤشر (`p`)**: دفتر عناوين به عنوان المنزل
- **`*p`**: المفتاح لفتح الباب والدخول إلى المنزل
- **القيمة**: محتويات المنزل

### 🔍 **كيف يعمل:**

1. `int a = 10;` → منزل به الرقم 10
2. `int *p = &a;` → دفتر عناوين مكتوب فيه عنوان المنزل
3. `cout << p;` → نقرأ دفتر العناوين (نرى العنوان فقط)
4. `cout << *p;` → نأخذ المفتاح، نفتح الباب، ندخل المنزل، نرى الرقم 10

---

## التعديل على القيمة عبر المؤشر

### 📝 **المثال العملي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;

// قراءة القيمة
cout << a;      // 10
cout << *p;     // 10

// تغيير القيمة عبر المؤشر
*p = 20;        // نستخدم المفتاح لتغيير محتويات المنزل

// النتيجة
cout << a;      // 20 (تغيرت!)
cout << *p;     // 20
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ما يحدث بالتفصيل:**

1. `*p = 20;` → نأخذ المفتاح (`*`)
2. نذهب إلى العنوان المخزن في `p`
3. نفتح الباب وندخل المنزل
4. نغير الرقم من 10 إلى 20
5. بما أن `a` هو نفس المنزل ← `a` يصبح 20

---

## العلاقة المتبادلة

### 📝 **التأثير المشترك:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;

// التغيير عبر a
a = 30;
cout << *p;     // 30 (تأثرت!)

// التغيير عبر المؤشر
*p = 40;
cout << a;      // 40 (تأثرت!)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **السبب:**

- `p` يشير إلى نفس مكان `a` في الذاكرة
- `a` و `*p` هما **نفس الشيء** ولكن بطرق وصول مختلفة
- أي تعديل على أحدهما يظهر في الآخر

---

## الأخطاء الشائعة

### ❌ **الخطأ: نسيان المفتاح (`*`)**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;

p = 20;  // ⚠️ يحاول وضع 20 مكان العنوان
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### ✅ **الصحيح:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;

*p = 20;  // ✅ يغير القيمة إلى 20
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **الفرق الجوهري:**

- **`p = 20`**: يحاول تغيير العنوان المخزن في المؤشر
- **`*p = 20`**: يغير القيمة في العنوان الحالي

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "قيمة a: " << a << endl;
    cout << "عنوان a: " << &a << endl;
    
    int *p = &a;
    cout << "p (العنوان المخزن): " << p << endl;
    cout << "*p (القيمة في العنوان): " << *p << endl;
    
    *p = 20;
    cout << "\nبعد *p = 20:" << endl;
    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl;
    
    a = 30;
    cout << "\nبعد a = 30:" << endl;
    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl;
    
    return 0;
}
```

**النتيجة:**
```
قيمة a: 10
عنوان a: 0x7ffc...
p (العنوان المخزن): 0x7ffc...
*p (القيمة في العنوان): 10

بعد *p = 20:
a: 20
*p: 20

بعد a = 30:
a: 30
*p: 30
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### 🔑 **النقاط الأساسية:**

1. **`*` مع المؤشر**: مفتاح للوصول إلى القيمة
2. **بدون `*`**: نرى العنوان فقط
3. **مع `*`**: نرى ونعدل القيمة

### 💡 **طريقة التذكر:**

> **المؤشر كدفتر عناوين، النجمه كمفتاح للباب**

### 📝 **القواعد العملية:**

1. **للقراءة من الذاكرة**: `cout << *p;`
2. **للكتابة إلى الذاكرة**: `*p = قيمة;`
3. **الخطأ الشائع**: `p = قيمة;` (ينسى المفتاح)

### ⚠️ **تذكر دائماً:**

المؤشر يخزن العنوان فقط، تحتاج إلى `*` للوصول إلى المحتوى

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Dereferencing

---

## What is Dereferencing?

### 🔍 **Basic Concept:**

When we have a pointer that points to a memory address:
- **Without `*`**: We see only the stored address
- **With `*`**: We go to that address and see/modify the value there

### 📝 **Simple Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;      // Regular variable
int *p = &a;     // Pointer stores address of a

cout << p;       // Shows address only
cout << *p;      // Goes to address, gets value 10
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Illustrative Analogy

### 🗝️ **Pointer as Address Book:**

- **Pointer (`p`)**: Address book with house address
- **`*p`**: Key to open door and enter house
- **Value**: House contents

### 🔍 **How it works:**

1. `int a = 10;` → House with number 10
2. `int *p = &a;` → Address book with house address written
3. `cout << p;` → Read address book (see address only)
4. `cout << *p;` → Take key, open door, enter house, see number 10

---

## Modifying Value Through Pointer

### 📝 **Practical Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;

// Read value
cout << a;      // 10
cout << *p;     // 10

// Change value through pointer
*p = 20;        // Use key to change house contents

// Result
cout << a;      // 20 (changed!)
cout << *p;     // 20
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Detailed process:**

1. `*p = 20;` → Take key (`*`)
2. Go to address stored in `p`
3. Open door and enter house
4. Change number from 10 to 20
5. Since `a` is same house ← `a` becomes 20

---

## Mutual Relationship

### 📝 **Shared Effect:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;

// Change through a
a = 30;
cout << *p;     // 30 (affected!)

// Change through pointer
*p = 40;
cout << a;      // 40 (affected!)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Reason:**

- `p` points to same memory location as `a`
- `a` and `*p` are **the same thing** but with different access methods
- Any change to one appears in the other

---

## Common Errors

### ❌ **Error: Forgetting the key (`*`)**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;

p = 20;  // ⚠️ Tries to put 20 in place of address
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### ✅ **Correct:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;

*p = 20;  // ✅ Changes value to 20
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Essential difference:**

- **`p = 20`**: Tries to change address stored in pointer
- **`*p = 20`**: Changes value at current address

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    
    int *p = &a;
    cout << "p (stored address): " << p << endl;
    cout << "*p (value at address): " << *p << endl;
    
    *p = 20;
    cout << "\nAfter *p = 20:" << endl;
    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl;
    
    a = 30;
    cout << "\nAfter a = 30:" << endl;
    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl;
    
    return 0;
}
```

**Result:**
```
Value of a: 10
Address of a: 0x7ffc...
p (stored address): 0x7ffc...
*p (value at address): 10

After *p = 20:
a: 20
*p: 20

After a = 30:
a: 30
*p: 30
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 🔑 **Key Points:**

1. **`*` with pointer**: Key to access value
2. **Without `*`**: See address only
3. **With `*`**: See and modify value

### 💡 **Memory aid:**

> **Pointer as address book, asterisk as door key**

### 📝 **Practical rules:**

1. **To read from memory**: `cout << *p;`
2. **To write to memory**: `*p = value;`
3. **Common error**: `p = value;` (forgets the key)

### ⚠️ **Always remember:**

Pointer stores address only, need `*` to access content

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>