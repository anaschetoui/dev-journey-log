<a id="arabic"></a>
[English ↙](#english)
# Change Vector Elements
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## تغيير عناصر الفيكتور (Vectors)

---

## مقدمة

### 📝 **كيف نغير عناصر الفيكتور؟**

هناك طرق مختلفة لتغيير قيم عناصر الفيكتور، أهمها استخدام Range-based for loop مع Reference.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <vector>
using namespace std;

vector<int> nums = {1, 2, 3, 4, 5};
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الطريقة الأولى: قراءة فقط (بدون تغيير)

### 📝 **استخدام const reference:**

عندما نريد فقط قراءة العناصر بدون تغييرها.

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// قراءة العناصر فقط (لا يمكن التغيير)
for (const int& value : nums) {
    cout << value << " ";  // طباعة فقط
    // value = 10;  // خطأ! لا يمكن التغيير لأنها const
}
// الناتج: 1 2 3 4 5
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **مميزات const reference:**
- **قراءة فقط** ← لا تسمح بتغيير القيم
- **أسرع** ← لا تنشئ نسخاً من القيم
- **آمنة** ← تمنع التغيير غير المقصود

---

## الطريقة الثانية: القراءة والتغيير

### 📝 **استخدام reference بدون const:**

عندما نريد تغيير قيم العناصر.

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// تغيير جميع العناصر
for (int& value : nums) {
    value = 20;  // تغيير كل عنصر إلى 20
}

// طباعة النتيجة بعد التغيير
for (int value : nums) {
    cout << value << " ";
}
// الناتج: 20 20 20 20 20
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **كيف يعمل؟**
- `int& value` ← إنشاء reference للعنصر
- `value = 20` ← تغيير القيمة الأصلية في الفيكتور
- التغيير يظل موجوداً حتى بعد انتهاء الـ loop

---

## مثال كامل يوضح الفرق

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // تعريف فيكتور بأرقام من 1 إلى 5
    vector<int> nums = {1, 2, 3, 4, 5};
    
    cout << "Original vector: ";
    for (const int& val : nums) {
        cout << val << " ";
    }
    cout << endl;  // 1 2 3 4 5
    
    // تغيير جميع العناصر إلى 20
    for (int& val : nums) {
        val = 20;
    }
    
    cout << "After change: ";
    for (const int& val : nums) {
        cout << val << " ";
    }
    cout << endl;  // 20 20 20 20 20
    
    // تغيير كل عنصر إلى ضعفه
    for (int& val : nums) {
        val = val * 2;  // أو val *= 2
    }
    
    cout << "After doubling: ";
    for (const int& val : nums) {
        cout << val << " ";
    }
    cout << endl;  // 40 40 40 40 40
    
    return 0;
}
```

**النتيجة:**
```
Original vector: 1 2 3 4 5
After change: 20 20 20 20 20
After doubling: 40 40 40 40 40
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الفرق بين الطرق المختلفة

### 📊 **مقارنة أنواع الـ for loop:**

| الطريقة | التكرار | المثال | القدرة على التغيير |
|---------|---------|--------|-------------------|
| **القيمة** | `for (int val : nums)` | ينشئ نسخة | ❌ لا يمكن التغيير (النسخة فقط) |
| **Const Reference** | `for (const int& val : nums)` | مرجع ثابت | ❌ لا يمكن التغيير |
| **Reference** | `for (int& val : nums)` | مرجع | ✅ يمكن التغيير |

### ⚠️ **ملاحظة هامة:**
عند استخدام `for (int val : nums)` بدون `&`، يتم إنشاء نسخة من كل عنصر، وأي تغيير يطبق على النسخة فقط وليس على العنصر الأصلي في الفيكتور.

---

## تطبيقات عملية

### 💡 **متى نستخدم كل طريقة؟**

1. **`const int&`** ← عندما نريد فقط قراءة البيانات
   - عرض العناصر
   - البحث في العناصر
   - حساب المجاميع أو المتوسطات

2. **`int&`** ← عندما نريد تعديل البيانات
   - تحديث القيم
   - تطبيق عمليات حسابية
   - تعيين قيم جديدة

3. **`int`** ← عندما نريد التعامل مع نسخ
   - عندما لا نريد التأثير على البيانات الأصلية
   - للعمليات المؤقتة

