<div dir="rtl" style="text-align: right;">

<a id="arabic-breakpoints-advanced"></a>
[English ↙](#english-breakpoints-advanced)

# ⚙️ المزيد عن نقاط التوقف (More about Breakpoints)

## 🎯 المقدمة

في هذا الدرس، سنتعلم تقنيات متقدمة في استخدام **نقاط التوقف (Breakpoints)**، بما في ذلك كيفية إدارتها، وتعطيلها، والتحكم في تنفيذ البرنامج بين نقاط التوقف المتعددة.

## 💡 المفاهيم الأساسية

### تعدد نقاط التوقف (Multiple Breakpoints)

**نقطة التوقف** ليست واحدة فقط! يمكنك وضع **عدة نقاط توقف** في أماكن مختلفة من البرنامج للتحكم في مسار التنفيذ وفحص البرنامج في مراحل متعددة.

### لماذا نستخدم عدة نقاط توقف؟

- **فحص أجزاء مختلفة** من البرنامج في جلسة تصحيح واحدة
- **القفز فوق الأجزاء المعروفة** والانتقال مباشرة إلى المناطق المشكلة
- **توفير الوقت** عند تصحيح البرامج الكبيرة
- **فحص حالات متعددة** في نفس الوقت

## 🔧 التحكم المتقدم بالتنفيذ

### التنقل بين نقاط التوقف المتعددة:

| الاختصار | الوظيفة | الاستخدام |
|:---:|:---|:---|
| **F11** | Step Into | التنقل سطراً بسطر والدخول في الدوال |
| **F5** | Continue | الاستمرار في التنفيذ حتى نقطة التوقف التالية |
| **السهم الأصفر** | Drag & Drop | سحب المؤشر إلى أي سطر لإعادة التنفيذ |

## 💻 التطبيق العملي: إدارة نقاط التوقف المتعددة

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

    a = 10;                    // Breakpoint 1 هنا
    b = 20;
    
    a++;
    ++b;
    
    c = a + b;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    for (int i = 1; i <= 5; i++)
    {
        a = a + a * i;        // الحلقة (بدون breakpoint)
    }

    c = MySum(a, b);          // Breakpoint 2 هنا
    cout << c;

    return 0;
}
```

</div>

## 🎯 شرح تقنيات نقاط التوقف المتقدمة

### 1. وضع عدة نقاط توقف

**كما شرح في المحاضرة:**
- ضع **Breakpoint 1** عند السطر `a = 10;` (السطر 18)
- ضع **Breakpoint 2** عند السطر `c = MySum(a, b);` (السطر 33)

**كيفية وضع نقاط التوقف:**
1. انقر في الهامش الأيسر بجوار رقم السطر
2. أو اضغط **F9** أثناء وجود المؤشر على السطر
3. ستظهر دائرة حمراء كاملة ✅

### 2. التنقل بين نقاط التوقف

**السيناريو:** أنت متوقف عند Breakpoint 1 وتريد الانتقال إلى Breakpoint 2

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الحالة: متوقف عند Breakpoint 1 (a = 10)

الخيار 1: F11 (Step Into)
- تفحص كل سطر
- تدخل في كل دالة
- تفحص الحلقة التكرارية خطوة بخطوة

الخيار 2: F5 (Continue) ← **الأفضل حسب المحاضرة**
- يتخطى كل شيء
- يصل مباشرة إلى Breakpoint 2
- يتجاهل الحلقة التكرارية
```

</div>

**الاستخدام العملي حسب المحاضرة:**
- إذا كنت **واثقاً من صحة الحلقة** ولا تريد تضييع الوقت
- اضغط **F5** للقفز مباشرة إلى Breakpoint التالي
- إذا كنت **تريد فحص الحلقة**، استخدم F11 للتحقق سطراً بسطر

### 3. سحب المؤشر الأصفر (Yellow Arrow Drag)

