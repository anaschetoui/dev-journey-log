# Some CCTYPE Functions

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## دوال CCTYPE (CCTYPE Functions)

---

## مقدمة

### 📝 **ما هي دوال CCTYPE؟**

هي دوال جاهزة في لغة C++ للتعامل مع الأحرف (Characters) والتحقق من خصائصها وتحويلها.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch1 = 'a';  // حرف صغير
    char ch2 = 'A';  // حرف كبير
    char ch3 = '5';  // رقم
    char ch4 = '!';  // علامة ترقيم
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## دوال التحويل (Conversion Functions)

### 1️⃣ toUpper() - تحويل الحرف إلى كبير

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
char ch = 'a';
char result = toupper(ch);  // يحول 'a' إلى 'A'
cout << result << endl;      // A
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 2️⃣ toLower() - تحويل الحرف إلى صغير

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
char ch = 'A';
char result = tolower(ch);  // يحول 'A' إلى 'a'
cout << result << endl;      // a
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## دوال التحقق (Checking Functions)

### 🔍 **مبدأ العمل:**
- ترجع `0` (صفر) ← إذا كان الشرط **خطأ (false)**
- ترجع رقم غير صفري (non-zero) ← إذا كان الشرط **صحيح (true)**

---

### 3️⃣ isupper() - هل الحرف كبير؟

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
char ch = 'A';
int result = isupper(ch);  // ترجع رقم غير صفري (true)
cout << result << endl;     // مثلاً 1 أو 2 (أي رقم غير الصفر)

ch = 'a';
result = isupper(ch);       // ترجع 0 (false)
cout << result << endl;     // 0
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 4️⃣ islower() - هل الحرف صغير؟

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
char ch = 'a';
int result = islower(ch);  // ترجع رقم غير صفري (true)
cout << result << endl;     // مثلاً 2

ch = 'A';
result = islower(ch);       // ترجع 0 (false)
cout << result << endl;     // 0
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 5️⃣ isdigit() - هل الحرف رقم؟

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
char ch = '5';
int result = isdigit(ch);  // ترجع رقم غير صفري (true)
cout << result << endl;     // مثلاً 4

ch = 'A';
result = isdigit(ch);       // ترجع 0 (false)
cout << result << endl;     // 0
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 6️⃣ ispunct() - هل الحرف علامة ترقيم؟

علامات الترقيم (Punctuation) مثل: `!` `,` `.` `?` `;` `:` وغيرها

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
char ch = '!';
int result = ispunct(ch);  // ترجع رقم غير صفري (true)
cout << result << endl;     // مثلاً 16

