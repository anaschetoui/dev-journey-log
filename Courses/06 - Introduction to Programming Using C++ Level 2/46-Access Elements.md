# Access Vector Elements

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## الوصول لعناصر الفيكتور (Vectors)

---

## مقدمة

### 📝 **ما هو الفيكتور؟**

الفيكتور هو حاوية (container) في C++ تشبه المصفوفة لكنها ديناميكية.

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

## الطريقة الأولى: استخدام `.at()`

### 📝 **كيفية الاستخدام:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << nums.at(0) << endl;  // 1
cout << nums.at(1) << endl;  // 2
cout << nums.at(2) << endl;  // 3
cout << nums.at(3) << endl;  // 4
cout << nums.at(4) << endl;  // 5
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ملاحظة مهمة:**
- إذا حاولت الوصول لفهرس غير موجود مثل `.at(5)`
- سيعطيك **استثناء (exception)** ويتوقف البرنامج

---

## الطريقة الثانية: استخدام الأقواس المربعة `[]`

### 📝 **كيفية الاستخدام:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << nums[0] << endl;  // 1
cout << nums[1] << endl;  // 2
cout << nums[2] << endl;  // 3
cout << nums[3] << endl;  // 4
cout << nums[4] << endl;  // 5
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ملاحظة مهمة:**
- إذا حاولت الوصول لفهرس غير موجود مثل `[5]`
- سيعطيك **بيانات عشوائية (garbage data)**
- قد يستمر البرنامج لكن بنتائج غير صحيحة

---

## الفرق الرئيسي بين الطريقتين

### 📊 **مقارنة:**

| الطريقة | الفهرس الصحيح | الفهرس الخاطئ (مثل 5) |
|---------|---------------|---------------------|
| `.at()` | يعمل بشكل صحيح | **استثناء (exception)** |
| `[]` | يعمل بشكل صحيح | **بيانات عشوائية** |

### ⚠️ **تحذير:**
- الفيكتور فيه 5 عناصر (من 0 إلى 4)
- الفهرس 5 **غير موجود** في الفيكتور
- `.at(5)` يعطيك خطأ واضح
- `[5]` يعطيك بيانات غير صحيحة

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
    
    // استخدام .at() للوصول للعناصر
    cout << "Using .at() method:" << endl;
    cout << nums.at(0) << endl;  // 1
    cout << nums.at(1) << endl;  // 2
    cout << nums.at(2) << endl;  // 3
    cout << nums.at(3) << endl;  // 4
    cout << nums.at(4) << endl;  // 5
    
    cout << "\nUsing [] operator:" << endl;
    // استخدام [] للوصول للعناصر
    cout << nums[0] << endl;  // 1
    cout << nums[1] << endl;  // 2
    cout << nums[2] << endl;  // 3
    cout << nums[3] << endl;  // 4
    cout << nums[4] << endl;  // 5
    
    // تحذير: الفهرس 5 غير موجود!
    // nums.at(5)  ← سيعطي استثناء
    // nums[5]     ← سيعطي بيانات عشوائية
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### 🔑 **ماذا يجب أن تتذكر؟**

1. **طريقتان للوصول** ← `.at()` و `[]`
2. **`.at()` أكثر أماناً** ← يتحقق من الفهرس
3. **`[]` أسرع** ← لكن بدون تحقق
4. **الفهرس يبدأ من 0** ← مثل المصفوفات
5. **لا تخرج عن النطاق** ← تأكد أن الفهرس أقل من `.size()`

### 💡 **نصيحة:**
استخدم `.at()` أثناء التطوير للكشف عن الأخطاء مبكراً، واستخدم `[]` في الكود النهائي إذا كنت متأكداً من صحة الفهارس.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Access Vector Elements

---

## Introduction

### 📝 **What is a Vector?**

A vector is a container in C++ similar to an array but dynamic.

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

## Method 1: Using `.at()`

### 📝 **How to Use:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << nums.at(0) << endl;  // 1
cout << nums.at(1) << endl;  // 2
cout << nums.at(2) << endl;  // 3
cout << nums.at(3) << endl;  // 4
cout << nums.at(4) << endl;  // 5
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Important Note:**
- If you try to access non-existent index like `.at(5)`
- It will give you **exception** and stop the program

---

## Method 2: Using Square Brackets `[]`

### 📝 **How to Use:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << nums[0] << endl;  // 1
cout << nums[1] << endl;  // 2
cout << nums[2] << endl;  // 3
cout << nums[3] << endl;  // 4
cout << nums[4] << endl;  // 5
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Important Note:**
- If you try to access non-existent index like `[5]`
- It will give you **garbage data**
- Program may continue but with wrong results

---

## Main Difference Between Methods

### 📊 **Comparison:**

| Method | Correct Index | Wrong Index (like 5) |
|--------|---------------|---------------------|
| `.at()` | Works correctly | **Exception** |
| `[]` | Works correctly | **Garbage data** |

### ⚠️ **Warning:**
- Vector has 5 elements (0 to 4)
- Index 5 **does not exist** in vector
- `.at(5)` gives clear error
- `[5]` gives incorrect data

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
    
    // Using .at() to access elements
    cout << "Using .at() method:" << endl;
    cout << nums.at(0) << endl;  // 1
    cout << nums.at(1) << endl;  // 2
    cout << nums.at(2) << endl;  // 3
    cout << nums.at(3) << endl;  // 4
    cout << nums.at(4) << endl;  // 5
    
    cout << "\nUsing [] operator:" << endl;
    // Using [] to access elements
    cout << nums[0] << endl;  // 1
    cout << nums[1] << endl;  // 2
    cout << nums[2] << endl;  // 3
    cout << nums[3] << endl;  // 4
    cout << nums[4] << endl;  // 5
    
    // Warning: Index 5 doesn't exist!
    // nums.at(5)  ← will give exception
    // nums[5]     ← will give garbage data
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 🔑 **What to Remember?**

1. **Two access methods** ← `.at()` and `[]`
2. **`.at()` is safer** ← checks index
3. **`[]` is faster** ← but no checking
4. **Index starts at 0** ← like arrays
5. **Don't go out of bounds** ← ensure index < `.size()`

### 💡 **Tip:**
Use `.at()` during development to detect errors early, and use `[]` in final code if you're sure about indices.

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>