**الميزة الجديدة:** يمكنك **سحب السهم الأصفر** بالماوس وإسقاطه في أي مكان!

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
كيفية الاستخدام:
1. أثناء التصحيح، يظهر سهم أصفر يشير للسطر الحالي
2. انقر على السهم واسحبه لأعلى أو لأسفل
3. أفلته عند السطر الذي تريد إعادة تنفيذه من عنده
```

</div>

**فوائد سحب المؤشر:**
- **إعادة تنفيذ جزء معين** من البرنامج
- **الرجوع للوراء** إذا أخطأت في خطوة
- **اختبار سيناريوهات مختلفة** دون إعادة تشغيل البرنامج
- **تصحيح الأخطاء** بسرعة أكبر

## 🛠️ إدارة نقاط التوقف (Breakpoints Management)

### 1. تعطيل نقاط التوقف (Disable Breakpoints)

**متى نستخدمها؟**
- عندما **نريد تشغيل البرنامج كاملاً** دون توقف
- عند **اختبار الأداء** دون تأثير نقاط التوقف
- عندما **ننتهي من التصحيح** ولكن نريد حفظ المواقع

**كيفية التعطيل:**

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الطريقة:
1. انتقل إلى Debug → Breakpoints
2. اختر "Disable All Breakpoints"

النتيجة:
● Breakpoint 1: ⭕ (دائرة فارغة حمراء)
● Breakpoint 2: ⭕ (دائرة فارغة حمراء)

المعنى: النقطة موجودة ولكن غير مفعلة
```

</div>

### 2. تمكين نقاط التوقف (Enable Breakpoints)

**متى نستخدمها؟**
- عند **العودة للتصحيح** بعد تشغيل البرنامج
- عندما **نحتاج فحص مناطق محددة**
- عند **اختبار سيناريوهات جديدة**

**كيفية التمكين:**

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الطريقة:
1. انتقل إلى Debug → Breakpoints
2. اختر "Enable All Breakpoints"

النتيجة:
● Breakpoint 1: 🔴 (دائرة ممتلئة حمراء)
● Breakpoint 2: 🔴 (دائرة ممتلئة حمراء)

المعنى: النقطة مفعلة وجاهزة للاستخدام
```

</div>

### 3. حذف نقاط التوقف (Delete Breakpoints)

**متى نستخدمها؟**
- عند **إنهاء جلسة التصحيح** نهائياً
- عندما **نريد بدء جلسة جديدة** بمواقع مختلفة
- عند **إزالة النقاط القديمة** غير الضرورية

**كيفية الحذف:**

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الطريقة:
1. انتقل إلى Debug → Breakpoints
2. اختر "Delete All Breakpoints"
3. تأكيد: Yes

النتيجة:
● جميع النقاط تختفي
● الهامش الأيسر يصبح نظيفاً
● يحتاج إعادة وضع النقاط عند الحاجة
```

</div>

## 📊 مقارنة حالات نقاط التوقف

| الحالة | الشكل | المعنى | متى تستخدم |
|:---|:---:|:---|:---|
| **مفعلة (Enabled)** | 🔴 | النقطة نشطة، البرنامج يتوقف عندها | أثناء التصحيح النشط |
| **معطلة (Disabled)** | ⭕ | النقطة موجودة ولكن غير مفعلة | عند تشغيل البرنامج كاملاً |
| **محذوفة (Deleted)** | ❌ | النقطة غير موجودة | عند إنهاء جلسة التصحيح |

## 🎯 تطبيق المحاضرة خطوة بخطوة

**بناءً على شرح المحاضرة، لنطبق عملياً:**

### الخطوة 1: وضع نقطتي توقف

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. افتح الكود في Visual Studio
2. ضع Breakpoint 1 عند: a = 10; (السطر 18)
3. ضع Breakpoint 2 عند: c = MySum(a, b); (السطر 33)
4. تأكد من ظهور دائرتين حمراوين ممتلئتين 🔴 🔴
```

</div>

### الخطوة 2: تشغيل التصحيح

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. اضغط F5 لبدء التصحيح
2. البرنامج يتوقف عند Breakpoint 1
3. استخدم F10 للتقدم خطوة بخطوة
```

</div>

### الخطوة 3: القفز إلى Breakpoint 2

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. أنت الآن عند Breakpoint 1
2. بدلاً من F11 (الذي يفحص الحلقة)
3. اضغط F5 للقفز مباشرة إلى Breakpoint 2
4. البرنامج يتخطى الحلقة ويصل مباشرة للدالة
```

</div>

### الخطوة 4: استخدام سحب المؤشر

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. أثناء التصحيح، لاحظ السهم الأصفر
2. اسحب السهم لأعلى إلى السطر a = 10;
3. أفلت السهم
4. البرنامج يعيد التنفيذ من هذه النقطة
```

</div>

### الخطوة 5: إدارة النقاط

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Disable All Breakpoints:
   - Debug → Breakpoints → Disable All
   - تتحول الدوائر إلى ⭕ ⭕

2. Enable All Breakpoints:
   - Debug → Breakpoints → Enable All
   - تعود الدوائر إلى 🔴 🔴

3. Delete All Breakpoints:
   - Debug → Breakpoints → Delete All
   - تختفي جميع النقاط
