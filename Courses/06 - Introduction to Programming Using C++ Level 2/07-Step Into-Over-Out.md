<div dir="rtl" style="text-align: right;">

<a id="arabic-step-into-over-out"></a>
[English ↙](#english-step-into-over-out)

# 🚶 Step Into / Over / Out

## 🎯 المقدمة

في هذا الدرس، سنتعلم عن أدوات التنقل الثلاثة الأساسية في التصحيح: **Step Into** و **Step Over** و **Step Out**. هذه الأدوات تتحكم في كيفية تحريكك خلال الكود خطوة بخطوة أثناء جلسة التصحيح.

## 💡 المفاهيم الأساسية

### أدوات التنقل الثلاثة في التصحيح:

| الأداة | الوظيفة | الاختصار |
|:---|:---|:---:|
| **Step Into** | الدخول إلى داخل الدوال خطوة بخطوة | F11 |
| **Step Over** | تنفيذ السطر الحالي دون الدخول في تفاصيل الدوال | F10 |
| **Step Out** | الخروج من الدالة الحالية والعودة لمستدعيها | Shift + F11 |

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

    c = MySum(a, b);          // اختبار Step Into/Over هنا
    cout << c;

    return 0;
}
```

</div>

## 🎯 شرح أدوات التنقل خطوة بخطوة

### الخطوة 1: وضع نقطة توقف وبدء التصحيح

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. ضع Breakpoint عند السطر: a = 10; (السطر 18)
2. اضغط F5 لبدء التصحيح
3. البرنامج يتوقف عند Breakpoint
```

</div>

## 🚶 Step Into (F11) - الدخول التفصيلي

### ما هو Step Into؟

**Step Into (F11)** هو الأمر الذي **يدخلك إلى داخل كل دالة** يتم استدعاؤها، ويتيح لك فحص كل سطر من أسطر الدالة خطوة بخطوة.

### متى نستخدم Step Into؟

- عندما **تريد فحص دالة** بشكل مفصل
- عندما **تشك في وجود خطأ** داخل دالة معينة
- عندما **تتعلم برنامج جديد** وتريد فهم تدفقه
- عندما **تفحص دالة معقدة** تحتاج إلى تحليل دقيق

### مثال عملي على Step Into:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
السيناريو: الوصول إلى سطر استدعاء الدالة
1. استخدم F11 للتنقل حتى السطر: c = MySum(a, b);
2. عند هذا السطر، اضغط F11 مرة أخرى
3. ماذا يحدث؟
   - يدخل إلى داخل دالة MySum
   - يتوقف عند أول سطر في الدالة: int s = 0;
   - يمكنك فحص كل سطر في الدالة خطوة بخطوة
   - يمكنك مشاهدة قيم المعاملات a و b
   - يمكنك تتبع حساب s خطوة بخطوة
```

</div>

### سلوك Step Inside الدوال:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
عند استخدام F11 داخل دالة MySum:
السطر 1: int s = 0; ← يتوقف هنا
السطر 2: s = a + b; ← F11 للانتقال هنا
السطر 3: return s; ← F11 للانتقال هنا
السطر 4: } ← F11 للخروج من الدالة

في كل نقلة، يمكنك:
- فحص قيمة s
- فحص قيمة a و b
- مراقبة الذاكرة
- اكتشاف الأخطاء
```

</div>

## 🏃 Step Over (F10) - التخطي السريع

### ما هو Step Over؟

**Step Over (F10)** هو الأمر الذي **ينفذ السطر الحالي كاملاً** دون الدخول في تفاصيل الدوال المستدعاة فيه.

### متى نستخدم Step Over؟

- عندما **تكون واثقاً من صحة دالة** ولا تريد تضييع الوقت في فحصها
- عندما **تريد تخطي دوال مكتبية** معروفة (مثل cout)
- عندما **تعمل على كود كبير** وتريد التركيز على مناطق معينة
- عندما **تختبر تدفق البرنامج** العام دون التفاصيل الداخلية

### مثال عملي على Step Over:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
السيناريو: تخطي دالة معروفة
1. استخدم F10 للتنقل حتى السطر: c = MySum(a, b);
2. عند هذا السطر، اضغط F10 بدلاً من F11
3. ماذا يحدث؟
   - ينفذ دالة MySum كاملة مرة واحدة
   - لا يدخل إلى داخل الدالة
   - يعود مباشرة إلى السطر التالي بعد استدعاء الدالة
   - قيمة c تحتوي على نتيجة الدالة
   - وفرت الوقت في فحص تفاصيل الدالة

