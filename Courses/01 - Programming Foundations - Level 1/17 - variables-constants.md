<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# المتغيرات والثوابت 
## المفاهيم الأساسية لتخزين البيانات

## مقدمة

المتغيرات والثوابت هي من أهم المفاهيم الأساسية في البرمجة التي تنطبق على جميع لغات البرمجة بدون استثناء. فهم هذه المفاهيم بشكل صحيح يضمن كتابة برامج أكثر كفاءة وسرعة.

---

## المفاهيم الأساسية

### المتغيرات (Variables) 🎯

المتغيرات هي حاويات (Containers) تستخدم لتخزين البيانات في ذاكرة الكمبيوتر أثناء تنفيذ البرنامج.

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
int age = 25;           ← أعداد صحيحة
float price = 19.99;    ← أعداد كسرية  
string name = "Ahmed";  ← نصوص
bool isActive = true;   ← قيم منطقية
```

</div>

<div dir="rtl" style="text-align: right;">

### خلايا الذاكرة (Memory Cells)

كل متغير يتم تخزينه في خلية ذاكرة تحتوي على:

- **الاسم (Identifier)**: اسم المتغير
- **القيمة (Value)**: البيانات المخزنة
- **العنوان (Address)**: موقع التخزين في الذاكرة

---

## أنواع البيانات الأساسية

### التصنيف الثلاثي للبيانات

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. الأرقام (Numbers)
   - Integers: أعداد صحيحة (10, 20, 100)
   - Floats: أعداد كسرية (5.2, 2.3, 10.5)

2. النصوص (Strings)
   - أحرف فردية: 'A', 'b', '1'
   - نصوص كاملة: "Hello", "Ahmed"

3. القيم المنطقية (Booleans)
   - true: صحيح
   - false: خاطئ
```

</div>

<div dir="rtl" style="text-align: right;">

### مثال عملي للتخزين

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
int age = 45;  ← إنشاء متغير
age = age + 2; ← تعديل القيمة
print(age);    ← الناتج: 47
```

</div>

<div dir="rtl" style="text-align: right;">

---

## الثوابت (Constants)

### الفرق بين المتغيرات والثوابت

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
const float PI = 3.14;   ← ثابت (لا يتغير)
PI = 3.15;               ← خطأ! لا يمكن التعديل

int score = 100;         ← متغير (يتغير)
score = 200;             ← صحيح
```

</div>

<div dir="rtl" style="text-align: right;">

### استخدامات الثوابت

- قيم رياضية ثابتة (π، ثابت الجاذبية)
- إعدادات التطبيق الثابتة
- رسائل النظام الثابتة
- أي قيمة لا تتغير خلال تنفيذ البرنامج

---

## إدارة الذاكرة بكفاءة

### اختيار الحجم المناسب

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ الصحيح: int age = 25;     ← حجم مناسب
❌ الخطأ: long age = 25;     ← حجم كبير غير ضروري

✅ الصحيح: float temp = 36.5; ← حجم مناسب  
❌ الخطأ: double temp = 36.5; ← حجم كبير
```

</div>

<div dir="rtl" style="text-align: right;">

### تأثير الاختيار الخاطئ

- إهدار مساحة الذاكرة
- بطء في أداء البرنامج
- استهلاك أكبر للموارد
- مشاكل في التوسع المستقبلي

---

## أمثلة عملية

### مثال من الحياة الواقعية

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
// حساب مساحة الدائرة
const float PI = 3.14;
float radius = 5.0;
float area = PI * radius * radius;

// تحديث الراتب
float salary = 1000.0;
salary = salary * 1.1; // زيادة 10%
```

</div>

<div dir="rtl" style="text-align: right;">

