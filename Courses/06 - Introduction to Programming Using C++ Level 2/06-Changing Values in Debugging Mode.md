<div dir="rtl" style="text-align: right;">

<a id="arabic-change-values-debugging"></a>
[English ↙](#english-change-values-debugging)

# ✏️ تغيير القيم في وضع التصحيح (Changing Values in Debugging Mode)

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيفية **تغيير قيم المتغيرات أثناء التنفيذ (Runtime)** في وضع التصحيح. هذه الميزة تسمح لك بتجربة سيناريوهات مختلفة دون الحاجة إلى إعادة تشغيل البرنامج من البداية.

## 💡 المفاهيم الأساسية

### تغيير القيم أثناء التنفيذ (Runtime Value Modification)

عندما تكون في وضع التصحيح وتتوقف عند نقطة توقف (Breakpoint)، يمكنك **تغيير قيمة أي متغير مباشرة** دون تعديل الكود الأصلي أو إعادة التشغيل. هذه الميزة مفيدة لاختبار حالات مختلفة بسرعة.

### لماذا نغير القيم أثناء التصحيح؟

- **اختبار سيناريوهات مختلفة** دون تعديل الكود
- **تصحيح الأخطاء** بتجربة قيم جديدة
- **توفير الوقت** بتجنب إعادة التشغيل المتكرر
- **فحص سلوك البرنامج** مع قيم مختلفة

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

    c = MySum(a, b);
    cout << c;

    return 0;
}
```

</div>

## 🎯 شرح تغيير القيم خطوة بخطوة

### الخطوة 1: وضع نقطة توقف وبدء التصحيح

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. ضع Breakpoint عند السطر: a = 10; (السطر 18)
2. اضغط F5 لبدء التصحيح
3. البرنامج يتوقف عند Breakpoint
```

</div>

### الخطوة 2: تغيير قيمة المتغير a

**عند التوقف عند `a = 10;`:**
- قيمة `a` الحالية: 10
- السهم الأصفر يشير إلى هذا السطر

**كيفية التغيير:**
1. **بواسطة الماوس مباشرة على الكود:**
   - انقر نقراً مزدوجاً على القيمة `10` في السطر
   - غيرها إلى `12`
   - اضغط Enter
   
2. **النتيجة:**
   - قيمة `a` تصبح `12` بدلاً من `10`
   - التغيير يحدث في الذاكرة مباشرة
   - البرنامج يستمر من هذه النقطة بالقيمة الجديدة

### الخطوة 3: الاستمرار في التنفيذ وتغيير قيم أخرى

**بعد تغيير `a` إلى 12:**
1. اضغط **F11** للانتقال للسطر التالي
2. قيمة `b` تكون `20`
3. يمكن تغيير `b` بنفس الطريقة إذا لزم الأمر

### الخطوة 4: تغيير قيمة المتغير i في الحلقة

**عند الدخول في الحلقة التكرارية:**
1. استمر بالضغط على **F11** حتى تدخل الحلقة
2. قيمة `i` الأولية تكون `1`

**تغيير قيمة i:**
1. **الطريقة الأولى: عن طريق الماوس على الكود**
   - انقر نقراً مزدوجاً على `i` في السطر
   - غير القيمة من `1` إلى `4`
   - اضغط Enter
   
2. **الطريقة الثانية: عن طريق Autos Window**
   - ابحث عن المتغير `i` في نافذة Autos
   - انقر نقراً مزدوجاً على قيمته
   - أدخل القيمة الجديدة `2`
   - اضغط Enter

3. **الطريقة الثالثة: عن طريق Watch Window**
   - أضف المتغير `i` إلى Watch Window
   - انقر نقراً مزدوجاً على قيمته
   - أدخل القيمة الجديدة
   - اضغط Enter

## 🛠️ طرق تغيير القيم المختلفة

### 1. التغيير المباشر على الكود (Direct Code Editing)

**المزايا:**
- أسرع طريقة
- مباشرة على مكان المتغير
- مناسبة للتغييرات البسيطة

**الخطوات:**
<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. أثناء التصحيح، ابحث عن المتغير في الكود
2. انقر نقراً مزدوجاً على قيمته
3. اكتب القيمة الجديدة
4. اضغط Enter
5. يتغير لون الخط إلى الأحمر indicating التغيير
```

</div>

### 2. التغيير عبر Autos Window

**المزايا:**
- عرض جميع المتغيرات المحلية
- سهولة الوصول للمتغيرات
- مناسب عندما يكون الكود طويلاً

**الخطوات:**
<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. افتح نافذة Autos (تظهر تلقائياً أثناء التصحيح)
2. ابحث عن المتغير المطلوب
3. انقر نقراً مزدوجاً على عمود "Value"
4. اكتب القيمة الجديدة
5. اضغط Enter
```

</div>

### 3. التغيير عبر Watch Window

**المزايا:**
- للمتغيرات المضافة مسبقاً
- يمكن إضافة تعبيرات معقدة
- التحكم الكامل

