# Datetime: Local/UTC Time

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## التاريخ والوقت: التوقيت المحلي والعالمي

---

## مقدمة

### 📝 **ما الفرق بين Local Time و UTC Time؟**

- **Local Time** ← التوقيت المحلي في بلدك (حسب المنطقة الزمنية)
- **UTC Time** ← توقيت جرينتش (التوقيت العالمي الموحد)

مثال: الأردن UTC+3 يعني الفرق 3 ساعات بين التوقيت المحلي وتوقيت جرينتش.

---

## المكتبة المطلوبة

### 📝 **نحتاج إلى مكتبة `ctime`:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <ctime>
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مشكلة التحذير (Warning) في Visual Studio

### ⚠️ **قد تظهر رسالة تحذير:**

عند استخدام دوال `ctime` في Visual Studio، قد تظهر رسالة تحذير بأن الكود "غير آمن".

### 💡 **الحل: إضافة هذا السطر في بداية الكود**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#pragma warning(disable : 4996)  // تعطيل التحذير رقم 4996
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- هذا السطر يطلب من المترجم (Compiler) تعطيل التحذير رقم 4996
- الكود آمن ولا مشكلة فيه، لكن Visual Studio يعتبره "غير آمن" لأسباب تاريخية

---

## طباعة التوقيت المحلي (Local Time)

### 📝 **خطوات طباعة التوقيت المحلي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <ctime>
using namespace std;

#pragma warning(disable : 4996)

