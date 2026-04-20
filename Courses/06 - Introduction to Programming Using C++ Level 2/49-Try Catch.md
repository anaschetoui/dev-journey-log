# Exception Handling

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## معالجة الاستثناءات (Exception Handling)

---

## مقدمة

### 🔍 **لماذا نحتاج معالجة الاستثناءات؟**

عندما تعمل على أي تطبيق، قد تواجه مشكلتين رئيسيتين:

1. **أخطاء منطقية (Logical Errors)** ← البرنامج يعمل لكن يعطي نتائج خاطئة
2. **تعطل البرنامج (Crashes)** ← البرنامج يغلق فجأة ويتوقف عن العمل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    
    // هذا سيعمل بشكل صحيح
    cout << nums[2] << endl;  // 3
    
    // هذا سيسبب تعطل (Crash)
    cout << nums[5] << endl;  // Crash! البرنامج سيغلق
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## أسباب الاستثناءات

### ⚠️ **متى تحدث الاستثناءات؟**

1. **الوصول لعنصر خارج نطاق الفيكتور** ← مثل `nums[5]` وفيه 5 عناصر فقط
2. **التعامل مع الملفات** ← محاولة فتح ملف غير موجود
3. **مواقف لا تستطيع التحكم بها** ← أي شيء لا تستطيع السيطرة عليه مسبقاً

---

## الحل: Try و Catch

### 📝 **كيف نتعامل مع الاستثناءات؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    
    try {
        // الكود الذي قد يسبب استثناء
        cout << nums.at(5) << endl;
    }
    catch (...) {
        // التعامل مع الاستثناء
        cout << "حدث خطأ: خارج النطاق" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
حدث خطأ: خارج النطاق
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **شرح الكود:**
- **`try`** ← نضع فيه الكود الذي قد يسبب استثناء
- **`catch`** ← نضع فيه الكود الذي يتعامل مع الاستثناء
- البرنامج لم يغلق، بل استمر وعالج الخطأ

---

## متى نستخدم Try و Catch؟

### ✅ **استخدمها عندما:**
- لا تستطيع التحكم في الموقف مسبقاً
- تتعامل مع ملفات (مثل محاولة فتح ملف)
- تريد منع البرنامج من التعطل

### ❌ **لا تستخدمها عندما:**
- تستطيع التحقق من الخطأ مسبقاً (مثل التحقق من النطاق)

---

## مثال مع ملف

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
try {
    // محاولة فتح ملف
    // code for file operations
}
catch (...) {
    cout << "خطأ في فتح الملف" << endl;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## نصائح هامة

### 💡 **تذكر دائماً:**

1. **استخدم Try/Catch للضرورة فقط** ← لأنها تبطئ البرنامج
2. **حاول التحقق من الأخطاء مسبقاً** ← أفضل من استخدام الاستثناءات
3. **لا تستخدمها في كل مكان** ← استخدمها فقط عندما تضطر لذلك

### ⚠️ **مقارنة:**
- **بدون Try/Catch** ← البرنامج يتعطل عند أول خطأ
- **مع Try/Catch** ← تتحكم في الخطأ ويمنع التعطل

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    
    // بدون Try/Catch (سيسبب تعطل)
    // cout << nums[5] << endl;  // هذه ستسبب تعطل
    
    // مع Try/Catch
    try {
        cout << nums.at(5) << endl;
    }
    catch (...) {
        cout << "تم منع التعطل: الفهرس خارج النطاق" << endl;
    }
    
    cout << "البرنامج انتهى بنجاح!" << endl;
    
    return 0;
}
```

**النتيجة:**
```
تم منع التعطل: الفهرس خارج النطاق
البرنامج انتهى بنجاح!
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **الاستثناءات (Exceptions)** ← أخطاء تسبب تعطل البرنامج
2. **Try/Catch** ← طريقة لمنع التعطل والتعامل مع الأخطاء
3. **التحقق المسبق أفضل** ← حاول منع الخطأ قبل حدوثه
4. **استخدم Try/Catch للضرورة فقط** ← لأنها تبطئ البرنامج

### 🎯 **تذكر:**
- البرنامج الجيد هو الذي لا يتعطل
- استخدم Try/Catch عندما لا تستطيع التحكم بالموقف مسبقاً

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Exception Handling

---

## Introduction

### 🔍 **Why Do We Need Exception Handling?**

When working on any application, you may face two main problems:

1. **Logical Errors** ← Program runs but gives wrong results
2. **Crashes** ← Program suddenly closes and stops working

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    
    // This will work correctly
    cout << nums[2] << endl;  // 3
    
    // This will cause a Crash
    cout << nums[5] << endl;  // Crash! Program will close
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Causes of Exceptions

### ⚠️ **When Do Exceptions Occur?**

1. **Accessing element out of vector bounds** ← Like `nums[5]` with only 5 elements
2. **File handling** ← Trying to open a non-existent file
3. **Situations you can't control** ← Anything you can't control beforehand

---

## Solution: Try and Catch

### 📝 **How to Handle Exceptions?**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    
    try {
        // Code that might cause exception
        cout << nums.at(5) << endl;
    }
    catch (...) {
        // Handle the exception
        cout << "Error: Out of range" << endl;
    }
    
    return 0;
}
```

**Result:**
```
Error: Out of range
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Code Explanation:**
- **`try`** ← Put code that might cause exception
- **`catch`** ← Put code that handles the exception
- Program didn't crash, it continued and handled the error

---

## When to Use Try and Catch?

### ✅ **Use Them When:**
- You can't control the situation beforehand
- Dealing with files (like trying to open a file)
- You want to prevent program crashes

### ❌ **Don't Use Them When:**
- You can check for errors beforehand (like bounds checking)

---

## File Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
try {
    // Try to open file
    // code for file operations
}
catch (...) {
    cout << "Error opening file" << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Important Tips

### 💡 **Always Remember:**

1. **Use Try/Catch only when necessary** ← Because they slow down the program
2. **Try to check errors beforehand** ← Better than using exceptions
3. **Don't use them everywhere** ← Use only when you have to

### ⚠️ **Comparison:**
- **Without Try/Catch** ← Program crashes at first error
- **With Try/Catch** ← You control the error and prevent crash

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    
    // Without Try/Catch (will cause crash)
    // cout << nums[5] << endl;  // This would cause crash
    
    // With Try/Catch
    try {
        cout << nums.at(5) << endl;
    }
    catch (...) {
        cout << "Crash prevented: Index out of range" << endl;
    }
    
    cout << "Program finished successfully!" << endl;
    
    return 0;
}
```

**Result:**
```
Crash prevented: Index out of range
Program finished successfully!
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 🔑 **What We Learned Today:**

1. **Exceptions** ← Errors that cause program crashes
2. **Try/Catch** ← Way to prevent crashes and handle errors
3. **Prior checking is better** ← Try to prevent errors before they happen
4. **Use Try/Catch only when necessary** ← Because they slow down the program

### 🎯 **Remember:**
- A good program is one that doesn't crash
- Use Try/Catch when you can't control the situation beforehand

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>