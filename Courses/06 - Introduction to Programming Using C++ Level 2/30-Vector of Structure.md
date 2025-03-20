<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## فيكتور من نوع Structure

---

## المفاهيم الأساسية

### 🔍 **مقارنة بين المصفوفة والفيكتور:**

| الميزة | المصفوفة (Array) | الفيكتور (Vector) |
|--------|-----------------|------------------|
| **الحجم** | ثابت ومحدد مسبقاً | ديناميكي ومتغير |
| **تخصيص الذاكرة** | يدوي وثابت | تلقائي ومرن |
| **الكفاءة** | قد يهدر مساحة ذاكرة | يستخدم فقط ما يحتاجه |
| **الإضافة** | محدودة بالسعة | غير محدودة تقريباً |

### 📝 **مثال عملي:**
```cpp
// الطريقة التقليدية بالمصفوفة
int arr[100];  // أحجز 100 مكان
arr[0] = 10;
// المشكلة: 99 مكان قد تكون مهدرة

// الطريقة الحديثة بالفيكتور
vector<int> numbers;  // لا أحجز مسبقاً
numbers.push_back(10); // أضيف عند الحاجة فقط
numbers.push_back(20); // أضيف عند الحاجة فقط
// الميزة: لا أهدر ذاكرة
```

---

## التعامل مع الفيكتور في الدوال

```cpp
// مع المصفوفة
void func(int arr[]) {
    arr[0] = 100;  // التعديل ينعكس
}

// مع الفيكتور (خطأ)
void func(vector<int> v) {
    v[0] = 100;  // ⚠️ التعديل لا ينعكس
}

// مع الفيكتور (صحيح)
void func(vector<int> &v) {
    v[0] = 100;  // ✅ التعديل ينعكس
}
```

### 💡 **نصيحة:**
> **استخدم & مع الفيكتور لتجنب النسخ غير الضروري**

---

## إنشاء فيكتور من Structure

### 📝 **الخطوات الأساسية:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// تعريف Structure
struct Employee {
    string firstName;
    string lastName;
    float salary;
};