int main() {
    // الحصول على الوقت الحالي
    time_t t = time(0);
    
    // تحويله إلى التوقيت المحلي ثم إلى نص
    char* dt = ctime(&t);
    
    // طباعة النص
    cout << "Local Time: " << dt << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح الكود:**
1. `time(0)` ← يحصل على الوقت الحالي كنظام (timestamp)
2. `ctime(&t)` ← يحول الوقت إلى نص بالتوقيت المحلي
3. الناتج: `Wed Aug 17 15:42:20 2024` (مثال)

---

## طباعة التوقيت العالمي (UTC Time)

### 📝 **خطوات طباعة توقيت جرينتش:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <ctime>
using namespace std;

#pragma warning(disable : 4996)

int main() {
    // الحصول على الوقت الحالي
    time_t t = time(0);
    
    // تحويله إلى توقيت UTC (جرينتش)
    tm* gmt = gmtime(&t);
    
    // تحويل الـ structure إلى نص
    char* dt = asctime(gmt);
    
    // طباعة النص
    cout << "UTC Time: " << dt << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح الكود:**
1. `time(0)` ← يحصل على الوقت الحالي
2. `gmtime(&t)` ← يحول الوقت إلى توقيت UTC (جرينتش) ويعيد structure من نوع `tm`
3. `asctime(gmt)` ← يحول structure `tm` إلى نص
4. الناتج: `Wed Aug 17 12:42:20 2024` (مثال) - أقل بثلاث ساعات من التوقيت المحلي

---

## الكود الكامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <ctime>
using namespace std;

#pragma warning(disable : 4996)  // تعطيل التحذير

int main() {
    // الحصول على الوقت الحالي
    time_t t = time(0);
    
    // ========== التوقيت المحلي ==========
    char* localTime = ctime(&t);
    cout << "Local Time: " << localTime << endl;
    
    // ========== التوقيت العالمي (UTC) ==========
    tm* gmt = gmtime(&t);        // تحويل إلى UTC
    char* utcTime = asctime(gmt); // تحويل إلى نص
    cout << "UTC Time: " << utcTime << endl;
    
    return 0;
}
```

**النتيجة:**
```
Local Time: Wed Aug 17 15:42:20 2024
UTC Time: Wed Aug 17 12:42:20 2024
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## شرح الفرق بالأرقام

### 📊 **مقارنة:**

| التوقيت | القيمة | الشرح |
|---------|--------|-------|
| **Local Time (الأردن)** | 15:42:20 | التوقيت المحلي (+3) |
| **UTC Time (جرينتش)** | 12:42:20 | التوقيت العالمي |
| **الفرق** | 3 ساعات | الأردن +3 عن جرينتش |

---

## نظرة سريعة على structure tm

### 📝 **ما هو `tm`؟**

هو structure يحتوي على مكونات الوقت والتاريخ:

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
struct tm {
    int tm_sec;   // الثواني (0-59)
    int tm_min;   // الدقائق (0-59)
    int tm_hour;  // الساعات (0-23)
    int tm_mday;  // يوم الشهر (1-31)
    int tm_mon;   // الشهر (0-11) - يناير = 0
    int tm_year;  // السنة - 1900
    int tm_wday;  // يوم الأسبوع (0-6) - الأحد = 0
    int tm_yday;  // يوم السنة (0-365)
    int tm_isdst; // التوقيت الصيفي
};
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **سنأخذ هذا الـ structure بالتفصيل في الدرس القادم**

---

## الدوال المستخدمة

### 📊 **ملخص الدوال:**

| الدالة | الوظيفة | المدخلات | المخرجات |
|--------|---------|----------|----------|
| `time(0)` | الحصول على الوقت الحالي | `0` | `time_t` |
| `ctime(&t)` | تحويل time_t إلى نص (محلي) | `time_t*` | `char*` |
| `gmtime(&t)` | تحويل time_t إلى UTC | `time_t*` | `tm*` |
| `asctime(gmt)` | تحويل tm إلى نص | `tm*` | `char*` |

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **استخدم `#pragma warning(disable : 4996)`** ← لتعطيل التحذير في Visual Studio
2. **الفرق بين Local و UTC** ← حسب المنطقة الزمنية لجهازك
3. **`ctime` تعطيك التوقيت المحلي مباشرة** ← لا تحتاج لتحويل إضافي
4. **`gmtime` + `asctime`** ← للحصول على توقيت UTC كنص

### ✅ **متى تستخدم Local Time؟**
- عندما تريد عرض الوقت للمستخدم المحلي
- عند حفظ أوقات بناءً على منطقة المستخدم

### ✅ **متى تستخدم UTC Time؟**
- عند التعامل مع قواعد بيانات عالمية
- عند حفظ أوقات في سيرفرات دولية
- عندما تريد توحيد التوقيت بين مناطق مختلفة

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **Local Time** ← التوقيت المحلي (ctime)
2. **UTC Time** ← توقيت جرينتش (gmtime + asctime)
3. **مكتبة `ctime`** ← للتعامل مع الوقت والتاريخ
4. **الفرق بين التوقيتين** ← حسب المنطقة الزمنية
5. **تعطيل التحذير** ← باستخدام `#pragma warning(disable : 4996)`

### 🎯 **الدرس القادم:**
سنأخذ structure `tm` بالتفصيل، ونتعلم كيف نستخرج:
- السنة
- الشهر
- اليوم
- الساعة
- الدقيقة
- الثانية

كل عنصر على حدة!

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Datetime: Local/UTC Time

---

## Introduction

### 📝 **Difference Between Local Time and UTC Time:**

- **Local Time** ← Your local time (based on time zone)
- **UTC Time** ← Greenwich Mean Time (Universal Time)

Example: Jordan UTC+3 means 3 hours difference between local time and GMT.

---

## Required Library

### 📝 **We need `ctime` library:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <ctime>
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Warning Problem in Visual Studio

### ⚠️ **You might see a warning:**

When using `ctime` functions in Visual Studio, you might see a warning that the code is "unsafe".

### 💡 **Solution: Add this line at the beginning**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#pragma warning(disable : 4996)  // Disable warning 4996
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 🔍 **Explanation:**
- This line tells the compiler to disable warning 4996
- The code is safe, but Visual Studio considers it "unsafe" for historical reasons

---

## Complete Code

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <ctime>
using namespace std;

#pragma warning(disable : 4996)  // Disable warning

int main() {
    // Get current time
    time_t t = time(0);
    
    // ========== Local Time ==========
    char* localTime = ctime(&t);
    cout << "Local Time: " << localTime << endl;
    
    // ========== UTC Time ==========
    tm* gmt = gmtime(&t);        // Convert to UTC
    char* utcTime = asctime(gmt); // Convert to string
    cout << "UTC Time: " << utcTime << endl;
    
    return 0;
}
```

**Result:**
```
Local Time: Wed Aug 17 15:42:20 2024
UTC Time: Wed Aug 17 12:42:20 2024
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Functions Summary

### 📊 **Functions Used:**

| Function | Purpose | Input | Output |
|----------|---------|-------|--------|
| `time(0)` | Get current time | `0` | `time_t` |
| `ctime(&t)` | Convert time_t to string (local) | `time_t*` | `char*` |
| `gmtime(&t)` | Convert time_t to UTC | `time_t*` | `tm*` |
| `asctime(gmt)` | Convert tm to string | `tm*` | `char*` |

---

## Summary

### 🔑 **What We Learned Today:**

1. **Local Time** ← Local time (ctime)
2. **UTC Time** ← GMT time (gmtime + asctime)
3. **`ctime` library** ← For time and date handling
4. **Time difference** ← Based on your time zone
5. **Disable warning** ← Using `#pragma warning(disable : 4996)`

### 🎯 **Next Lesson:**
We'll study the `tm` structure in detail, and learn how to extract:
- Year
- Month
- Day
- Hour
- Minute
- Second

Each element separately!

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>