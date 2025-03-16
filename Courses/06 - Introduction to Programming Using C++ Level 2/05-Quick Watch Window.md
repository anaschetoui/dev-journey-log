<div dir="rtl" style="text-align: right;">

<a id="arabic-quick-watch"></a>
[English ↙](#english-quick-watch)

# 🔍 نافذة المشاهدة السريعة (Quick Watch Window)

## 🎯 المقدمة

في هذا الدرس، سنتعلم عن **نافذة المشاهدة السريعة (Quick Watch Window)** - أداة متقدمة في التصحيح تسمح لك بمراقبة وتعقب المتغيرات والتعبيرات والدوال بشكل مخصص أثناء تنفيذ البرنامج.

## 💡 المفاهيم الأساسية

### ما هي نافذة Quick Watch؟

**نافذة Quick Watch** هي نافذة مخصصة في بيئة التطوير (IDE) تسمح لك **بفحص وتقييم أي تعبير (expression) أثناء التنفيذ**. تختلف عن نافذة Autos التي تعرض المتغيرات المحلية تلقائياً، حيث تتيح لك Quick Watch إضافة أي شيء تريد مراقبته.

### الفرق بين Quick Watch و Autos Window:

| الميزة | Autos Window | Quick Watch Window |
|:---|:---|:---|
| **العرض** | تلقائي (Auto) | مخصص (Customized) |
| **المحتوى** | المتغيرات المحلية فقط | أي تعبير أو متغير أو دالة |
| **التحكم** | محدود | كامل التحكم |
| **التقييم** | فوري | يمكن إعادة التقييم |

## 🔧 كيفية استخدام Quick Watch

### الخطوات الأساسية:

1. **وضع نقطة توقف (Breakpoint)** في المكان المطلوب
2. **تشغيل التصحيح (F5)**
3. **تحديد التعبير** الذي تريد فحصه
4. **فتح Quick Watch** بالضغط على **Shift + F9**
5. **إضافة إلى Watch** إذا أردت متابعته باستمرار

## 💻 التطبيق العملي

### الكود المستخدم في الشرح:

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

    a = 10;                    // Breakpoint هنا
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

    c = MySum(a, b);          // فحص الدالة هنا
    cout << c;

    return 0;
}
```

</div>

## 🎯 شرح استخدام Quick Watch خطوة بخطوة

### الخطوة 1: وضع نقطة توقف وبدء التصحيح

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. ضع Breakpoint عند السطر: a = 10; (السطر 18)
2. اضغط F5 لبدء التصحيح
3. البرنامج يتوقف عند Breakpoint
4. السهم الأصفر يشير للسطر الحالي
```

</div>

### الخطوة 2: فحص قيم المتغيرات الأساسية

**قيم المتغيرات عند التوقف:**
- `a = 10` (قيمة ابتدائية)
- `b = 20` (قيمة ابتدائية)
- `c` (قيمة عشوائية - لم يتم تهيئتها بعد)

### الخطوة 3: استخدام Quick Watch لمتغيرات بسيطة

**المثال 1: فحص تعبير حسابي**

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
كيفية الاستخدام:
1. استخدم F11 للتنقل حتى السطر بعد a++ و ++b
2. قيمة a تصبح 11، قيمة b تصبح 21
3. حدد التعبير: a + b
4. اضغط Shift + F9
5. تظهر نافذة Quick Watch مع النتيجة: 32
```

</div>

**النتيجة في Quick Watch:**

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Expression: a + b
Value: 32
```

</div>

### الخطوة 4: إضافة تعبيرات معقدة إلى Watch

**المثال 2: إضافة تعبيرات مخصصة**

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
التعبيرات التي يمكن إضافتها:
1. a + 5           ← ناتج: 16 (إذا a = 11)
2. (a + b) / 2     ← ناتج: 16 (متوسط a و b)
3. a * b           ← ناتج: 231 (ضرب a و b)
4. (a + b) * 3     ← ناتج: 96

