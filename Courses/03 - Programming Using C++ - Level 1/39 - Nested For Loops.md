<div dir="rtl">

<a id="arabic-nested-for-loops"></a>
[English ↙](#english-nested-for-loops)

# 🔄 الحلقات المتداخلة: Nested For Loops

## 🎯 المقدمة

في هذا الدرس، سنتعلم **الحلقات المتداخلة Nested For Loops** التي تسمح لنا بتنفيذ عمليات متكررة معقدة وإنشاء أنماط مختلفة.

## 💡 المفاهيم الأساسية

### ما هي الحلقات المتداخلة؟

**الحلقات المتداخلة** هي حلقات for موجودة داخل حلقات for أخرى، حيث تكون الحلقة الداخلية جزءاً من جسم الحلقة الخارجية.

### لماذا نستخدم الحلقات المتداخلة؟

- **إنشاء أنماط** معقدة من البيانات
- **معالجة مصفوفات ثنائية الأبعاد**
- **تنفيذ عمليات** تتطلب تكراراً مضاعفاً
- **حل مسائل** رياضية معقدة

## 🛠️ أمثلة عملية من المحاضرة

### 📝 المثال الأول: جدول الضرب

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " Table:" << endl;
        
        for (int j = 1; j <= 10; j++) {
            cout << i << " × " << j << " = " << (i * j) << endl;
        }
        
        cout << "----------------" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
1 Table:
1 × 1 = 1
1 × 2 = 2
1 × 3 = 3
...
1 × 10 = 10
----------------
2 Table:
2 × 1 = 2
2 × 2 = 4
2 × 3 = 6
...
2 × 10 = 20
----------------
...
10 Table:
10 × 1 = 10
10 × 2 = 20
10 × 3 = 30
...
10 × 10 = 100
----------------
```

</div>

### 📝 المثال الثاني: مربع النجوم (10×10)

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
```

</div>

### 📝 المثال الثالث: مثلث النجوم

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * * 
* * * * * * * * * * 
```

</div>

## 🔧 بناء الحلقات المتداخلة

### الهيكل الأساسي

<div dir="ltr" align="left">

```cpp
for (int i = start_i; i <= end_i; i++) {
    // كود الحلقة الخارجية
    
    for (int j = start_j; j <= end_j; j++) {
        // كود الحلقة الداخلية
        // يمكن الوصول لكل من i و j هنا
    }
    
    // كود الحلقة الخارجية
}
```

</div>

## 🎯 آلية العمل

### كيف تعمل الحلقات المتداخلة خطوة بخطوة؟

<div dir="ltr" align="left">

```cpp
for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << "i=" << i << ", j=" << j << endl;
    }
}
```

**خطوات التنفيذ:**

1. **i = 1** (الحلقة الخارجية)
   - **j = 1**: طباعة "i=1, j=1"
   - **j = 2**: طباعة "i=1, j=2"
   - **j = 3**: طباعة "i=1, j=3"
2. **i = 2** (الحلقة الخارجية)
   - **j = 1**: طباعة "i=2, j=1"
   - **j = 2**: طباعة "i=2, j=2"
   - **j = 3**: طباعة "i=2, j=3"

**النتيجة:**
```
i=1, j=1
i=1, j=2
i=1, j=3
i=2, j=1
i=2, j=2
i=2, j=3
```

</div>

## 🔄 أنواع الأنماط المختلفة

### النمط المستطيل (ثابت)

<div dir="ltr" align="left">

```cpp
// 5 صفوف × 10 أعمدة
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 10; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

</div>

### النمط المثلث (متزايد)

<div dir="ltr" align="left">

```cpp
// عدد النجوم يزيد مع كل صف
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**النتيجة:**
```
* 
* * 
* * * 
* * * * 
* * * * * 
```

</div>

### النمط المثلث (متناقص)

<div dir="ltr" align="left">

```cpp
// عدد النجوم ينقص مع كل صف
for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**النتيجة:**
```
* * * * * 
* * * * 
* * * 
* * 
* 
```

</div>

## 💡 تطبيقات عملية

### طباعة الأرقام بشكل هرمي

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
```

</div>

### إنشاء حدود باستخدام النجوم

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 10;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
* * * * * * * * * * 
*                 * 
*                 * 
*                 * 
* * * * * * * * * * 
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام أسماء معبرة للعدادات

<div dir="ltr" align="left">

```cpp
// ✅ تسمية جيدة
for (int row = 1; row <= totalRows; row++) {
    for (int col = 1; col <= totalCols; col++) {
        cout << "(" << row << "," << col << ") ";
    }
    cout << endl;
}

// ❌ تسمية غير واضحة
for (int i = 1; i <= x; i++) {
    for (int j = 1; j <= y; j++) {
        cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
}
```

</div>

### 2. الحفاظ على تعشيق بسيط

<div dir="ltr" align="left">

```cpp
// ✅ تعشيق بسيط (مستويان)
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        // كود
    }
}

// ❌ تعشيق معقد (أكثر من مستويين)
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        for (int k = 1; k <= 5; k++) {
            for (int l = 1; l <= 5; l++) {
                // كود معقد
            }
        }
    }
}
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:

- **الحلقات المتداخلة** تسمح بإنشاء أنماط معقدة
- **الحلقة الخارجية** تتحكم في الصفوف
- **الحلقة الداخلية** تتحكم في الأعمدة
- **عدد التكرارات** يكون حاصل ضرب حدود الحلقات

### بناء الجملة:

```cpp
for (int i = start; i <= end; i++) {
    for (int j = start; j <= end; j++) {
        // كود
    }
}
```

### أنواع الأنماط:

