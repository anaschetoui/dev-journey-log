<a id="arabic"></a>
[English ↙](#english)
# Pointers and Arrays

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">
## المؤشرات والمصفوفات


---

## العلاقة بين المؤشرات والمصفوفات

### 🔍 **الحقيقة الأساسية:**

- **اسم المصفوفة** هو **مؤشر ثابت** يشير إلى أول عنصر فيها
- عندما تستخدم اسم المصفوفة بدون `[]`، فهو يعطي عنوان أول عنصر

### 📝 **المثال الأساسي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[4] = {10, 20, 30, 40};
int *ptr = arr;  // ptr يشير إلى أول عنصر في المصفوفة
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ماذا يحدث؟**
- `arr` → عنوان أول عنصر (`arr[0]`)
- `ptr = arr` → `ptr` يشير إلى `arr[0]`

---

## كيف تعمل المؤشرات مع المصفوفات

### 📊 **التمثيل في الذاكرة:**

```
المصفوفة في الذاكرة:
arr[0] = 10  ← العنوان: 0x1000
arr[1] = 20  ← العنوان: 0x1004
arr[2] = 30  ← العنوان: 0x1008
arr[3] = 40  ← العنوان: 0x100C

المؤشر:
ptr = 0x1000  ← يشير إلى arr[0]
```

### 📝 **الوصول إلى العناصر:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[4] = {10, 20, 30, 40};
int *ptr = arr;

// طرق الوصول المختلفة
cout << arr[0];     // 10
cout << *ptr;       // 10 (ptr يشير إلى arr[0])

cout << arr[1];     // 20
cout << *(ptr + 1); // 20 (ptr+1 يشير إلى arr[1])

cout << arr[2];     // 30  
cout << *(ptr + 2); // 30 (ptr+2 يشير إلى arr[2])
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **العلاقة:**
- `ptr` ← يشير إلى `arr[0]`
- `ptr + 1` ← يشير إلى `arr[1]`
- `ptr + 2` ← يشير إلى `arr[2]`
- `ptr + 3` ← يشير إلى `arr[3]`

---

## استخدام المؤشرات للمشي في المصفوفة

### 📝 **مثال: عرض عناصر المصفوفة باستخدام المؤشر:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;  // مؤشر يشير إلى بداية المصفوفة
    
    cout << "=== عناصر المصفوفة ===" << endl;
    
    // الطريقة 1: استخدام المؤشر مباشرة
    for(int i = 0; i < 4; i++) {
        cout << "arr[" << i << "] = " << *(ptr + i) << endl;
    }
    
    cout << "\n=== الطريقة الثانية ===" << endl;
    
    // الطريقة 2: زيادة المؤشر نفسه
    for(int i = 0; i < 4; i++) {
        cout << "العنصر " << i << ": " << *ptr << endl;
        ptr++;  // انتقل إلى العنصر التالي
    }
    
    return 0;
}
```

**النتيجة:**
```
=== عناصر المصفوفة ===
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40

=== الطريقة الثانية ===
العنصر 0: 10
العنصر 1: 20
العنصر 2: 30
العنصر 3: 40
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **الفرق بين الطريقتين:**
1. `*(ptr + i)` → لا يغير قيمة `ptr`
2. `ptr++` → يزيد `ptr` ليشير إلى العنصر التالي

---

## عرض العناوين والقيم

### 📝 **مثال: عرض العناوين والقيم معاً:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;
    
    cout << "=== العناوين والقيم ===" << endl;
    
    for(int i = 0; i < 4; i++) {
        cout << "العنصر " << i << ":" << endl;
        cout << "  العنوان: " << (ptr + i) << endl;
        cout << "  القيمة: " << *(ptr + i) << endl;
        cout << endl;
    }
    
    return 0;
}
```

**نتيجة محتملة:**
```
=== العناوين والقيم ===
العنصر 0:
  العنوان: 0x7ffc...
  القيمة: 10

العنصر 1:
  العنوان: 0x7ffc...  // يزيد 4 بايت
  القيمة: 20

العنصر 2:
  العنوان: 0x7ffc...  // يزيد 4 بايت
  القيمة: 30

العنصر 3:
  العنوان: 0x7ffc...  // يزيد 4 بايت
  القيمة: 40
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ملاحظة مهمة:**
- العناوين تزيد بمقدار **4 بايت** (حجم `int`)
- لأن كل عنصر `int` يأخذ 4 بايت في الذاكرة

---

## التعديل على المصفوفة عبر المؤشر

### 📝 **مثال: تعديل عناصر المصفوفة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;
    
    cout << "قبل التعديل:" << endl;
    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    
    // التعديل عبر المؤشر
    *ptr = 100;        // تعديل arr[0]
    *(ptr + 1) = 200;  // تعديل arr[1]
    *(ptr + 2) = 300;  // تعديل arr[2]
    *(ptr + 3) = 400;  // تعديل arr[3]
    
    cout << "\n\nبعد التعديل:" << endl;
    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