كيفية الإضافة:
1. اكتب التعبير في Quick Watch
2. اضغط "Re-evaluate" لإعادة الحساب
3. اضغط "Add Watch" للمراقبة المستمرة
```

</div>

### الخطوة 5: فحص الدوال باستخدام Quick Watch

**المثال 3: فحص قيمة دالة**

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
كيفية فحص الدالة:
1. انتقل إلى السطر: c = MySum(a, b);
2. حدد التعبير: MySum(a, b)
3. اضغط Shift + F9
4. Quick Watch تنفذ الدالة وتعرض النتيجة
5. القيمة المعروضة: 461 + 21 = 482

يمكن أيضاً إضافة: MySum(a, b) + 5
وستعرض النتيجة: 487
```

</div>

### الخطوة 6: فحص المصفوفات (Arrays)

**المثال 4: فحص عناصر المصفوفة**

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
فحص المصفوفة arr1:
1. حدد arr1 في الكود
2. اضغط Shift + F9
3. تظهر النافذة مع تفاصيل المصفوفة:

Quick Watch Window:
------------------
Name: arr1
Type: int[5]
Values:
  [0]: 200
  [1]: 100
  [2]: 50
  [3]: 25
  [4]: 30
Address: 0x000000... (عنوان ذاكرة)
```

</div>

## 🔍 تقنيات متقدمة في Quick Watch

### 1. فحص عناصر محددة في المصفوفة

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
تعبيرات المصفوفة المتقدمة:
1. arr1[0]        ← العنصر الأول: 200
2. arr1[4]        ← العنصر الأخير: 30
3. arr1[1] + arr1[2] ← جمع عنصرين: 150
4. arr1,5         ← عرض المصفوفة كاملة
```

</div>

### 2. استخدام Re-evaluate لتغيير القيم

**ميزة Re-evaluate:** تسمح لك بتغيير التعبير وإعادة حسابه دون الخروج من النافذة.

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
مثال عملي:
1. اكتب في Quick Watch: (a + b) / 2
2. النتيجة: 16
3. غير التعبير إلى: (a + b) * 3
4. اضغط Re-evaluate
5. النتيجة الجديدة: 96
6. غير إلى: (a + b) / 12
7. اضغط Re-evaluate
8. النتيجة: 2.666...
```

</div>

### 3. إضافة تعبيرات إلى Watch Window الدائمة

**الفرق بين Quick Watch و Watch Window:**

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Quick Watch:
- مؤقتة (تغلق بعد الاستخدام)
- للفحص السريع
- لا تحفظ التعبيرات

Watch Window:
- دائمة (تبقى مفتوحة)
- تحفظ جميع التعبيرات المضافة
- تظهر في كل جلسة تصحيح
- يمكن إدارتها وتنظيمها

كيفية الإضافة الدائمة:
1. فتح Quick Watch للتعبير
2. الضغط على "Add Watch"
3. يظهر التعبير في Watch Window
4. يبقى مرئياً طوال جلسة التصحيح
```

</div>

## 💡 فهم عنوان الذاكرة (Memory Address)

**كما تم التوضيح في المحاضرة عن المؤشرات (Pointers):**

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
عند فحص المصفوفة arr1 في Quick Watch:
- تظهر القيم: [200, 100, 50, 25, 30]
- ويظهر أيضاً: Address: 0x000000... (قيمة ست عشرية)

هذا العنوان:
1. هو موقع المصفوفة في الذاكرة
2. يستخدم في المؤشرات (Pointers)
3. يسمح بنقل المصفوفة بين الدوال بكفاءة
4. بدلاً من نقل 5 قيم (20 بايت)، ننقل عنوان واحد (4 بايت)

