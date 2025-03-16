<div dir="rtl">

<a id="arabic-debugging-intro"></a>
[English ↙](#english-debugging-intro)

# 🔍 مقدمة في التصحيح (Debugging)

## 🎯 المقدمة

في هذا الدرس، سنتعلم عن **التصحيح (Debugging)** - مهارة أساسية لكل مبرمج تمكننا من العثور على الأخطاء وإصلاحها في البرامج.

## 💡 المفاهيم الأساسية

### ما هو التصحيح (Debugging)؟

**التصحيح** هو عملية اكتشاف الأخطاء (Bugs) في البرامج وإصلاحها. تسمح لك بيئات التطوير (IDEs) بتشغيل البرنامج سطراً بسطر ومتابعة قيم المتغيرات في الذاكرة.

### لماذا نتعلم التصحيح؟

- **العثور على الأخطاء المنطقية** (Logical Errors)
- **فهم تدفق البرنامج** خطوة بخطوة
- **فحص قيم المتغيرات** أثناء التنفيذ
- **تحسين مهارات حل المشكلات**

## 🔧 أنواع الأخطاء في البرمجة

### 1️⃣ أخطاء بناء الجملة (Syntax Errors)

**ما هي؟** أخطاء في كتابة الكود مثل:
- نسيان الفاصلة المنقوطة `;`
- نسيان الأقواس `{}`
- أسماء دوال مكتوبة بشكل خاطئ

**ميزاتها:**
- ⚠️ **أسهل نوع** للاكتشاف
- 🛠️ **المترجم (Compiler)** يكتشفها تلقائياً
- 📍 يعطيك موقع الخطأ بالضبط
- 🔧 الإصلاح يكون بسيطاً عادة

**مثال:**
</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ خطأ في بناء الجملة
int x = 5  // نسيان الفاصلة المنقوطة
cout << "Hello"  // نسيان الفاصلة المنقوطة
```

</div>

<div dir="rtl" style="text-align: right;">

### 2️⃣ أخطاء منطقية (Logical Errors)

**ما هي؟** البرنامج يعمل بدون أخطاء بناء جملة، لكن النتائج غير صحيحة.

**ميزاتها:**
- 🎭 **أخطر نوع** من الأخطاء
- 🔍 **صعب الاكتشاف** - البرنامج يعمل بشكل طبيعي
- 🧠 يتطلب **تفكيراً منطقياً** لاكتشافه
- ⏳ **يستهلك وقتاً** طويلاً للعثور عليه


**مثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ خطأ منطقي - حساب المتوسط بشكل خاطئ
int average = (num1 + num2) / 2;  // صحيح رياضياً
// ولكن قد نحتاج لـ float للحصول على كسور

// ✅ الصحيح
float average = (num1 + num2) / 2.0;
```

</div>

<div dir="rtl" style="text-align: right;">


### 3️⃣ أخطاء وقت التشغيل (Runtime Errors)

**ما هي؟** أخطاء تظهر أثناء تشغيل البرنامج (EXE).

**ميزاتها:**
- 💥 **يتعطل البرنامج** أثناء التشغيل
- 🕵️ **يظهر في حالات معينة** فقط
- 🧩 قد يتعلق **بالذاكرة أو النظام**
- 🔄 **صعب التكرار** أحياناً

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

**مثال:**
```cpp
// ❌ خطأ وقت التشغيل - القسمة على صفر
int x = 10;
int y = 0;
int result = x / y;  // 💥 crash!
```

</div>

<div dir="rtl" style="text-align: right;">


## 🎯 لماذا نحتاج التصحيح؟

### المشكلة مع اللغات المترجمة (Compiled Languages)

مثل C++، عندما ننشئ البرنامج (Build):
1. **ينشئ ملف EXE**
2. **الرابط (Linker) يحمله في الذاكرة**
3. **يشغل البرنامج**

**المشكلة:** لا نستطيع رؤية ما يحدث داخل البرنامج أثناء التشغيل!

### الحل: وضع التصحيح (Debug Mode)

عند تشغيل البرنامج في **وضع التصحيح**:
- 🐌 **نشغله سطراً بسطر**
- 👁️ **نرى قيم المتغيرات**
- 🎯 **نتتبع تدفق البرنامج**
- 🔍 **نكتشف الأخطاء المنطقية**

## 🛠️ كيف يساعدنا التصحيح؟

### 1. متابعة قيم المتغيرات

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">


```cpp
int x = 10;
int y = 20;
int sum = x + y;  // 🔍 هنا نرى: x=10, y=20, sum=30
```
</div>

<div dir="rtl" style="text-align: right;">

### 2. تتبع تدفق البرنامج

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
if (age > 18) {
    cout << "Adult";      // 🔍 نرى هل دخل هذا الفرع؟
} else {
    cout << "Minor";      // 🔍 أم دخل هذا الفرع؟
}
```

</div>

<div dir="rtl" style="text-align: right;">


### 3. فحص نتائج الدوال

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">


```cpp
int result = calculateSum(5, 10);  // 🔍 ما هي القيمة المعادة؟
```

</div>

<div dir="rtl" style="text-align: right;">

## 📊 أهمية التصحيح للمبرمج

### لماذا تعتبر مهارة أساسية؟

1. **تستخدم في كل لغات البرمجة**
2. **متوفرة في جميع بيئات التطوير (IDEs)**
3. **تختصر وقت حل المشكلات**
4. **تحسن فهمك للكود**
5. **ضرورية للبرمجة المهنية**

### بيئات التطوير المدعومة:

- 🟦 **Visual Studio Community Edition**
- 🟪 **Visual Studio Professional Edition**
- 🟨 **Visual Studio Code**
- 🟩 **أي بيئة تطوير أخرى**



**تذكر:** التصحيح ليس مجرد أداة تقنية، بل هو **طريقة تفكير** تساعدك على أن تكون مبرمجاً أفضل!

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

<a id="english-debugging-intro"></a>
[العربية ↗](#arabic-debugging-intro)

# 🔍 Introduction to Debugging

## 🎯 Introduction

In this lesson, we'll learn about **Debugging** - an essential skill for every programmer that enables us to find and fix errors in programs.

## 💡 Core Concepts

### What is Debugging?

**Debugging** is the process of discovering and fixing errors (bugs) in programs. Development environments (IDEs) allow you to run the program line by line and monitor variable values in memory.

### Why Learn Debugging?

- **Find logical errors** in programs
- **Understand program flow** step by step
- **Examine variable values** during execution
- **Improve problem-solving skills**

## 🔧 Types of Programming Errors

### 1️⃣ Syntax Errors

**What are they?** Errors in code writing such as:
- Forgetting semicolons `;`
- Forgetting brackets `{}`
- Misspelled function names

**Features:**
- ⚠️ **Easiest type** to detect
- 🛠️ **Compiler** detects them automatically
- 📍 Gives exact error location
- 🔧 Fixing is usually simple

**Example:**
```cpp
// ❌ Syntax error
int x = 5  // Forgetting semicolon
cout << "Hello"  // Forgetting semicolon
```

### 2️⃣ Logical Errors

**What are they?** Program runs without syntax errors, but results are incorrect.

**Features:**
- 🎭 **Most dangerous type** of error
- 🔍 **Difficult to detect** - program runs normally
- 🧠 Requires **logical thinking** to discover
- ⏳ **Time-consuming** to find

**Example:**
```cpp
// ❌ Logical error - wrong average calculation
int average = (num1 + num2) / 2;  // Mathematically correct
// But may need float for decimal results

// ✅ Correct
float average = (num1 + num2) / 2.0;
```

### 3️⃣ Runtime Errors

**What are they?** Errors that appear during program execution (EXE).

**Features:**
- 💥 **Program crashes** during execution
- 🕵️ **Appears only in specific cases**
- 🧩 May relate to **memory or system**
- 🔄 **Difficult to reproduce** sometimes

**Example:**
```cpp
// ❌ Runtime error - division by zero
int x = 10;
int y = 0;
int result = x / y;  // 💥 crash!
```

## 🎯 Why Do We Need Debugging?

### The Problem with Compiled Languages

Like C++, when we build a program:
1. **Creates EXE file**
2. **Linker loads it into memory**
3. **Runs the program**

**The Problem:** We cannot see what happens inside the program during execution!

### The Solution: Debug Mode

When running the program in **Debug Mode**:
- 🐌 **Run it line by line**
- 👁️ **See variable values**
- 🎯 **Track program flow**
- 🔍 **Discover logical errors**

## 🛠️ How Debugging Helps Us?

### 1. Monitoring Variable Values

```cpp
int x = 10;
int y = 20;
int sum = x + y;  // 🔍 Here we see: x=10, y=20, sum=30
```

### 2. Tracking Program Flow

```cpp
if (age > 18) {
    cout << "Adult";      // 🔍 Do we enter this branch?
} else {
    cout << "Minor";      // 🔍 Or this branch?
}
```

### 3. Examining Function Results

```cpp
int result = calculateSum(5, 10);  // 🔍 What value is returned?
```

## 📊 Importance of Debugging for Programmers

### Why is it an Essential Skill?

1. **Used in all programming languages**
2. **Available in all IDEs**
3. **Saves time in problem-solving**
4. **Improves understanding of code**
5. **Essential for professional programming**

### Supported Development Environments:

- 🟦 **Visual Studio Community Edition**
- 🟪 **Visual Studio Professional Edition**
- 🟨 **Visual Studio Code**
- 🟩 **Any other development environment**


**Remember:** Debugging is not just a technical tool, but a **way of thinking** that helps you become a better programmer!

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>