### أفضل الممارسات

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 استخدام const للقيم الثابتة
🔤 اختيار أسماء واضحة للمتغيرات
💾 اختيار نوع البيانات المناسب
🚀 تجنب إهدار الذاكرة
📝 توثيق المتغيرات المعقدة
```

</div>

<div dir="rtl" style="text-align: right;">

---

## الخلاصة

### النقاط الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 المتغيرات: قيم قابلة للتغيير خلال البرنامج
🔒 الثوابت: قيم ثابتة لا تتغير
💾 الذاكرة: إدارة فعالة ترفع أداء البرنامج
📊 الأنواع: اختيار نوع البيانات المناسب
🏷️ الأسماء: استخدام أسماء واضحة وذات معنى
```

</div>

<div dir="rtl" style="text-align: right;">

### القاعدة الذهبية:
> **"اختر الحجم المناسب للمتغير كما تختار الإناء المناسب للطعام - لا تكن بخيلاً ولا مسرفاً"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Variables and Constants in Programming
## Fundamental Data Storage Concepts

## Introduction

Variables and constants are among the most fundamental concepts in programming that apply to all programming languages without exception. Understanding these concepts correctly ensures writing more efficient and faster programs.

---

## Basic Concepts

### Variables 🎯

Variables are containers used to store data in computer memory during program execution.

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
int age = 25;           ← Integers
float price = 19.99;    ← Floating-point numbers  
string name = "Ahmed";  ← Text
bool isActive = true;   ← Boolean values
```

</div>

<div dir="rtl" style="text-align: right;">

### Memory Cells

Each variable is stored in a memory cell containing:

- **Identifier**: Variable name
- **Value**: Stored data
- **Address**: Storage location in memory

---

## Basic Data Types

### Threefold Data Classification

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Numbers
   - Integers: Whole numbers (10, 20, 100)
   - Floats: Decimal numbers (5.2, 2.3, 10.5)

2. Strings
   - Single characters: 'A', 'b', '1'
   - Complete texts: "Hello", "Ahmed"

3. Booleans
   - true: Correct
   - false: Incorrect
```

</div>

<div dir="rtl" style="text-align: right;">

### Practical Storage Example

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
int age = 45;  ← Create variable
age = age + 2; ← Modify value
print(age);    ← Output: 47
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Constants

### Difference Between Variables and Constants

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
const float PI = 3.14;   ← Constant (cannot change)
PI = 3.15;               ← Error! Cannot modify

int score = 100;         ← Variable (can change)
score = 200;             ← Correct
```

</div>

<div dir="rtl" style="text-align: right;">

### Uses of Constants

- Mathematical constants (π, gravity constant)
- Fixed application settings
- System messages
- Any value that doesn't change during program execution

---

## Efficient Memory Management

### Choosing the Right Size

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Correct: int age = 25;     ← Appropriate size
❌ Wrong: long age = 25;     ← Unnecessarily large

✅ Correct: float temp = 36.5; ← Appropriate size  
❌ Wrong: double temp = 36.5; ← Too large
```

</div>

<div dir="rtl" style="text-align: right;">

### Impact of Wrong Choices

- Wasting memory space
- Slow program performance
- Higher resource consumption
- Future scalability issues

---

## Practical Examples

### Real-life Example

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
// Calculate circle area
const float PI = 3.14;
float radius = 5.0;
float area = PI * radius * radius;

// Update salary
float salary = 1000.0;
salary = salary * 1.1; // 10% increase
```

</div>

<div dir="rtl" style="text-align: right;">

### Best Practices

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 Use const for constant values
🔤 Choose clear variable names
💾 Select appropriate data types
🚀 Avoid memory waste
📝 Document complex variables
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Summary

### Key Points:

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 Variables: Values that can change during program
🔒 Constants: Fixed values that don't change
💾 Memory: Effective management improves performance
📊 Types: Choosing appropriate data types
🏷️ Names: Using clear and meaningful names
```

</div>

<div dir="rtl" style="text-align: right;">

### Golden Rule:
> **"Choose the right variable size as you choose the right container for food - neither stingy nor wasteful"**

</div>

---
*Anas Chetoui* - `@anaschetoui`