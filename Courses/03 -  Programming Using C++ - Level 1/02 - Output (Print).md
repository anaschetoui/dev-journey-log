<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# Output (Print) in C++

## مقدمة

الطباعة على الشاشة هي واحدة من أولى المهارات التي يتعلمها المبرمج. في هذا الدرس سنتعلم كيفية استخدام أوامر الإخراج في لغة C++ بطريقة صحيحة وفعالة.

---

## أساسيات الطباعة

### أمر الطباعة الأساسي 🎯

أمر `cout` هو الأداة الأساسية للطباعة على الشاشة في لغة C++:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abu-Hadhoud";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### بناء جملة cout

- **std::cout**: للإخراج إلى وحدة التحكم
- **<<**: عامل الإدراج (Insertion Operator)
- **"النص"**: النص المراد طباعته بين علامتي اقتباس
- **;**: فاصلة منقوطة لنهاية الجملة

---

## التحكم في الأسطر الجديدة

### استخدام \n للسطر الجديد

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Mohammed Abu-Hadhoud\n";
cout << "This is my first C++ program";
```

**الناتج:**
```
Mohammed Abu-Hadhoud
This is my first C++ program
```
</div>

<div dir="rtl" style="text-align: right;">

### استخدام endl للسطر الجديد

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Mohammed Abu-Hadhoud" << endl;
cout << "This is my first C++ program";
```

**الناتج:**
```
Mohammed Abu-Hadhoud
This is my first C++ program
```
</div>

<div dir="rtl" style="text-align: right;">

### الفرق بين \n و endl

- **\n**: يضيف سطر جديد فقط
- **endl**: يضيف سطر جديد ويُفرغ buffer الإخراج

---

## طباعة متعددة في جملة واحدة

### دمج نصوص متعددة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "M1" << "M2" << "M3\n";
cout << "M1" << "M2" << "M3";
```

**الناتج:** <br>`M1M2M3` <br>`M1M2M3`
</div>

<div dir="rtl" style="text-align: right;">

### إضافة فراغات بين النصوص

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "M1 " << "M2 " << "M3";
```

**الناتج:** `M1 M2 M3`
</div>

<div dir="rtl" style="text-align: right;">

---

## أمثلة عملية متقدمة

### طباعة عمليات حسابية

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Result of 10 + 5 = " << (10 + 5);
```

**الناتج:** `Result of 10 + 5 = 15`
</div>

<div dir="rtl" style="text-align: right;">

### مثال شامل للطباعة

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Mohammed Abu-Hadhoud\n";
    cout << "This is my first C++ program" << endl;
    cout << "Result of 10 + 5 = " << (10 + 5) << endl;
    cout << "Wish you" << " " << "Happy Programming!";
    return 0;
}
```

**الناتج:**
```
Name: Mohammed Abu-Hadhoud
This is my first C++ program
Result of 10 + 5 = 15
Wish you Happy Programming!
```
</div>

<div dir="rtl" style="text-align: right;">

---

## الأخطاء الشائعة وحلولها

### نسيان الفاصلة المنقوطة

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ خطأ
cout << "Hello World"

// ✅ صحيح
cout << "Hello World";
```
</div>

<div dir="rtl" style="text-align: right;">

### نسيان علامات الاقتباس

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ خطأ
cout << Hello World;

// ✅ صحيح
cout << "Hello World";
```
</div>

<div dir="rtl" style="text-align: right;">

### استخدام أحرف كبيرة في cout

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ خطأ
COUT << "Hello World";

// ✅ صحيح
cout << "Hello World";
```
</div>

<div dir="rtl" style="text-align: right;">

---

## أفضل الممارسات

### نصائح للطباعة الفعالة

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 استخدام \n للأسطر الجديدة (أسرع)
📝 استخدام endl عندما تحتاج لتفريغ الـ buffer
🔤 التأكد من استخدام أحرف صغيرة في cout
💡 إضافة فراغات للنصوص لجعلها مقروءة
⚠️ عدم نسيان الفاصلة المنقوطة
```
</div>

<div dir="rtl" style="text-align: right;">

---

## الخلاصة