```

</div>

## 📝 أفضل الممارسات في إدارة نقاط التوقف

### ✅ نصائح عملية من المحاضرة:

1. **استخدم عدة نقاط توقف** عندما يكون البرنامج كبيراً
2. **استخدم F5 للقفز** عندما تكون واثقاً من جزء معين
3. **استخدم F11 للفحص** عندما تشك في منطقة محددة
4. **استخدم Disable** عندما تريد تشغيل البرنامج بسرعة
5. **استخدم Delete** عند إنهاء جلسة العمل
6. **جرب سحب المؤشر** لإعادة تنفيذ الأجزاء

### ❌ أخطاء شائعة يجب تجنبها:

1. ❌ وضع نقاط توقف كثيرة جداً في نفس المنطقة
2. ❌ نسيان تعطيل النقاط قبل تشغيل البرنامج النهائي
3. ❌ الاعتماد فقط على نقطة توقف واحدة في البرامج الكبيرة
4. ❌ عدم استخدام F5 للقفز فوق الأجزاء المعروفة

## 📊 الملخص والتطبيق العملي

### المهارات التي تعلمناها:

| المهارة | الاختصار | الفائدة |
|:---|:---:|:---|
| **وضع عدة نقاط توقف** | F9 | فحص مناطق متعددة من البرنامج |
| **القفز بين النقاط** | F5 | توفير الوقت في الأجزاء المعروفة |
| **سحب المؤشر** | Drag | إعادة تنفيذ أجزاء محددة |
| **تعطيل النقاط** | Disable | تشغيل البرنامج دون توقف |
| **تمكين النقاط** | Enable | العودة للتصحيح بسرعة |
| **حذف النقاط** | Delete | تنظيف بيئة العمل |

</div>

**تذكر:** إتقان إدارة نقاط التوقف يجعل عملية التصحيح **أسرع وأكثر كفاءة**! ⚡

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

<a id="english-breakpoints-advanced"></a>
[العربية ↗](#arabic-breakpoints-advanced)

# ⚙️ More about Breakpoints

## 🎯 Introduction

In this lesson, we'll learn advanced techniques for using **breakpoints**, including how to manage them, disable them, and control program execution between multiple breakpoints.

## 💡 Core Concepts

### Multiple Breakpoints

A **breakpoint** isn't just one! You can place **multiple breakpoints** in different locations in your program to control execution flow and examine the program at multiple stages.

### Why Use Multiple Breakpoints?

- **Examine different parts** of the program in one debugging session
- **Skip over known sections** and jump directly to problem areas
- **Save time** when debugging large programs
- **Test multiple scenarios** simultaneously

## 🔧 Advanced Execution Control

### Navigating Between Multiple Breakpoints:

| Shortcut | Function | Usage |
|:---:|:---|:---|
| **F11** | Step Into | Navigate line by line and enter functions |
| **F5** | Continue | Continue execution until next breakpoint |
| **Yellow Arrow** | Drag & Drop | Drag pointer to any line to re-execute |

## 💻 Practical Application: Managing Multiple Breakpoints

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

    a = 10;                    // Breakpoint 1 here
    b = 20;
    
    a++;
    ++b;
    
    c = a + b;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    for (int i = 1; i <= 5; i++)
    {
        a = a + a * i;        // Loop (no breakpoint)
    }

    c = MySum(a, b);          // Breakpoint 2 here
    cout << c;

    return 0;
}
```

</div>

## 🎯 Explanation of Advanced Breakpoint Techniques

### 1. Placing Multiple Breakpoints

**As explained in the lecture:**
- Place **Breakpoint 1** at line `a = 10;` (line 18)
- Place **Breakpoint 2** at line `c = MySum(a, b);` (line 33)

**How to place breakpoints:**
1. Click in left margin next to line number
2. Or press **F9** while cursor is on the line
3. A solid red circle will appear ✅

### 2. Navigating Between Breakpoints

**Scenario:** You're stopped at Breakpoint 1 and want to go to Breakpoint 2

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Situation: Stopped at Breakpoint 1 (a = 10)

Option 1: F11 (Step Into)
- Examine every line
- Enter every function
- Check loop step by step

Option 2: F5 (Continue) ← **Best according to lecture**
- Skip everything
- Go directly to Breakpoint 2
- Ignore the loop
```

</div>

**Practical use according to lecture:**
- If you're **confident about the loop** and don't want to waste time
- Press **F5** to jump directly to next Breakpoint
- If you **want to examine the loop**, use F11 to check line by line

### 3. Dragging the Yellow Arrow

**New feature:** You can **drag the yellow arrow** with mouse and drop it anywhere!

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
How to use:
1. During debugging, yellow arrow points to current line
2. Click on arrow and drag it up or down
3. Drop it at line where you want to re-execute from
```

