<a id="arabic"></a>
[English ↙](#english)

## Integer Format (printf)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## ما هو printf؟

**printf** هي دالة تستخدم لعرض النتائج على الشاشة مع إمكانية **تنسيق الأرقام** (Formatting).

---

## مثال أساسي: عرض عدد صحيح

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>  // يجب إضافة هذه المكتبة لاستخدام printf

int main() {
    int big = 1;
    int totalBig = 10;
    
    printf("big number = %d", big);
    return 0;
}
```

**الإخراج:**
```
big number = 1
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## كيف يعمل `%d`؟

### المبدأ الأساسي:
- `%d` في السلسلة النصية يتم **استبدالها** بالقيمة الرقمية
- القيمة تأتي من المتغير الذي يلي السلسلة النصية

### مثال بعاملين:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int big = 1;
    int totalBig = 10;
    
    printf("you are in page %d of %d", big, totalBig);
    return 0;
}
```

**الإخراج:**
```
you are in page 1 of 10
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### كيف يعمل:
1. `%d` الأولى → تستبدل بـ `big` (القيمة: 1)
2. `%d` الثانية → تستبدل بـ `totalBig` (القيمة: 10)

---

## تنسيق العرض بعرض محدد (Width Specification)

### `%0*d` - إضافة أصفار على اليسار

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int big = 1;
    
    printf("big number = %0*d\n", 2, big);   // العرض: رقمين
    printf("big number = %0*d\n", 3, big);   // العرض: ثلاثة أرقام
    printf("big number = %0*d\n", 4, big);   // العرض: أربعة أرقام
    printf("big number = %0*d\n", 5, big);   // العرض: خمسة أرقام
    
    return 0;
}
```

**الإخراج:**
```
big number = 01
big number = 001
big number = 0001
big number = 00001
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### كيف يعمل `%0*d`:
- `*` → تحدد عرض الرقم (عدد الخانات)
- `0` → تملأ الخانات الفارغة بأصفار
- `d` → نوع البيانات (عدد صحيح)

**مثال:** `%0*d` مع `2` و `big=1`:
- العرض المطلوب: رقمين
- القيمة: `1` (رقم واحد فقط)
- النتيجة: `01` (يضيف صفراً واحداً)

---

## مثال مع عمليات حسابية

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int numberOne = 20;
    int numberTwo = 30;
    
    printf("the result of %d + %d = %d", 
           numberOne, numberTwo, numberOne + numberTwo);
    
    return 0;
}
```

**الإخراج:**
```
the result of 20 + 30 = 50
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### كيف يعمل:
1. `%d` الأولى → `numberOne` (20)
2. `%d` الثانية → `numberTwo` (30)
3. `%d` الثالثة → `numberOne + numberTwo` (50)

---

## ملخص صيغ تنسيق الأعداد الصحيحة

| الصيغة | الوصف | المثال | النتيجة (لـ `number = 5`) |
|--------|-------|--------|--------------------------|
| `%d` | عرض العدد كما هو | `printf("%d", number)` | `5` |
| `%0*d` | عرض بعدد محدد من الخانات مع أصفار | `printf("%0*d", 3, number)` | `005` |
| `%*d` | عرض بعدد محدد من الخانات | `printf("%*d", 4, number)` | `   5` (مسافات) |

---

## مقارنة بين `cout` و `printf`

### `cout` (الطريقة العادية)
```cpp
cout << "big number = " << big;
```
- **البساطة**: أسهل في الاستخدام
- **القيود**: محدود في التنسيق

### `printf` (التنسيق المتقدم)
```cpp
printf("big number = %d", big);
```
- **التنسيق**: يمكن تنسيق الأرقام
- **المرونة**: عرض بعدد خانات محدد
- **الدقة**: تحكم أكبر في المظهر

---

## قواعد استخدام `printf`

### 1. عدد `%d` يجب أن يتطابق مع عدد المتغيرات
```cpp
// صحيح ✓
printf("%d %d", x, y);  // متغيران لـ %d %d

// خطأ ✗
printf("%d %d", x);     // متغير واحد فقط لـ %d %d
```

### 2. الترتيب مهم
```cpp
int a = 10, b = 20;
printf("%d then %d", a, b);  // 10 then 20
printf("%d then %d", b, a);  // 20 then 10
```

### 3. إضافة سطر جديد
```cpp
printf("Line 1\n");    // \n لإضافة سطر جديد
printf("Line 2\n");
```

---

## الخلاصة

### المفاهيم الأساسية:

1. **`printf`** لدالة لعرض النتائج مع تنسيق
2. **`%d`** تستخدم لعرض الأعداد الصحيحة
3. **`%0*d`** لعرض الأعداد بعدد خانات محدد مع أصفار

### فوائد استخدام `printf`:

1. **تنسيق الأرقام** لعرضها بشكل مرتب
2. **التحكم في عدد الخانات** المعروضة
3. **إضافة أصفار** لجعل الأرقام بنفس الطول
4. **دمج نصوص وأرقام** في سطر واحد

### مثال شامل:

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int page = 5;
    int totalPages = 100;
    
    printf("Page: %0*d of %0*d\n", 3, page, 3, totalPages);
    return 0;
}
```

**الإخراج:**
```
Page: 005 of 100
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### النصيحة العملية:

> **"استخدم `printf` عندما تحتاج لتنسيق الأرقام، واستخدم `cout` للأمور البسيطة."**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Integer Format (printf)

---

## What is printf?

**printf** is a function used to display results on screen with the ability to **format numbers**.

---

## Basic Example: Displaying an Integer

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>  // Must add this library to use printf

int main() {
    int big = 1;
    int totalBig = 10;
    
    printf("big number = %d", big);
    return 0;
}
```

**Output:**
```
big number = 1
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Does `%d` Work?

### Basic Principle:
- `%d` in the string is **replaced** by the numeric value
- Value comes from the variable following the string

### Example with Two Parameters:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int big = 1;
    int totalBig = 10;
    
    printf("you are in page %d of %d", big, totalBig);
    return 0;
}
```

**Output:**
```
you are in page 1 of 10
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### How It Works:
1. First `%d` → replaced by `big` (value: 1)
2. Second `%d` → replaced by `totalBig` (value: 10)

---

## Format Display with Width Specification

### `%0*d` - Add Zeros on Left

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int big = 1;
    
    printf("big number = %0*d\n", 2, big);   // Width: 2 digits
    printf("big number = %0*d\n", 3, big);   // Width: 3 digits
    printf("big number = %0*d\n", 4, big);   // Width: 4 digits
    printf("big number = %0*d\n", 5, big);   // Width: 5 digits
    
    return 0;
}
```

**Output:**
```
big number = 01
big number = 001
big number = 0001
big number = 00001
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### How `%0*d` Works:
- `*` → specifies digit width (number of places)
- `0` → fills empty places with zeros
- `d` → data type (integer)

**Example:** `%0*d` with `2` and `big=1`:
- Required width: 2 digits
- Value: `1` (only one digit)
- Result: `01` (adds one zero)

---

## Example with Arithmetic Operations

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int numberOne = 20;
    int numberTwo = 30;
    
    printf("the result of %d + %d = %d", 
           numberOne, numberTwo, numberOne + numberTwo);
    
    return 0;
}
```

**Output:**
```
the result of 20 + 30 = 50
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### How It Works:
1. First `%d` → `numberOne` (20)
2. Second `%d` → `numberTwo` (30)
3. Third `%d` → `numberOne + numberTwo` (50)

---

## Summary of Integer Format Specifiers

| Format | Description | Example | Result (for `number = 5`) |
|--------|-------------|---------|---------------------------|
| `%d` | Display number as is | `printf("%d", number)` | `5` |
| `%0*d` | Display with specific width with zeros | `printf("%0*d", 3, number)` | `005` |
| `%*d` | Display with specific width | `printf("%*d", 4, number)` | `   5` (spaces) |

---

## Comparison Between `cout` and `printf`

### `cout` (Normal Method)
```cpp
cout << "big number = " << big;
```
- **Simplicity**: Easier to use
- **Limitations**: Limited formatting

### `printf` (Advanced Formatting)
```cpp
printf("big number = %d", big);
```
- **Formatting**: Can format numbers
- **Flexibility**: Display with specific digit count
- **Precision**: More control over appearance

---

## Rules for Using `printf`

### 1. Number of `%d` Must Match Number of Variables
```cpp
// Correct ✓
printf("%d %d", x, y);  // Two variables for %d %d

// Wrong ✗
printf("%d %d", x);     // Only one variable for %d %d
```

### 2. Order Matters
```cpp
int a = 10, b = 20;
printf("%d then %d", a, b);  // 10 then 20
printf("%d then %d", b, a);  // 20 then 10
```

### 3. Add New Line
```cpp
printf("Line 1\n");    // \n to add new line
printf("Line 2\n");
```

---

## Summary

### Core Concepts:

1. **`printf`** function to display results with formatting
2. **`%d`** used to display integers
3. **`%0*d`** to display numbers with specific width and zeros

### Benefits of Using `printf`:

1. **Format numbers** to display them neatly
2. **Control number of digits** displayed
3. **Add zeros** to make numbers same length
4. **Combine text and numbers** in one line

### Comprehensive Example:

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int page = 5;
    int totalPages = 100;
    
    printf("Page: %0*d of %0*d\n", 3, page, 3, totalPages);
    return 0;
}
```

**Output:**
```
Page: 005 of 100
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Practical Advice:

> **"Use `printf` when you need to format numbers, and use `cout` for simple things."**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>