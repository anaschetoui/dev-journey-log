<div dir="rtl">

<a id="arabic-debugging-breakpoints"></a>
[English ↙](#english-debugging-breakpoints)

# 🚦 نقاط التوقف وقيم الذاكرة (Breakpoints & Memory Values)

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيف **نستخدم نقاط التوقف (Breakpoints)** لفحص البرنامج خطوة بخطوة، ونتتبع **قيم المتغيرات في الذاكرة** لاكتشاف الأخطاء المنطقية وإصلاحها.

## 💡 المفاهيم الأساسية

### ما هي نقطة التوقف (Breakpoint)؟

**نقطة التوقف** هي علامة نضعها في الكود لتخبر بيئة التطوير (IDE): "توقف هنا عند التنفيذ!" ⏸️  
تسمح لنا بمشاهدة حالة البرنامج في لحظة معينة، وفحص قيم جميع المتغيرات.

### فوائد استخدام نقاط التوقف:

- **التنفيذ خطوة بخطوة** (Step by Step Execution)
- **فحص قيم المتغيرات** في أي نقطة في الكود
- **تتبع تدفق البرنامج** (Program Flow)
- **اكتشاف الأخطاء المنطقية** (Logical Errors)

## 🔧 التحكم بالتنفيذ (Execution Control)

### أدوات التحكم الأساسية في وضع التصحيح:

| الأيقونة | الاسم | الوظيفة |
|:---:|:---|:---|
| ▶️ | **Continue (F5)** | يستمر التنفيذ حتى نقطة التوقف التالية |
| ⏭️ | **Step Over (F10)** | ينفذ السطر الحالي، ويتخطى الدوال (لا يدخلها) |
| ⬇️ | **Step Into (F11)** | ينفذ السطر الحالي، ويدخل إلى داخل الدوال |
| ⬆️ | **Step Out (Shift+F11)** | يخرج من الدالة الحالية، ويكمل من مكان الاستدعاء |
| 🔄 | **Restart (Ctrl+Shift+F5)** | يعيد تشغيل البرنامج من البداية |
| ⏹️ | **Stop Debugging (Shift+F5)** | يوقف عملية التصحيح |

## 💻 التطبيق العملي: تتبع قيم المصفوفات والمتغيرات

### الكود الذي سنعمل عليه:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include<iostream>
using namespace std;

int MySum(int a, int b)
{
    int s = 0;
    s = a + b;
    return s;
}

int main()
{
    int arr1[5] = { 200, 100, 50, 25, 30 };
    int a, b, c;

    a = 10;
    b = 20;
    
    a++;
    ++b;
    
    c = a + b;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    for (int i = 1; i <= 5; i++)
    {
        a = a + a * i;
    }

    c = MySum(a, b);
    cout << c;

    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### 🎯 تمرين عملي: نضع نقاط توقف ونتتبع القيم

**الخطوة 1: إعداد نقاط التوقف**
1. ضع نقطة توقف عند السطر `a = 10;` (اضغط في الهامش الأيسر أو F9)
2. ضع نقطة توقف داخل الحلقة `for`
3. ضع نقطة توقف داخل دالة `MySum`

**الخطوة 2: تشغيل التصحيح (F5)**
- سيتوقف البرنامج عند أول نقطة توقف

**الخطوة 3: تتبع قيم المتغيرات**

#### قيم المتغيرات عند نقاط مختلفة:

| نقطة التوقف | `a` | `b` | `c` | `i` | `arr1[0]` | `s` |
|:---|:---:|:---:|:---:|:---:|:---:|:---:|
| **قبل `a = 10;`** | ❌ قيم عشوائية | ❌ قيم عشوائية | ❌ قيم عشوائية | - | 200 | - |
| **بعد `a = 10;`** | 10 | 20 | ❌ قيم عشوائية | - | 200 | - |
| **بعد `a++; ++b;`** | 11 | 21 | ❌ قيم عشوائية | - | 200 | - |
| **بعد `c = a + b;`** | 11 | 21 | 32 | - | 200 | - |
| **أول تكرار للحلقة** | 11 | 21 | 32 | 1 | 200 | - |
| **داخل `MySum`** | 461 | 21 | 32 | - | 200 | 0 |

## 🔍 كيف نضع نقاط التوقف بذكاء؟

### استراتيجيات لوضع نقاط التوقف:

1. **قبل العمليات الحسابية المعقدة**
   ```cpp
   // ضع نقطة توقف هنا
   c = a + b * 2 / (x - y);
   ```

2. **داخل الحلقات التكرارية** (لمراقبة التغيرات)
   ```cpp
   for (int i = 0; i < n; i++) {
       // ضع نقطة توقف هنا
       result += array[i] * factor;
   }
   ```

3. **قبل وبعد استدعاء الدوال**
   ```cpp
   // نقطة توقف قبل الاستدعاء
   int result = calculateTotal(items);
   // نقطة توقف بعد الاستدعاء
   ```

4. **عند الشروط (if/else)**
   ```cpp
   if (age >= 18) {  // نقطة توقف هنا
       // code
   }
   ```

## 📊 نافذة Watch: مراقبة متغيرات محددة

### كيف تستخدم نافذة Watch (المشاهدة)؟

1. **إضافة متغير للمراقبة:**
   - أثناء التصحيح، انقر على المتغير ➡️ **Add to Watch**
   
2. **مراقبة تعبيرات معقدة:**
   ```
   Watch Window:
   ------------
   a + b           // يمكن كتابة تعبيرات
   arr1[0]         // عناصر المصفوفة
   MySum(a, b)     // استدعاء دوال
   i < 5           // شروط
   ```

3. **قيم المصفوفات في Watch:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Watch Window Example:
-------------------
Name         Value
------       ------
a            11
b            21
c            32
arr1[0]      200
arr1[1]      100
arr1[4]      30
arr1,5       {200,100,50,25,30}  ← مشاهدة المصفوفة كاملة
```

</div>

<div dir="rtl" style="text-align: right;">

## 🧮 تتبع التغيرات في الحلقة التكرارية

### لنحلل الحلقة خطوة بخطوة:

```cpp
for (int i = 1; i <= 5; i++)
{
    a = a + a * i;  // نقطة توقف هنا
}
```

**تتبع القيم في كل تكرار:**

| التكرار | `i` | `a` قبل | `a * i` | `a` بعد |
|:---:|:---:|:---:|:---:|:---:|
| 1 | 1 | 11 | 11 | 22 |
| 2 | 2 | 22 | 44 | 66 |
| 3 | 3 | 66 | 198 | 264 |
| 4 | 4 | 264 | 1056 | 1320 |
| 5 | 5 | 1320 | 6600 | 7920 |

**ملاحظة:** هناك خطأ منطقي! القيمة النهائية لـ `a` يجب أن تكون **461** وليس 7920.  
لنكتشف الخطأ معاً...

## 🔎 اكتشاف خطأ منطقي عبر التصحيح

### المشكلة:
بعد تشغيل الكود، نجد أن `a` تصبح 7920، لكن المتوقع أن تكون 461!

### التحقيق باستخدام التصحيح:

1. **نضع نقطة توقف داخل الحلقة**
2. **نشغل Step Over (F10) عدة مرات**
3. **نلاحظ أن `a` تتضاعف بشكل كبير جداً**
4. **نكتشف الخطأ:** العملية `a = a + a * i` تضاعف `a` مرتين!

### التصحيح:
بدلاً من: `a = a + a * i;`  
الصحيح قد يكون: `a = a + i;` أو حسب المتطلبات

## 🛠️ تقنيات متقدمة في التصحيح

### 1. Breakpoint Conditions (شروط نقاط التوقف)

**مثال:** توقف فقط عندما يكون `i == 3`
```cpp
for (int i = 1; i <= 5; i++) {
    // Breakpoint with condition: i == 3
    a = a + a * i;
}
```

### 2. Hit Count (عدد مرات التنفيذ)

**مثال:** توقف بعد 3 مرات من تنفيذ السطر
```
Breakpoint Settings:
☑️ Condition: (none)
☑️ Hit Count: 3
```

### 3. Data Breakpoints (توقف عند تغيير قيمة)

**مثال:** توقف عندما تتغير قيمة `a`
- في Visual Studio: Debug ➡️ New Breakpoint ➡️ Data Breakpoint
- أدخل `&a` كمؤشر للمتغير

## 📝 أفضل الممارسات في استخدام التصحيح

### ✅ افعل:
1. **استخدم Step Over (F10)** للتنقل بين الأسطر
2. **استخدم Step Into (F11)** لدخول الدوال المشتبه بها
3. **أضف متغيرات مهمة إلى Watch Window**
4. **ضع نقاط توقف استراتيجية** وليس عشوائية
5. **استخدم Conditions** لتوفير الوقت

### ❌ لا تفعل:
1. ❌ لا تضع نقاط توقف كثيرة جداً
2. ❌ لا تعتمد فقط على `cout` للتصحيح
3. ❌ لا تتجاهل قيم الذاكرة الأولية (القيم العشوائية)
4. ❌ لا تستمر في التصحيح بدون خطة

## 📊 الملخص والخطوات العملية

### خطوات التصحيح النموذجية:

1. **🔍 حدد المشكلة:** ما هو المتوقع vs ما يحدث فعلياً
2. **📍 ضع نقاط توقف:** عند مناطق المشكلة المحتملة
3. **▶️ ابدأ التصحيح:** (F5) للبدء
4. **👀 تتبع القيم:** استخدم Watch و Locals Windows
5. **🚶 تقدم خطوة بخطوة:** (F10) و (F11)
6. **🎯 اكتشف الجذر:** أوجد السطر المسبب للمشكلة
7. **🔧 أصلح الخطأ:** غير الكود
8. **🔄 اختبر الإصلاح:** أعد التشغيل للتأكد

### أدوات التصحيح الرئيسية:

| الأداة | الوظيفة |
|:---|:---|
| **Breakpoints** | إيقاف التنفيذ عند نقاط محددة |
| **Watch Window** | مراقبة متغيرات محددة |
| **Locals Window** | رؤية جميع المتغيرات المحلية |
| **Autos Window** | رؤية المتغيرات ذات الصلة بالسطر الحالي |
| **Call Stack** | تتبع استدعاءات الدوال |

## 🎯 التمرين النهائي

### مهمتك:
1. **شغل الكود أعلاه في Visual Studio**
2. **ضع 3 نقاط توقف:** عند السطور 15، 24، 30
3. **استخدم Step Over (F10)** لتتبع القيم
4. **سجل قيم `a`, `b`, `c`** عند كل نقطة توقف
5. **اكتشف** لماذا القيمة النهائية لـ `a` كبيرة جداً
6. **اقترح تصحيحاً** للحلقة التكرارية

### القيم المتوقعة بعد الإصلاح:
```
a = 461
b = 21
c = 482
```

**تذكر:** التصحيح ليس فقط لإصلاح الأخطاء، بل لفهم **كيف يعمل برنامجك** حقاً! 🤔💡

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
<br>
<br>
<br>
<br>
<br>
<br>

<a id="english-debugging-breakpoints"></a>
[العربية ↗](#arabic-debugging-breakpoints)

# 🚦 Breakpoints & Memory Values

## 🎯 Introduction

In this lesson, we'll learn how to **use breakpoints** to examine programs step by step, and track **memory variable values** to discover and fix logical errors.

## 💡 Core Concepts

### What is a Breakpoint?

A **breakpoint** is a marker we place in code to tell the IDE: "Stop here during execution!" ⏸️  
It allows us to view the program state at a specific moment and examine all variable values.

### Benefits of Using Breakpoints:

- **Step by step execution**
- **Examine variable values** at any point in code
- **Track program flow**
- **Discover logical errors**

## 🔧 Execution Control

### Basic Debugging Control Tools:

| Icon | Name | Function |
|:---:|:---|:---|
| ▶️ | **Continue (F5)** | Continues execution until next breakpoint |
| ⏭️ | **Step Over (F10)** | Executes current line, skips over functions |
| ⬇️ | **Step Into (F11)** | Executes current line, enters functions |
| ⬆️ | **Step Out (Shift+F11)** | Exits current function, continues from caller |
| 🔄 | **Restart (Ctrl+Shift+F5)** | Restarts program from beginning |
| ⏹️ | **Stop Debugging (Shift+F5)** | Stops debugging process |

## 💻 Practical Application: Tracking Array and Variable Values

### Code We'll Work With:

```cpp
#include<iostream>
using namespace std;

int MySum(int a, int b)
{
    int s = 0;
    s = a + b;
    return s;
}

int main()
{
    int arr1[5] = { 200, 100, 50, 25, 30 };
    int a, b, c;

    a = 10;
    b = 20;
    
    a++;
    ++b;
    
    c = a + b;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    for (int i = 1; i <= 5; i++)
    {
        a = a + a * i;
    }

    c = MySum(a, b);
    cout << c;

    return 0;
}
```

### 🎯 Practical Exercise: Setting Breakpoints and Tracking Values

**Step 1: Setting Breakpoints**
1. Set breakpoint at line `a = 10;` (click left margin or F9)
2. Set breakpoint inside the `for` loop
3. Set breakpoint inside `MySum` function

**Step 2: Start Debugging (F5)**
- Program will stop at first breakpoint

**Step 3: Track Variable Values**

#### Variable Values at Different Points:

| Breakpoint | `a` | `b` | `c` | `i` | `arr1[0]` | `s` |
|:---|:---:|:---:|:---:|:---:|:---:|:---:|
| **Before `a = 10;`** | ❌ Random | ❌ Random | ❌ Random | - | 200 | - |
| **After `a = 10;`** | 10 | 20 | ❌ Random | - | 200 | - |
| **After `a++; ++b;`** | 11 | 21 | ❌ Random | - | 200 | - |
| **After `c = a + b;`** | 11 | 21 | 32 | - | 200 | - |
| **First loop iteration** | 11 | 21 | 32 | 1 | 200 | - |
| **Inside `MySum`** | 461 | 21 | 32 | - | 200 | 0 |

## 🔍 How to Set Breakpoints Intelligently?

### Breakpoint Placement Strategies:

1. **Before complex calculations**
   ```cpp
   // Set breakpoint here
   c = a + b * 2 / (x - y);
   ```

2. **Inside loops** (to monitor changes)
   ```cpp
   for (int i = 0; i < n; i++) {
       // Set breakpoint here
       result += array[i] * factor;
   }
   ```

3. **Before and after function calls**
   ```cpp
   // Breakpoint before call
   int result = calculateTotal(items);
   // Breakpoint after call
   ```

4. **At conditions (if/else)**
   ```cpp
   if (age >= 18) {  // Breakpoint here
       // code
   }
   ```

## 📊 Watch Window: Monitoring Specific Variables

### How to Use the Watch Window?

1. **Add variable to watch:**
   - During debugging, right-click variable ➡️ **Add to Watch**
   
2. **Monitor complex expressions:**
   ```
   Watch Window:
   ------------
   a + b           // Can write expressions
   arr1[0]         // Array elements
   MySum(a, b)     // Function calls
   i < 5           // Conditions
   ```

3. **Array values in Watch:**

```
Watch Window Example:
-------------------
Name         Value
------       ------
a            11
b            21
c            32
arr1[0]      200
arr1[1]      100
arr1[4]      30
arr1,5       {200,100,50,25,30}  ← View full array
```

## 🧮 Tracking Loop Changes Step by Step

### Let's analyze the loop step by step:

```cpp
for (int i = 1; i <= 5; i++)
{
    a = a + a * i;  // Breakpoint here
}
```

**Tracking values in each iteration:**

| Iteration | `i` | `a` before | `a * i` | `a` after |
|:---:|:---:|:---:|:---:|:---:|
| 1 | 1 | 11 | 11 | 22 |
| 2 | 2 | 22 | 44 | 66 |
| 3 | 3 | 66 | 198 | 264 |
| 4 | 4 | 264 | 1056 | 1320 |
| 5 | 5 | 1320 | 6600 | 7920 |

**Note:** There's a logical error! Final value of `a` should be **461** not 7920.  
Let's discover the error together...

## 🔎 Discovering Logical Errors Through Debugging

### The Problem:
After running the code, we find `a` becomes 7920, but expected is 461!

### Investigation Using Debugging:

1. **Set breakpoint inside loop**
2. **Use Step Over (F10) multiple times**
3. **Notice `a` multiplies too rapidly**
4. **Discover error:** Operation `a = a + a * i` doubles `a` twice!

### Correction:
Instead of: `a = a + a * i;`  
Correct might be: `a = a + i;` or as per requirements

## 🛠️ Advanced Debugging Techniques

### 1. Breakpoint Conditions

**Example:** Stop only when `i == 3`
```cpp
for (int i = 1; i <= 5; i++) {
    // Breakpoint with condition: i == 3
    a = a + a * i;
}
```

### 2. Hit Count

**Example:** Stop after 3 executions of the line
```
Breakpoint Settings:
☑️ Condition: (none)
☑️ Hit Count: 3
```

### 3. Data Breakpoints

**Example:** Stop when `a` changes value
- In Visual Studio: Debug ➡️ New Breakpoint ➡️ Data Breakpoint
- Enter `&a` as variable pointer

## 📝 Best Practices in Debugging

### ✅ Do:
1. **Use Step Over (F10)** to navigate between lines
2. **Use Step Into (F11)** to enter suspicious functions
3. **Add important variables to Watch Window**
4. **Set strategic breakpoints** not random ones
5. **Use Conditions** to save time

### ❌ Don't:
1. ❌ Don't set too many breakpoints
2. ❌ Don't rely only on `cout` for debugging
3. ❌ Don't ignore initial memory values (random values)
4. ❌ Don't continue debugging without a plan

## 📊 Summary and Practical Steps

### Typical Debugging Steps:

1. **🔍 Identify the problem:** Expected vs actual outcome
2. **📍 Set breakpoints:** At potential problem areas
3. **▶️ Start debugging:** (F5) to begin
4. **👀 Track values:** Use Watch and Locals Windows
5. **🚶 Step through:** (F10) and (F11)
6. **🎯 Find root cause:** Locate problematic line
7. **🔧 Fix error:** Modify code
8. **🔄 Test fix:** Run again to confirm

### Main Debugging Tools:

| Tool | Function |
|:---|:---|
| **Breakpoints** | Stop execution at specific points |
| **Watch Window** | Monitor specific variables |
| **Locals Window** | View all local variables |
| **Autos Window** | View variables relevant to current line |
| **Call Stack** | Track function calls |

## 🎯 Final Exercise

### Your Task:
1. **Run above code in Visual Studio**
2. **Set 3 breakpoints:** at lines 15, 24, 30
3. **Use Step Over (F10)** to track values
4. **Record values of `a`, `b`, `c`** at each breakpoint
5. **Discover** why final value of `a` is too large
6. **Suggest correction** for the loop

### Expected Values After Fix:
```
a = 461
b = 21
c = 482
```

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>