**الخطوات:**
<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. أضف المتغير إلى Watch Window
2. انقر نقراً مزدوجاً على قيمته
3. اكتب القيمة الجديدة
4. اضغط Enter
```

</div>

## 🔍 أمثلة عملية من الشرح

### المثال 1: تغيير قيمة متغير أساسي

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الحالة: البرنامج متوقف عند a = 10;
الإجراء: تغيير قيمة a من 10 إلى 12
الطريقة: نقر مزدوج على 10 في الكود
النتيجة: a تصبح 12 في الذاكرة
```

</div>

### المثال 2: تغيير عداد الحلقة

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الحالة: داخل الحلقة، i = 1
الإجراء: تغيير قيمة i من 1 إلى 4
الطريقة 1: مباشرة على الكود
الطريقة 2: عبر Autos Window
الطريقة 3: عبر Watch Window
النتيجة: الحلقة تبدأ من i = 4
```

</div>

### المثال 3: تغيير قيمة مصفوفة

**لاحظ:** يمكن أيضاً تغيير عناصر المصفوفة:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المصفوفة: arr1[5] = {200, 100, 50, 25, 30}
تغيير العنصر الأول:
1. في Watch Window: arr1[0]
2. انقر مزدوج على القيمة 200
3. غيرها إلى 300
4. اضغط Enter
النتيجة: arr1[0] تصبح 300
```

</div>

## 📊 تأثير تغيير القيم على التنفيذ

### قبل التغيير:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المسار الأصلي:
a = 10 → a++ → a = 11
b = 20 → ++b → b = 21
c = a + b → c = 32
```

</div>

### بعد تغيير a إلى 12:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المسار الجديد:
a = 12 → a++ → a = 13
b = 20 → ++b → b = 21
c = a + b → c = 34
```

</div>

## 💡 فوائد تغيير القيم أثناء التصحيح

### 1. توفير الوقت (Time Saving)
- لا حاجة لإعادة تشغيل البرنامج
- تجربة سريعة لقيم مختلفة
- اختبار مباشر للتعديلات

### 2. تصحيح الأخطاء (Debugging)
- تجربة حلول بديلة
- فهم تأثير القيم المختلفة
- اكتشاف العلاقات بين المتغيرات

### 3. اختبار السيناريوهات (Scenario Testing)
- حالات حدية (Edge Cases)
- قيم قصوى (Extreme Values)
- حالات خاصة (Special Cases)


</div>

## 📝 ملاحظات مهمة

### ما يمكن تغييره:
- ✅ متغيرات أساسية (int, float, double, char)
- ✅ عناصر المصفوفات
- ✅ أعضاء الـ Structures
- ✅ قيم المؤشرات (مع الحذر)

### ما يجب الحذر منه:
- ⚠️ تغيير مؤشرات قد تؤدي إلى أعطال
- ⚠️ تجاوز حدود المصفوفات
- ⚠️ قيم غير منطقية للسياق

### التغييرات مؤقتة:
- التغييرات تكون في الذاكرة فقط أثناء التنفيذ
- لا تؤثر على الكود الأصلي
- تختفي عند إعادة التشغيل

## 📊 الخلاصة

### المهارات المكتسبة:

| المهارة | الطريقة | الفائدة |
|:---|:---|:---|
| **تغيير قيمة متغير** | نقر مزدوج على الكود | تعديل سريع مباشر |
| **تغيير عبر Autos** | نافذة Autos | وصول سهل لجميع المتغيرات |
| **تغيير عبر Watch** | نافذة Watch | تحكم كامل في المتغيرات المضافة |
| **تغيير عناصر مصفوفة** | Watch Window مع الفهرس | تعديل بيانات مجمعة |

### نصائح عملية:

1. **استخدم تغيير القيم** لاختبار سيناريوهات مختلفة
2. **جرب قيم متطرفة** لفهم سلوك البرنامج
3. **غير قيم واحدة في كل مرة** لعزل التأثير
4. **سجل القيم الأصلية** إذا كنت تحتاجها لاحقاً
5. **استخدم هذه الميزة** لتوفير الوقت في التصحيح

**تذكر:** القدرة على تغيير القيم أثناء التنفيذ تمنحك **قوة تحكم كبيرة** في عملية التصحيح وتساعدك على **فهم برنامجك بشكل أعمق**! 🔧💡

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

<a id="english-change-values-debugging"></a>
[العربية ↗](#arabic-change-values-debugging)

# ✏️ Changing Values in Debugging Mode

## 🎯 Introduction

In this lesson, we'll learn how to **change variable values during execution (Runtime)** in debugging mode. This feature allows you to test different scenarios without needing to restart the program from the beginning.

## 💡 Core Concepts

### Runtime Value Modification

When you're in debugging mode and stopped at a breakpoint, you can **change the value of any variable directly** without modifying the original code or restarting. This feature is useful for quickly testing different cases.

### Why Change Values During Debugging?

- **Test different scenarios** without modifying code
- **Fix errors** by trying new values
- **Save time** by avoiding repeated restarts
- **Examine program behavior** with different values

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

    c = MySum(a, b);
    cout << c;

    return 0;
}
```

</div>

## 🎯 Step-by-Step Value Changing Explanation

### Step 1: Placing Breakpoint and Starting Debugging

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Place Breakpoint at line: a = 10; (line 18)
2. Press F5 to start debugging
3. Program stops at Breakpoint
```

