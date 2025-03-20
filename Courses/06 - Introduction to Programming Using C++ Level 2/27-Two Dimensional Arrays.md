<a id="arabic"></a>
[English ↙](#english)
# Two Dimensional Arrays

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## ما هي Two Dimensional Array؟

**Two Dimensional Array** هي مصفوفة ثنائية الأبعاد تشبه **الجدول** الذي يحتوي على **صفوف** و**أعمدة**.

---

## تعريف Two Dimensional Array

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // ⭐ تعريف مصفوفة ثنائية الأبعاد: 3 صفوف × 4 أعمدة
    int x[3][4];
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### الشرح:
- **`x[3][4]`** تعني:
  - **3** → عدد الصفوف (Rows)
  - **4** → عدد الأعمدة (Columns) في كل صف
- النتيجة: جدول بـ 3 صفوف، كل صف يحتوي على 4 أعمدة

---

## تهيئة Two Dimensional Array

### الطريقة المفضلة (الواضحة)

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x[3][4] = {
        {1, 2, 3, 4},    // ⭐ الصف الأول
        {5, 6, 7, 8},    // ⭐ الصف الثاني  
        {9, 10, 11, 12}  // ⭐ الصف الثالث
    };
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### كيف تبدو المصفوفة في الذاكرة:

| الصف | العمود 0 | العمود 1 | العمود 2 | العمود 3 |
|------|----------|----------|----------|----------|
| **الصف 0** | `x[0][0] = 1` | `x[0][1] = 2` | `x[0][2] = 3` | `x[0][3] = 4` |
| **الصف 1** | `x[1][0] = 5` | `x[1][1] = 6` | `x[1][2] = 7` | `x[1][3] = 8` |
| **الصف 2** | `x[2][0] = 9` | `x[2][1] = 10` | `x[2][2] = 11` | `x[2][3] = 12` |

---

## الوصول إلى عناصر المصفوفة

### الفهرس يبدأ من الصفر (Zero-based Indexing)

```cpp
x[0][0]  // ← الصف الأول، العمود الأول → القيمة: 1
x[0][1]  // ← الصف الأول، العمود الثاني → القيمة: 2  
x[1][0]  // ← الصف الثاني، العمود الأول → القيمة: 5
x[2][3]  // ← الصف الثالث، العمود الرابع → القيمة: 12
```

### قاعدة الفهرس:
```
الصف: من 0 إلى (عدد الصفوف - 1)
العمود: من 0 إلى (عدد الأعمدة - 1)
```

---

## عرض محتويات المصفوفة باستخدام For Loops

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}
    };
    
    // ⭐ loop الأول للصفوف (i)
    for(int i = 0; i < 3; i++) {
        // ⭐ loop الثاني للأعمدة (j)  
        for(int j = 0; j < 4; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;  // سطر جديد بعد كل صف
    }
    
    return 0;
}
```

**الإخراج:**
```
1 2 3 4 
5 6 7 8 
9 10 11 12 
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## كيف تعمل الـ For Loops؟

### 1. الـ Loop الخارجي (i) للصفوف
```cpp
for(int i = 0; i < 3; i++)
```
- `i = 0` → الصف الأول
- `i = 1` → الصف الثاني  
- `i = 2` → الصف الثالث
- `i < 3` → يتوقف عندما يصبح `i = 3`

### 2. الـ Loop الداخلي (j) للأعمدة
```cpp
for(int j = 0; j < 4; j++)
```
- `j = 0` → العمود الأول
- `j = 1` → العمود الثاني
- `j = 2` → العمود الثالث
- `j = 3` → العمود الرابع
- `j < 4` → يتوقف عندما يصبح `j = 4`

### 3. العملية خطوة بخطوة:

#### عندما `i = 0` (الصف الأول):
```
j = 0 → x[0][0] = 1
j = 1 → x[0][1] = 2  
j = 2 → x[0][2] = 3
j = 3 → x[0][3] = 4
```
**الناتج:** `1 2 3 4`

