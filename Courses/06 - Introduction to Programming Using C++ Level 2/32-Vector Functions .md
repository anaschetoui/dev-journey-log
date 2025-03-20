# Vector Functions

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## دوال الفيكتور

---

## دوال الوصول إلى العناصر

### 📝 **المثال الأساسي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // إضافة عناصر
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    // عرض العناصر
    cout << "Elements: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
```

**النتيجة:**
```
Elements: 10 20 30 40 50
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 1. `front()` - أول عنصر

### 🔍 **الوصف:**
- ترجع **أول عنصر** في الفيكتور
- مثل العنصر الأول الذي تم إدخاله

### 📝 **مثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

int firstElement = vNumbers.front();
cout << "First element: " << firstElement << endl;
// الناتج: First element: 10
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 2. `back()` - آخر عنصر

### 🔍 **الوصف:**
- ترجع **آخر عنصر** في الفيكتور
- مثل آخر عنصر تم إدخاله

### 📝 **مثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

int lastElement = vNumbers.back();
cout << "Last element: " << lastElement << endl;
// الناتج: Last element: 30
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 3. `size()` - عدد العناصر

### 🔍 **الوصف:**
- ترجع **عدد العناصر** في الفيكتور
- عدد العناصر الحالية

### 📝 **مثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

int elementsCount = vNumbers.size();
cout << "Number of elements: " << elementsCount << endl;
// الناتج: Number of elements: 3
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 4. `capacity()` - السعة التخزينية

### 🔍 **الوصف:**
- ترجع **السعة التخزينية** للفيكتور
- قد تكون أكبر من `size()`
- الفيكتور يحجز مساحة إضافية للنمو

### 📝 **مثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

cout << "Size: " << vNumbers.size() << endl;
cout << "Capacity: " << vNumbers.capacity() << endl;
// الناتج المحتمل:
// Size: 3
// Capacity: 4
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **مقارنة بين `size()` و `capacity()`:**

| الخاصية | الوصف | المثال |
|---------|-------|--------|
| `size()` | عدد العناصر المخزنة فعلياً | 3 عناصر |
| `capacity()` | المساحة المحجوزة في الذاكرة | مساحة لـ 4 عناصر |

---

## 5. `empty()` - التحقق من الفارغ

### 🔍 **الوصف:**
- تتحقق إذا كان الفيكتور **فارغاً**
- ترجع `true` إذا كان فارغاً
- ترجع `false` إذا كان يحتوي عناصر

### 📝 **مثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;

if(vNumbers.empty()) {
    cout << "Vector is empty" << endl;
} else {
    cout << "Vector has elements" << endl;
}
// الناتج: Vector is empty

vNumbers.push_back(10);

if(vNumbers.empty()) {
    cout << "Vector is empty" << endl;
} else {
    cout << "Vector has elements" << endl;
}
// الناتج: Vector has elements
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 6. `clear()` - إزالة جميع العناصر

### 🔍 **الوصف:**
- تزيل **جميع العناصر** من الفيكتور
- `size()` تصبح 0
- `capacity()` تبقى كما هي

### 📝 **مثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

cout << "Before clear - Size: " << vNumbers.size() << endl;
// الناتج: Before clear - Size: 3

vNumbers.clear();

cout << "After clear - Size: " << vNumbers.size() << endl;
// الناتج: After clear - Size: 0
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## ⚠️ **تحذير مهم: الوصول إلى فيكتور فارغ**

### ❌ **خطأ شائع:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;  // فيكتور فارغ

// ⚠️ خطأ! الفيكتور فارغ
int first = vNumbers.front();  // exception
int last = vNumbers.back();    // exception
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### ✅ **الحل الصحيح: التحقق أولاً**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;

// الطريقة الأولى: استخدام empty()
if(!vNumbers.empty()) {
    int first = vNumbers.front();
    int last = vNumbers.back();
    cout << "First: " << first << ", Last: " << last << endl;
} else {
    cout << "Vector is empty" << endl;
}

