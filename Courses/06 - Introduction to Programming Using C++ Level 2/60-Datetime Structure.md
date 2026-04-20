# Datetime Structure

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## هيكل التاريخ والوقت (tm Structure)

---

## مقدمة

### 📝 **ما هو structure tm؟**

عندما نستخدم دوال الوقت مثل `gmtime` أو `localtime`، فإنها ترجع لنا pointer إلى structure من نوع `tm` يحتوي على كل مكونات التاريخ والوقت بشكل منفصل.

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
    int tm_isdst; // التوقيت الصيفي (1 إذا كان مفعلاً)
};
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

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
    
    // تحويله إلى التوقيت المحلي (يرجع pointer على structure tm)
    tm* now = localtime(&t);
    
    // طباعة كل مكونات التاريخ والوقت
    cout << "========== Date Components ==========" << endl;
    
    // السنة (يجب إضافة 1900)
    cout << "Year (from 1900): " << now->tm_year << endl;
    cout << "Year (actual): " << now->tm_year + 1900 << endl;
    
    // الشهر (يجب إضافة 1)
    cout << "Month (0-11): " << now->tm_mon << endl;
    cout << "Month (actual): " << now->tm_mon + 1 << endl;
    
    // اليوم في الشهر
    cout << "Day of month: " << now->tm_mday << endl;
    
    // الساعة
    cout << "Hour: " << now->tm_hour << endl;
    
    // الدقيقة
    cout << "Minute: " << now->tm_min << endl;
    
    // الثانية
    cout << "Second: " << now->tm_sec << endl;
    
    // يوم الأسبوع (الأحد = 0)
    cout << "Day of week (0=Sunday): " << now->tm_wday << endl;
    
    // يوم السنة (من 0 إلى 365)
    cout << "Day of year: " << now->tm_yday << endl;
    
    // التوقيت الصيفي
    cout << "Daylight saving: " << now->tm_isdst << endl;
    
    return 0;
}
```

**النتيجة:**
```
========== Date Components ==========
Year (from 1900): 122
Year (actual): 2022
Month (0-11): 7
Month (actual): 8
Day of month: 17
Hour: 15
Minute: 23
Second: 51
Day of week (0=Sunday): 3
Day of year: 228
Daylight saving: 1
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## شرح كل عنصر بالتفصيل

### 1️⃣ tm_year - السنة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Year (from 1900): " << now->tm_year << endl;     // 122
cout << "Year (actual): " << now->tm_year + 1900 << endl; // 2022
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- `tm_year` يحسب عدد السنوات من 1900
- للحصول على السنة الحقيقية: `tm_year + 1900`

---

### 2️⃣ tm_mon - الشهر

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Month (0-11): " << now->tm_mon << endl;     // 7
cout << "Month (actual): " << now->tm_mon + 1 << endl; // 8
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- `tm_mon` يبدأ من 0 (يناير = 0)
- للحصول على الشهر الحقيقي: `tm_mon + 1`

---

### 3️⃣ tm_mday - يوم الشهر

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Day of month: " << now->tm_mday << endl;  // 17
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- يعطي رقم اليوم في الشهر (1-31)
- لا يحتاج لأي تعديل

---

### 4️⃣ tm_hour - الساعة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Hour: " << now->tm_hour << endl;  // 15 (3 مساءً)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- بنظام 24 ساعة (0-23)
- 15 تعني 3 مساءً

---

### 5️⃣ tm_min - الدقائق

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Minute: " << now->tm_min << endl;  // 23
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

### 6️⃣ tm_sec - الثواني

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Second: " << now->tm_sec << endl;  // 51
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

### 7️⃣ tm_wday - يوم الأسبوع

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Day of week (0=Sunday): " << now->tm_wday << endl;  // 3
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- الأحد = 0
- الإثنين = 1
- الثلاثاء = 2
- الأربعاء = 3 (في مثالنا)
- وهكذا...

---

### 8️⃣ tm_yday - يوم السنة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Day of year: " << now->tm_yday << endl;  // 228
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- يبدأ من 0 (1 يناير = 0)
- 228 تعني أن اليوم هو الـ 229 من السنة (لأنه يبدأ من 0)

---

### 9️⃣ tm_isdst - التوقيت الصيفي

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Daylight saving: " << now->tm_isdst << endl;  // 1
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- 1 ← التوقيت الصيفي مفعل
- 0 ← التوقيت الشتوي
- -1 ← غير معروف

---

## كيفية الوصول لعناصر الـ Structure

### 🔑 **بما أن `now` هو Pointer:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
tm* now = localtime(&t);
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **نستخدم `->` للوصول للعناصر:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
now->tm_year
now->tm_mon
now->tm_mday
// ... إلخ
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 💡 **تذكير من درس Pointers and Structure:**
- المؤشر للهيكل يستخدم `->`
- بعض الـ IDEs تحول `.` إلى `->` تلقائياً

---

## تطبيقات عملية

### 💡 **أفكار لاستخدام هذه المكونات:**

