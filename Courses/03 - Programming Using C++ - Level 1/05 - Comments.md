<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">


# Comments

## مقدمة

التعليقات (Comments) هي أداة أساسية في البرمجة تسمح للمطورين بإضافة ملاحظات وشرح للكود دون التأثير على تنفيذ البرنامج.

---

## أنواع التعليقات

### التعليقات أحادية السطر 🎯

تستخدم للتعليقات القصيرة التي لا تتعدى سطراً واحداً:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // هذا تعليق أحادي السطر
    cout << "Mohammed Abu-Hadhoud" << endl;
    
    cout << "Hello World";  // تعليق بجانب الكود
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### التعليقات متعددة الأسطر

تستخدم للتعليقات الطويلة التي تمتد على عدة أسطر:

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    /*
    هذا تعليق متعدد الأسطر
    يمكنني كتابة شرح طويل هنا
    عن وظيفة هذا الجزء من الكود
    */
    cout << "Mohammed Abu-Hadhoud" << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## استخدامات التعليقات

### أغراض التعليقات

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ شرح وظيفة أجزاء الكود
✅ تعطيل كود مؤقتاً للاختبار
✅ توثيق البرنامج للمطورين الآخرين
✅ تذكير المطور ببعض التفاصيل
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### مثال على تعطيل الكود

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abu-Hadhoud" << endl;
    
    // cout << "This line is disabled for testing" << endl;
    
    cout << "Program continues..." << endl;
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## أفضل الممارسات

### نصائح لكتابة تعليقات فعالة

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 اكتب أسماء متغيرات ووظائف توضيحية بدلاً من التعليقات المفرطة
📝 استخدم التعليقات لشرح المنطق المعقد فقط
🔧 استخدم التعليقات المؤقتة للاختبار والتجريب
🚀 تجنب التعليقات الواضحة التي تكرر ما يفعله الكود
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### مثال على الممارسة الجيدة والسيئة

**ممارسة سيئة:**
</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a;  // هذا المتغير سيحمل درجة الطالب
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

**ممارسة جيدة:**
</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int studentGrade;  // الاسم يوضح الغرض من المتغير
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## أدوات Visual Studio

### اختصارات التعليقات

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Ctrl + K, Ctrl + C: إضافة تعليق
✅ Ctrl + K, Ctrl + U: إزالة تعليق
✅ استخدام الأيقونات في شريط الأدوات
✅ التحديد المتعدد للتعليق الجماعي
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### النقاط الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 // للتعليقات أحادية السطر
📝 /* */ للتعليقات متعددة الأسطر
🔧 استخدم التعليقات لتعطيل الكود مؤقتاً
🚀 أسماء واضحة أفضل من التعليقات المفرطة
💡 قلل التعليقات واجعل الكود يشرح نفسه
```
</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### القاعدة الذهبية:
> **"اكتب كوداً واضحاً يشرح نفسه، واستخدم التعليقات فقط عندما يكون المنطق معقداً أو غير واضح"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Comments in C++ 
## Comments

## Introduction

Comments are a fundamental tool in programming that allow developers to add notes and explanations to code without affecting program execution.

---

## Types of Comments

### Single-line Comments 🎯

Used for short comments that don't exceed one line:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // This is a single-line comment
    cout << "Mohammed Abu-Hadhoud" << endl;
    
    cout << "Hello World";  // Comment next to code
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### Multi-line Comments

Used for long comments that span multiple lines:

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    /*
    This is a multi-line comment
    I can write a long explanation here
    about this part of the code's function
    */
    cout << "Mohammed Abu-Hadhoud" << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Uses of Comments

### Purposes of Comments

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Explain code section functions
✅ Temporarily disable code for testing
✅ Document program for other developers
✅ Remind developer of certain details
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### Example of Code Disabling

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abu-Hadhoud" << endl;
    
    // cout << "This line is disabled for testing" << endl;
    
    cout << "Program continues..." << endl;
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Best Practices

### Tips for Writing Effective Comments

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 Write descriptive variable and function names instead of excessive comments
📝 Use comments to explain complex logic only
🔧 Use temporary comments for testing and experimentation
🚀 Avoid obvious comments that repeat what the code does
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### Example of Good and Bad Practice

**Bad Practice:**
</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a;  // This variable will hold student grade
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

**Good Practice:**
</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int studentGrade;  // Name clarifies variable purpose
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Visual Studio Tools

### Comment Shortcuts

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Ctrl + K, Ctrl + C: Add comment
✅ Ctrl + K, Ctrl + U: Remove comment
✅ Use toolbar icons
✅ Multiple selection for bulk commenting
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### Key Points:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 // for single-line comments
📝 /* */ for multi-line comments
🔧 Use comments to temporarily disable code
🚀 Clear names better than excessive comments
💡 Minimize comments and make code self-explanatory
```
</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

### Golden Rule:
> **"Write clear code that explains itself, and use comments only when logic is complex or unclear"**

</div>

---
*Anas Chetoui* - `@anaschetoui`