---

## خلاصة

### 🔑 **القواعد الأساسية:**

1. **استخدم `&`** ← لتجنب نسخ العناصر وتحسين الأداء
2. **استخدم `const`** ← عندما لا تريد التغيير (للأمان)
3. **بدون `const`** ← عندما تريد التغيير
4. **بدون `&`** ← ينشئ نسخة (أبطأ ولا يؤثر على الأصل)

### 🎯 **تذكر:**
- `for (const int& val : nums)` ← للقراءة فقط
- `for (int& val : nums)` ← للقراءة والكتابة
- `for (int val : nums)` ← يعمل على نسخ (ليس الأفضل)

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Change Vector Elements

---

## Introduction

### 📝 **How to Change Vector Elements?**

There are different ways to change vector element values, most importantly using Range-based for loop with Reference.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <vector>
using namespace std;

vector<int> nums = {1, 2, 3, 4, 5};
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Method 1: Read Only (No Change)

### 📝 **Using const reference:**

When we only want to read elements without changing them.

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Reading elements only (cannot change)
for (const int& value : nums) {
    cout << value << " ";  // printing only
    // value = 10;  // Error! Cannot change because it's const
}
// Output: 1 2 3 4 5
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Advantages of const reference:**
- **Read only** ← Does not allow changing values
- **Faster** ← Doesn't create copies of values
- **Safe** ← Prevents unintended changes

---

## Method 2: Read and Change

### 📝 **Using reference without const:**

When we want to change element values.

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Change all elements
for (int& value : nums) {
    value = 20;  // change each element to 20
}

// Print result after change
for (int value : nums) {
    cout << value << " ";
}
// Output: 20 20 20 20 20
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **How it works?**
- `int& value` ← Create reference to element
- `value = 20` ← Change original value in vector
- Change remains even after loop ends

---

## Complete Example Showing the Difference

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Define vector with numbers 1 to 5
    vector<int> nums = {1, 2, 3, 4, 5};
    
    cout << "Original vector: ";
    for (const int& val : nums) {
        cout << val << " ";
    }
    cout << endl;  // 1 2 3 4 5
    
    // Change all elements to 20
    for (int& val : nums) {
        val = 20;
    }
    
    cout << "After change: ";
    for (const int& val : nums) {
        cout << val << " ";
    }
    cout << endl;  // 20 20 20 20 20
    
    // Change each element to double
    for (int& val : nums) {
        val = val * 2;  // or val *= 2
    }
    
    cout << "After doubling: ";
    for (const int& val : nums) {
        cout << val << " ";
    }
    cout << endl;  // 40 40 40 40 40
    
    return 0;
}
```

**Result:**
```
Original vector: 1 2 3 4 5
After change: 20 20 20 20 20
After doubling: 40 40 40 40 40
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Difference Between Different Methods

### 📊 **Comparison of for loop types:**

| Method | Iteration | Example | Ability to Change |
|--------|-----------|---------|-------------------|
| **By Value** | `for (int val : nums)` | Creates copy | ❌ Cannot change (copy only) |
| **Const Reference** | `for (const int& val : nums)` | Constant reference | ❌ Cannot change |
| **Reference** | `for (int& val : nums)` | Reference | ✅ Can change |

### ⚠️ **Important Note:**
When using `for (int val : nums)` without `&`, a copy of each element is created, and any change applies to the copy only, not to the original element in the vector.

---

## Practical Applications

### 💡 **When to use each method?**

1. **`const int&`** ← When we only want to read data
   - Display elements
   - Search in elements
   - Calculate sums or averages

2. **`int&`** ← When we want to modify data
   - Update values
   - Apply arithmetic operations
   - Assign new values

3. **`int`** ← When we want to work with copies
   - When we don't want to affect original data
   - For temporary operations

---

## Summary

### 🔑 **Basic Rules:**

1. **Use `&`** ← To avoid copying elements and improve performance
2. **Use `const`** ← When you don't want to change (for safety)
3. **Without `const`** ← When you want to change
4. **Without `&`** ← Creates copy (slower, doesn't affect original)

### 🎯 **Remember:**
- `for (const int& val : nums)` ← For reading only
- `for (int& val : nums)` ← For reading and writing
- `for (int val : nums)` ← Works on copies (not optimal)

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>