</div>

**Benefits of dragging the pointer:**
- **Re-execute specific part** of program
- **Go back** if you made a mistake
- **Test different scenarios** without restarting program
- **Fix errors** faster

## 🛠️ Breakpoints Management

### 1. Disable Breakpoints

**When to use:**
- When **running program completely** without stopping
- When **testing performance** without breakpoint effects
- When **finished debugging** but want to save locations

**How to disable:**

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Method:
1. Go to Debug → Breakpoints
2. Choose "Disable All Breakpoints"

Result:
● Breakpoint 1: ⭕ (empty red circle)
● Breakpoint 2: ⭕ (empty red circle)

Meaning: Point exists but inactive
```

</div>

### 2. Enable Breakpoints

**When to use:**
- When **returning to debug** after running program
- When **need to examine specific areas**
- When **testing new scenarios**

**How to enable:**

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Method:
1. Go to Debug → Breakpoints
2. Choose "Enable All Breakpoints"

Result:
● Breakpoint 1: 🔴 (solid red circle)
● Breakpoint 2: 🔴 (solid red circle)

Meaning: Point active and ready to use
```

</div>

### 3. Delete Breakpoints

**When to use:**
- When **ending debugging session** completely
- When **starting new session** with different locations
- When **removing old points** no longer needed

**How to delete:**

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Method:
1. Go to Debug → Breakpoints
2. Choose "Delete All Breakpoints"
3. Confirm: Yes

Result:
● All points disappear
● Left margin becomes clean
● Need to re-place points when needed
```

</div>

## 📊 Breakpoint States Comparison

| State | Symbol | Meaning | When to Use |
|:---|:---:|:---|:---|
| **Enabled** | 🔴 | Point active, program stops here | During active debugging |
| **Disabled** | ⭕ | Point exists but inactive | When running program completely |
| **Deleted** | ❌ | Point doesn't exist | When ending debugging session |

## 🎯 Step-by-Step Lecture Application

**Based on lecture explanation, let's apply practically:**

### Step 1: Placing Two Breakpoints

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Open code in Visual Studio
2. Place Breakpoint 1 at: a = 10; (line 18)
3. Place Breakpoint 2 at: c = MySum(a, b); (line 33)
4. Ensure two solid red circles appear 🔴 🔴
```

</div>

### Step 2: Starting Debugging

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Press F5 to start debugging
2. Program stops at Breakpoint 1
3. Use F10 to step through
```

</div>

### Step 3: Jumping to Breakpoint 2

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. You're now at Breakpoint 1
2. Instead of F11 (which examines loop)
3. Press F5 to jump directly to Breakpoint 2
4. Program skips loop and goes directly to function
```

</div>

### Step 4: Using Drag Feature

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. During debugging, notice yellow arrow
2. Drag arrow up to line a = 10;
3. Drop arrow
4. Program re-executes from this point
```

</div>

### Step 5: Managing Points

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Disable All Breakpoints:
   - Debug → Breakpoints → Disable All
   - Circles change to ⭕ ⭕

2. Enable All Breakpoints:
   - Debug → Breakpoints → Enable All
   - Circles return to 🔴 🔴

3. Delete All Breakpoints:
   - Debug → Breakpoints → Delete All
   - All points disappear
```

</div>

## 📝 Best Practices in Breakpoint Management

### ✅ Practical Tips from Lecture:

1. **Use multiple breakpoints** when program is large
2. **Use F5 to jump** when confident about certain section
3. **Use F11 to examine** when suspicious of specific area
4. **Use Disable** when wanting to run program quickly
5. **Use Delete** when ending work session
6. **Try dragging pointer** to re-execute sections

### ❌ Common Mistakes to Avoid:

1. ❌ Placing too many breakpoints in same area
2. ❌ Forgetting to disable points before final run
3. ❌ Relying only on one breakpoint in large programs
4. ❌ Not using F5 to skip over known sections

## 📊 Summary and Practical Application

### Skills We Learned:

| Skill | Shortcut | Benefit |
|:---|:---:|:---|
| **Placing multiple breakpoints** | F9 | Examine multiple program areas |
| **Jumping between points** | F5 | Save time in known sections |
| **Dragging pointer** | Drag | Re-execute specific parts |
| **Disabling points** | Disable | Run program without stopping |
| **Enabling points** | Enable | Return to debugging quickly |
| **Deleting points** | Delete | Clean work environment |


</div>

**Remember:** Mastering breakpoint management makes debugging **faster and more efficient**! ⚡

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>