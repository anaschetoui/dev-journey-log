# Add Elements to Vectors

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

## إضافة عناصر إلى الفيكتورز

---

## طريقة إضافة عناصر: `push_back`

### المكتبة المطلوبة
```cpp
#include <vector>  // ⭐ إلزامي لاستخدام الفيكتور
```

### مثال أساسي

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ⭐ تعريف فيكتور للأعداد الصحيحة
    vector<int> vNumbers;
    
    // ⭐ إضافة عناصر باستخدام push_back
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    // ⭐ عرض العناصر
    for(int &number : vNumbers) {
        cout << number << " ";
    }
    // الإخراج: 10 20 30 40 50
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## كيف يعمل `push_back`؟

### 1. `push_back(10)`
- **ينشئ** عنصر جديد
- **يضيف** الرقم 10 إلى نهاية الفيكتور
- **يتوسع** الفيكتور تلقائياً

### 2. `push_back(20)`
- **ينشئ** عنصر جديد
- **يضيف** الرقم 20 بعد الرقم 10
- **يتوسع** الفيكتور تلقائياً

### 3. تستمر العملية مع 30، 40، 50

### النتيجة النهائية:
```
الفيكتور: [10, 20, 30, 40, 50]
```

---

## Data Structure المستخدمة: Stack

### الفيكتور يستخدم Stack داخلياً

### خصائص Stack:
1. **LIFO** (Last In, First Out)
   - **آخر** عنصر يدخل هو **أول** عنصر يخرج
   - مثل **طبق الأطباق**: تضيف في الأعلى، تزيل من الأعلى

2. **عمليتان رئيسيتان**:
   - **`push_back`** → إضافة عنصر في النهاية
   - **`pop_back`** → إزالة عنصر من النهاية (سنتعلمه لاحقاً)

### مثال توضيحي:
```
push_back(10) → الفيكتور: [10]
push_back(20) → الفيكتور: [10, 20]  
push_back(30) → الفيكتور: [10, 20, 30]
pop_back()    → الفيكتور: [10, 20]   (يزيل 30)
pop_back()    → الفيكتور: [10]       (يزيل 20)
```

---

## إضافة عناصر ديناميكياً أثناء التنفيذ

### مثال: إضافة أرقام متعددة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // ⭐ إضافة 5 أرقام أولية
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    // ⭐ إضافة أرقام أخرى لاحقاً
    vNumbers.push_back(60);
    vNumbers.push_back(70);
    vNumbers.push_back(80);
    vNumbers.push_back(90);
    
    // ⭐ عرض جميع العناصر
    for(int &number : vNumbers) {
        cout << number << " ";
    }
    // الإخراج: 10 20 30 40 50 60 70 80 90
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### ماذا حدث؟
1. **البداية:** فيكتور فارغ `[]`
2. **بعد 5 `push_back`:** `[10, 20, 30, 40, 50]`
3. **بعد 4 `push_back` إضافية:** `[10, 20, 30, 40, 50, 60, 70, 80, 90]`

---

## أنواع البيانات المدعومة مع `push_back`

### يمكن إضافة أي نوع بيانات:

```cpp
vector<int> vInt;
vInt.push_back(100);      // ⭐ أعداد صحيحة

vector<float> vFloat;
vFloat.push_back(3.14f);  // ⭐ أعداد عشرية

vector<double> vDouble;
vDouble.push_back(2.718); // ⭐ أعداد عشرية دقيقة

vector<bool> vBool;
vBool.push_back(true);    // ⭐ قيم منطقية

vector<string> vString;
vString.push_back("Hello"); // ⭐ نصوص
```

---

## مقارنة بين Array و Vector في إضافة العناصر

### Array (مشكلة)
```cpp
int arr[100];  // ⭐ يجب تحديد الحجم مسبقاً
arr[0] = 10;
arr[1] = 20;
arr[2] = 30;
// ⚠️ المشكلة: 97 مكان فارغ في الذاكرة
```

### Vector (حل)
```cpp
vector<int> vNumbers;  // ⭐ لا نحتاج تحديد الحجم
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);
// ✅ الميزة: يستخدم فقط ما يحتاجه
```

---

## مميزات استخدام `push_back` مع الفيكتور

### 1. ديناميكية الحجم
- **لا حاجة** لتحديد الحجم مسبقاً
- **يتوسع** تلقائياً عند الحاجة

