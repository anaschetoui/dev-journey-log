# Vector Iterators

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## Iterators مع الفيكتور (Vectors)

---

## مقدمة عن الـ Iterators

### 📝 **ما هو الـ Iterator؟**

الـ Iterator هو طريقة للمشي على عناصر الفيكتور باستخدام المؤشرات (Pointers).

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

## تعريف الـ Iterator

### 📝 **كيف نعرف Iterator؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// تعريف iterator
vector<int>::iterator it;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **مكونات التعريف:**
- `vector<int>` ← نوع الفيكتور
- `::iterator` ← نعرف أن هذا iterator
- `it` ← اسم الـ Iterator (يمكن أي اسم)

### ⚠️ **ملاحظة مهمة:**
نوع الـ Iterator يجب أن يكون نفس نوع الفيكتور.

---

## استخدام الـ Iterator في Loop

### 📝 **كيف نستخدم Iterator للمشي على العناصر؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
    cout << *it << " ";
}
// الناتج: 1 2 3 4 5
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **شرح الكود:**
1. **`nums.begin()`** ← يشير إلى العنصر الأول في الفيكتور
2. **`nums.end()`** ← يشير إلى ما بعد العنصر الأخير
3. **`it++`** ← الانتقال للعنصر التالي
4. **`*it`** ← الحصول على قيمة العنصر الحالي

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // تعريف فيكتور بأرقام من 1 إلى 5
    vector<int> nums = {1, 2, 3, 4, 5};
    
    // تعريف iterator
    vector<int>::iterator it;
    
    // استخدام iterator في loop
    cout << "Vector elements: ";
    for (it = nums.begin(); it != nums.end(); it++) {
        cout << *it << " ";
    }
    // الناتج: 1 2 3 4 5
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **الـ Iterator** ← طريقة للمشي على العناصر باستخدام المؤشرات
2. **التعريف** ← `vector<type>::iterator name`
3. **البداية والنهاية** ← `begin()` و `end()`
4. **الوصول للقيمة** ← باستخدام `*` قبل الـ Iterator

### 🎯 **تذكر:**
- الـ Iterator يشبه المؤشر لكن مخصص للفيكتور
- `begin()` → أول عنصر
- `end()` → بعد العنصر الأخير
- `*it` → قيمة العنصر الحالي

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Vector Iterators

---

## Introduction to Iterators

### 📝 **What is an Iterator?**

An Iterator is a way to walk through vector elements using Pointers.

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

## Defining an Iterator

### 📝 **How to Define an Iterator?**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Define iterator
vector<int>::iterator it;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Definition Components:**
- `vector<int>` ← Vector type
- `::iterator` ← Define as iterator
- `it` ← Iterator name (can be any name)

### ⚠️ **Important Note:**
Iterator type must match vector type.

---

## Using Iterator in Loop

### 📝 **How to Use Iterator to Walk Through Elements?**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
    cout << *it << " ";
}
// Output: 1 2 3 4 5
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Code Explanation:**
1. **`nums.begin()`** ← Points to first element in vector
2. **`nums.end()`** ← Points to after last element
3. **`it++`** ← Move to next element
4. **`*it`** ← Get current element value

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Define vector with numbers 1 to 5
    vector<int> nums = {1, 2, 3, 4, 5};
    
    // Define iterator
    vector<int>::iterator it;
    
    // Use iterator in loop
    cout << "Vector elements: ";
    for (it = nums.begin(); it != nums.end(); it++) {
        cout << *it << " ";
    }
    // Output: 1 2 3 4 5
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 🔑 **What We Learned Today:**

1. **Iterator** ← Way to walk through elements using pointers
2. **Definition** ← `vector<type>::iterator name`
3. **Beginning and end** ← `begin()` and `end()`
4. **Access value** ← Using `*` before iterator

### 🎯 **Remember:**
- Iterator is like pointer but specialized for vector
- `begin()` → first element
- `end()` → after last element
- `*it` → current element value

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>