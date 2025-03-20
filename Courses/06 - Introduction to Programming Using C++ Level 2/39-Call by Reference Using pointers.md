<a id="arabic"></a>
[English ↙](#english)
# Call by Reference: Using Pointers
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## استدعاء بالمرجع باستخدام المؤشرات

---

## المراجعة: Swap باستخدام المرجع

### 📝 **الطريقة الأصلية (باستخدام المرجع):**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// باستخدام المرجع
void swapRef(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    int a = 1;
    int b = 2;
    
    cout << "قبل Swap: a = " << a << ", b = " << b << endl;
    swapRef(a, b);
    cout << "بعد Swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}
```

**النتيجة:**
```
قبل Swap: a = 1, b = 2
بعد Swap: a = 2, b = 1
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **كيف تعمل:**
- `int &n1` → مرجع لـ `a`
- `int &n2` → مرجع لـ `b`
- أي تعديل على `n1` أو `n2` يعدل على `a` و `b`

---

## Swap باستخدام المؤشرات

### 📝 **الطريقة الجديدة (باستخدام المؤشرات):**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// باستخدام المؤشرات
void swapPtr(int *n1, int *n2) {
    int temp = *n1;   // احفظ القيمة الأولى
    *n1 = *n2;        // ضع القيمة الثانية في الأولى
    *n2 = temp;       // ضع القيمة المحفوظة في الثانية
}

int main() {
    int a = 1;
    int b = 2;
    
    cout << "قبل Swap: a = " << a << ", b = " << b << endl;
    swapPtr(&a, &b);  // أرسل العناوين
    cout << "بعد Swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}
```

**النتيجة:**
```
قبل Swap: a = 1, b = 2
بعد Swap: a = 2, b = 1
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **كيف تعمل:**
- `int *n1` → مؤشر يخزن عنوان `a`
- `int *n2` → مؤشر يخزن عنوان `b`
- `*n1` → القيمة في العنوان المخزن
- `*n2` → القيمة في العنوان المخزن

---

## الفرق بين الطريقتين

### 📊 **مقارنة البراميتر:**

| العنصر | باستخدام المرجع | باستخدام المؤشر |
|--------|-----------------|-----------------|
| **تعريف الدالة** | `void swap(int &n1, int &n2)` | `void swap(int *n1, int *n2)` |
| **استدعاء الدالة** | `swap(a, b)` | `swap(&a, &b)` |
| **داخل الدالة** | `n1 = n2` | `*n1 = *n2` |
| **المفتاح** | لا حاجة لـ `*` | يجب استخدام `*` |

### 📝 **الفرق في الكود:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// المرجع - أسهل
void swapRef(int &n1, int &n2) {
    int temp = n1;  // مباشر
    n1 = n2;        // مباشر
    n2 = temp;      // مباشر
}

// المؤشر - يتطلب *
void swapPtr(int *n1, int *n2) {
    int temp = *n1;  // يحتاج *
    *n1 = *n2;       // يحتاج *
    *n2 = temp;      // يحتاج *
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## لماذا نستخدم المؤشرات بدلاً من المراجع؟

### 🔍 **المزايا الإضافية للمؤشرات:**

1. **المرونة**: يمكن تغيير ما يشير إليه المؤشر أثناء التنفيذ
2. **القدرة على أن تكون `nullptr`**: يمكن أن لا يشير إلى شيء
3. **التعامل مع المصفوفات**: المؤشرات أفضل مع المصفوفات
4. **الهياكل الديناميكية**: أساسية في هياكل البيانات

### 💡 **مثال على المرونة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void process(int *ptr) {
    if(ptr != nullptr) {  // يمكن التحقق من nullptr
        *ptr = 100;
    }
    
    // يمكن تغيير ptr ليشير إلى مكان آخر
    int y = 200;
    ptr = &y;  // ✅ ممكن مع المؤشر
}

// مع المرجع - لا يمكن
void processRef(int &ref) {
    // لا يمكن التحقق إذا كان مرجعاً صالحاً
    // لا يمكن تغيير ما يشير إليه
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مثال شامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// دالة تستقبل مؤشرات
void modifyWithPointer(int *ptr1, int *ptr2) {
    // تغيير القيم عبر المؤشرات
    *ptr1 = *ptr1 * 2;
    *ptr2 = *ptr2 * 3;
    
    // يمكن تغيير المؤشرات نفسها
    int temp = 99;
    ptr1 = &temp;  // ptr1 يشير الآن إلى temp
    // لكن هذا لا يؤثر على المتغيرات الأصلية
}

int main() {
    int x = 5;
    int y = 10;
    
    cout << "قبل التعديل: x = " << x << ", y = " << y << endl;
    
    modifyWithPointer(&x, &y);  // إرسال العناوين
    
    cout << "بعد التعديل: x = " << x << ", y = " << y << endl;
    
    return 0;
}
```

**النتيجة:**
```
قبل التعديل: x = 5, y = 10
بعد التعديل: x = 10, y = 30
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ملاحظات:**
- `*ptr1 = *ptr1 * 2` → يعدل قيمة `x`
- `ptr1 = &temp` → يغير المؤشر نفسه، لا قيمة `x`

---

## الأخطاء الشائعة

### ❌ **الخطأ 1: نسيان `&` عند الاستدعاء**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void swapPtr(int *n1, int *n2);

int main() {
    int a = 1, b = 2;
    swapPtr(a, b);  // ⚠️ خطأ! يجب &a, &b
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### ❌ **الخطأ 2: نسيان `*` داخل الدالة**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void swapPtr(int *n1, int *n2) {
    int temp = n1;  // ⚠️ خطأ! يجب *n1
    n1 = n2;        // ⚠️ خطأ! يجب *n1 = *n2
    n2 = temp;      // ⚠️ خطأ! يجب *n2 = temp
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## متى نستخدم كل طريقة؟

### ✅ **استخدم المرجع عندما:**

1. **تريد بساطة** في الاستخدام
2. **لن تحتاج** لتغيير ما يشير إليه
3. **تريد تجنب** الأخطاء مع `*`
4. **الدالة تتعدل** على المتغيرات الأصلية

### ✅ **استخدم المؤشر عندما:**

1. **تحتاج مرونة** في تغيير الاتجاه
2. **قد يكون المتغير `nullptr`**
3. **تتعامل مع مصفوفات**
4. **تبني هياكل بيانات** معقدة

---

## الخلاصة

### 🔑 **النقاط الأساسية:**

1. **كلا الطريقتين** تسمح بالتعديل على المتغيرات الأصلية
2. **المرجع أسهل** في الاستخدام
3. **المؤشر أكثر مرونة** وقوة

### 💡 **القواعد العملية:**

1. **للاستدعاء بالمرجع** → أرسل المتغيرات مباشرة
2. **للاستدعاء بالمؤشر** → أرسل العناوين باستخدام `&`
3. **داخل الدالة مع المؤشر** → استخدم `*` للوصول للقيم

### 📝 **التذكر:**

> **"المرجع: أرسل القيمة، المؤشر: أرسل العنوان"**

### ⚠️ **التحذير:**

- مع المؤشرات: تذكر `&` عند الإرسال و `*` عند الاستخدام
- تأكد من أن المؤشرات تشير إلى أماكن صالحة



</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Call by Reference: Using Pointers

---

## Review: Swap Using Reference

### 📝 **Original Method (Using Reference):**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Using reference
void swapRef(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    int a = 1;
    int b = 2;
    
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    swapRef(a, b);
    cout << "After Swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}
```

**Result:**
```
Before Swap: a = 1, b = 2
After Swap: a = 2, b = 1
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **How it works:**
- `int &n1` → reference to `a`
- `int &n2` → reference to `b`
- Any modification to `n1` or `n2` modifies `a` and `b`

---

## Swap Using Pointers

### 📝 **New Method (Using Pointers):**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Using pointers
void swapPtr(int *n1, int *n2) {
    int temp = *n1;   // Save first value
    *n1 = *n2;        // Put second value in first
    *n2 = temp;       // Put saved value in second
}

int main() {
    int a = 1;
    int b = 2;
    
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    swapPtr(&a, &b);  // Send addresses
    cout << "After Swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}
```

**Result:**
```
Before Swap: a = 1, b = 2
After Swap: a = 2, b = 1
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **How it works:**
- `int *n1` → pointer storing address of `a`
- `int *n2` → pointer storing address of `b`
- `*n1` → value at stored address
- `*n2` → value at stored address

---

## Difference Between Methods

### 📊 **Parameter Comparison:**

| Element | Using Reference | Using Pointer |
|---------|-----------------|---------------|
| **Function definition** | `void swap(int &n1, int &n2)` | `void swap(int *n1, int *n2)` |
| **Function call** | `swap(a, b)` | `swap(&a, &b)` |
| **Inside function** | `n1 = n2` | `*n1 = *n2` |
| **Key requirement** | No `*` needed | Must use `*` |

### 📝 **Code Difference:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Reference - easier
void swapRef(int &n1, int &n2) {
    int temp = n1;  // Direct
    n1 = n2;        // Direct
    n2 = temp;      // Direct
}

// Pointer - requires *
void swapPtr(int *n1, int *n2) {
    int temp = *n1;  // Needs *
    *n1 = *n2;       // Needs *
    *n2 = temp;      // Needs *
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Why Use Pointers Instead of References?

### 🔍 **Additional Advantages of Pointers:**

1. **Flexibility**: Can change what pointer points to during execution
2. **Can be `nullptr`**: Can point to nothing
3. **Array handling**: Better with arrays
4. **Dynamic structures**: Essential for data structures

### 💡 **Flexibility Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void process(int *ptr) {
    if(ptr != nullptr) {  // Can check for nullptr
        *ptr = 100;
    }
    
    // Can change ptr to point elsewhere
    int y = 200;
    ptr = &y;  // ✅ Possible with pointer
}

// With reference - cannot
void processRef(int &ref) {
    // Cannot check if reference is valid
    // Cannot change what it refers to
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Comprehensive Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Function receiving pointers
void modifyWithPointer(int *ptr1, int *ptr2) {
    // Modify values through pointers
    *ptr1 = *ptr1 * 2;
    *ptr2 = *ptr2 * 3;
    
    // Can change pointers themselves
    int temp = 99;
    ptr1 = &temp;  // ptr1 now points to temp
    // But this doesn't affect original variables
}

int main() {
    int x = 5;
    int y = 10;
    
    cout << "Before modification: x = " << x << ", y = " << y << endl;
    
    modifyWithPointer(&x, &y);  // Send addresses
    
    cout << "After modification: x = " << x << ", y = " << y << endl;
    
    return 0;
}
```

**Result:**
```
Before modification: x = 5, y = 10
After modification: x = 10, y = 30
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Notes:**
- `*ptr1 = *ptr1 * 2` → modifies value of `x`
- `ptr1 = &temp` → changes pointer itself, not value of `x`

---

## Common Errors

### ❌ **Error 1: Forgetting `&` when calling**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void swapPtr(int *n1, int *n2);

int main() {
    int a = 1, b = 2;
    swapPtr(a, b);  // ⚠️ Error! Should be &a, &b
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### ❌ **Error 2: Forgetting `*` inside function**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void swapPtr(int *n1, int *n2) {
    int temp = n1;  // ⚠️ Error! Should be *n1
    n1 = n2;        // ⚠️ Error! Should be *n1 = *n2
    n2 = temp;      // ⚠️ Error! Should be *n2 = temp
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## When to Use Each Method?

### ✅ **Use Reference when:**

1. **You want simplicity** in usage
2. **You won't need** to change what it refers to
3. **You want to avoid** errors with `*`
4. **Function modifies** original variables

### ✅ **Use Pointer when:**

1. **You need flexibility** to change direction
2. **Variable might be `nullptr`**
3. **You handle arrays**
4. **You build complex** data structures

---

## Summary

### 🔑 **Key Points:**

1. **Both methods** allow modification of original variables
2. **Reference is easier** to use
3. **Pointer is more flexible** and powerful

### 💡 **Practical Rules:**

1. **For call by reference** → send variables directly
2. **For call by pointer** → send addresses using `&`
3. **Inside function with pointer** → use `*` to access values

### 📝 **Remember:**

> **"Reference: send value, Pointer: send address"**

### ⚠️ **Warning:**

- With pointers: remember `&` when sending and `*` when using
- Ensure pointers point to valid locations

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>