### 2. كفاءة الذاكرة
- **لا يضيع** مساحة ذاكرة
- **يستخدم** فقط المساحة المطلوبة

### 3. مرونة عالية
- **يمكن إضافة** أي عدد من العناصر
- **في أي وقت** أثناء تنفيذ البرنامج

### 4. سهولة الاستخدام
- **طريقة واحدة** `push_back()` لجميع الأنواع
- **لا حاجة** لإدارة الذاكرة يدوياً

---

## مثال شامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ⭐ فيكتور فارغ
    vector<int> numbers;
    
    cout << "إضافة عناصر إلى الفيكتور:" << endl;
    
    // ⭐ إضافة عناصر
    numbers.push_back(5);
    cout << "بعد push_back(5): ";
    for(int &n : numbers) cout << n << " ";  // 5
    
    numbers.push_back(15);
    cout << "\nبعد push_back(15): ";
    for(int &n : numbers) cout << n << " ";  // 5 15
    
    numbers.push_back(25);
    cout << "\nبعد push_back(25): ";
    for(int &n : numbers) cout << n << " ";  // 5 15 25
    
    numbers.push_back(35);
    cout << "\nبعد push_back(35): ";
    for(int &n : numbers) cout << n << " ";  // 5 15 25 35
    
    cout << "\n\nالعناصر النهائية: ";
    for(int &n : numbers) cout << n << " ";  // 5 15 25 35
    
    return 0;
}
```

**الإخراج:**
```
إضافة عناصر إلى الفيكتور:
بعد push_back(5): 5 
بعد push_back(15): 5 15 
بعد push_back(25): 5 15 25 
بعد push_back(35): 5 15 25 35 

العناصر النهائية: 5 15 25 35
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### المفاهيم الأساسية:

1. **`push_back()`** → لإضافة عنصر إلى نهاية الفيكتور
2. **Stack** → هيكل البيانات المستخدم داخلياً
3. **LIFO** → مبدأ العمل (آخر يدخل، أول يخرج)

### خطوات استخدام `push_back`:

1. **تعريف الفيكتور**
   ```cpp
   vector<int> vNumbers;
   ```

2. **إضافة العناصر**
   ```cpp
   vNumbers.push_back(10);
   vNumbers.push_back(20);
   ```

3. **العرض**
   ```cpp
   for(int &n : vNumbers) {
       cout << n << " ";
   }
   ```

### قواعد مهمة:

1. **يجب تضمين المكتبة**
   ```cpp
   #include <vector>
   ```

2. **استخدام Reference في الـ Loop**
   ```cpp
   for(int &element : vectorName)  // ✅ أسرع
   for(int element : vectorName)   // ⚠️ أبطأ (نسخ)
   ```

3. **يمكن إضافة أي نوع بيانات**
   ```cpp
   v.push_back(value);  // قيمة من نفس نوع الفيكتور
   ```

### النصيحة العملية:

> **"استخدم `push_back()` لإضافة عناصر إلى الفيكتور ديناميكياً أثناء تنفيذ البرنامج."**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Add Elements to Vectors

---

## Method to Add Elements: `push_back`

### Required Library
```cpp
#include <vector>  // ⭐ Required for using vectors
```

### Basic Example

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ⭐ Define integer vector
    vector<int> vNumbers;
    
    // ⭐ Add elements using push_back
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    // ⭐ Display elements
    for(int &number : vNumbers) {
        cout << number << " ";
    }
    // Output: 10 20 30 40 50
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Does `push_back` Work?

### 1. `push_back(10)`
- **Creates** new element
- **Adds** number 10 to end of vector
- **Expands** vector automatically

### 2. `push_back(20)`
- **Creates** new element
- **Adds** number 20 after number 10
- **Expands** vector automatically

### 3. Process continues with 30, 40, 50

### Final Result:
```
Vector: [10, 20, 30, 40, 50]
```

---

## Data Structure Used: Stack

### Vector uses Stack internally

### Stack Characteristics:
1. **LIFO** (Last In, First Out)
   - **Last** element in is **first** element out
   - Like **stack of plates**: add on top, remove from top

2. **Two Main Operations**:
   - **`push_back`** → add element at end
   - **`pop_back`** → remove element from end (will learn later)

### Illustrative Example:
```
push_back(10) → Vector: [10]
push_back(20) → Vector: [10, 20]  
push_back(30) → Vector: [10, 20, 30]
pop_back()    → Vector: [10, 20]   (removes 30)
pop_back()    → Vector: [10]       (removes 20)
```

