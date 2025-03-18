
<a id="arabic"></a>
[English ↙](#english)

# Automatic Variables

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## ما هي Automatic Variables؟

**Automatic Variables** هي متغيرات يستطيع الكومبايلر **تحديد نوعها تلقائياً** بناءً على القيمة المعطاة لها.

---

## مثال على Automatic Variables

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    auto x = 10;      // ⭐ الكومبايلر يحدد أن x من نوع int
    auto y = 12.5;    // ⭐ الكومبايلر يحدد أن y من نوع double
    auto z = "Hello"; // ⭐ الكومبايلر يحدد أن z من نوع string
    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    
    return 0;
}
```

**الإخراج:**
```
10
12.5
Hello
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## كيف يعمل `auto`؟

### 1. عند كتابة `auto x = 10;`
- الكومبايلر ينظر إلى القيمة `10`
- يحدد أن `10` هو عدد صحيح
- يقرر أن `x` يجب أن يكون من نوع `int`
- يحجز مساحة `int` في الذاكرة لـ `x`

### 2. عند كتابة `auto y = 12.5;`
- الكومبايلر ينظر إلى القيمة `12.5`
- يحدد أن `12.5` هو عدد عشري
- يقرر أن `y` يجب أن يكون من نوع `double`
- يحجز مساحة `double` في الذاكرة لـ `y`

### 3. عند كتابة `auto z = "Hello";`
- الكومبايلر ينظر إلى القيمة `"Hello"`
- يحدد أن `"Hello"` هو نص
- يقرر أن `z` يجب أن يكون من نوع `string`
- يحجز مساحة `string` في الذاكرة لـ `z`

---

## لماذا لا ينصح باستخدام Automatic Variables؟

### 1. يجب أن تكون واعياً لنوع المتغيرات

**كمبرمج، يجب أن تعرف:**
- أي متغير يستهلك من الذاكرة
- ما هو الحجم الذي تريد استخدامه
- النوع المناسب لكل متغير

### 2. أنواع البيانات المختلفة لها أحجام مختلفة

| النوع | الحجم (بايت) | الاستخدام |
|-------|-------------|-----------|
| `short` | 2 | عندما تكون القيم صغيرة |
| `int` | 4 | الأعداد العادية |
| `double` | 8 | الأعداد العشرية الدقيقة |
| `bool` | 1 | القيم المنطقية |

### 3. استخدام النوع الصحيح يحسن الأداء

- `short` أسرع من `int` للأعداد الصغيرة
- `float` يكفي غالباً بدلاً من `double`
- تحديد النوع الصحيح يوفر الذاكرة ويحسن السرعة

---

## المقارنة بين الطريقتين

### الطريقة الصحيحة (تحديد النوع يدوياً)

```cpp
int age = 25;           // واضح أن age من نوع int
double salary = 5000.5; // واضح أن salary من نوع double
string name = "Ali";    // واضح أن name من نوع string
```

**المزايا:**
- واضح ومباشر
- تتحكم في نوع وحجم المتغير
- أسرع في التنفيذ
- أفضل لقراءة الكود

### الطريقة باستخدام auto

```cpp
auto age = 25;          // الكومبايلر يقرر أن age من نوع int
auto salary = 5000.5;   // الكومبايلر يقرر أن salary من نوع double
auto name = "Ali";      // الكومبايلر يقرر أن name من نوع string
```

**المشاكل:**
- غير واضح لنوع المتغير
- لا تتحكم في الحجم المستخدم
- قد يكون أبطأ
- يصعب قراءة الكود لاحقاً

---

## متى يمكن استخدام auto؟

### الحالات النادرة المناسبة:

1. **عند استخدام قوالب (Templates) متقدمة**
2. **عندما يكون النوع معقداً جداً في كتابته**
3. **في لغة أخرى مثل Python** (التي تستخدم هذا النظام)

### لكن في C++ الأساسي:

> **"لا تستخدم auto في برامجك العادية. كن مبرمجاً واعياً تعرف ما تفعل."**

---

## الخلاصة

### المفاهيم الأساسية:

1. **Automatic Variables** (`auto`) تسمح للكومبايلر بتحديد النوع تلقائياً
2. **الكلمة `auto`** تخبر الكومبايلر: "حدد النوع بنفسك"
3. **الكومبايلر** ينظر إلى القيمة ويحدد النوع المناسب

### النصيحة الأهم:

> **"لا تستخدم Automatic Variables في برامجك. كن مبرمجاً محترفاً يحدد نوع كل متغير يدوياً."**

### أسباب تجنب auto:

1. **الوعي**: يجب أن تعرف نوع كل متغير تستخدمه
2. **التحكم**: يجب أن تتحكم في حجم الذاكرة المستخدمة
3. **الأداء**: النوع الصحيح يحسن أداء البرنامج
4. **القراءة**: الكود الواضح أسهل للقراءة والفهم

### القاعدة:

**استخدم:** `int x = 10;`  
**لا تستخدم:** `auto x = 10;`

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Automatic Variables

---

## What are Automatic Variables?

**Automatic Variables** are variables where the compiler **automatically determines their type** based on the given value.

---

## Example of Automatic Variables

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    auto x = 10;      // ⭐ Compiler determines x is int
    auto y = 12.5;    // ⭐ Compiler determines y is double
    auto z = "Hello"; // ⭐ Compiler determines z is string
    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    
    return 0;
}
```

**Output:**
```
10
12.5
Hello
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Does `auto` Work?

### 1. When writing `auto x = 10;`
- Compiler looks at value `10`
- Determines `10` is an integer
- Decides `x` should be `int`
- Reserves `int` memory space for `x`

### 2. When writing `auto y = 12.5;`
- Compiler looks at value `12.5`
- Determines `12.5` is a decimal number
- Decides `y` should be `double`
- Reserves `double` memory space for `y`

### 3. When writing `auto z = "Hello";`
- Compiler looks at value `"Hello"`
- Determines `"Hello"` is text
- Decides `z` should be `string`
- Reserves `string` memory space for `z`

---

## Why Not Recommended to Use Automatic Variables?

### 1. You Should Be Aware of Variable Types

**As a programmer, you should know:**
- Which variable consumes memory
- What size you want to use
- Appropriate type for each variable

### 2. Different Data Types Have Different Sizes

| Type | Size (Bytes) | Usage |
|------|-------------|--------|
| `short` | 2 | When values are small |
| `int` | 4 | Normal numbers |
| `double` | 8 | Precise decimal numbers |
| `bool` | 1 | Logical values |

### 3. Using Correct Type Improves Performance

- `short` faster than `int` for small numbers
- `float` often sufficient instead of `double`
- Choosing correct type saves memory and improves speed

---

## Comparison Between Two Methods

### Correct Method (Manual Type Specification)

```cpp
int age = 25;           // Clear that age is int
double salary = 5000.5; // Clear that salary is double
string name = "Ali";    // Clear that name is string
```

**Advantages:**
- Clear and direct
- Control type and size of variable
- Faster execution
- Better for code readability

### Method Using auto

```cpp
auto age = 25;          // Compiler decides age is int
auto salary = 5000.5;   // Compiler decides salary is double
auto name = "Ali";      // Compiler decides name is string
```

**Problems:**
- Not clear about variable type
- No control over memory usage
- May be slower
- Harder to read code later

---

## When Can auto Be Used?

### Rare Appropriate Cases:

1. **When using advanced Templates**
2. **When type is very complex to write**
3. **In another language like Python** (which uses this system)

### But in Basic C++:

> **"Don't use auto in your normal programs. Be a conscious programmer who knows what they're doing."**

---

## Summary

### Core Concepts:

1. **Automatic Variables** (`auto`) allow compiler to automatically determine type
2. **Keyword `auto`** tells compiler: "Determine the type yourself"
3. **Compiler** looks at value and determines appropriate type

### Most Important Advice:

> **"Don't use Automatic Variables in your programs. Be a professional programmer who manually specifies each variable type."**

### Reasons to Avoid auto:

1. **Awareness**: Should know type of every variable you use
2. **Control**: Should control memory size used
3. **Performance**: Correct type improves program performance
4. **Readability**: Clear code is easier to read and understand

### Rule:

**Use:** `int x = 10;`  
**Don't use:** `auto x = 10;`

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>