1. **تحقق من التاريخ** ← هل اليوم هو نهاية الشهر؟
2. **حساب الفروق** ← كم يوماً بين تاريخين؟
3. **تنسيق مخصص** ← عرض التاريخ بالشكل الذي تريده
4. **شروط زمنية** ← نفذ كود معين في وقت محدد

### 📝 **مثال: تنسيق مخصص للتاريخ**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Today is: " 
     << now->tm_year + 1900 << "/"
     << now->tm_mon + 1 << "/"
     << now->tm_mday << endl;
// الناتج: 2022/8/17
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **السنة** ← تحتاج `+ 1900`
2. **الشهر** ← يحتاج `+ 1`
3. **اليوم** ← لا يحتاج تعديل
4. **الساعة** ← بنظام 24 ساعة
5. **يوم الأسبوع** ← يبدأ من الأحد (0)

### ✅ **متى تستخدم Local Time vs UTC؟**
- **Local Time** ← للعرض للمستخدم المحلي
- **UTC** ← للتخزين والمعالجة العالمية

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **structure tm** ← يحتوي على كل مكونات الوقت بشكل منفصل
2. **الوصول للعناصر** ← باستخدام `->` (لأنه pointer)
3. **تعديلات ضرورية** ← السنة (+1900) والشهر (+1)
4. **كل عنصر له مدى محدد** ← تعرفنا على مدى كل عنصر
5. **استخدامات متعددة** ← يمكننا تنسيق الوقت كما نريد

### 🎯 **الآن تستطيع:**
- ✅ الحصول على السنة الحالية
- ✅ الحصول على الشهر الحالي
- ✅ الحصول على اليوم الحالي
- ✅ الحصول على الساعة والدقيقة والثانية
- ✅ معرفة ترتيب اليوم في الأسبوع والسنة
- ✅ تنسيق الوقت والتاريخ بالطريقة التي تريدها

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Datetime Structure

---

## Introduction

### 📝 **What is tm structure?**

When we use time functions like `gmtime` or `localtime`, they return a pointer to a `tm` structure that contains all date and time components separately.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
struct tm {
    int tm_sec;   // seconds (0-59)
    int tm_min;   // minutes (0-59)
    int tm_hour;  // hours (0-23)
    int tm_mday;  // day of month (1-31)
    int tm_mon;   // month (0-11) - January = 0
    int tm_year;  // year - 1900
    int tm_wday;  // day of week (0-6) - Sunday = 0
    int tm_yday;  // day of year (0-365)
    int tm_isdst; // daylight saving (1 if active)
};
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

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
    
    // Convert to local time (returns pointer to tm structure)
    tm* now = localtime(&t);
    
    // Print all date and time components
    cout << "========== Date Components ==========" << endl;
    
    // Year (need to add 1900)
    cout << "Year (from 1900): " << now->tm_year << endl;
    cout << "Year (actual): " << now->tm_year + 1900 << endl;
    
    // Month (need to add 1)
    cout << "Month (0-11): " << now->tm_mon << endl;
    cout << "Month (actual): " << now->tm_mon + 1 << endl;
    
    // Day of month
    cout << "Day of month: " << now->tm_mday << endl;
    
    // Hour
    cout << "Hour: " << now->tm_hour << endl;
    
    // Minute
    cout << "Minute: " << now->tm_min << endl;
    
    // Second
    cout << "Second: " << now->tm_sec << endl;
    
    // Day of week (Sunday = 0)
    cout << "Day of week (0=Sunday): " << now->tm_wday << endl;
    
    // Day of year (0 to 365)
    cout << "Day of year: " << now->tm_yday << endl;
    
    // Daylight saving
    cout << "Daylight saving: " << now->tm_isdst << endl;
    
    return 0;
}
```

**Result:**
```
========== Date Components ==========
Year (from 1900): 122
Year (actual): 2022
Month (0-11): 7
Month (actual): 8
Day of month: 17
Hour: 15
Minute: 23
Second: 51
Day of week (0=Sunday): 3
Day of year: 228
Daylight saving: 1
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary Table

| Component | Description | Range | Adjustment |
|-----------|-------------|-------|------------|
| `tm_year` | Years since 1900 | 0+ | `+1900` |
| `tm_mon` | Month | 0-11 | `+1` |
| `tm_mday` | Day of month | 1-31 | None |
| `tm_hour` | Hour | 0-23 | None |
| `tm_min` | Minute | 0-59 | None |
| `tm_sec` | Second | 0-59 | None |
| `tm_wday` | Day of week | 0-6 | Sunday=0 |
| `tm_yday` | Day of year | 0-365 | None |
| `tm_isdst` | Daylight saving | -1,0,1 | 1=active |

---

## Key Takeaways

### 🔑 **What We Learned Today:**

1. **tm structure** ← Contains all time components separately
2. **Access elements** ← Using `->` (because it's a pointer)
3. **Necessary adjustments** ← Year (+1900) and Month (+1)
4. **Each element has a range** ← We learned each component's range
5. **Multiple uses** ← We can format time however we want

### 🎯 **Now You Can:**
- ✅ Get current year
- ✅ Get current month
- ✅ Get current day
- ✅ Get hour, minute, second
- ✅ Know day of week and year
- ✅ Format date and time your way

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>