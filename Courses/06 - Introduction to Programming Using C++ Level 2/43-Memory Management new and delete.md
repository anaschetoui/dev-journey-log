<a id="arabic"></a>
[English ↙](#english)
# Memory Management: new and delete
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## إدارة الذاكرة: new و delete

---

## مقدمة

### 🔍 **ما هي إدارة الذاكرة الديناميكية؟**

هي القدرة على حجز وتحرير الذاكرة أثناء وقت تشغيل البرنامج (Runtime)، مما يعطي تحكم كامل في استخدام الذاكرة.

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### ⚠️ **المشكلة في الطريقة العادية:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int x;         // محجوز من بداية البرنامج
float y;       // محجوز من بداية البرنامج
// يظلان محجوزين حتى نهاية البرنامج
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الحل: Dynamic Memory Allocation

### 📝 **كيف تعمل؟**

1. **new** → لإنشاء متغيرات جديدة في وقت التشغيل
2. **delete** → لتحرير الذاكرة بعد الانتهاء من استخدامها

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int* x;        // مؤشر فقط (لم يحجز ذاكرة بعد)
float* y;      // مؤشر فقط (لم يحجز ذاكرة بعد)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## استخدام new

### 📝 **حجز الذاكرة ديناميكياً:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// حجز ذاكرة لـ integer
x = new int;

// حجز ذاكرة لـ float  
y = new float;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 💡 **يمكن استخدامها مع شروط:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
if (condition) {
    x = new int;     // يتم التنفيذ فقط إذا تحقق الشرط
    y = new float;   // يتم التنفيذ فقط إذا تحقق الشرط
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## تعيين القيم والوصول إليها

### 📝 **كيف نعطي قيماً للمتغيرات الجديدة؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
*x = 45;        // تعيين قيمة 45 للمتغير الذي يشير إليه x
*y = 58.35;     // تعيين قيمة 58.35 للمتغير الذي يشير إليه y

// طباعة القيم
cout << *x << endl;    // 45
cout << *y << endl;    // 58.35
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## استخدام delete

### ⚠️ **القاعدة الذهبية:**

> **كل `new` يجب أن يقابله `delete`**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// تحرير الذاكرة بعد الانتهاء من الاستخدام
delete x;       // تحرير ذاكرة الـ integer
delete y;       // تحرير ذاكرة الـ float
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
    // تعريف المؤشرات فقط (لا ذاكرة محجوزة بعد)
    int* x;
    float* y;
    
    // حجز الذاكرة ديناميكياً
    x = new int;     // حجز ذاكرة لـ integer
    y = new float;   // حجز ذاكرة لـ float
    
    // تعيين القيم
    *x = 45;
    *y = 58.35;
    
    // طباعة القيم
    cout << "Integer value: " << *x << endl;
    cout << "Float value: " << *y << endl;
    
    // تحرير الذاكرة (مهم جداً!)
    delete x;
    delete y;
    
    return 0;
}
```

**النتيجة:**
```
Integer value: 45
Float value: 58.35
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الفوائد والمميزات

### ✅ **لماذا نستخدم إدارة الذاكرة الديناميكية؟**

1. **التحكم في الذاكرة** → تحجز فقط ما تحتاجه
2. **الكفاءة** → تحرر الذاكرة فور الانتهاء منها
3. **المرونة** → تنشئ متغيرات حسب الحاجة في الـ Runtime
4. **الأداء** → برامج أسرع وأكثر كفاءة

### 📊 **مقارنة:**

| الطريقة العادية | الطريقة الديناميكية |
|----------------|-------------------|
| `int x;` | `int* x = new int;` |
| محجوز من البداية | محجوز عند الحاجة |
| محجوز حتى نهاية البرنامج | محجوز لفترة محددة |
| غير فعال في استخدام الذاكرة | فعال في استخدام الذاكرة |

---

## القواعد المهمة

### 🔑 **ما يجب تذكره:**

1. **new** → لإنشاء متغيرات جديدة في وقت التشغيل
2. **delete** → لتحرير الذاكرة (ضروري جداً)
3. **كل new يجب أن يقابله delete** ← هذه قاعدة أساسية
4. **بدون pointers** ← لا يوجد dynamic memory allocation

### ⚠️ **تحذير هام:**
إذا نسيت استخدام `delete`، لن تستفيد من مزايا إدارة الذاكرة الديناميكية وسيظل البرنامج يستهلك ذاكرة غير ضرورية.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Memory Management: new and delete

---

## Introduction

### 🔍 **What is Dynamic Memory Management?**

The ability to allocate and free memory during program runtime, giving complete control over memory usage.

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### ⚠️ **Problem with Normal Method:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int x;         // allocated from program start
float y;       // allocated from program start
// Remain allocated until program ends
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Solution: Dynamic Memory Allocation

### 📝 **How It Works:**

1. **new** → to create new variables at runtime
2. **delete** → to free memory after use

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int* x;        // pointer only (no memory allocated yet)
float* y;      // pointer only (no memory allocated yet)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Using new

### 📝 **Dynamic Memory Allocation:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Allocate memory for integer
x = new int;

// Allocate memory for float  
y = new float;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 💡 **Can be used with conditions:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
if (condition) {
    x = new int;     // executed only if condition is true
    y = new float;   // executed only if condition is true
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Assigning Values and Accessing Them

### 📝 **How to give values to new variables?**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
*x = 45;        // assign 45 to variable pointed by x
*y = 58.35;     // assign 58.35 to variable pointed by y

// Printing values
cout << *x << endl;    // 45
cout << *y << endl;    // 58.35
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Using delete

### ⚠️ **Golden Rule:**

> **Every `new` must have a corresponding `delete`**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Free memory after use
delete x;       // free integer memory
delete y;       // free float memory
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
    // Define pointers only (no memory allocated yet)
    int* x;
    float* y;
    
    // Dynamic memory allocation
    x = new int;     // allocate memory for integer
    y = new float;   // allocate memory for float
    
    // Assign values
    *x = 45;
    *y = 58.35;
    
    // Print values
    cout << "Integer value: " << *x << endl;
    cout << "Float value: " << *y << endl;
    
    // Free memory (very important!)
    delete x;
    delete y;
    
    return 0;
}
```

**Result:**
```
Integer value: 45
Float value: 58.35
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Benefits and Advantages

### ✅ **Why Use Dynamic Memory Management?**

1. **Memory Control** → allocate only what you need
2. **Efficiency** → free memory immediately after use
3. **Flexibility** → create variables as needed at Runtime
4. **Performance** → faster and more efficient programs

### 📊 **Comparison:**

| Normal Method | Dynamic Method |
|--------------|----------------|
| `int x;` | `int* x = new int;` |
| Allocated from start | Allocated when needed |
| Allocated until program end | Allocated for limited time |
| Inefficient memory usage | Efficient memory usage |

---

## Important Rules

### 🔑 **What to Remember:**

1. **new** → to create new variables at runtime
2. **delete** → to free memory (very important)
3. **Every new must have a delete** ← basic rule
4. **Without pointers** ← no dynamic memory allocation

### ⚠️ **Important Warning:**
If you forget to use `delete`, you won't benefit from dynamic memory management advantages and the program will continue consuming unnecessary memory.

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>