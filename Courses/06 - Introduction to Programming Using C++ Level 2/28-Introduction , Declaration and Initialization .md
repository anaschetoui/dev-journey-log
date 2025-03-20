# Introduction, Declaration and Initialization of Vectors
<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## ما هو الفيكتور (Vector)؟

**الفيكتور** هو **مصفوفة ديناميكية (Dynamic Array)** في لغة ++C.

---

## المقارنة بين Array و Vector

| Array (مصفوفة) | Vector (فيكتور) |
|----------------|-----------------|
| **حجم ثابت** - يجب تحديد الحجم مسبقاً | **حجم ديناميكي** - يمكن تغيير الحجم أثناء التنفيذ |
| مثال: `int arr[100]` | مثال: `vector<int> v` |
| **يخزن 100 مكان** حتى لو استخدمت 5 فقط | **يتوسع ويتمدد** حسب الحاجة |
| **يضيع الذاكرة** إذا لم تستخدم كل المساحة | **لا يضيع الذاكرة** - يستخدم فقط ما يحتاجه |

---

## تعريف الفيكتور

### المكتبة المطلوبة
```cpp
#include <vector>  // ⭐ إلزامي لاستخدام vectors
```

### الصيغة العامة
```cpp
vector<type> name;
```

### مثال: تعريف فيكتور للأعداد الصحيحة

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>  // ⭐ مكتبة الفيكتور
using namespace std;