// الطريقة الثانية: استخدام size()
if(vNumbers.size() > 0) {
    int first = vNumbers.front();
    int last = vNumbers.back();
    cout << "First: " << first << ", Last: " << last << endl;
} else {
    cout << "Vector is empty" << endl;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مثال شامل مع جميع الدوال

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // إضافة عناصر
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    cout << "=== Vector Information ===" << endl;
    cout << "Elements: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // استخدام جميع الدوال
    if(!vNumbers.empty()) {
        cout << "First element: " << vNumbers.front() << endl;
        cout << "Last element: " << vNumbers.back() << endl;
    }
    
    cout << "Size: " << vNumbers.size() << endl;
    cout << "Capacity: " << vNumbers.capacity() << endl;
    cout << "Empty? " << (vNumbers.empty() ? "Yes" : "No") << endl;
    
    // استخدام clear
    vNumbers.clear();
    
    cout << "\n=== After clear ===" << endl;
    cout << "Size: " << vNumbers.size() << endl;
    cout << "Capacity: " << vNumbers.capacity() << endl;
    cout << "Empty? " << (vNumbers.empty() ? "Yes" : "No") << endl;
    
    return 0;
}
```

**النتيجة المحتملة:**
```
=== Vector Information ===
Elements: 10 20 30 40 50 
First element: 10
Last element: 50
Size: 5
Capacity: 8
Empty? No

=== After clear ===
Size: 0
Capacity: 8
Empty? Yes
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### 📊 **جدول ملخص للدوال:**

| الدالة | الوصف | مثال الاستخدام |
|--------|-------|----------------|
| `front()` | أول عنصر في الفيكتور | `v.front()` |
| `back()` | آخر عنصر في الفيكتور | `v.back()` |
| `size()` | عدد العناصر الحالية | `v.size()` |
| `capacity()` | السعة التخزينية | `v.capacity()` |
| `empty()` | التحقق من الفارغ | `v.empty()` |
| `clear()` | إزالة جميع العناصر | `v.clear()` |
| `push_back()` | إضافة عنصر للنهاية | `v.push_back(x)` |
| `pop_back()` | إزالة عنصر من النهاية | `v.pop_back()` |

### 💡 **نصائح مهمة:**

1. **تحقق دائماً** قبل استخدام `front()` أو `back()`
   ```cpp
   if(!v.empty()) {
       // استخدم front() و back() هنا
   }
   ```

2. **تذكر الفرق** بين `size()` و `capacity()`:
   - `size()` → العناصر المخزنة فعلياً
   - `capacity()` → المساحة المحجوزة

3. **استخدم `clear()`** لإزالة جميع العناصر مرة واحدة

4. **الفيكتور يحجز مساحة إضافية** لتجنب إعادة الحجز المتكرر

### ⚠️ **تحذيرات:**

- لا تستخدم `front()` أو `back()` على فيكتور فارغ
- تحقق من `empty()` أو `size() > 0` قبل الوصول للعناصر
- `clear()` لا تحرر الذاكرة المحجوزة (`capacity()` تبقى كما هي)

### 🎯 **النصيحة العملية:**

> **"تحقق دائماً من `empty()` قبل استخدام `front()` أو `back()` لتجنب الأخطاء"**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Vector Functions

---

## Element Access Functions

### 📝 **Basic Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // Add elements
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    // Display elements
    cout << "Elements: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
```

**Output:**
```
Elements: 10 20 30 40 50
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## 1. `front()` - First Element

### 🔍 **Description:**
- Returns **first element** in vector
- Like the first element that was inserted

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

int firstElement = vNumbers.front();
cout << "First element: " << firstElement << endl;
// Output: First element: 10
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## 2. `back()` - Last Element

### 🔍 **Description:**
- Returns **last element** in vector
- Like the last element that was inserted

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

int lastElement = vNumbers.back();
cout << "Last element: " << lastElement << endl;
// Output: Last element: 30
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## 3. `size()` - Number of Elements

### 🔍 **Description:**
- Returns **number of elements** in vector
- Current count of elements

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

int elementsCount = vNumbers.size();
cout << "Number of elements: " << elementsCount << endl;
// Output: Number of elements: 3
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## 4. `capacity()` - Storage Capacity

### 🔍 **Description:**
- Returns **storage capacity** of vector
- May be larger than `size()`
- Vector reserves extra space for growth

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

cout << "Size: " << vNumbers.size() << endl;
cout << "Capacity: " << vNumbers.capacity() << endl;
// Possible Output:
// Size: 3
// Capacity: 4
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Comparison between `size()` and `capacity()`:**