مقارنة عملية:
- نقل 5 عناصر: مثل نقل سيارة (ثقيل)
- نقل العنوان فقط: مثل إعطاء مفتاح السيارة (خفيف)
```

</div>

## 📊 مقارنة أدوات التصحيح

| الأداة | الوظيفة | الاختصار | أفضل استخدام |
|:---|:---|:---|:---|
| **Autos Window** | عرض المتغيرات المحلية تلقائياً | تلقائي | فحص سريع للمتغيرات الحالية |
| **Locals Window** | عرض جميع المتغيرات المحلية | Debug → Windows → Locals | فحص شامل للمتغيرات |
| **Quick Watch** | فحص أي تعبير مخصص | Shift + F9 | فحص سريع وتقييم تعبيرات |
| **Watch Window** | مراقبة تعبيرات محددة باستمرار | Debug → Windows → Watch | متابعة متغيرات وتعبيرات مهمة |


## ❌ أخطاء شائعة يجب تجنبها:

1. ❌ الاعتماد فقط على cout للتصحيح
2. ❌ نسيان استخدام Quick Watch للتعبيرات المعقدة
3. ❌ عدم إضافة التعبيرات المهمة إلى Watch Window
4. ❌ تجاهل عناوين الذاكرة عند فحص المصفوفات
5. ❌ عدم استخدام Re-evaluate لاختبار التعديلات


</div>

**تذكر:** إتقان Quick Watch يجعل عملية التصحيح **أكثر دقة وسرعة**، ويساعدك على فهم **كيف يعمل برنامجك حقاً** على مستوى الذاكرة! 🧠💡

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

<a id="english-quick-watch"></a>
[العربية ↗](#arabic-quick-watch)

# 🔍 Quick Watch Window

## 🎯 Introduction

In this lesson, we'll learn about the **Quick Watch Window** - an advanced debugging tool that allows you to monitor and track variables, expressions, and functions in a customized way during program execution.

## 💡 Core Concepts

### What is Quick Watch Window?

**Quick Watch Window** is a specialized window in the IDE that allows you **to examine and evaluate any expression during execution**. Unlike the Autos window which automatically displays local variables, Quick Watch lets you add anything you want to monitor.

### Difference between Quick Watch and Autos Window:

| Feature | Autos Window | Quick Watch Window |
|:---|:---|:---|
| **Display** | Automatic (Auto) | Customized |
| **Content** | Local variables only | Any expression, variable, or function |
| **Control** | Limited | Full control |
| **Evaluation** | Immediate | Can re-evaluate |

## 🔧 How to Use Quick Watch

### Basic Steps:

1. **Place a Breakpoint** at desired location
2. **Start Debugging (F5)**
3. **Select the expression** you want to examine
4. **Open Quick Watch** by pressing **Shift + F9**
5. **Add to Watch** if you want to monitor continuously

## 💻 Practical Application

### Code Used in Explanation:

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

    a = 10;                    // Breakpoint here
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

    c = MySum(a, b);          // Function examination here
    cout << c;

    return 0;
}
```

</div>

## 🎯 Step-by-Step Quick Watch Usage Explanation

### Step 1: Placing Breakpoint and Starting Debugging

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Place Breakpoint at line: a = 10; (line 18)
2. Press F5 to start debugging
3. Program stops at Breakpoint
4. Yellow arrow points to current line
```

</div>

### Step 2: Examining Basic Variable Values

**Variable values when stopped:**
- `a = 10` (initial value)
- `b = 20` (initial value)
- `c` (random value - not initialized yet)

### Step 3: Using Quick Watch for Simple Variables

**Example 1: Examining arithmetic expression**

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
How to use:
1. Use F11 to navigate until after a++ and ++b
2. a becomes 11, b becomes 21
3. Select expression: a + b
4. Press Shift + F9
5. Quick Watch window appears with result: 32
```

</div>

**Result in Quick Watch:**

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Expression: a + b
Value: 32
```

</div>

### Step 4: Adding Complex Expressions to Watch

**Example 2: Adding custom expressions**

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Expressions that can be added:
1. a + 5           ← Result: 16 (if a = 11)
2. (a + b) / 2     ← Result: 16 (average of a and b)
3. a * b           ← Result: 231 (multiply a and b)
4. (a + b) * 3     ← Result: 96

How to add:
1. Write expression in Quick Watch
2. Press "Re-evaluate" to recalculate
3. Press "Add Watch" for continuous monitoring
```

