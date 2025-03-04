<div dir="rtl">

<a id="arabic-conditional-else-if"></a>
[English ↙](#english-conditional-else-if)

# 🔀 الجمل الشرطية: ELSE IF Statement

## 🎯 المقدمة

في هذا الدرس، سنتعلم **Else If Statement** التي تسمح لنا بالتحقق من شروط متعددة بشكل متسلسل.

## 💡 المفاهيم الأساسية

### ما هي Else If Statement؟

**Else If Statement**:
- إضافة للـ If Statement العادي
- تسمح بالتحقق من شروط متعددة بشكل متسلسل
- توقف التنفيذ عند أول شرط يتحقق
- تستخدم عندما نريد شروط متداخلة (nested conditions)

## 🛠️ أمثلة عملية

### 📝 المثال الأساسي

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 22;
    
    if (time < 10) {
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
Good evening
```

</div>

### 📝 اختبار بأوقات مختلفة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 9;
    
    if (time < 10) {
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
Good morning
```

</div>

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 18;
    
    if (time < 10) {
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
Good day
```

</div>

## 🔧 بناء Else If Statement

### البناء الأساسي

<div dir="ltr" align="left">

```cpp
if (condition1) {
    // ينفذ إذا condition1 = true
} else if (condition2) {
    // ينفذ إذا condition1 = false و condition2 = true
} else {
    // ينفذ إذا condition1 = false و condition2 = false
}
```

</div>

### إضافة شروط متعددة

<div dir="ltr" align="left">

```cpp
if (condition1) {
    // كود الشرط الأول
} else if (condition2) {
    // كود الشرط الثاني
} else if (condition3) {
    // كود الشرط الثالث
} else if (condition4) {
    // كود الشرط الرابع
} else {
    // كود else النهائي
}
```

</div>

## 🎯 شرح آلية العمل

### كيف تعمل Else If خطوة بخطوة؟

1. **التحقق من الشرط الأول** `if (time < 10)`
   - إذا كان `true` → ينفذ الكود ويخرج من الجملة الشرطية
   - إذا كان `false` → ينتقل للشرط التالي

2. **التحقق من الشرط الثاني** `else if (time < 20)`
   - يتحقق فقط إذا فشل الشرط الأول
   - إذا كان `true` → ينفذ الكود ويخرج
   - إذا كان `false` → ينتقل للشرط التالي

3. **الشرط النهائي** `else`
   - ينفذ فقط إذا فشلت جميع الشروط السابقة

### مثال توضيحي يظهر آلية العمل

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 15;
    
    cout << "الوقت الحالي: " << time << endl;
    
    if (time < 10) {
        cout << "الشرط الأول تحقق - time < 10" << endl;
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "الشرط الأول فشل، الشرط الثاني تحقق - time < 20" << endl;
        cout << "Good day" << endl;
    } else {
        cout << "جميع الشروط فشلت" << endl;
        cout << "Good evening" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
الوقت الحالي: 15
الشرط الأول فشل، الشرط الثاني تحقق - time < 20
Good day
```

</div>

## 💡 النقاط الرئيسية

### ✅ المميزات الرئيسية

1. **تسلسل الشروط** - تتحقق الشروط بالترتيب من الأعلى للأسفل
2. **توقف عند أول تحقق** - البرنامج يتوقف عند أول شرط يتحقق
3. **كفاءة في التنفيذ** - لا تتحقق جميع الشروط إذا تحقق أحدها مبكراً

### 🔄 الفرق بين If متعددة و Else If

<div dir="ltr" align="left">

```cpp
// ❌ If statements متعددة (غير فعالة)
if (time < 10) {
    cout << "Good morning" << endl;
}
if (time < 20) {  // تتحقق حتى لو تحقق الشرط السابق
    cout << "Good day" << endl;
}

// ✅ Else if (فعالة)
if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {  // تتحقق فقط إذا فشل الشرط السابق
    cout << "Good day" << endl;
}
```

</div>

## ❌ الأخطاء الشائعة

### 1. ترتيب الشروط الخاطئ

<div dir="ltr" align="left">

```cpp
// ❌ خطأ في الترتيب
if (time < 20) {
    cout << "Good day" << endl;
} else if (time < 10) {  // لن يصل أبداً لهذا الشرط
    cout << "Good morning" << endl;
}

// ✅ ترتيب صحيح
if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {
    cout << "Good day" << endl;
}
```

</div>

### 2. نسيان الأقواس

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - نسيان الأقواس
if (time < 10)
    cout << "Good morning" << endl;
else if (time < 20)
    cout << "Good day" << endl;

// ✅ صحيح - استخدام الأقواس
if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {
    cout << "Good day" << endl;
}
```

</div>

## 🏆 أفضل الممارسات

### 1. ترتيب الشروط بشكل منطقي

<div dir="ltr" align="left">

```cpp
// ✅ ترتيب تصاعدي صحيح
if (score >= 90) {
    cout << "A" << endl;
} else if (score >= 80) {
    cout << "B" << endl;
} else if (score >= 70) {
    cout << "C" << endl;
} else if (score >= 60) {
    cout << "D" << endl;
} else {
    cout << "F" << endl;
}
```

</div>

### 2. استخدام else للتعامل مع القيم غير المتوقعة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int time;
    
    cout << "Enter time (0-23): ";
    cin >> time;
    
    if (time >= 0 && time < 10) {
        cout << "Good morning" << endl;
    } else if (time >= 10 && time < 20) {
        cout << "Good day" << endl;
    } else if (time >= 20 && time <= 23) {
        cout << "Good evening" << endl;
    } else {
        cout << "Invalid time!" << endl;
    }
    
    return 0;
}
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:
- **Else If** تسمح بالتحقق من شروط متعددة بشكل متسلسل
- **يتوقف التنفيذ** عند أول شرط يتحقق
- **يتم التحقق من الشروط** بالترتيب من الأعلى للأسفل

### بناء الجمل:

```cpp
if (condition1) {
    // كود إذا الشرط 1 صحيح
} else if (condition2) {
    // كود إذا الشرط 1 خاطئ والشرط 2 صحيح
} else {
    // كود إذا جميع الشروط خاطئة
}
```

### قواعد مهمة:
1. **الترتيب مهم** - الشروط تتحقق بالتسلسل
2. **استخدم else if** بدلاً من if متعددة عندما تريد شرطاً واحداً فقط
3. **else نهائية** تغطي جميع الحالات المتبقية

### أفضل الممارسات:
1. **رتب الشروط** من الأكثر تحديداً إلى الأكثر عمومية
2. **استخدم else** للتعامل مع القيم غير المتوقعة
3. **اختبر جميع المسارات** للتأكد من صحة البرنامج

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

<a id="english-conditional-else-if"></a>
[العربية ↗](#arabic-conditional-else-if)

# 🔀 Conditional Statements: ELSE IF Statement

## 🎯 Introduction

In this lesson, we'll learn about **Else If Statement** which allows us to check multiple conditions sequentially.

## 💡 Core Concepts

### What is Else If Statement?

**Else If Statement**:
- An addition to the regular If Statement
- Allows checking multiple conditions sequentially
- Stops execution at the first condition that evaluates to true
- Used when we want nested conditions

## 🛠️ Practical Examples

### 📝 Basic Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 22;
    
    if (time < 10) {
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }
    
    return 0;
}
```

**Result:**
```
Good evening
```

### 📝 Testing Different Times

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 9;
    
    if (time < 10) {
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }
    
    return 0;
}
```

**Result:**
```
Good morning
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 18;
    
    if (time < 10) {
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }
    
    return 0;
}
```

**Result:**
```
Good day
```

## 🔧 Else If Statement Syntax

### Basic Syntax

```cpp
if (condition1) {
    // executes if condition1 = true
} else if (condition2) {
    // executes if condition1 = false and condition2 = true
} else {
    // executes if condition1 = false and condition2 = false
}
```

### Adding Multiple Conditions

```cpp
if (condition1) {
    // first condition code
} else if (condition2) {
    // second condition code
} else if (condition3) {
    // third condition code
} else if (condition4) {
    // fourth condition code
} else {
    // final else code
}
```

## 🎯 How It Works

### Step-by-Step Execution

1. **Check first condition** `if (time < 10)`
   - If `true` → execute code and exit conditional statement
   - If `false` → move to next condition

2. **Check second condition** `else if (time < 20)`
   - Checks only if first condition failed
   - If `true` → execute code and exit
   - If `false` → move to next condition

3. **Final condition** `else`
   - Executes only if all previous conditions failed

### Example Showing Execution Flow

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 15;
    
    cout << "Current time: " << time << endl;
    
    if (time < 10) {
        cout << "First condition met - time < 10" << endl;
        cout << "Good morning" << endl;
    } else if (time < 20) {
        cout << "First condition failed, second condition met - time < 20" << endl;
        cout << "Good day" << endl;
    } else {
        cout << "All conditions failed" << endl;
        cout << "Good evening" << endl;
    }
    
    return 0;
}
```

**Result:**
```
Current time: 15
First condition failed, second condition met - time < 20
Good day
```

## 💡 Key Points

### ✅ Main Features

1. **Sequential conditions** - Conditions checked in order from top to bottom
2. **Stop at first match** - Program stops at first true condition
3. **Execution efficiency** - Not all conditions checked if one matches early

### 🔄 Difference Between Multiple If and Else If

```cpp
// ❌ Multiple if statements (inefficient)
if (time < 10) {
    cout << "Good morning" << endl;
}
if (time < 20) {  // Checks even if previous condition was true
    cout << "Good day" << endl;
}

// ✅ Else if (efficient)
if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {  // Checks only if previous condition failed
    cout << "Good day" << endl;
}
```

## ❌ Common Errors

### 1. Wrong Condition Order

```cpp
// ❌ Wrong order
if (time < 20) {
    cout << "Good day" << endl;
} else if (time < 10) {  // Will never reach this condition
    cout << "Good morning" << endl;
}

// ✅ Correct order
if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {
    cout << "Good day" << endl;
}
```

### 2. Forgetting Braces

```cpp
// ❌ Error - forgetting braces
if (time < 10)
    cout << "Good morning" << endl;
else if (time < 20)
    cout << "Good day" << endl;

// ✅ Correct - using braces
if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {
    cout << "Good day" << endl;
}
```

## 🏆 Best Practices

### 1. Logical Condition Ordering

```cpp
// ✅ Correct ascending order
if (score >= 90) {
    cout << "A" << endl;
} else if (score >= 80) {
    cout << "B" << endl;
} else if (score >= 70) {
    cout << "C" << endl;
} else if (score >= 60) {
    cout << "D" << endl;
} else {
    cout << "F" << endl;
}
```

### 2. Using Else for Unexpected Values

```cpp
#include <iostream>
using namespace std;

int main() {
    int time;
    
    cout << "Enter time (0-23): ";
    cin >> time;
    
    if (time >= 0 && time < 10) {
        cout << "Good morning" << endl;
    } else if (time >= 10 && time < 20) {
        cout << "Good day" << endl;
    } else if (time >= 20 && time <= 23) {
        cout << "Good evening" << endl;
    } else {
        cout << "Invalid time!" << endl;
    }
    
    return 0;
}
```

## 📝 Summary

### Basic Concepts:
- **Else If** allows checking multiple conditions sequentially
- **Execution stops** at first true condition
- **Conditions are checked** in order from top to bottom

### Syntax:

```cpp
if (condition1) {
    // code if condition1 true
} else if (condition2) {
    // code if condition1 false and condition2 true
} else {
    // code if all conditions false
}
```

### Important Rules:
1. **Order matters** - Conditions checked sequentially
2. **Use else if** instead of multiple if when you want only one condition
3. **Final else** covers all remaining cases

### Best Practices:
1. **Order conditions** from most specific to most general
2. **Use else** to handle unexpected values
3. **Test all paths** to ensure program correctness

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>