#### عندما `i = 1` (الصف الثاني):
```
j = 0 → x[1][0] = 5
j = 1 → x[1][1] = 6
j = 2 → x[1][2] = 7  
j = 3 → x[1][3] = 8
```
**الناتج:** `5 6 7 8`

#### عندما `i = 2` (الصف الثالث):
```
j = 0 → x[2][0] = 9
j = 1 → x[2][1] = 10
j = 2 → x[2][2] = 11
j = 3 → x[2][3] = 12
```
**الناتج:** `9 10 11 12`

---

## استخدام Debugging لفهم العملية

### 1. وضع Breakpoint
```cpp
for(int i = 0; i < 3; i++) {  // ⭐ Breakpoint هنا
    for(int j = 0; j < 4; j++) {
        cout << x[i][j] << " ";
    }
    cout << endl;
}
```

### 2. مشاهدة القيم أثناء التنفيذ:
- **F11**: التنفيذ خطوة بخطوة
- **F9**: مشاهدة قيمة متغير
- **Watch Window**: `Shift + F9`

### 3. مثال:
- عندما `i = 0` و `j = 0` → `x[0][0] = 1`
- عندما `i = 0` و `j = 1` → `x[0][1] = 2`
- عندما `i = 1` و `j = 0` → `x[1][0] = 5`

---

## الخلاصة

### المفاهيم الأساسية:

1. **Two Dimensional Array** → جدول بصفوف وأعمدة
2. **التعريف** → `type name[rows][columns]`
3. **الفهرس يبدأ من الصفر** → `[0][0]` هو العنصر الأول
4. **For Loop مزدوج** → الأول للصفوف، الثاني للأعمدة

### قواعد مهمة:

1. **عدد الصفوف** → `[3]` في `x[3][4]`
2. **عدد الأعمدة** → `[4]` في `x[3][4]`
3. **الوصول** → `x[row][column]`
4. **التهيئة** → استخدام الأقواس المعقوفة لكل صف

### مثال شامل:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // مصفوفة 2×3
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    
    // عرض المحتويات
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "matrix[" << i << "][" << j << "] = " 
                 << matrix[i][j] << endl;
        }
    }
    
    return 0;
}
```

**الإخراج:**
```
matrix[0][0] = 10
matrix[0][1] = 20  
matrix[0][2] = 30
matrix[1][0] = 40
matrix[1][1] = 50
matrix[1][2] = 60
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### النصيحة العملية:

> **"استخدم for loop مزدوج للتعامل مع two dimensional arrays: loop خارجي للصفوف، وloop داخلي للأعمدة."**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Two Dimensional Arrays

---

## What is Two Dimensional Array?

**Two Dimensional Array** is a two-dimensional array that resembles a **table** containing **rows** and **columns**.

---

## Defining Two Dimensional Array

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // ⭐ Define two-dimensional array: 3 rows × 4 columns
    int x[3][4];
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Explanation:
- **`x[3][4]`** means:
  - **3** → number of rows
  - **4** → number of columns in each row
- Result: table with 3 rows, each containing 4 columns

---

## Initializing Two Dimensional Array

### Preferred Method (Clear)

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x[3][4] = {
        {1, 2, 3, 4},    // ⭐ First row
        {5, 6, 7, 8},    // ⭐ Second row  
        {9, 10, 11, 12}  // ⭐ Third row
    };
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### How the Array Looks in Memory:

| Row | Column 0 | Column 1 | Column 2 | Column 3 |
|-----|----------|----------|----------|----------|
| **Row 0** | `x[0][0] = 1` | `x[0][1] = 2` | `x[0][2] = 3` | `x[0][3] = 4` |
| **Row 1** | `x[1][0] = 5` | `x[1][1] = 6` | `x[1][2] = 7` | `x[1][3] = 8` |
| **Row 2** | `x[2][0] = 9` | `x[2][1] = 10` | `x[2][2] = 11` | `x[2][3] = 12` |

