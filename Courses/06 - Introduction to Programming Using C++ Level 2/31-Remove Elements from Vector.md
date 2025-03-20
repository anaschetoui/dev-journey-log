# Remove Elements from Vector

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## إزالة عناصر من الفيكتور

---

## طريقة إزالة العناصر: `pop_back`

### 📝 **مثال أساسي:**

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
    
    cout << "قبل الإزالة: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    // الناتج: 10 20 30 40 50
    
    // إزالة عنصر واحد
    vNumbers.pop_back();
    
    cout << "\nبعد pop_back الأولى: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    // الناتج: 10 20 30 40
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## كيف يعمل `pop_back`؟

### 🔍 **مبدأ عمل الفيكتور كـ Stack:**

1. **LIFO** (Last In, First Out)
   - آخر عنصر يدخل هو أول عنصر يخرج
   - مثل **كأس** تضع فيه أشياء

2. **مثال توضيحي:**

```
push_back(10) → [10]
push_back(20) → [10, 20]
push_back(30) → [10, 20, 30]
push_back(40) → [10, 20, 30, 40]
push_back(50) → [10, 20, 30, 40, 50]

pop_back() → [10, 20, 30, 40]    (يزيل 50)
pop_back() → [10, 20, 30]        (يزيل 40)
pop_back() → [10, 20]            (يزيل 30)
pop_back() → [10]                (يزيل 20)
pop_back() → []                  (يزيل 10)
```

### 📝 **مثال كامل:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // إضافة 5 عناصر
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    cout << "العناصر الأصلية: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // إزالة متتالية
    vNumbers.pop_back();  // يزيل 50
    cout << "بعد pop_back الأولى: ";
    for(int num : vNumbers) cout << num << " ";  // 10 20 30 40
    
    vNumbers.pop_back();  // يزيل 40
    cout << "\nبعد pop_back الثانية: ";
    for(int num : vNumbers) cout << num << " ";  // 10 20 30
    
    vNumbers.pop_back();  // يزيل 30
    cout << "\nبعد pop_back الثالثة: ";
    for(int num : vNumbers) cout << num << " ";  // 10 20
    
    vNumbers.pop_back();  // يزيل 20
    cout << "\nبعد pop_back الرابعة: ";
    for(int num : vNumbers) cout << num << " ";  // 10
    
    vNumbers.pop_back();  // يزيل 10
    cout << "\nبعد pop_back الخامسة: ";
    for(int num : vNumbers) cout << num << " ";  // (فارغ)
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## التحقق قبل الإزالة

### ⚠️ **مشكلة الإزالة من فيكتور فارغ:**

```cpp
vector<int> vNumbers;
vNumbers.pop_back();  // ⚠️ خطأ! الفيكتور فارغ
```

### ✅ **الحل: التحقق باستخدام `empty()` أو `size()`**

### 📝 **الطريقة الأولى: استخدام `empty()`**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;