```

**النتيجة:**
```
قبل التعديل:
10 20 30 40

بعد التعديل:
100 200 300 400
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **كيف يعمل:**
1. `*ptr = 100` → يغير `arr[0]` إلى 100
2. `*(ptr + 1) = 200` → يغير `arr[1]` إلى 200
3. وهكذا لباقي العناصر

---

## مقارنة بين طرق الوصول

### 📊 **جدول المقارنة:**

| الطريقة | المثال | الوصف |
|---------|--------|-------|
| **المصفوفة العادية** | `arr[i]` | مباشر وسهل |
| **المؤشر مع الجمع** | `*(ptr + i)` | يستخدم المؤشر مع إزاحة |
| **المؤشر مع الزيادة** | `ptr++` ثم `*ptr` | يغير المؤشر نفسه |
| **اسم المصفوفة كمؤشر** | `*(arr + i)` | اسم المصفوفة يعمل كمؤشر |

### 📝 **مقارنة عملية:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[4] = {10, 20, 30, 40};

// جميعها تعطي نفس النتيجة
cout << arr[1];          // 20
cout << *(arr + 1);      // 20

int *ptr = arr;
cout << *(ptr + 1);      // 20
cout << ptr[1];          // 20 ⭐ مفاجأة!
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### ⭐ **مفاجأة:**
- يمكن استخدام `ptr[1]` كما تستخدم `arr[1]`
- لأن `ptr` مؤشر، ويمكن التعامل معه كمصفوفة!

---

## القواعد الأساسية

### 📝 **القاعدة 1: اسم المصفوفة هو مؤشر ثابت**

```cpp
int arr[4];
// arr هو مؤشر ثابت يشير إلى arr[0]
// لا يمكن تغيير arr (مثل arr = شيء آخر)
```

### 📝 **القاعدة 2: المؤشر يمكن أن يشير إلى المصفوفة**

```cpp
int arr[4];
int *ptr;
ptr = arr;  // صحيح
ptr = &arr[0];  // نفس المعنى
```

### 📝 **القاعدة 3: المؤشر يمكن أن يتحرك في المصفوفة**

```cpp
int arr[4] = {10, 20, 30, 40};
int *ptr = arr;

ptr++;      // الآن يشير إلى arr[1]
ptr += 2;   // الآن يشير إلى arr[3]
```

---

## الخلاصة

### 🔑 **النقاط الأساسية:**

1. **اسم المصفوفة** → مؤشر ثابت لأول عنصر
2. **المؤشر** → يمكن أن يشير إلى أي مكان في المصفوفة
3. `ptr + i` → يشير إلى العنصر رقم `i` من موضع `ptr`

### 💡 **طريقة التذكر:**

> **"المصفوفة اسمها مؤشر، والمؤشر يمشي فيها"**

### 📝 **التطبيقات العملية:**

1. **تمرير مصفوفات إلى دوال** ← أسهل بالمؤشرات
2. **الوصول السريع** ← المؤشرات أسرع أحياناً
3. **الهياكل الديناميكية** ← أساسية للقوائم المرتبطة

### ⚠️ **تحذيرات:**

1. **لا تخرج** عن حدود المصفوفة
2. **تذكر** أن `arr` ثابت لا يتغير
3. **انتبه** للفرق بين `ptr++` و `(*ptr)++`

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Pointers and Arrays

---

## Relationship Between Pointers and Arrays

### 🔍 **Basic Fact:**

- **Array name** is a **constant pointer** pointing to its first element
- When you use array name without `[]`, it gives address of first element

### 📝 **Basic Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[4] = {10, 20, 30, 40};
int *ptr = arr;  // ptr points to first element in array
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **What happens?**
- `arr` → address of first element (`arr[0]`)
- `ptr = arr` → `ptr` points to `arr[0]`

---

## How Pointers Work with Arrays

### 📊 **Memory Representation:**

```
Array in memory:
arr[0] = 10  ← Address: 0x1000
arr[1] = 20  ← Address: 0x1004
arr[2] = 30  ← Address: 0x1008
arr[3] = 40  ← Address: 0x100C

Pointer:
ptr = 0x1000  ← points to arr[0]
```

### 📝 **Accessing Elements:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[4] = {10, 20, 30, 40};
int *ptr = arr;

// Different access methods
cout << arr[0];     // 10
cout << *ptr;       // 10 (ptr points to arr[0])

cout << arr[1];     // 20
cout << *(ptr + 1); // 20 (ptr+1 points to arr[1])

cout << arr[2];     // 30  
cout << *(ptr + 2); // 30 (ptr+2 points to arr[2])
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Relationship:**
- `ptr` ← points to `arr[0]`
- `ptr + 1` ← points to `arr[1]`
- `ptr + 2` ← points to `arr[2]`
- `ptr + 3` ← points to `arr[3]`