### النقاط الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 cout لأوامر الإخراج الأساسية
🔤 << لعامل الإدراج بين النصوص
↵ \n أو endl للأسطر الجديدة
💬 النص بين علامتي اقتباس مزدوجة
⚠️ الفاصلة المنقوطة نهاية كل جملة
🔢 إمكانية طباعة نتائج العمليات الحسابية
```
</div>

<div dir="rtl" style="text-align: right;">

### القاعدة الذهبية:
> **"التدريب العملي هو أفضل طريقة لإتقان أوامر الطباعة - كلما طبقت أكثر، كلما أصبحت البرمجة أسهل"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)


# Output (Print) in C++

## Introduction

Printing to the screen is one of the first skills a programmer learns. In this lesson, we will learn how to use output commands in C++ correctly and effectively.

---

## Printing Basics

### Basic Print Command 🎯

The `cout` command is the primary tool for printing to the screen in C++:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abu-Hadhoud";
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### cout Syntax

- **std::cout**: For output to console
- **<<**: Insertion Operator
- **"Text"**: Text to print between double quotes
- **;**: Semicolon to end statement

---

## Controlling New Lines

### Using \n for New Line

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Mohammed Abu-Hadhoud\n";
cout << "This is my first C++ program";
```

**Output:**
```
Mohammed Abu-Hadhoud
This is my first C++ program
```
</div>

<div dir="rtl" style="text-align: right;">

### Using endl for New Line

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Mohammed Abu-Hadhoud" << endl;
cout << "This is my first C++ program";
```

**Output:**
```
Mohammed Abu-Hadhoud
This is my first C++ program
```
</div>

<div dir="rtl" style="text-align: right;">

### Difference Between \n and endl

- **\n**: Adds new line only
- **endl**: Adds new line and flushes output buffer

---

## Multiple Printing in Single Statement

### Combining Multiple Texts

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << cout << "M1" << "M2" << "M3";
```

**Output:** `M1M2M3`
</div>

<div dir="rtl" style="text-align: right;">

### Adding Spaces Between Texts

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "M1 " << "M2 " << "M3";
```

**Output:** `M1 M2 M3`
</div>

<div dir="rtl" style="text-align: right;">

---

## Advanced Practical Examples

### Printing Arithmetic Operations

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << "Result of 10 + 5 = " << (10 + 5);
```

**Output:** `Result of 10 + 5 = 15`
</div>

<div dir="rtl" style="text-align: right;">

### Comprehensive Printing Example

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Mohammed Abu-Hadhoud\n";
    cout << "This is my first C++ program" << endl;
    cout << "Result of 10 + 5 = " << (10 + 5) << endl;
    cout << "Wish you" << " " << "Happy Programming!";
    return 0;
}
```

**Output:**
```
Name: Mohammed Abu-Hadhoud
This is my first C++ program
Result of 10 + 5 = 15
Wish you Happy Programming!
```
</div>

<div dir="rtl" style="text-align: right;">

---

## Common Errors and Solutions

### Forgetting Semicolon

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ Error
cout << "Hello World"

// ✅ Correct
cout << "Hello World";
```
</div>

<div dir="rtl" style="text-align: right;">

### Forgetting Quotation Marks

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ Error
cout << Hello World;

// ✅ Correct
cout << "Hello World";
```
</div>

<div dir="rtl" style="text-align: right;">

### Using Uppercase in cout

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// ❌ Error
COUT << "Hello World";

// ✅ Correct
cout << "Hello World";
```
</div>

<div dir="rtl" style="text-align: right;">

---

## Best Practices

### Tips for Effective Printing

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 Use \n for new lines (faster)
📝 Use endl when you need to flush buffer
🔤 Ensure using lowercase in cout
💡 Add spaces to texts for readability
⚠️ Don't forget semicolon
```
</div>

<div dir="rtl" style="text-align: right;">

---

## Summary

### Key Points:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 cout for basic output commands
🔤 << for insertion operator between texts
↵ \n or endl for new lines
💬 Text between double quotes
⚠️ Semicolon ends each statement
🔢 Ability to print arithmetic operations results
```
</div>

<div dir="rtl" style="text-align: right;">

### Golden Rule:
> **"Practical training is the best way to master print commands - the more you practice, the easier programming becomes"**

</div>

---
*Anas Chetoui* - `@anaschetoui`