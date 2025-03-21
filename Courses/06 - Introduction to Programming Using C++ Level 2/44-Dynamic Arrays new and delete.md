<a id="arabic"></a>
[English ↙](#english)
# Dynamic Arrays: new and delete
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## المصفوفات الديناميكية: new و delete

---

## المشكلة في المصفوفات الثابتة

### ⚠️ **مشكلة الحجم الثابت:**

عند تعريف مصفوفة عادية، يجب تحديد حجمها مسبقاً مما يؤدي إلى هدر الذاكرة.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
float grades[100];  // حجم ثابت (100 عنصر)
// حتى إذا استخدمت 5 عناصر فقط، 95 عنصر مهدرة!
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📊 **مثال واقعي:**
- المستخدم يدخل 3 طلاب فقط
- البرنامج يحجز ذاكرة لـ 100 طالب
- **97 مكان في الذاكرة مهدر!**

---

## الحل: المصفوفات الديناميكية

### 📝 **كيف تعمل؟**

إنشاء مصفوفة بحجم متغير أثناء وقت تشغيل البرنامج (Runtime) بناءً على احتياجات المستخدم.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
float* grades;        // مؤشر فقط (لم يحجز ذاكرة بعد)
int totalStudents;    // عدد الطلاب الذي سيدخله المستخدم

// السؤال عن عدد الطلاب
cout << "Enter total number of students: ";
cin >> totalStudents;

// حجز ذاكرة ديناميكية بالمقدار المطلوب فقط
grades = new float[totalStudents];
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مقارنة بين الطريقتين

### 📊 **المصفوفة الثابتة vs المصفوفة الديناميكية:**

| الميزة | المصفوفة الثابتة | المصفوفة الديناميكية |
|--------|------------------|----------------------|
| **حجم المصفوفة** | ثابت (100 مثلاً) | متغير (حسب المدخلات) |
| **حجز الذاكرة** | من البداية | عند الحاجة فقط |
| **هدر الذاكرة** | كبير جداً | معدوم |
| **المرونة** | محدودة | عالية جداً |

---

## قراءة البيانات في المصفوفة الديناميكية

### 📝 **كيف ندخل البيانات؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// قراءة درجات الطلاب
for (int i = 0; i < totalStudents; i++) {
    cout << "Enter grade for student " << (i + 1) << ": ";
    cin >> *(grades + i);  // أو grades[i]
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **كيف يعمل `*(grades + i)`؟**
- `grades` → يشير إلى العنصر الأول
- `grades + 0` → العنصر الأول
- `grades + 1` → العنصر الثاني
- `grades + 2` → العنصر الثالث
- وهكذا...

---

## عرض البيانات من المصفوفة

### 📝 **كيف نعرض البيانات المخزنة؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// عرض درجات الطلاب
cout << "\nStudent Grades:\n";
for (int i = 0; i < totalStudents; i++) {
    cout << "Student " << (i + 1) << ": " << *(grades + i) << endl;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## تحرير الذاكرة (الأهم!)

### ⚠️ **لا تنسى delete!**

يجب تحرير الذاكرة بعد الانتهاء من استخدام المصفوفة الديناميكية.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// تحرير ذاكرة المصفوفة الديناميكية
delete[] grades;  // انتبه للأقواس المربعة []
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔑 **ملاحظة هامة:**
- للمتغير العادي: `delete pointer`
- للمصفوفة الديناميكية: `delete[] pointer`

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    float* grades;          // مؤشر للمصفوفة
    int totalStudents;      // عدد الطلاب
    
    // سؤال عن عدد الطلاب
    cout << "Enter total number of students: ";
    cin >> totalStudents;
    
    // حجز ذاكرة ديناميكية
    grades = new float[totalStudents];
    
    // قراءة الدرجات
    for (int i = 0; i < totalStudents; i++) {
        cout << "Enter grade for student " << (i + 1) << ": ";
        cin >> *(grades + i);  // تخزين في المصفوفة
    }
    
    // عرض الدرجات
    cout << "\n=== Student Grades ===\n";
    for (int i = 0; i < totalStudents; i++) {
        cout << "Student " << (i + 1) << ": " << *(grades + i) << endl;
    }
    
    // تحرير الذاكرة (مهم جداً!)
    delete[] grades;
    
    return 0;
}
```

**مثال على التشغيل:**
```
Enter total number of students: 3
Enter grade for student 1: 90
Enter grade for student 2: 55  
Enter grade for student 3: 77

=== Student Grades ===
Student 1: 90
Student 2: 55
Student 3: 77
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الفوائد الرئيسية

### ✅ **لماذا نستخدم المصفوفات الديناميكية؟**

1. **كفاءة الذاكرة** ← تحجز فقط ما تحتاجه
2. **المرونة** ← الحجم يتغير حسب المدخلات
3. **تجنب الهدر** ← لا توجد مساحات مهدرة
4. **تحسين الأداء** ← برامج أسرع وأكثر كفاءة

### 🎯 **سيناريوهات الاستخدام:**
- برامج لا تعرف عدد المستخدمين مسبقاً
- أنظمة تتغير متطلباتها باستمرار
- تطبيقات تحتاج إلى تحسين استخدام الذاكرة
- برامج تدعم أعداد كبيرة ومتغيرة من البيانات

---

## القواعد الذهبية

### 🔑 **ما يجب تذكره دائماً:**

1. **`new` لحجز الذاكرة** ← `dataType* ptr = new dataType[size];`
2. **`delete[]` لتحرير الذاكرة** ← `delete[] ptr;`
3. **الأقواس المربعة مهمة** ← `delete[]` للمصفوفات، `delete` للمتغيرات
4. **كل `new` يقابله `delete`** ← قاعدة أساسية لا تنساها

### ⚠️ **تحذيرات هامة:**
- نسيان `delete[]` يؤدي إلى تسرب الذاكرة (Memory Leak)
- استخدام `delete` بدل `delete[]` قد يؤدي إلى أخطاء
- المؤشرات تعطيك قوة كبيرة، فاستخدمها بحكمة

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Dynamic Arrays: new and delete

---

## Problem with Static Arrays

### ⚠️ **Fixed Size Problem:**

When defining a normal array, you must specify its size in advance, leading to memory waste.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
float grades[100];  // fixed size (100 elements)
// Even if you use only 5 elements, 95 elements are wasted!
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📊 **Real Example:**
- User enters only 3 students
- Program allocates memory for 100 students
- **97 memory locations wasted!**

---

## Solution: Dynamic Arrays

### 📝 **How They Work:**

Create an array with variable size during program runtime based on user needs.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
float* grades;        // pointer only (no memory allocated yet)
int totalStudents;    // number of students user will enter

// Ask for number of students
cout << "Enter total number of students: ";
cin >> totalStudents;

// Dynamic memory allocation (only what's needed)
grades = new float[totalStudents];
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Comparison Between Methods

### 📊 **Static Array vs Dynamic Array:**

| Feature | Static Array | Dynamic Array |
|---------|--------------|---------------|
| **Array Size** | Fixed (e.g., 100) | Variable (based on input) |
| **Memory Allocation** | From beginning | Only when needed |
| **Memory Waste** | Very high | None |
| **Flexibility** | Limited | Very high |

---

## Reading Data into Dynamic Array

### 📝 **How to Input Data?**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Read student grades
for (int i = 0; i < totalStudents; i++) {
    cout << "Enter grade for student " << (i + 1) << ": ";
    cin >> *(grades + i);  // or grades[i]
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **How `*(grades + i)` Works:**
- `grades` → points to first element
- `grades + 0` → first element
- `grades + 1` → second element
- `grades + 2` → third element
- And so on...

---

## Displaying Data from Array

### 📝 **How to Display Stored Data?**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Display student grades
cout << "\nStudent Grades:\n";
for (int i = 0; i < totalStudents; i++) {
    cout << "Student " << (i + 1) << ": " << *(grades + i) << endl;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Freeing Memory (Most Important!)

### ⚠️ **Don't Forget delete!**

Must free memory after finishing with dynamic array.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Free dynamic array memory
delete[] grades;  // Note the square brackets []
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔑 **Important Note:**
- For normal variable: `delete pointer`
- For dynamic array: `delete[] pointer`

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    float* grades;          // array pointer
    int totalStudents;      // number of students
    
    // Ask for number of students
    cout << "Enter total number of students: ";
    cin >> totalStudents;
    
    // Dynamic memory allocation
    grades = new float[totalStudents];
    
    // Read grades
    for (int i = 0; i < totalStudents; i++) {
        cout << "Enter grade for student " << (i + 1) << ": ";
        cin >> *(grades + i);  // store in array
    }
    
    // Display grades
    cout << "\n=== Student Grades ===\n";
    for (int i = 0; i < totalStudents; i++) {
        cout << "Student " << (i + 1) << ": " << *(grades + i) << endl;
    }
    
    // Free memory (very important!)
    delete[] grades;
    
    return 0;
}
```

**Example Run:**
```
Enter total number of students: 3
Enter grade for student 1: 90
Enter grade for student 2: 55  
Enter grade for student 3: 77

=== Student Grades ===
Student 1: 90
Student 2: 55
Student 3: 77
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Main Benefits

### ✅ **Why Use Dynamic Arrays?**

1. **Memory Efficiency** ← allocate only what you need
2. **Flexibility** ← size changes based on input
3. **No Waste** ← no wasted spaces
4. **Performance Improvement** ← faster, more efficient programs

### 🎯 **Usage Scenarios:**
- Programs that don't know user count in advance
- Systems with constantly changing requirements
- Applications needing memory optimization
- Programs supporting large, variable data amounts

---

## Golden Rules

### 🔑 **What to Always Remember:**

1. **`new` to allocate memory** ← `dataType* ptr = new dataType[size];`
2. **`delete[]` to free memory** ← `delete[] ptr;`
3. **Square brackets matter** ← `delete[]` for arrays, `delete` for variables
4. **Every `new` has a `delete`** ← basic rule, don't forget it

### ⚠️ **Important Warnings:**
- Forgetting `delete[]` causes memory leaks
- Using `delete` instead of `delete[]` can cause errors
- Pointers give you great power, use them wisely

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>