مقارنة:
- باستخدام F11: تدخل الدالة → تفحص 3 أسطر → تخرج
- باستخدام F10: تنفذ الدالة → تعود مباشرة → توفير الوقت
```

</div>

### استخدام Step Over مع دوال متعددة:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
إذا كانت الدالة تستدعي دوال أخرى:
دالة MySum قد تستدعي دالة أخرى مثل: ValidateInput(a, b)
مع F11: تدخل MySum → تدخل ValidateInput → تدخل أي دوال أخرى
مع F10: تنفذ MySum كاملة → تتجاهل كل الدوال الداخلية → تعود
```

</div>

## 🚪 Step Out (Shift + F11) - الخروج السريع

### ما هو Step Out؟

**Step Out (Shift + F11)** هو الأمر الذي **يخرجك من الدالة الحالية** وينفذ باقي أسطرها تلقائياً، ثم يعود إلى نقطة الاستدعاء.

### متى نستخدم Step Out؟

- عندما **دخلت دالة بالخطأ** باستخدام F11
- عندما **انتهيت من فحص الجزء المهم** في الدالة
- عندما **تريد إنهاء تنفيذ الدالة الحالية** والعودة للسياق الرئيسي
- عندما **اكتشفت المشكلة** ولا تحتاج لفحص باقي الدالة

### مثال عملي على Step Out:

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
السيناريو: الدخول بالخطأ إلى دالة
1. وصلت إلى سطر: c = MySum(a, b);
2. بالخطأ ضغطت F11 (بدلاً من F10)
3. وجدت نفسك داخل دالة MySum
4. أدركت أن الدالة صحيحة ولا تحتاج فحص
5. الحل: اضغط Shift + F11
6. ماذا يحدث؟
   - ينفذ باقي أسطر الدالة تلقائياً
   - يخرج من الدالة
   - يعود إلى السطر التالي بعد استدعاء الدالة
   - يواصل التصحيح من هناك
```

</div>

### استخدام Step Out في منتصف الدالة:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
إذا كنت في منتصف دالة:
1. افترض أنك داخل MySum عند السطر: s = a + b;
2. فحصت القيم ووجدت أنها صحيحة
3. لا تريد فحص باقي الدالة (return s;)
4. اضغط Shift + F11
5. النتيجة:
   - ينفذ باقي الدالة (السطر return s;)
   - يخرج من الدالة
   - يعود للسطر التالي في main()
```

</div>

## 📊 مقارنة بين أدوات التنقل الثلاثة

| الميزة | Step Into (F11) | Step Over (F10) | Step Out (Shift+F11) |
|:---|:---|:---|:---|
| **السلوك** | يدخل كل الدوال | يتخطى الدوال | يخرج من الدالة الحالية |
| **الاستخدام** | فحص تفصيلي | تنفيذ سريع | خروج سريع |
| **الوقت** | بطيء (يفحص كل شيء) | سريع (يتخطى) | سريع جداً |
| **المثالية لـ** | اكتشاف أخطاء في الدوال | دوال معروفة وصحيحة | الخروج من دوال غير مهمة |
| **المسار** | يدخل في كل التفاصيل | يبقى في المستوى الحالي | يعود للمستوى الأعلى |



### استراتيجية ذكية للاستخدام:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
خليط ذكي من الأدوات:
1. استخدم F10 للأسطر البسيطة (تعيينات، عمليات حسابية)
2. استخدم F11 عند الدوال المشبوهة أو الجديدة
3. استخدم Shift + F11 عند التأكد من جزء في دالة
4. عدل الاستراتيجية حسب الحاجة