ch = 'A';
result = ispunct(ch);       // ترجع 0 (false)
cout << result << endl;     // 0
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char a = 'a';    // حرف صغير
    char A = 'A';    // حرف كبير
    char five = '5'; // رقم
    char punct = '!'; // علامة ترقيم
    
    // دوال التحويل
    cout << "=== Conversion Functions ===" << endl;
    cout << "toupper('a'): " << (char)toupper(a) << endl;      // A
    cout << "tolower('A'): " << (char)tolower(A) << endl;      // a
    
    // دوال التحقق
    cout << "\n=== Checking Functions ===" << endl;
    
    cout << "isupper('A'): " << isupper(A) << endl;   // non-zero (true)
    cout << "isupper('a'): " << isupper(a) << endl;   // 0 (false)
    
    cout << "islower('a'): " << islower(a) << endl;   // non-zero (true)
    cout << "islower('A'): " << islower(A) << endl;   // 0 (false)
    
    cout << "isdigit('5'): " << isdigit(five) << endl; // non-zero (true)
    cout << "isdigit('A'): " << isdigit(A) << endl;   // 0 (false)
    
    cout << "ispunct('!'): " << ispunct(punct) << endl; // non-zero (true)
    cout << "ispunct('A'): " << ispunct(A) << endl;   // 0 (false)
    
    // استخدام عملي مع if
    cout << "\n=== Practical Usage ===" << endl;
    
    if (isupper(A)) {
        cout << "A is uppercase" << endl;
    }
    
    if (islower(a)) {
        cout << "a is lowercase" << endl;
    }
    
    if (isdigit(five)) {
        cout << "5 is a digit" << endl;
    }
    
    if (ispunct(punct)) {
        cout << "! is punctuation" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
=== Conversion Functions ===
toupper('a'): A
tolower('A'): a

=== Checking Functions ===
isupper('A'): 1
isupper('a'): 0
islower('a'): 2
islower('A'): 0
isdigit('5'): 4
isdigit('A'): 0
ispunct('!'): 16
ispunct('A'): 0

=== Practical Usage ===
A is uppercase
a is lowercase
5 is a digit
! is punctuation
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## ملخص الدوال

### 📊 **جدول ملخص:**

| الدالة | الوظيفة | مثال | النتيجة |
|--------|---------|------|---------|
| `toupper()` | تحويل إلى كبير | `toupper('a')` | `'A'` |
| `tolower()` | تحويل إلى صغير | `tolower('A')` | `'a'` |
| `isupper()` | هل هو كبير؟ | `isupper('A')` | non-zero (true) |
| `islower()` | هل هو صغير؟ | `islower('a')` | non-zero (true) |
| `isdigit()` | هل هو رقم؟ | `isdigit('5')` | non-zero (true) |
| `ispunct()` | هل هو علامة ترقيم؟ | `ispunct('!')` | non-zero (true) |

### 💡 **تذكر:**
- دوال التحويل ترجع الحرف المحول
- دوال التحقق ترجع `0` للخطأ ورقم غير صفري للصحيح
- أي رقم غير الصفر يعتبر `true` في الشروط

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **مكتبة CCTYPE** ← توفر دوال جاهزة للتعامل مع الأحرف
2. **دوال التحويل** ← `toupper()` و `tolower()`
3. **دوال التحقق** ← `isupper()`، `islower()`، `isdigit()`، `ispunct()`
4. **قيمة الرجوع** ← 0 للخطأ، غير صفري للصحيح

### 🎯 **تطبيقات عملية:**
- التحقق من صحة المدخلات
- تحويل حالة الأحرف
- تصفية النصوص
- معالجة البيانات النصية

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Some CCTYPE Functions

---

## Introduction

### 📝 **What are CCTYPE Functions?**

Ready-made functions in C++ for handling characters, checking their properties, and converting them.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch1 = 'a';  // lowercase
    char ch2 = 'A';  // uppercase
    char ch3 = '5';  // digit
    char ch4 = '!';  // punctuation
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Functions Summary

### 📊 **Summary Table:**

| Function | Purpose | Example | Result |
|----------|---------|---------|--------|
| `toupper()` | Convert to uppercase | `toupper('a')` | `'A'` |
| `tolower()` | Convert to lowercase | `tolower('A')` | `'a'` |
| `isupper()` | Is it uppercase? | `isupper('A')` | non-zero (true) |
| `islower()` | Is it lowercase? | `islower('a')` | non-zero (true) |
| `isdigit()` | Is it a digit? | `isdigit('5')` | non-zero (true) |
| `ispunct()` | Is it punctuation? | `ispunct('!')` | non-zero (true) |

### 💡 **Remember:**
- Conversion functions return the converted character
- Checking functions return `0` for false and non-zero for true
- Any non-zero value is considered `true` in conditions

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char a = 'a';    // lowercase
    char A = 'A';    // uppercase
    char five = '5'; // digit
    char punct = '!'; // punctuation
    
    // Conversion Functions
    cout << "=== Conversion Functions ===" << endl;
    cout << "toupper('a'): " << (char)toupper(a) << endl;      // A
    cout << "tolower('A'): " << (char)tolower(A) << endl;      // a
    
    // Checking Functions
    cout << "\n=== Checking Functions ===" << endl;
    
    cout << "isupper('A'): " << isupper(A) << endl;   // non-zero (true)
    cout << "isupper('a'): " << isupper(a) << endl;   // 0 (false)
    
    cout << "islower('a'): " << islower(a) << endl;   // non-zero (true)
    cout << "islower('A'): " << islower(A) << endl;   // 0 (false)
    
    cout << "isdigit('5'): " << isdigit(five) << endl; // non-zero (true)
    cout << "isdigit('A'): " << isdigit(A) << endl;   // 0 (false)
    
    cout << "ispunct('!'): " << ispunct(punct) << endl; // non-zero (true)
    cout << "ispunct('A'): " << ispunct(A) << endl;   // 0 (false)
    
    // Practical Usage with if
    cout << "\n=== Practical Usage ===" << endl;
    
    if (isupper(A)) {
        cout << "A is uppercase" << endl;
    }
    
    if (islower(a)) {
        cout << "a is lowercase" << endl;
    }
    
    if (isdigit(five)) {
        cout << "5 is a digit" << endl;
    }
    
    if (ispunct(punct)) {
        cout << "! is punctuation" << endl;
    }
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 🔑 **What We Learned Today:**

1. **CCTYPE Library** ← Provides ready-made functions for character handling
2. **Conversion Functions** ← `toupper()` and `tolower()`
3. **Checking Functions** ← `isupper()`, `islower()`, `isdigit()`, `ispunct()`
4. **Return Value** ← 0 for false, non-zero for true

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>