| Property | Description | Example |
|----------|-------------|---------|
| `size()` | Actual stored elements | 3 elements |
| `capacity()` | Reserved memory space | Space for 4 elements |

---

## 5. `empty()` - Check if Empty

### 🔍 **Description:**
- Checks if vector is **empty**
- Returns `true` if empty
- Returns `false` if contains elements

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;

if(vNumbers.empty()) {
    cout << "Vector is empty" << endl;
} else {
    cout << "Vector has elements" << endl;
}
// Output: Vector is empty

vNumbers.push_back(10);

if(vNumbers.empty()) {
    cout << "Vector is empty" << endl;
} else {
    cout << "Vector has elements" << endl;
}
// Output: Vector has elements
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## 6. `clear()` - Remove All Elements

### 🔍 **Description:**
- Removes **all elements** from vector
- `size()` becomes 0
- `capacity()` remains the same

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);

cout << "Before clear - Size: " << vNumbers.size() << endl;
// Output: Before clear - Size: 3

vNumbers.clear();

cout << "After clear - Size: " << vNumbers.size() << endl;
// Output: After clear - Size: 0
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## ⚠️ **Important Warning: Accessing Empty Vector**

### ❌ **Common Mistake:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;  // Empty vector

// ⚠️ Error! Vector is empty
int first = vNumbers.front();  // exception
int last = vNumbers.back();    // exception
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### ✅ **Correct Solution: Check First**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;

// Method 1: Using empty()
if(!vNumbers.empty()) {
    int first = vNumbers.front();
    int last = vNumbers.back();
    cout << "First: " << first << ", Last: " << last << endl;
} else {
    cout << "Vector is empty" << endl;
}

// Method 2: Using size()
if(vNumbers.size() > 0) {
    int first = vNumbers.front();
    int last = vNumbers.back();
    cout << "First: " << first << ", Last: " << last << endl;
} else {
    cout << "Vector is empty" << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Comprehensive Example with All Functions

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // Add elements
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    cout << "=== Vector Information ===" << endl;
    cout << "Elements: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Use all functions
    if(!vNumbers.empty()) {
        cout << "First element: " << vNumbers.front() << endl;
        cout << "Last element: " << vNumbers.back() << endl;
    }
    
    cout << "Size: " << vNumbers.size() << endl;
    cout << "Capacity: " << vNumbers.capacity() << endl;
    cout << "Empty? " << (vNumbers.empty() ? "Yes" : "No") << endl;
    
    // Use clear
    vNumbers.clear();
    
    cout << "\n=== After clear ===" << endl;
    cout << "Size: " << vNumbers.size() << endl;
    cout << "Capacity: " << vNumbers.capacity() << endl;
    cout << "Empty? " << (vNumbers.empty() ? "Yes" : "No") << endl;
    
    return 0;
}
```

**Possible Output:**
```
=== Vector Information ===
Elements: 10 20 30 40 50 
First element: 10
Last element: 50
Size: 5
Capacity: 8
Empty? No

=== After clear ===
Size: 0
Capacity: 8
Empty? Yes
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 📊 **Function Summary Table:**

| Function | Description | Usage Example |
|----------|-------------|---------------|
| `front()` | First element in vector | `v.front()` |
| `back()` | Last element in vector | `v.back()` |
| `size()` | Current element count | `v.size()` |
| `capacity()` | Storage capacity | `v.capacity()` |
| `empty()` | Check if empty | `v.empty()` |
| `clear()` | Remove all elements | `v.clear()` |
| `push_back()` | Add element to end | `v.push_back(x)` |
| `pop_back()` | Remove element from end | `v.pop_back()` |

### 💡 **Important Tips:**

1. **Always check** before using `front()` or `back()`
   ```cpp
   if(!v.empty()) {
       // Use front() and back() here
   }
   ```

2. **Remember the difference** between `size()` and `capacity()`:
   - `size()` → Actually stored elements
   - `capacity()` → Reserved space

3. **Use `clear()`** to remove all elements at once

4. **Vector reserves extra space** to avoid repeated reallocation

### ⚠️ **Warnings:**

- Don't use `front()` or `back()` on empty vector
- Check `empty()` or `size() > 0` before accessing elements
- `clear()` doesn't free reserved memory (`capacity()` remains)

### 🎯 **Practical Advice:**

> **"Always check `empty()` before using `front()` or `back()` to avoid errors"**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>