---

## Adding Elements Dynamically During Execution

### Example: Adding Multiple Numbers

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // ⭐ Add 5 initial numbers
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    // ⭐ Add more numbers later
    vNumbers.push_back(60);
    vNumbers.push_back(70);
    vNumbers.push_back(80);
    vNumbers.push_back(90);
    
    // ⭐ Display all elements
    for(int &number : vNumbers) {
        cout << number << " ";
    }
    // Output: 10 20 30 40 50 60 70 80 90
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### What Happened?
1. **Start:** Empty vector `[]`
2. **After 5 `push_back`:** `[10, 20, 30, 40, 50]`
3. **After 4 more `push_back`:** `[10, 20, 30, 40, 50, 60, 70, 80, 90]`

---

## Supported Data Types with `push_back`

### Can add any data type:

```cpp
vector<int> vInt;
vInt.push_back(100);      // ⭐ Integers

vector<float> vFloat;
vFloat.push_back(3.14f);  // ⭐ Floating numbers

vector<double> vDouble;
vDouble.push_back(2.718); // ⭐ Double precision

vector<bool> vBool;
vBool.push_back(true);    // ⭐ Boolean values

vector<string> vString;
vString.push_back("Hello"); // ⭐ Strings
```

---

## Comparison Between Array and Vector for Adding Elements

### Array (Problem)
```cpp
int arr[100];  // ⭐ Must specify size in advance
arr[0] = 10;
arr[1] = 20;
arr[2] = 30;
// ⚠️ Problem: 97 empty places in memory
```

### Vector (Solution)
```cpp
vector<int> vNumbers;  // ⭐ Don't need to specify size
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);
// ✅ Advantage: uses only what it needs
```

---

## Advantages of Using `push_back` with Vector

### 1. Dynamic Size
- **No need** to specify size in advance
- **Expands** automatically when needed

### 2. Memory Efficiency
- **Doesn't waste** memory space
- **Uses** only required space

### 3. High Flexibility
- **Can add** any number of elements
- **At any time** during program execution

### 4. Ease of Use
- **Single method** `push_back()` for all types
- **No need** to manage memory manually

---

## Comprehensive Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ⭐ Empty vector
    vector<int> numbers;
    
    cout << "Adding elements to vector:" << endl;
    
    // ⭐ Add elements
    numbers.push_back(5);
    cout << "After push_back(5): ";
    for(int &n : numbers) cout << n << " ";  // 5
    
    numbers.push_back(15);
    cout << "\nAfter push_back(15): ";
    for(int &n : numbers) cout << n << " ";  // 5 15
    
    numbers.push_back(25);
    cout << "\nAfter push_back(25): ";
    for(int &n : numbers) cout << n << " ";  // 5 15 25
    
    numbers.push_back(35);
    cout << "\nAfter push_back(35): ";
    for(int &n : numbers) cout << n << " ";  // 5 15 25 35
    
    cout << "\n\nFinal elements: ";
    for(int &n : numbers) cout << n << " ";  // 5 15 25 35
    
    return 0;
}
```

**Output:**
```
Adding elements to vector:
After push_back(5): 5 
After push_back(15): 5 15 
After push_back(25): 5 15 25 
After push_back(35): 5 15 25 35 

Final elements: 5 15 25 35
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### Core Concepts:

1. **`push_back()`** → to add element to end of vector
2. **Stack** → data structure used internally
3. **LIFO** → working principle (Last In, First Out)

### Steps to Use `push_back`:

1. **Define Vector**
   ```cpp
   vector<int> vNumbers;
   ```

2. **Add Elements**
   ```cpp
   vNumbers.push_back(10);
   vNumbers.push_back(20);
   ```

3. **Display**
   ```cpp
   for(int &n : vNumbers) {
       cout << n << " ";
   }
   ```

### Important Rules:

1. **Must Include Library**
   ```cpp
   #include <vector>
   ```

2. **Use Reference in Loop**
   ```cpp
   for(int &element : vectorName)  // ✅ Faster
   for(int element : vectorName)   // ⚠️ Slower (copy)
   ```

3. **Can Add Any Data Type**
   ```cpp
   v.push_back(value);  // value of same type as vector
   ```

### Practical Advice:

> **"Use `push_back()` to add elements to vector dynamically during program execution."**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>