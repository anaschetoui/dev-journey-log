<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# بناء الجملة في لغة C++ 
## Syntax and Basic Structure

## مقدمة

بناء الجملة (Syntax) هو مجموعة القواعد التي تحكم كتابة الكود في لغة البرمجة. فهم هذه القواعد يمنع الأخطاء ويضمن كتابة برامج صحيحة وسليمة في لغة C++.

---

## الأساسيات

### المكونات الأساسية للبرنامج 🎯

كل برنامج في C++ يتكون من عدة عناصر أساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // الكود هنا
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### شرح المكونات الأساسية

- **المكتبات (#include)**: استدعاء المكتبات اللازمة
- **الدالة الرئيسية (main)**: نقطة بداية تنفيذ البرنامج
- **الأقواس المعقوفة {}**: تحديد نطاق الكود
- **الفاصلة المنقوطة ;**: نهاية كل جملة

---

## المكتبات والإدراج

### مكتبة iostream

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
```
**الوظيفة:** تحتوي على دوال الإدخال والإخراج الأساسية
</div>

<div dir="rtl" style="text-align: right;">

### استخدام namespace

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
using namespace std;
```
**الوظيفة:** تجنب تكرار كتابة std:: قبل كل أمر
</div>

<div dir="rtl" style="text-align: right;">

---

## الدالة الرئيسية main

### هيكل الدالة الرئيسية

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    // الأوامر هنا
    cout << "Hello World";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### قواعد الدالة main

- **النوع**: دائماً int
- **الاسم**: يجب أن يكون main بالضبط
- **الأقواس**: () بعد الاسم
- **return**: يجب إرجاع قيمة رقمية

---

## الإخراج إلى الشاشة

### استخدام cout للطباعة

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "النص المراد طباعته";
```
**الرمز:** << يستخدم لإرسال البيانات إلى الإخراج
</div>

<div dir="rtl" style="text-align: right;">

### مثال عملي للطباعة

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "محمد أبو هدهود";
    return 0;
}
```
**الناتج:** محمد أبو هدهود
</div>

<div dir="rtl" style="text-align: right;">

---

## الأخطاء الشائعة في بناء الجملة

### الفاصلة المنقوطة المنسية

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ خطأ - نسيان الفاصلة المنقوطة
cout << "Hello World"

// ✅ صحيح
cout << "Hello World";
```

</div>

<div dir="rtl" style="text-align: right;">

### الأقواس المعقوفة

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ خطأ - نسيان الأقواس
int main()
    cout << "Hello";
    return 0;

// ✅ صحيح
int main() {
    cout << "Hello";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

---

## هيكل المشروع في Visual Studio

### تنظيم الملفات

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Solution Explorer:
├── Project Name
│   ├── Source Files
│   │   └── main.cpp
│   └── Header Files
```

</div>

<div dir="rtl" style="text-align: right;">

### نصائح للعمل مع IDE

- **حفظ الحل**: Save Solution بشكل دوري
- **إدارة الملفات**: معرفة موقع الملفات في Solution Explorer
- **الترميز**: استخدام ترميز مناسب للنصوص العربية

---

## الخلاصة

### النقاط الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 #include لاستدعاء المكتبات
🔤 main الدالة الرئيسية الإجبارية
💻 cout للطباعة على الشاشة
⚠️ ; الفاصلة المنقوطة نهاية كل جملة
{} الأقواس المعقوفة لتحديد النطاق
```

</div>

<div dir="rtl" style="text-align: right;">

### القاعدة الذهبية:
> **"التزم بقواعد بناء الجملة كما تلتزم بقواعد اللغة - كل خطأ صغير قد يمنع البرنامج من العمل"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# C++ Syntax 
## Syntax and Basic Structure

## Introduction

Syntax is the set of rules that govern how code is written in a programming language. Understanding these rules prevents errors and ensures writing correct and valid programs in C++.

---

## Fundamentals

### Basic Program Components 🎯

Every C++ program consists of several basic elements:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // Code here
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### Explanation of Basic Components

- **Libraries (#include)**: Including necessary libraries
- **Main function**: Program execution starting point
- **Curly braces {}**: Defining code scope
- **Semicolon ;**: Ending each statement

---

## Libraries and Inclusion

### iostream Library

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
```
**Function:** Contains basic input/output functions
</div>

<div dir="rtl" style="text-align: right;">

### Using namespace

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
using namespace std;
```
**Function:** Avoid repeating std:: before each command
</div>

<div dir="rtl" style="text-align: right;">

---

## Main Function

### Main Function Structure

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    // Commands here
    cout << "Hello World";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### Main Function Rules

- **Type**: Always int
- **Name**: Must be exactly main
- **Parentheses**: () after name
- **return**: Must return a numeric value

---

## Output to Screen

### Using cout for Printing

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Text to print";
```
**Symbol:** << used to send data to output
</div>

<div dir="rtl" style="text-align: right;">

### Practical Printing Example

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abo Haddoud";
    return 0;
}
```
**Output:** Mohammed Abo Haddoud
</div>

<div dir="rtl" style="text-align: right;">

---

## Common Syntax Errors

### Forgotten Semicolon

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ Error - Missing semicolon
cout << "Hello World"

// ✅ Correct
cout << "Hello World";
```

</div>

<div dir="rtl" style="text-align: right;">

### Curly Braces

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ Error - Missing braces
int main()
    cout << "Hello";
    return 0;

// ✅ Correct
int main() {
    cout << "Hello";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Project Structure in Visual Studio

### File Organization

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Solution Explorer:
├── Project Name
│   ├── Source Files
│   │   └── main.cpp
│   └── Header Files
```

</div>

<div dir="rtl" style="text-align: right;">

### IDE Working Tips

- **Save Solution**: Save periodically
- **File Management**: Know file locations in Solution Explorer
- **Encoding**: Use appropriate encoding for Arabic text

---

## Summary

### Key Points:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 #include for library inclusion
🔤 main mandatory main function
💻 cout for screen printing
⚠️ ; semicolon ends each statement
{} curly braces define scope
```

</div>

<div dir="rtl" style="text-align: right;">

### Golden Rule:
> **"Adhere to syntax rules as you adhere to language rules - every small error may prevent the program from working"**

</div>

---
*Anas Chetoui* - `@anaschetoui`