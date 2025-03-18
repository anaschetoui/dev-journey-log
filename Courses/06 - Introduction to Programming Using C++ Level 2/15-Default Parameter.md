<a id="arabic"></a>
[English ↙](#english)
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## Default Parameters

في هذا الدرس، سنتعلم عن البرامترات الافتراضية في دوال ++C، وكيف تسمح لنا باستدعاء الدالة بعدد مختلف من المعاملات.

---

## المشكلة بدون Default Parameters

عندما نعرف دالة تأخذ 4 معاملات، يجب أن نرسل جميعها عند الاستدعاء:

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int MySum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;       // ❌ خطأ
    cout << MySum(10, 20, 30) << endl;   // ❌ خطأ
    return 0;
}
```

**الخطأ:**
```
error: too few arguments to function
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الحل باستخدام Default Parameters

يمكننا تعيين قيم افتراضية للمعاملات الأخيرة في الدالة:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int MySum(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;       // ✓ يعمل: 10+20+0+0 = 30
    cout << MySum(10, 20, 30) << endl;   // ✓ يعمل: 10+20+30+0 = 60
    cout << MySum(10, 20, 30, 40) << endl; // ✓ يعمل: 10+20+30+40 = 100
    return 0;
}
```

**الإخراج:**
```
30
60
100
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## كيف تعمل Default Parameters؟

### الفكرة الأساسية

Default Parameters هي قيم تُعطى للمعاملات في تعريف الدالة. إذا لم يرسل المستخدم قيمة لهذا المعامل، يستخدم الكومبايلر القيمة الافتراضية.

```cpp
int MySum(int a, int b, int c = 0, int d = 0)
```

- إذا أرسلت `MySum(10, 20)` → `c` تأخذ 0، `d` تأخذ 0
- إذا أرسلت `MySum(10, 20, 30)` → `c` تأخذ 30، `d` تأخذ 0
- إذا أرسلت `MySum(10, 20, 30, 40)` → `c` تأخذ 30، `d` تأخذ 40

### لماذا تسمى "اختيارية"؟

لأن المستخدم يمكنه اختيار إرسالها أو عدم إرسالها:
- إذا أرسل القيمة: تستخدم القيمة المرسلة
- إذا لم يرسل القيمة: تستخدم القيمة الافتراضية

---

## قواعد استخدام Default Parameters

### 1. يجب أن تكون من اليمين إلى اليسار

```cpp
// صحيح ✓
void func(int a, int b = 0, int c = 0);

// خطأ ✗
void func(int a = 0, int b, int c = 0);
```

### 2. يمكن أن يكون لديك أكثر من default parameter

```cpp
// صحيح ✓
void print(int a, int b = 1, int c = 2, int d = 3);
```

### 3. القيم الافتراضية تكون في declaration

```cpp
// في declaration
void calculate(int x, int y = 10);

// في definition
void calculate(int x, int y) {
    cout << x + y << endl;
}
```

---

## فوائد Default Parameters

### 1. مرونة في الاستدعاء
تسمح باستدعاء الدالة بعدد مختلف من المعاملات.

### 2. تقليل عدد الدوال المتشابهة
بدلاً من كتابة دوال متعددة بنفس الاسم.

### 3. تحسين قابلية القراءة
تجعل الكود أكثر وضوحاً وسهولة في الاستخدام.

---

## الخلاصة

### المفاهيم الأساسية:

1. **Default Parameters** هي قيم افتراضية تُعطى للمعاملات
2. تُستخدم عندما لا يرسل المستخدم قيمة للمعامل
3. يجب أن تبدأ من اليمين في قائمة المعاملات
4. تجعل الدوال أكثر مرونة وسهولة في الاستخدام

### الفكرة الرئيسية:
> **"Default Parameters تسمح للدالة بالعمل حتى لو لم نرسل جميع المعاملات، باستخدام قيم افتراضية للمعاملات المفقودة"**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Default Parameters

In this lesson, we will learn about default parameters in C++ functions, and how they allow us to call functions with different numbers of arguments.

---

## Problem Without Default Parameters

When we define a function that takes 4 parameters, we must send all of them when calling:

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int MySum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;       // ❌ Error
    cout << MySum(10, 20, 30) << endl;   // ❌ Error
    return 0;
}
```

**Error:**
```
error: too few arguments to function
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Solution Using Default Parameters

We can assign default values to the last parameters in the function:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int MySum(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main() {
    cout << MySum(10, 20) << endl;       // ✓ Works: 10+20+0+0 = 30
    cout << MySum(10, 20, 30) << endl;   // ✓ Works: 10+20+30+0 = 60
    cout << MySum(10, 20, 30, 40) << endl; // ✓ Works: 10+20+30+40 = 100
    return 0;
}
```

**Output:**
```
30
60
100
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Do Default Parameters Work?

### Basic Idea

Default parameters are values given to parameters in the function definition. If the user doesn't send a value for this parameter, the compiler uses the default value.

```cpp
int MySum(int a, int b, int c = 0, int d = 0)
```

- If you send `MySum(10, 20)` → `c` takes 0, `d` takes 0
- If you send `MySum(10, 20, 30)` → `c` takes 30, `d` takes 0
- If you send `MySum(10, 20, 30, 40)` → `c` takes 30, `d` takes 40

### Why Are They Called "Optional"?

Because the user can choose to send them or not:
- If they send a value: the sent value is used
- If they don't send a value: the default value is used

---

## Rules for Using Default Parameters

### 1. Must Be from Right to Left

```cpp
// Correct ✓
void func(int a, int b = 0, int c = 0);

// Wrong ✗
void func(int a = 0, int b, int c = 0);
```

### 2. Can Have Multiple Default Parameters

```cpp
// Correct ✓
void print(int a, int b = 1, int c = 2, int d = 3);
```

### 3. Default Values in Declaration

```cpp
// In declaration
void calculate(int x, int y = 10);

// In definition
void calculate(int x, int y) {
    cout << x + y << endl;
}
```

---

## Benefits of Default Parameters

### 1. Flexibility in Calling
Allow calling functions with different numbers of arguments.

### 2. Reduce Number of Similar Functions
Instead of writing multiple functions with the same name.

### 3. Improve Readability
Make code clearer and easier to use.

---

## Summary

### Core Concepts:

1. **Default Parameters** are default values given to parameters
2. Used when the user doesn't send a value for the parameter
3. Must start from the right in the parameter list
4. Make functions more flexible and easier to use

### Main Idea:
> **"Default parameters allow functions to work even if we don't send all parameters, using default values for missing parameters"**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>