مثال:
- main(): F10 للأسطر البسيطة
- دوال معروفة: F10
- دوال مكتوبة حديثاً: F11
- دوال معقدة: F11 مع Shift + F11 عند الانتهاء
```

</div>

## 💡 نصائح عملية من الشرح

### 1. التعود على الاختصارات:
- **F11** لفحص الدوال بتفصيل
- **F10** للتنقل السريع
- **Shift + F11** للخروج من الدوال

### 2. فهم السياق:
- استخدم **F11** عندما تحتاج فهم كيفية عمل الدالة
- استخدم **F10** عندما تعرف ماذا تفعل الدالة
- استخدم **Shift + F11** عندما تريد العودة للسياق الرئيسي

### 3. توفير الوقت:
- لا تستخدم **F11** لكل شيء - سيأخذ وقتاً طويلاً
- لا تستخدم **F10** دائماً - قد تفوتك أخطاء
- استخدم المزيج المناسب لكل حالة

### 4. الممارسة:
- جرب جميع الخيارات على الكود نفسه
- لاحظ الفرق في السلوك
- اعثر على الاستراتيجية المناسبة لك

## 📝 الملاحظات المهمة

### ما تعلمناه:
1. **Step Into (F11)** للدخول العميق في الدوال
2. **Step Over (F10)** للتخطي السريع للدوال
3. **Step Out (Shift+F11)** للخروج من الدوال الحالية

### أهمية هذه الأدوات:
- موجودة في **جميع لغات البرمجة**
- موجودة في **جميع بيئات التطوير (IDEs)**
- **تزيد إنتاجيتك** كمطور
- **توفر الوقت** في عملية التصحيح

### التطبيق الصحيح:
- استخدم **F11** عندما تريد الفحص الدقيق
- استخدم **F10** عندما تريد السرعة
- استخدم **Shift+F11** عندما تريد الخروج

## 🎯 الخلاصة والتطبيق

### المهارات المكتسبة:

| المهارة | الاختصار | متى تستخدمها |
|:---|:---:|:---|
| **الدخول التفصيلي للدوال** | F11 | عند فحص دوال جديدة أو مشبوهة |
| **التنفيذ السريع** | F10 | عند المرور على دوال معروفة |
| **الخروج من الدوال** | Shift+F11 | عند الانتهاء من فحص دالة |

### خطوة التطبيق النهائية:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
جرب بنفسك:
1. افتح الكود في Visual Studio
2. ضع Breakpoint عند البداية
3. جرب:
   - استخدام F11 لدخول دالة MySum
   - استخدام F10 لتخطي استدعاء MySum
   - استخدام Shift+F11 للخروج من MySum
4. لاحظ الفرق في السلوك
5. اعثر على الطريقة المناسبة لك
```

</div>

**تذكر:** إتقان Step Into و Step Over و Step Out يجعل عملية التصحيح **أكثر كفاءة وسرعة**، ويساعدك على **التركيز على المناطق المهمة** في برنامجك! ⚡🔍

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

<a id="english-step-into-over-out"></a>
[العربية ↗](#arabic-step-into-over-out)

# 🚶 Step Into / Over / Out

## 🎯 Introduction

In this lesson, we'll learn about the three basic navigation tools in debugging: **Step Into**, **Step Over**, and **Step Out**. These tools control how you move through code step by step during a debugging session.

## 💡 Core Concepts

### The Three Navigation Tools in Debugging:

| Tool | Function | Shortcut |
|:---|:---|:---:|
| **Step Into** | Enter functions step by step | F11 |
| **Step Over** | Execute current line without entering function details | F10 |
| **Step Out** | Exit current function and return to caller | Shift + F11 |

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

    c = MySum(a, b);          // Test Step Into/Over here
    cout << c;

    return 0;
}
```

</div>

## 🎯 Step-by-Step Navigation Tools Explanation

### Step 1: Placing Breakpoint and Starting Debugging

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Place Breakpoint at line: a = 10; (line 18)
2. Press F5 to start debugging
3. Program stops at Breakpoint
```

</div>

## 🚶 Step Into (F11) - Detailed Entry

### What is Step Into?

**Step Into (F11)** is the command that **enters into every function** that is called, allowing you to examine each line of the function step by step.

### When to Use Step Into?

- When **you want to examine a function** in detail
- When **you suspect an error** inside a specific function
- When **learning a new program** and want to understand its flow
- When **examining a complex function** that needs careful analysis

### Practical Example of Step Into:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Scenario: Reaching function call line
1. Use F11 to navigate until line: c = MySum(a, b);
2. At this line, press F11 again
3. What happens?
   - Enters into MySum function
   - Stops at first line in function: int s = 0;
   - You can examine each line in function step by step
   - You can see values of parameters a and b
   - You can track calculation of s step by step
```

</div>

### Step Inside Functions Behavior:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
When using F11 inside MySum function:
Line 1: int s = 0; ← stops here
Line 2: s = a + b; ← F11 to go here
Line 3: return s; ← F11 to go here
Line 4: } ← F11 to exit function

At each step, you can:
- Examine value of s
- Examine values of a and b
- Monitor memory
- Discover errors
```

</div>

## 🏃 Step Over (F10) - Quick Skip

### What is Step Over?

**Step Over (F10)** is the command that **executes the current line completely** without entering into details of called functions.

### When to Use Step Over?

- When **you're confident about a function** and don't want to waste time examining it
- When **you want to skip library functions** (like cout)
- When **working on large code** and want to focus on specific areas
- When **testing general program flow** without internal details