---

## Accessing Array Elements

### Index Starts from Zero (Zero-based Indexing)

```cpp
x[0][0]  // ← First row, first column → Value: 1
x[0][1]  // ← First row, second column → Value: 2  
x[1][0]  // ← Second row, first column → Value: 5
x[2][3]  // ← Third row, fourth column → Value: 12
```

### Index Rule:
```
Row: from 0 to (number of rows - 1)
Column: from 0 to (number of columns - 1)
```

---

## Displaying Array Contents Using For Loops

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int x[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}
    };
    
    // ⭐ First loop for rows (i)
    for(int i = 0; i < 3; i++) {
        // ⭐ Second loop for columns (j)  
        for(int j = 0; j < 4; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;  // New line after each row
    }
    
    return 0;
}
```

**Output:**
```
1 2 3 4 
5 6 7 8 
9 10 11 12 
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Do For Loops Work?

### 1. Outer Loop (i) for Rows
```cpp
for(int i = 0; i < 3; i++)
```
- `i = 0` → First row
- `i = 1` → Second row  
- `i = 2` → Third row
- `i < 3` → Stops when `i = 3`

### 2. Inner Loop (j) for Columns
```cpp
for(int j = 0; j < 4; j++)
```
- `j = 0` → First column
- `j = 1` → Second column
- `j = 2` → Third column
- `j = 3` → Fourth column
- `j < 4` → Stops when `j = 4`

### 3. Step-by-Step Process:

#### When `i = 0` (First row):
```
j = 0 → x[0][0] = 1
j = 1 → x[0][1] = 2  
j = 2 → x[0][2] = 3
j = 3 → x[0][3] = 4
```
**Output:** `1 2 3 4`

#### When `i = 1` (Second row):
```
j = 0 → x[1][0] = 5
j = 1 → x[1][1] = 6
j = 2 → x[1][2] = 7  
j = 3 → x[1][3] = 8
```
**Output:** `5 6 7 8`

#### When `i = 2` (Third row):
```
j = 0 → x[2][0] = 9
j = 1 → x[2][1] = 10
j = 2 → x[2][2] = 11
j = 3 → x[2][3] = 12
```
**Output:** `9 10 11 12`

---

## Using Debugging to Understand the Process

### 1. Setting Breakpoint
```cpp
for(int i = 0; i < 3; i++) {  // ⭐ Breakpoint here
    for(int j = 0; j < 4; j++) {
        cout << x[i][j] << " ";
    }
    cout << endl;
}
```

### 2. Watching Values During Execution:
- **F11**: Step by step execution
- **F9**: Watch variable value
- **Watch Window**: `Shift + F9`

### 3. Example:
- When `i = 0` and `j = 0` → `x[0][0] = 1`
- When `i = 0` and `j = 1` → `x[0][1] = 2`
- When `i = 1` and `j = 0` → `x[1][0] = 5`

---

## Summary

### Core Concepts:

1. **Two Dimensional Array** → table with rows and columns
2. **Definition** → `type name[rows][columns]`
3. **Index starts from zero** → `[0][0]` is first element
4. **Double For Loop** → first for rows, second for columns

### Important Rules:

1. **Number of rows** → `[3]` in `x[3][4]`
2. **Number of columns** → `[4]` in `x[3][4]`
3. **Access** → `x[row][column]`
4. **Initialization** → use curly braces for each row

### Comprehensive Example:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // 2×3 array
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    
    // Display contents
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "matrix[" << i << "][" << j << "] = " 
                 << matrix[i][j] << endl;
        }
    }
    
    return 0;
}
```

**Output:**
```
matrix[0][0] = 10
matrix[0][1] = 20  
matrix[0][2] = 30
matrix[1][0] = 40
matrix[1][1] = 50
matrix[1][2] = 60
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Practical Advice:

> **"Use double for loop for working with two dimensional arrays: outer loop for rows, and inner loop for columns."**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>