1. **المستطيل**: حدود ثابتة للحلقتين
2. **المثلث المتزايد**: الحلقة الداخلية تعتمد على الحلقة الخارجية
3. **المثلث المتناقص**: استخدام العد التنازلي

### قواعد مهمة:

1. **استخدم أسماء معبرة** للعدادات
2. **تجنب التعشيق العميق** أكثر من اللازم
3. **خطط للنمط** قبل كتابة الكود
4. **اختبر بحدود صغيرة** أولاً

### فوائد الحلقات المتداخلة:

1. **مرونة** في إنشاء أنماط مختلفة
2. **كفاءة** في معالجة البيانات ثنائية الأبعاد
3. **تنظيم** أفضل للكود
4. **قابلية للتوسعة** بسهولة

</div>

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

<a id="english-nested-for-loops"></a>
[العربية ↗](#arabic-nested-for-loops)

# 🔄 Nested For Loops

## 🎯 Introduction

In this lesson, we'll learn about **Nested For Loops** which allow us to perform complex repetitive operations and create various patterns.

## 💡 Core Concepts

### What are Nested For Loops?

**Nested For Loops** are for loops placed inside other for loops, where the inner loop is part of the outer loop's body.

### Why Use Nested For Loops?

- **Create complex** data patterns
- **Process two-dimensional arrays**
- **Perform operations** requiring multiple iterations
- **Solve complex** mathematical problems

## 🛠️ Practical Examples from the Lecture

### 📝 Example 1: Multiplication Table

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " Table:" << endl;
        
        for (int j = 1; j <= 10; j++) {
            cout << i << " × " << j << " = " << (i * j) << endl;
        }
        
        cout << "----------------" << endl;
    }
    
    return 0;
}
```

**Result:**
```
1 Table:
1 × 1 = 1
1 × 2 = 2
1 × 3 = 3
...
1 × 10 = 10
----------------
2 Table:
2 × 1 = 2
2 × 2 = 4
2 × 3 = 6
...
2 × 10 = 20
----------------
...
10 Table:
10 × 1 = 10
10 × 2 = 20
10 × 3 = 30
...
10 × 10 = 100
----------------
```

### 📝 Example 2: Star Square (10×10)

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
```

**Result:**
```
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
```

### 📝 Example 3: Star Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
```

**Result:**
```
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * * 
* * * * * * * * * * 
```

## 🔧 Nested For Loops Syntax

### Basic Structure

```cpp
for (int i = start_i; i <= end_i; i++) {
    // Outer loop code
    
    for (int j = start_j; j <= end_j; j++) {
        // Inner loop code
        // Can access both i and j here
    }
    
    // Outer loop code
}
```

## 🎯 How It Works

### Nested For Loops Step-by-Step Execution:

```cpp
for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << "i=" << i << ", j=" << j << endl;
    }
}
```

**Execution Steps:**

1. **i = 1** (outer loop)
   - **j = 1**: print "i=1, j=1"
   - **j = 2**: print "i=1, j=2"
   - **j = 3**: print "i=1, j=3"
2. **i = 2** (outer loop)
   - **j = 1**: print "i=2, j=1"
   - **j = 2**: print "i=2, j=2"
   - **j = 3**: print "i=2, j=3"

**Result:**
```
i=1, j=1
i=1, j=2
i=1, j=3
i=2, j=1
i=2, j=2
i=2, j=3
```

## 🔄 Different Pattern Types

### Rectangle Pattern (Fixed)

```cpp
// 5 rows × 10 columns
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 10; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

### Triangle Pattern (Increasing)

```cpp
// Number of stars increases with each row
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Result:**
```
* 
* * 
* * * 
* * * * 
* * * * * 
```

### Triangle Pattern (Decreasing)

```cpp
// Number of stars decreases with each row
for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Result:**
```
* * * * * 
* * * * 
* * * 
* * 
* 
```

## 💡 Practical Applications

### Printing Numbers in Pyramid Form

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
```

**Result:**
```
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
```

### Creating Borders with Stars

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 10;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
```

**Result:**
```
* * * * * * * * * * 
*                 * 
*                 * 
*                 * 
* * * * * * * * * * 
```

## 🏆 Best Practices

### 1. Use Descriptive Counter Names

```cpp
// ✅ Good naming
for (int row = 1; row <= totalRows; row++) {
    for (int col = 1; col <= totalCols; col++) {
        cout << "(" << row << "," << col << ") ";
    }
    cout << endl;
}

// ❌ Unclear naming
for (int i = 1; i <= x; i++) {
    for (int j = 1; j <= y; j++) {
        cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
}
```

### 2. Keep Nesting Simple

```cpp
// ✅ Simple nesting (two levels)
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        // code
    }
}

// ❌ Complex nesting (more than two levels)
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        for (int k = 1; k <= 5; k++) {
            for (int l = 1; l <= 5; l++) {
                // complex code
            }
        }
    }
}
```

## 📝 Summary

### Core Concepts:

- **Nested For Loops** allow creating complex patterns
- **Outer loop** controls rows
- **Inner loop** controls columns
- **Number of iterations** is the product of loop bounds

### Syntax:

```cpp
for (int i = start; i <= end; i++) {
    for (int j = start; j <= end; j++) {
        // code
    }
}
```

### Pattern Types:

1. **Rectangle**: fixed bounds for both loops
2. **Increasing Triangle**: inner loop depends on outer loop
3. **Decreasing Triangle**: using countdown

### Important Rules:

1. **Use descriptive names** for counters
2. **Avoid deep nesting** when possible
3. **Plan the pattern** before writing code
4. **Test with small bounds** first

### Benefits of Nested For Loops:

1. **Flexibility** in creating different patterns
2. **Efficiency** in processing 2D data
3. **Better organization** of code
4. **Easy scalability**

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>