### Practical Example of Step Over:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Scenario: Skipping a known function
1. Use F10 to navigate until line: c = MySum(a, b);
2. At this line, press F10 instead of F11
3. What happens?
   - Executes MySum function completely at once
   - Does not enter the function
   - Returns directly to next line after function call
   - Value of c contains function result
   - Saved time in examining function details

Comparison:
- Using F11: enter function → examine 3 lines → exit
- Using F10: execute function → return directly → save time
```

</div>

### Using Step Over with Multiple Functions:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
If function calls other functions:
MySum function might call another function like: ValidateInput(a, b)
With F11: enter MySum → enter ValidateInput → enter any other functions
With F10: execute MySum completely → ignore all internal functions → return
```

</div>

## 🚪 Step Out (Shift + F11) - Quick Exit

### What is Step Out?

**Step Out (Shift + F11)** is the command that **exits the current function** and automatically executes its remaining lines, then returns to the calling point.

### When to Use Step Out?

- When **you entered a function by mistake** using F11
- When **you finished examining important part** of function
- When **you want to finish executing current function** and return to main context
- When **you discovered the problem** and don't need to examine rest of function

### Practical Example of Step Out:

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Scenario: Entering function by mistake
1. Reached line: c = MySum(a, b);
2. By mistake pressed F11 (instead of F10)
3. Found yourself inside MySum function
4. Realized function is correct and doesn't need examination
5. Solution: Press Shift + F11
6. What happens?
   - Executes remaining function lines automatically
   - Exits the function
   - Returns to next line after function call
   - Continues debugging from there
```

</div>

### Using Step Out in Middle of Function:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
If you're in middle of function:
1. Assume you're inside MySum at line: s = a + b;
2. Examined values and found them correct
3. Don't want to examine rest of function (return s;)
4. Press Shift + F11
5. Result:
   - Executes rest of function (line return s;)
   - Exits function
   - Returns to next line in main()
```

</div>

## 📊 Comparison Between the Three Navigation Tools

| Feature | Step Into (F11) | Step Over (F10) | Step Out (Shift+F11) |
|:---|:---|:---|:---|
| **Behavior** | Enters all functions | Skips functions | Exits current function |
| **Usage** | Detailed examination | Quick execution | Quick exit |
| **Time** | Slow (examines everything) | Fast (skips) | Very fast |
| **Ideal for** | Discovering errors in functions | Known and correct functions | Exiting unimportant functions |
| **Path** | Enters all details | Stays at current level | Returns to higher level |



### Smart Usage Strategy:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Smart mix of tools:
1. Use F10 for simple lines (assignments, calculations)
2. Use F11 for suspicious or new functions
3. Use Shift + F11 when sure about part in function
4. Adjust strategy as needed

Example:
- main(): F10 for simple lines
- Known functions: F10
- Recently written functions: F11
- Complex functions: F11 with Shift + F11 when done
```

</div>

## 💡 Practical Tips from Explanation

### 1. Get Used to Shortcuts:
- **F11** to examine functions in detail
- **F10** for quick navigation
- **Shift + F11** to exit functions

### 2. Understand Context:
- Use **F11** when you need to understand how function works
- Use **F10** when you know what function does
- Use **Shift + F11** when you want to return to main context

### 3. Save Time:
- Don't use **F11** for everything - will take long time
- Don't always use **F10** - might miss errors
- Use appropriate mix for each case

### 4. Practice:
- Try all options on same code
- Notice difference in behavior
- Find strategy that suits you

## 📝 Important Notes

### What We Learned:
1. **Step Into (F11)** for deep entry into functions
2. **Step Over (F10)** for quick skipping of functions
3. **Step Out (Shift+F11)** for exiting current functions

### Importance of These Tools:
- Available in **all programming languages**
- Available in **all development environments (IDEs)**
- **Increase your productivity** as developer
- **Save time** in debugging process

### Correct Application:
- Use **F11** when you want detailed examination
- Use **F10** when you want speed
- Use **Shift+F11** when you want to exit



## Skills Acquired:

| Skill | Shortcut | When to Use |
|:---|:---:|:---|
| **Detailed entry into functions** | F11 | When examining new or suspicious functions |
| **Quick execution** | F10 | When passing through known functions |
| **Exiting functions** | Shift+F11 | When finished examining function |


</div>

**Remember:** Mastering Step Into, Step Over, and Step Out makes debugging **more efficient and faster**, and helps you **focus on important areas** in your program! ⚡🔍

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>