</div>

### Step 2: Changing Variable a Value

**When stopped at `a = 10;`:**
- Current value of `a`: 10
- Yellow arrow points to this line

**How to change:**
1. **Using mouse directly on code:**
   - Double-click on value `10` in the line
   - Change it to `12`
   - Press Enter
   
2. **Result:**
   - Value of `a` becomes `12` instead of `10`
   - Change happens directly in memory
   - Program continues from this point with new value

### Step 3: Continuing Execution and Changing Other Values

**After changing `a` to 12:**
1. Press **F11** to go to next line
2. Value of `b` is `20`
3. Can change `b` in same way if needed

### Step 4: Changing Variable i Value in Loop

**When entering the loop:**
1. Keep pressing **F11** until you enter the loop
2. Initial value of `i` is `1`

**Changing i value:**
1. **Method 1: Using mouse on code**
   - Double-click on `i` in the line
   - Change value from `1` to `4`
   - Press Enter
   
2. **Method 2: Using Autos Window**
   - Find variable `i` in Autos window
   - Double-click on its value
   - Enter new value `2`
   - Press Enter

3. **Method 3: Using Watch Window**
   - Add variable `i` to Watch Window
   - Double-click on its value
   - Enter new value
   - Press Enter

## 🛠️ Different Value Changing Methods

### 1. Direct Code Editing

**Advantages:**
- Fastest method
- Directly on variable location
- Suitable for simple changes

**Steps:**
<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. During debugging, find variable in code
2. Double-click on its value
3. Write new value
4. Press Enter
5. Line color changes to red indicating change
```

</div>

### 2. Changing via Autos Window

**Advantages:**
- Shows all local variables
- Easy access to variables
- Suitable when code is long

**Steps:**
<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Open Autos window (appears automatically during debugging)
2. Find required variable
3. Double-click on "Value" column
4. Write new value
5. Press Enter
```

</div>

### 3. Changing via Watch Window

**Advantages:**
- For pre-added variables
- Can add complex expressions
- Full control

**Steps:**
<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Add variable to Watch Window
2. Double-click on its value
3. Write new value
4. Press Enter
```

</div>

## 🔍 Practical Examples from Explanation

### Example 1: Changing Basic Variable Value

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Situation: Program stopped at a = 10;
Action: Change a value from 10 to 12
Method: Double-click on 10 in code
Result: a becomes 12 in memory
```

</div>

### Example 2: Changing Loop Counter

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Situation: Inside loop, i = 1
Action: Change i value from 1 to 4
Method 1: Directly on code
Method 2: Via Autos Window
Method 3: Via Watch Window
Result: Loop starts from i = 4
```

</div>

### Example 3: Changing Array Element Value

**Note:** Can also change array elements:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Array: arr1[5] = {200, 100, 50, 25, 30}
Changing first element:
1. In Watch Window: arr1[0]
2. Double-click on value 200
3. Change to 300
4. Press Enter
Result: arr1[0] becomes 300
```

</div>

## 📊 Effect of Value Changes on Execution

### Before Change:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Original path:
a = 10 → a++ → a = 11
b = 20 → ++b → b = 21
c = a + b → c = 32
```

</div>

### After Changing a to 12:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
New path:
a = 12 → a++ → a = 13
b = 20 → ++b → b = 21
c = a + b → c = 34
```

</div>

## 💡 Benefits of Changing Values During Debugging

### 1. Time Saving
- No need to restart program
- Quick testing of different values
- Direct testing of modifications

### 2. Debugging
- Trying alternative solutions
- Understanding effect of different values
- Discovering relationships between variables

### 3. Scenario Testing
- Edge Cases
- Extreme Values
- Special Cases



## 📝 Important Notes

### What Can Be Changed:
- ✅ Basic variables (int, float, double, char)
- ✅ Array elements
- ✅ Structure members
- ✅ Pointer values (with caution)

### What to Be Careful About:
- ⚠️ Changing pointers that may cause crashes
- ⚠️ Exceeding array boundaries
- ⚠️ Values illogical for context

### Changes Are Temporary:
- Changes are in memory only during execution
- Don't affect original code
- Disappear when restarting

## 📊 Summary

### Skills Acquired:

| Skill | Method | Benefit |
|:---|:---|:---|
| **Changing variable value** | Double-click on code | Quick direct modification |
| **Changing via Autos** | Autos window | Easy access to all variables |
| **Changing via Watch** | Watch window | Full control over added variables |
| **Changing array elements** | Watch Window with index | Modifying aggregated data |



**Remember:** The ability to change values during execution gives you **great control power** in the debugging process and helps you **understand your program more deeply**! 🔧💡

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>