// التحقق قبل الإزالة
if(!vNumbers.empty()) {  // إذا لم يكن فارغاً
    vNumbers.pop_back();
} else {
    cout << "الفيكتور فارغ، لا يمكن الإزالة" << endl;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **الطريقة الثانية: استخدام `size()`**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;

// التحقق قبل الإزالة
if(vNumbers.size() > 0) {  // إذا كان حجمه أكبر من صفر
    vNumbers.pop_back();
} else {
    cout << "الفيكتور فارغ، لا يمكن الإزالة" << endl;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **مقارنة بين `empty()` و `size()`:**

| الدالة | القيمة المعادة | الاستخدام الأمثل |
|--------|----------------|------------------|
| `empty()` | `true` إذا كان فارغ، `false` إذا كان يحتوي عناصر | للتحقق من الفارغ |
| `size()` | عدد العناصر في الفيكتور | لمعرفة الحجم أو التحقق من وجود عناصر |

---

## إزالة جميع العناصر مرة واحدة

### 📝 **استخدام `clear()`:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

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
    
    cout << "قبل clear: ";
    cout << "الحجم = " << vNumbers.size() << endl;
    for(int num : vNumbers) {
        cout << num << " ";
    }
    // الناتج: 10 20 30 40 50
    
    // إزالة جميع العناصر
    vNumbers.clear();
    
    cout << "\nبعد clear: ";
    cout << "الحجم = " << vNumbers.size() << endl;
    for(int num : vNumbers) {
        cout << num << " ";
    }
    // الناتج: (فارغ)
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **مقارنة بين `pop_back()` و `clear()`:**

| العملية | الوصف | المثال |
|---------|-------|--------|
| `pop_back()` | يزيل **عنصراً واحداً** من النهاية | `v.pop_back()` |
| `clear()` | يزيل **جميع العناصر** | `v.clear()` |

---

## مثال شامل مع التحقق

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // إضافة 3 عناصر
    vNumbers.push_back(100);
    vNumbers.push_back(200);
    vNumbers.push_back(300);
    
    cout << "الحالة الأولية:" << endl;
    cout << "الحجم: " << vNumbers.size() << endl;
    cout << "فارغ؟ " << (vNumbers.empty() ? "نعم" : "لا") << endl;
    
    // إزالة آمنة
    while(!vNumbers.empty()) {
        cout << "\nقبل الإزالة - الحجم: " << vNumbers.size();
        cout << " - العناصر: ";
        for(int num : vNumbers) cout << num << " ";
        
        vNumbers.pop_back();
        
        cout << "\nبعد الإزالة - الحجم: " << vNumbers.size();
        cout << " - العناصر: ";
        for(int num : vNumbers) cout << num << " ";
    }
    
    cout << "\n\nالحالة النهائية:" << endl;
    cout << "الحجم: " << vNumbers.size() << endl;
    cout << "فارغ؟ " << (vNumbers.empty() ? "نعم" : "لا") << endl;
    
    return 0;
}
```

**النتيجة:**
```
الحالة الأولية:
الحجم: 3
فارغ؟ لا

قبل الإزالة - الحجم: 3 - العناصر: 100 200 300 
بعد الإزالة - الحجم: 2 - العناصر: 100 200 

قبل الإزالة - الحجم: 2 - العناصر: 100 200 
بعد الإزالة - الحجم: 1 - العناصر: 100 

قبل الإزالة - الحجم: 1 - العناصر: 100 
بعد الإزالة - الحجم: 0 - العناصر: 

الحالة النهائية:
الحجم: 0
فارغ؟ نعم
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### الدوال الأساسية للإزالة:

1. **`pop_back()`** → يزيل **عنصراً واحداً** من النهاية
   ```cpp
   vNumbers.pop_back();
   ```

2. **`clear()`** → يزيل **جميع العناصر**
   ```cpp
   vNumbers.clear();
   ```

### دوال التحقق:

1. **`empty()`** → يتحقق إذا كان الفيكتور فارغاً
   ```cpp
   if(!vNumbers.empty()) {
       vNumbers.pop_back();
   }
   ```

2. **`size()`** → يعيد عدد العناصر
   ```cpp
   if(vNumbers.size() > 0) {
       vNumbers.pop_back();
   }
   ```

### القواعد المهمة:

1. **تحقق دائماً** قبل استخدام `pop_back()`
2. **استخدم `empty()`** للتحقق من الفارغ
3. **استخدم `clear()`** لإزالة جميع العناصر مرة واحدة
4. **تذكر مبدأ LIFO** → آخر عنصر يدخل هو أول عنصر يخرج

### النصيحة العملية:

> **"تحقق دائماً من `empty()` قبل `pop_back()` لتجنب الأخطاء"**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Remove Elements from Vector

---

## Method to Remove Elements: `pop_back`

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
    
    cout << "Before removal: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    // Output: 10 20 30 40 50
    
    // Remove one element
    vNumbers.pop_back();
    
    cout << "\nAfter first pop_back: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    // Output: 10 20 30 40
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Does `pop_back` Work?

### 🔍 **Vector as Stack Principle:**

1. **LIFO** (Last In, First Out)
   - Last element in is first element out
   - Like a **cup** where you put things

2. **Illustrative Example:**

```
push_back(10) → [10]
push_back(20) → [10, 20]
push_back(30) → [10, 20, 30]
push_back(40) → [10, 20, 30, 40]
push_back(50) → [10, 20, 30, 40, 50]

pop_back() → [10, 20, 30, 40]    (removes 50)
pop_back() → [10, 20, 30]        (removes 40)
pop_back() → [10, 20]            (removes 30)
pop_back() → [10]                (removes 20)
pop_back() → []                  (removes 10)
```

### 📝 **Complete Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // Add 5 elements
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    cout << "Original elements: ";
    for(int num : vNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Sequential removal
    vNumbers.pop_back();  // removes 50
    cout << "After first pop_back: ";
    for(int num : vNumbers) cout << num << " ";  // 10 20 30 40
    
    vNumbers.pop_back();  // removes 40
    cout << "\nAfter second pop_back: ";
    for(int num : vNumbers) cout << num << " ";  // 10 20 30
    
    vNumbers.pop_back();  // removes 30
    cout << "\nAfter third pop_back: ";
    for(int num : vNumbers) cout << num << " ";  // 10 20
    
    vNumbers.pop_back();  // removes 20
    cout << "\nAfter fourth pop_back: ";
    for(int num : vNumbers) cout << num << " ";  // 10
    
    vNumbers.pop_back();  // removes 10
    cout << "\nAfter fifth pop_back: ";
    for(int num : vNumbers) cout << num << " ";  // (empty)
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Checking Before Removal

### ⚠️ **Problem with Removing from Empty Vector:**

```cpp
vector<int> vNumbers;
vNumbers.pop_back();  // ⚠️ Error! Vector is empty
```

### ✅ **Solution: Check using `empty()` or `size()`**

### 📝 **Method 1: Using `empty()`**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;

// Check before removal
if(!vNumbers.empty()) {  // If not empty
    vNumbers.pop_back();
} else {
    cout << "Vector is empty, cannot remove" << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📝 **Method 2: Using `size()`**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<int> vNumbers;

// Check before removal
if(vNumbers.size() > 0) {  // If size greater than zero
    vNumbers.pop_back();
} else {
    cout << "Vector is empty, cannot remove" << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Comparison between `empty()` and `size()`:**

| Function | Return Value | Best Use |
|----------|--------------|----------|
| `empty()` | `true` if empty, `false` if has elements | Check if empty |
| `size()` | Number of elements in vector | Know size or check if has elements |

---

## Remove All Elements at Once

### 📝 **Using `clear()`:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

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
    
    cout << "Before clear: ";
    cout << "Size = " << vNumbers.size() << endl;
    for(int num : vNumbers) {
        cout << num << " ";
    }
    // Output: 10 20 30 40 50
    
    // Remove all elements
    vNumbers.clear();
    
    cout << "\nAfter clear: ";
    cout << "Size = " << vNumbers.size() << endl;
    for(int num : vNumbers) {
        cout << num << " ";
    }
    // Output: (empty)
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Comparison between `pop_back()` and `clear()`:**

| Operation | Description | Example |
|-----------|-------------|---------|
| `pop_back()` | Removes **one element** from end | `v.pop_back()` |
| `clear()` | Removes **all elements** | `v.clear()` |

---

## Comprehensive Example with Checking

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vNumbers;
    
    // Add 3 elements
    vNumbers.push_back(100);
    vNumbers.push_back(200);
    vNumbers.push_back(300);
    
    cout << "Initial state:" << endl;
    cout << "Size: " << vNumbers.size() << endl;
    cout << "Empty? " << (vNumbers.empty() ? "Yes" : "No") << endl;
    
    // Safe removal
    while(!vNumbers.empty()) {
        cout << "\nBefore removal - Size: " << vNumbers.size();
        cout << " - Elements: ";
        for(int num : vNumbers) cout << num << " ";
        
        vNumbers.pop_back();
        
        cout << "\nAfter removal - Size: " << vNumbers.size();
        cout << " - Elements: ";
        for(int num : vNumbers) cout << num << " ";
    }
    
    cout << "\n\nFinal state:" << endl;
    cout << "Size: " << vNumbers.size() << endl;
    cout << "Empty? " << (vNumbers.empty() ? "Yes" : "No") << endl;
    
    return 0;
}
```

**Output:**
```
Initial state:
Size: 3
Empty? No

Before removal - Size: 3 - Elements: 100 200 300 
After removal - Size: 2 - Elements: 100 200 

Before removal - Size: 2 - Elements: 100 200 
After removal - Size: 1 - Elements: 100 

Before removal - Size: 1 - Elements: 100 
After removal - Size: 0 - Elements: 

Final state:
Size: 0
Empty? Yes
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### Basic Removal Functions:

1. **`pop_back()`** → Removes **one element** from end
   ```cpp
   vNumbers.pop_back();
   ```

2. **`clear()`** → Removes **all elements**
   ```cpp
   vNumbers.clear();
   ```

### Checking Functions:

1. **`empty()`** → Checks if vector is empty
   ```cpp
   if(!vNumbers.empty()) {
       vNumbers.pop_back();
   }
   ```

2. **`size()`** → Returns number of elements
   ```cpp
   if(vNumbers.size() > 0) {
       vNumbers.pop_back();
   }
   ```

### Important Rules:

1. **Always check** before using `pop_back()`
2. **Use `empty()`** to check if empty
3. **Use `clear()`** to remove all elements at once
4. **Remember LIFO principle** → Last element in is first element out

### Practical Advice:

> **"Always check `empty()` before `pop_back()` to avoid errors"**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>