---

## Using Pointers to Traverse Array

### 📝 **Example: Display Array Elements Using Pointer:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;  // pointer points to beginning of array
    
    cout << "=== Array Elements ===" << endl;
    
    // Method 1: Using pointer directly
    for(int i = 0; i < 4; i++) {
        cout << "arr[" << i << "] = " << *(ptr + i) << endl;
    }
    
    cout << "\n=== Second Method ===" << endl;
    
    // Method 2: Incrementing pointer itself
    for(int i = 0; i < 4; i++) {
        cout << "Element " << i << ": " << *ptr << endl;
        ptr++;  // move to next element
    }
    
    return 0;
}
```

**Result:**
```
=== Array Elements ===
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40

=== Second Method ===
Element 0: 10
Element 1: 20
Element 2: 30
Element 3: 40
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Difference between methods:**
1. `*(ptr + i)` → doesn't change `ptr` value
2. `ptr++` → increases `ptr` to point to next element

---

## Display Addresses and Values

### 📝 **Example: Display Both Addresses and Values:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;
    
    cout << "=== Addresses and Values ===" << endl;
    
    for(int i = 0; i < 4; i++) {
        cout << "Element " << i << ":" << endl;
        cout << "  Address: " << (ptr + i) << endl;
        cout << "  Value: " << *(ptr + i) << endl;
        cout << endl;
    }
    
    return 0;
}
```

**Possible Result:**
```
=== Addresses and Values ===
Element 0:
  Address: 0x7ffc...
  Value: 10

Element 1:
  Address: 0x7ffc...  // increases by 4 bytes
  Value: 20

Element 2:
  Address: 0x7ffc...  // increases by 4 bytes
  Value: 30

Element 3:
  Address: 0x7ffc...  // increases by 4 bytes
  Value: 40
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Important Note:**
- Addresses increase by **4 bytes** (size of `int`)
- Because each `int` element takes 4 bytes in memory

---

## Modifying Array Through Pointer

### 📝 **Example: Modifying Array Elements:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;
    
    cout << "Before modification:" << endl;
    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    
    // Modify through pointer
    *ptr = 100;        // modify arr[0]
    *(ptr + 1) = 200;  // modify arr[1]
    *(ptr + 2) = 300;  // modify arr[2]
    *(ptr + 3) = 400;  // modify arr[3]
    
    cout << "\n\nAfter modification:" << endl;
    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
```

**Result:**
```
Before modification:
10 20 30 40

After modification:
100 200 300 400
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **How it works:**
1. `*ptr = 100` → changes `arr[0]` to 100
2. `*(ptr + 1) = 200` → changes `arr[1]` to 200
3. And so on for other elements

---

## Comparison Between Access Methods

### 📊 **Comparison Table:**

| Method | Example | Description |
|--------|---------|-------------|
| **Regular array** | `arr[i]` | Direct and easy |
| **Pointer with addition** | `*(ptr + i)` | Uses pointer with offset |
| **Pointer with increment** | `ptr++` then `*ptr` | Changes pointer itself |
| **Array name as pointer** | `*(arr + i)` | Array name works as pointer |

### 📝 **Practical Comparison:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[4] = {10, 20, 30, 40};

// All give same result
cout << arr[1];          // 20
cout << *(arr + 1);      // 20

int *ptr = arr;
cout << *(ptr + 1);      // 20
cout << ptr[1];          // 20 ⭐ Surprise!
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### ⭐ **Surprise:**
- Can use `ptr[1]` like you use `arr[1]`
- Because `ptr` is a pointer, can be treated as array!

---

## Basic Rules

### 📝 **Rule 1: Array name is constant pointer**

```cpp
int arr[4];
// arr is constant pointer pointing to arr[0]
// Cannot change arr (like arr = something else)
```

### 📝 **Rule 2: Pointer can point to array**

```cpp
int arr[4];
int *ptr;
ptr = arr;  // correct
ptr = &arr[0];  // same meaning
```

### 📝 **Rule 3: Pointer can move in array**

```cpp
int arr[4] = {10, 20, 30, 40};
int *ptr = arr;

ptr++;      // now points to arr[1]
ptr += 2;   // now points to arr[3]
```

---

## Summary

### 🔑 **Key Points:**

1. **Array name** → constant pointer to first element
2. **Pointer** → can point anywhere in array
3. `ptr + i` → points to element number `i` from `ptr` position

### 💡 **Memory Aid:**

> **"Array name is pointer, pointer walks in it"**

### 📝 **Practical Applications:**

1. **Passing arrays to functions** ← easier with pointers
2. **Fast access** ← pointers sometimes faster
3. **Dynamic structures** ← essential for linked lists

### ⚠️ **Warnings:**

1. **Don't go beyond** array boundaries
2. **Remember** that `arr` is constant and doesn't change
3. **Be careful** of difference between `ptr++` and `(*ptr)++`

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>