int main() {
    // إنشاء فيكتور من النوع المحدد
    vector<Employee> vEmployees;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **الشرح:**
- `Employee`: نوع البيانات المخزنة في الفيكتور
- `vEmployees`: اسم الفيكتور
- `vector<Employee>`: إعلان فيكتور يخزن عناصر من نوع Employee

---

## إضافة بيانات إلى الفيكتور

### 📝 **الطريقة المثلى:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    vector<Employee> vEmployees;
    Employee tempEmp;
    
    // أول عنصر
    tempEmp.firstName = "Mohamed";
    tempEmp.lastName = "Ahmed";
    tempEmp.salary = 5000;
    vEmployees.push_back(tempEmp);
    
    // ثاني عنصر
    tempEmp.firstName = "Ali";
    tempEmp.lastName = "Mohammed";
    tempEmp.salary = 300;
    vEmployees.push_back(tempEmp);
    
    // ثالث عنصر
    tempEmp.firstName = "Aya";
    tempEmp.lastName = "Omar";
    tempEmp.salary = 1000;
    vEmployees.push_back(tempEmp);
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **كيف تعمل:**
1. `Employee tempEmp` → إنشاء متغير مؤقت
2. تعبئة البيانات في `tempEmp`
3. `push_back(tempEmp)` → إضافة نسخة من البيانات للفيكتور
4. إعادة استخدام `tempEmp` للعنصر التالي

---

## عرض البيانات من الفيكتور

### ⚠️ **الطريقة البطيئة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// نسخ كامل البيانات (بطيء)
for(Employee emp : vEmployees) {
    cout << "Name: " << emp.firstName << " " << emp.lastName << endl;
    cout << "Salary: " << emp.salary << endl;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **المشكلة:**
- يتم نسخ كائن Employee كامل في كل مرة
- يستهلك ذاكرة ووقت إضافي
- غير فعّال مع البيانات الكبيرة

---

### ✅ **الطريقة السريعة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// استخدام المرجع (سريع)
for(Employee &emp : vEmployees) {
    cout << "Name: " << emp.firstName << " " << emp.lastName << endl;
    cout << "Salary: " << emp.salary << endl;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **المزايا:**
- لا يتم نسخ البيانات
- يتم التعامل مع العنوان في الذاكرة فقط
- أسرع بكثير وأكثر كفاءة

---

## مثال توضيحي

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    string firstName;
    string lastName;
    float salary;
};

int main() {
    // إنشاء الفيكتور
    vector<Employee> employees;
    Employee temp;
    
    // إضافة أول موظف
    temp.firstName = "Mohamed";
    temp.lastName = "Ahmed";
    temp.salary = 4000;
    employees.push_back(temp);
    
    // إضافة ثاني موظف
    temp.firstName = "Ali";
    temp.lastName = "Mohammed";
    temp.salary = 3500;
    employees.push_back(temp);
    
    // عرض البيانات
    cout << "Employee List:" << endl;
    for(Employee &emp : employees) {
        cout << emp.firstName << " " << emp.lastName;
        cout << " - Salary: " << emp.salary << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
Employee List:
Mohamed Ahmed - Salary: 4000
Ali Mohammed - Salary: 3500
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### القواعد الأساسية:

1. **تعريف الفيكتور من Structure:**
   ```cpp
   vector<TypeName> variableName;
   ```

2. **إضافة البيانات:**
   ```cpp
   TypeName temp;
   // تعبئة البيانات
   variableName.push_back(temp);
   ```

3. **عرض البيانات (الطريقة المثلى):**
   ```cpp
   for(TypeName &item : variableName) {
       // التعامل مع item
   }
   ```

### النصائح المهمة:

- **استخدم `&`** دائماً مع الفيكتور في الحلقات
- **استخدم متغير مؤقت** لإضافة عناصر جديدة
- **الفيكتور أكثر مرونة** من المصفوفة العادية

### الميزات الرئيسية:
- **ديناميكية الحجم**: ينمو حسب الحاجة
- **كفاءة الذاكرة**: لا يهدر مساحة
- **سهولة الاستخدام**: دوال جاهزة للإضافة والحذف

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Vector of Structure

---

## Basic Concepts

### 🔍 **Comparison between Array and Vector:**

| Feature | Array | Vector |
|---------|-------|--------|
| **Size** | Fixed and predefined | Dynamic and variable |
| **Memory Allocation** | Manual and static | Automatic and flexible |
| **Efficiency** | May waste memory | Uses only what it needs |
| **Addition** | Limited by capacity | Almost unlimited |

### 📝 **Practical Example:**
```cpp
// Traditional way with Array
int arr[100];  // Reserve 100 places
arr[0] = 10;
// Problem: 99 places may be wasted

// Modern way with Vector
vector<int> numbers;  // No pre-reservation
numbers.push_back(10); // Add only when needed
numbers.push_back(20); // Add only when needed
// Advantage: No memory waste
```

---

## Working with Vector in Functions

```cpp
// With Array
void func(int arr[]) {
    arr[0] = 100;  // Modification is reflected
}

// With Vector (wrong)
void func(vector<int> v) {
    v[0] = 100;  // ⚠️ Modification is NOT reflected
}

// With Vector (correct)
void func(vector<int> &v) {
    v[0] = 100;  // ✅ Modification is reflected
}
```

### 💡 **Tip:**
> **Use & with Vector to avoid unnecessary copying**

---

## Creating Vector of Structure

### 📝 **Basic Steps:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define Structure
struct Employee {
    string firstName;
    string lastName;
    float salary;
};

int main() {
    // Create vector of specific type
    vector<Employee> vEmployees;
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Explanation:**
- `Employee`: Type of data stored in vector
- `vEmployees`: Vector name
- `vector<Employee>`: Declare vector that stores elements of Employee type

---

## Adding Data to Vector

### 📝 **Optimal Method:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    vector<Employee> vEmployees;
    Employee tempEmp;
    
    // First element
    tempEmp.firstName = "Mohamed";
    tempEmp.lastName = "Ahmed";
    tempEmp.salary = 5000;
    vEmployees.push_back(tempEmp);
    
    // Second element
    tempEmp.firstName = "Ali";
    tempEmp.lastName = "Mohammed";
    tempEmp.salary = 300;
    vEmployees.push_back(tempEmp);
    
    // Third element
    tempEmp.firstName = "Aya";
    tempEmp.lastName = "Omar";
    tempEmp.salary = 1000;
    vEmployees.push_back(tempEmp);
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **How it works:**
1. `Employee tempEmp` → Create temporary variable
2. Fill data in `tempEmp`
3. `push_back(tempEmp)` → Add copy of data to vector
4. Reuse `tempEmp` for next element

---

## Displaying Data from Vector

### ⚠️ **Slow Method:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Copy all data (slow)
for(Employee emp : vEmployees) {
    cout << "Name: " << emp.firstName << " " << emp.lastName << endl;
    cout << "Salary: " << emp.salary << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Problem:**
- Complete Employee object is copied each time
- Consumes extra memory and time
- Inefficient with large data

---

### ✅ **Fast Method:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Use reference (fast)
for(Employee &emp : vEmployees) {
    cout << "Name: " << emp.firstName << " " << emp.lastName << endl;
    cout << "Salary: " << emp.salary << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Advantages:**
- No data copying
- Only memory address is used
- Much faster and more efficient

---

## Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    string firstName;
    string lastName;
    float salary;
};

int main() {
    // Create vector
    vector<Employee> employees;
    Employee temp;
    
    // Add first employee
    temp.firstName = "Mohamed";
    temp.lastName = "Ahmed";
    temp.salary = 4000;
    employees.push_back(temp);
    
    // Add second employee
    temp.firstName = "Ali";
    temp.lastName = "Mohammed";
    temp.salary = 3500;
    employees.push_back(temp);
    
    // Display data
    cout << "Employee List:" << endl;
    for(Employee &emp : employees) {
        cout << emp.firstName << " " << emp.lastName;
        cout << " - Salary: " << emp.salary << endl;
    }
    
    return 0;
}
```

**Output:**
```
Employee List:
Mohamed Ahmed - Salary: 4000
Ali Mohammed - Salary: 3500
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### Basic Rules:

1. **Define Vector of Structure:**
   ```cpp
   vector<TypeName> variableName;
   ```

2. **Add Data:**
   ```cpp
   TypeName temp;
   // Fill data
   variableName.push_back(temp);
   ```

3. **Display Data (Optimal Method):**
   ```cpp
   for(TypeName &item : variableName) {
       // Work with item
   }
   ```

### Important Tips:

- **Always use `&`** with vector in loops
- **Use temporary variable** to add new elements
- **Vector is more flexible** than regular array

### Key Features:
- **Dynamic size**: Grows as needed
- **Memory efficient**: Doesn't waste space
- **Easy to use**: Built-in functions for add/remove

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>