int main() {
    // ⭐ تعريف فيكتور للأعداد الصحيحة
    vector<int> vNumbers;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## تهيئة الفيكتور بقيم ابتدائية

### الطريقة الأولى: التهيئة المباشرة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ⭐ تهيئة الفيكتور بقيم ابتدائية
    vector<int> vNumbers = {10, 20, 30, 40, 50};
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

**النتيجة:** الفيكتور يحتوي على 5 عناصر: 10, 20, 30, 40, 50

### كيف يعمل:
- `vector<int>` → فيكتور من نوع `int`
- `vNumbers` → اسم الفيكتور
- `{10, 20, 30, 40, 50}` → القيم الابتدائية
- **الحجم يتحدد تلقائياً** من عدد القيم (5 عناصر)

---

## أنواع البيانات المدعومة في الفيكتور

### يمكن استخدام أي نوع بيانات:
```cpp
vector<int> vInt;        // ⭐ أعداد صحيحة
vector<float> vFloat;    // ⭐ أعداد عشرية  
vector<double> vDouble;  // ⭐ أعداد عشرية دقيقة
vector<bool> vBool;      // ⭐ قيم منطقية
vector<string> vString;  // ⭐ نصوص
vector<Student> vStudent;// ⭐ هياكل (Structures)
```

---

## عرض محتويات الفيكتور باستخدام Range-based For Loop

### الطريقة الأولى: Copy (نسخ) - أبطأ

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers = {10, 20, 30, 40, 50};
    
    // ⭐ الطريقة الأولى: copy (نسخ) - أبطأ
    for(int number : vNumbers) {
        cout << number << " ";
    }
    // الإخراج: 10 20 30 40 50
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### كيف تعمل طريقة Copy:
1. **أول تكرار:** `number = 10` (يتم نسخ 10 من الفيكتور)
2. **ثاني تكرار:** `number = 20` (يتم نسخ 20 من الفيكتور)
3. **ثالث تكرار:** `number = 30` (يتم نسخ 30 من الفيكتور)
4. **رابع تكرار:** `number = 40` (يتم نسخ 40 من الفيكتور)
5. **خامس تكرار:** `number = 50` (يتم نسخ 50 من الفيكتور)

**المشكلة:** كل عنصر يتم **نسخه** إلى متغير جديد `number`، مما يستهلك ذاكرة ووقت.

---

### الطريقة الثانية: Reference (مرجع) - أسرع

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers = {10, 20, 30, 40, 50};
    
    // ⭐ الطريقة الثانية: reference (مرجع) - أسرع
    for(int &number : vNumbers) {
        cout << number << " ";
    }
    // الإخراج: 10 20 30 40 50
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### كيف تعمل طريقة Reference:
1. **أول تكرار:** `&number` → يشير إلى موقع `10` في الذاكرة
2. **ثاني تكرار:** `&number` → يشير إلى موقع `20` في الذاكرة
3. **ثالث تكرار:** `&number` → يشير إلى موقع `30` في الذاكرة
4. **رابع تكرار:** `&number` → يشير إلى موقع `40` في الذاكرة
5. **خامس تكرار:** `&number` → يشير إلى موقع `50` في الذاكرة

**الميزة:** لا يتم نسخ العناصر، بل يتم **الإشارة** إلى مواقعها في الذاكرة مباشرة.

---

## الفرق بين Copy و Reference

| Aspect | Copy (نسخ) | Reference (مرجع) |
|--------|------------|------------------|
| **الكود** | `for(int num : v)` | `for(int &num : v)` |
| **الذاكرة** | يستهلك ذاكرة إضافية | لا يستهلك ذاكرة إضافية |
| **السرعة** | أبطأ (يجب نسخ كل عنصر) | أسرع (إشارة مباشرة) |
| **الاستخدام** | عندما تريد نسخ القيم | عندما تريد تعديل القيم الأصلية |
| **الرمز** | بدون `&` | مع `&` |

---

## متى تستخدم Reference؟

### 1. عندما يكون نوع البيانات كبيراً
```cpp
vector<Student> vStudents;  // ⭐ Student قد يكون كبيراً
for(Student &s : vStudents) // ✅ Reference أفضل
for(Student s : vStudents)  // ❌ Copy سيكون بطيئاً
```

### 2. عندما تريد تعديل القيم الأصلية
```cpp
for(int &num : vNumbers) {
    num = num * 2;  // ⭐ يعدل القيم الأصلية
}
```

### 3. للكفاءة العامة
```cpp
// ✅ الأفضل دائماً (أسرع)
for(auto &element : vectorName)
```

---

## الخلاصة

### المفاهيم الأساسية:

1. **الفيكتور** هو مصفوفة ديناميكية يمكن تغيير حجمها
2. **التعريف** → `vector<type> name`
3. **التهيئة** → `vector<int> v = {1, 2, 3}`
4. **المكتبة** → `#include <vector>`

### أنواع البيانات المدعومة:
- `int`, `float`, `double`, `bool`
- `string`, `char`
- أي `structure` مخصص

### طرق العرض الموصى بها:

```cpp
// ⭐ الطريقة الموصى بها (Reference)
for(auto &element : vectorName) {
    cout << element << " ";
}

// ⭐ أو بشكل واضح لنوع معين
for(int &number : vNumbers) {
    cout << number << " ";
}
```

### النصيحة العملية:

> **"استخدم Reference (`&`) مع range-based for loop للفيكتورز لأنها أسرع ولا تستهلك ذاكرة إضافية."**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Introduction, Declaration and Initialization of Vectors

---

## What is Vector?

**Vector** is a **Dynamic Array** in C++ language.

---

## Comparison Between Array and Vector

| Array | Vector |
|-------|--------|
| **Fixed size** - must specify size in advance | **Dynamic size** - can change size during execution |
| Example: `int arr[100]` | Example: `vector<int> v` |
| **Stores 100 places** even if you use only 5 | **Expands and shrinks** as needed |
| **Wastes memory** if not using all space | **Doesn't waste memory** - uses only what it needs |

---

## Vector Declaration

### Required Library
```cpp
#include <vector>  // ⭐ Required for using vectors
```

### General Syntax
```cpp
vector<type> name;
```

### Example: Integer Vector Declaration

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>  // ⭐ Vector library
using namespace std;

int main() {
    // ⭐ Declare integer vector
    vector<int> vNumbers;
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Initializing Vector with Initial Values

### Method 1: Direct Initialization

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ⭐ Initialize vector with initial values
    vector<int> vNumbers = {10, 20, 30, 40, 50};
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

**Result:** Vector contains 5 elements: 10, 20, 30, 40, 50

### How It Works:
- `vector<int>` → vector of type `int`
- `vNumbers` → vector name
- `{10, 20, 30, 40, 50}` → initial values
- **Size determined automatically** from number of values (5 elements)

---

## Supported Data Types in Vector

### Can use any data type:
```cpp
vector<int> vInt;        // ⭐ Integers
vector<float> vFloat;    // ⭐ Floating numbers  
vector<double> vDouble;  // ⭐ Double precision
vector<bool> vBool;      // ⭐ Boolean values
vector<string> vString;  // ⭐ Strings
vector<Student> vStudent;// ⭐ Structures
```

---

## Displaying Vector Contents Using Range-based For Loop

### Method 1: Copy - Slower

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers = {10, 20, 30, 40, 50};
    
    // ⭐ Method 1: copy - slower
    for(int number : vNumbers) {
        cout << number << " ";
    }
    // Output: 10 20 30 40 50
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### How Copy Method Works:
1. **First iteration:** `number = 10` (copies 10 from vector)
2. **Second iteration:** `number = 20` (copies 20 from vector)
3. **Third iteration:** `number = 30` (copies 30 from vector)
4. **Fourth iteration:** `number = 40` (copies 40 from vector)
5. **Fifth iteration:** `number = 50` (copies 50 from vector)

**Problem:** Each element is **copied** to new variable `number`, consuming memory and time.

---

### Method 2: Reference - Faster

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers = {10, 20, 30, 40, 50};
    
    // ⭐ Method 2: reference - faster
    for(int &number : vNumbers) {
        cout << number << " ";
    }
    // Output: 10 20 30 40 50
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### How Reference Method Works:
1. **First iteration:** `&number` → points to location of `10` in memory
2. **Second iteration:** `&number` → points to location of `20` in memory
3. **Third iteration:** `&number` → points to location of `30` in memory
4. **Fourth iteration:** `&number` → points to location of `40` in memory
5. **Fifth iteration:** `&number` → points to location of `50` in memory

**Advantage:** Elements are not copied, but **referenced** directly in memory.

---

## Difference Between Copy and Reference

| Aspect | Copy | Reference |
|--------|------|-----------|
| **Code** | `for(int num : v)` | `for(int &num : v)` |
| **Memory** | Consumes extra memory | Doesn't consume extra memory |
| **Speed** | Slower (must copy each element) | Faster (direct reference) |
| **Usage** | When you want to copy values | When you want to modify original values |
| **Symbol** | Without `&` | With `&` |

---

## When to Use Reference?

### 1. When data type is large
```cpp
vector<Student> vStudents;  // ⭐ Student might be large
for(Student &s : vStudents) // ✅ Reference better
for(Student s : vStudents)  // ❌ Copy would be slow
```

### 2. When you want to modify original values
```cpp
for(int &num : vNumbers) {
    num = num * 2;  // ⭐ Modifies original values
}
```

### 3. For general efficiency
```cpp
// ✅ Always better (faster)
for(auto &element : vectorName)
```

---

## Summary

### Core Concepts:

1. **Vector** is dynamic array that can change size
2. **Declaration** → `vector<type> name`
3. **Initialization** → `vector<int> v = {1, 2, 3}`
4. **Library** → `#include <vector>`

### Supported Data Types:
- `int`, `float`, `double`, `bool`
- `string`, `char`
- Any custom `structure`

### Recommended Display Methods:

```cpp
// ⭐ Recommended method (Reference)
for(auto &element : vectorName) {
    cout << element << " ";
}

// ⭐ Or clearly for specific type
for(int &number : vNumbers) {
    cout << number << " ";
}
```

### Practical Advice:

> **"Use Reference (`&`) with range-based for loop for vectors because it's faster and doesn't consume extra memory."**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>