</div>

### Step 5: Examining Functions Using Quick Watch

**Example 3: Examining function value**

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
How to examine function:
1. Go to line: c = MySum(a, b);
2. Select expression: MySum(a, b)
3. Press Shift + F9
4. Quick Watch executes function and displays result
5. Value displayed: 461 + 21 = 482

Can also add: MySum(a, b) + 5
Will display result: 487
```

</div>

### Step 6: Examining Arrays

**Example 4: Examining array elements**

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Examining arr1 array:
1. Select arr1 in code
2. Press Shift + F9
3. Window appears with array details:

Quick Watch Window:
------------------
Name: arr1
Type: int[5]
Values:
  [0]: 200
  [1]: 100
  [2]: 50
  [3]: 25
  [4]: 30
Address: 0x000000... (memory address)
```

</div>

## 🔍 Advanced Quick Watch Techniques

### 1. Examining Specific Array Elements

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Advanced array expressions:
1. arr1[0]        ← First element: 200
2. arr1[4]        ← Last element: 30
3. arr1[1] + arr1[2] ← Sum two elements: 150
4. arr1,5         ← Display full array
```

</div>

### 2. Using Re-evaluate to Change Values

**Re-evaluate feature:** Allows you to change expression and recalculate without leaving window.

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Practical example:
1. Write in Quick Watch: (a + b) / 2
2. Result: 16
3. Change expression to: (a + b) * 3
4. Press Re-evaluate
5. New result: 96
6. Change to: (a + b) / 12
7. Press Re-evaluate
8. Result: 2.666...
```

</div>

### 3. Adding Expressions to Permanent Watch Window

**Difference between Quick Watch and Watch Window:**

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Quick Watch:
- Temporary (closes after use)
- For quick examination
- Doesn't save expressions

Watch Window:
- Permanent (remains open)
- Saves all added expressions
- Appears in every debugging session
- Can be managed and organized

How to add permanently:
1. Open Quick Watch for expression
2. Press "Add Watch"
3. Expression appears in Watch Window
4. Remains visible throughout debugging session
```

</div>

## 💡 Understanding Memory Address

**As explained in the lecture about Pointers:**

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
When examining arr1 array in Quick Watch:
- Shows values: [200, 100, 50, 25, 30]
- Also shows: Address: 0x000000... (hexadecimal value)

This address:
1. Is array location in memory
2. Used in Pointers
3. Allows efficient array transfer between functions
4. Instead of transferring 5 values (20 bytes), we transfer one address (4 bytes)

Practical comparison:
- Transfer 5 elements: like moving a car (heavy)
- Transfer address only: like giving car key (light)
```

</div>

## 📊 Debugging Tools Comparison

| Tool | Function | Shortcut | Best Use |
|:---|:---|:---|:---|
| **Autos Window** | Auto-display local variables | Automatic | Quick examination of current variables |
| **Locals Window** | Display all local variables | Debug → Windows → Locals | Comprehensive variable examination |
| **Quick Watch** | Examine any custom expression | Shift + F9 | Quick examination and expression evaluation |
| **Watch Window** | Continuously monitor specific expressions | Debug → Windows → Watch | Monitoring important variables and expressions |


## ❌ Common Mistakes to Avoid:

1. ❌ Relying only on cout for debugging
2. ❌ Forgetting to use Quick Watch for complex expressions
3. ❌ Not adding important expressions to Watch Window
4. ❌ Ignoring memory addresses when examining arrays
5. ❌ Not using Re-evaluate to test modifications


</div>

**Remember:** Mastering Quick Watch makes debugging **more accurate and faster**, and helps you understand **how your program really works** at the memory level! 🧠💡

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>