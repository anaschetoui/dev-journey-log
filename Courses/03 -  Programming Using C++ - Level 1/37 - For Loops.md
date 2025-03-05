<div dir="rtl">

<a id="arabic-for-loops"></a>
[English ↙](#english-for-loops)

# 🔄 حلقات التكرار: For Loops

## 🎯 المقدمة

في هذا الدرس، سنتعلم **حلقات التكرار For Loops** التي تُستخدم لتكرار تنفيذ كود معين عدة مرات، مما يجعل البرامج أكثر كفاءة وأقل تكراراً.

## 💡 المفاهيم الأساسية

### ما هي حلقات التكرار For Loops؟

**For Loops** هي هياكل تحكم تسمح بتنفيذ كود مكرر لعدد محدد من المرات، بناءً على شروط محددة.

### لماذا نستخدم For Loops؟

- **تقليل التكرار** في الكود
- **تحسين الكفاءة** في التنفيذ
- **التحكم الدقيق** بعدد مرات التكرار
- **تنظيم الكود** وجعله أكثر قراءة

## 🛠️ أمثلة عملية من المحاضرة

### 📝 المثال الأساسي: العد من 1 إلى 5

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
1
2
3
4
5
```

</div>

### 📝 المثال الثاني: تكرار جملة محددة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Mohammed" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
Mohammed
Mohammed
Mohammed
Mohammed
Mohammed
```

</div>

### 📝 المثال الثالث: التسبيح 100 مرة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        cout << "سبحان الله " << i << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
سبحان الله 1
سبحان الله 2
سبحان الله 3
...
سبحان الله 100
```

</div>

### 📝 المثال الرابع: العد التنازلي من 5 إلى 1

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {
        cout << i << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
5
4
3
2
1
```

</div>

### 📝 المثال الخامس: القفز بخطوة 2 (الأعداد الفردية)

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i += 2) {
        cout << i << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
1
3
5
7
9
```

</div>

### 📝 المثال السادس: القفز بخطوة 2 (الأعداد الزوجية)

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 10; i += 2) {
        cout << i << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
0
2
4
6
8
10
```

</div>

## 🔧 بناء جملة For Loop

### الهيكل الأساسي

<div dir="ltr" align="left">

```cpp
for (initialization; condition; update) {
    // الكود الذي سيتم تكراره
}
```

</div>

### شرح المكونات:

- **`initialization`**: القيمة الأولية للعداد (يتم تنفيذها مرة واحدة فقط)
- **`condition`**: الشرط الذي يتحقق قبل كل تكرار
- **`update`**: تحديث قيمة العداد بعد كل تكرار
- **`body`**: الكود الذي يتم تنفيذه في كل تكرار

## 🎯 آلية العمل

### كيف تعمل For Loop خطوة بخطوة؟

<div dir="ltr" align="left">

```cpp
for (int i = 1; i <= 3; i++) {
    cout << "Iteration: " << i << endl;
}
```

**خطوات التنفيذ:**

1. **التنفيذ الأول**: `i = 1`
2. **التحقق من الشرط**: `1 <= 3` → true
3. **تنفيذ الجسم**: طباعة "Iteration: 1"
4. **التحديث**: `i++` → `i = 2`
5. **التحقق من الشرط**: `2 <= 3` → true
6. **تنفيذ الجسم**: طباعة "Iteration: 2"
7. **التحديث**: `i++` → `i = 3`
8. **التحقق من الشرط**: `3 <= 3` → true
9. **تنفيذ الجسم**: طباعة "Iteration: 3"
10. **التحديث**: `i++` → `i = 4`
11. **التحقق من الشرط**: `4 <= 3` → false
12. **الخروج من الحلقة**

</div>

## 🔄 أنواع مختلفة من For Loops

### العد التصاعدي

<div dir="ltr" align="left">

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

</div>

### العد التنازلي

<div dir="ltr" align="left">

```cpp
for (int i = 5; i >= 1; i--) {
    cout << i << endl;
}
```

</div>

### القفز بخطوات

<div dir="ltr" align="left">

```cpp
for (int i = 0; i <= 10; i += 2) {
    cout << i << endl;
}
```

</div>

## ⚠️ الأخطاء الشائعة

### 1. وضع فاصلة منقوطة خاطئة

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - فاصلة منقوطة بعد for
for (int i = 1; i <= 5; i++); {
    cout << i << endl;
}

// ✅ صحيح - بدون فاصلة منقوطة
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

</div>

### 2. تحديث العداد بشكل خاطئ

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - حلقة لا نهائية
for (int i = 1; i <= 5; i--) {
    cout << i << endl;
}
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام أسماء معبرة للعدادات

<div dir="ltr" align="left">

```cpp
// ✅ تسمية جيدة
for (int counter = 1; counter <= 10; counter++) {
    cout << counter << endl;
}
```

</div>

### 2. تحديد النطاق المناسب للعداد

<div dir="ltr" align="left">

```cpp
// ✅ نطاق محدد بوضوح
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:

- **For Loops** تُستخدم للتكرار لعدد محدد من المرات
- **العداد** يتحكم في عدد مرات التكرار
- **الشرط** يحدد متى تتوقف الحلقة
- **التحديث** يغير قيمة العداد بعد كل تكرار

### بناء الجملة:

```cpp
for (تهيئة; شرط; تحديث) {
    // كود التكرار
}
```

### أنواع التكرار:

1. **تصاعدي**: `for (int i = 1; i <= n; i++)`
2. **تنازلي**: `for (int i = n; i >= 1; i--)`
3. **بخطوات**: `for (int i = 0; i <= n; i += step)`

### قواعد مهمة:

1. **لا تضع فاصلة منقوطة** بعد for مباشرة
2. **تأكد من تحديث العداد** لتجنب الحلقات اللانهائية
3. **اختر نطاقاً مناسباً** للعداد

### فوائد For Loops:

1. **تقليل التكرار** في الكود
2. **تحسين الكفاءة** والتنظيم
3. **التحكم الدقيق** بعدد التكرارات

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

<a id="english-for-loops"></a>
[العربية ↗](#arabic-for-loops)

# 🔄 Loops: For Loops

## 🎯 Introduction

In this lesson, we'll learn about **For Loops** which are used to repeatedly execute a specific code block multiple times, making programs more efficient and less repetitive.

## 💡 Core Concepts

### What are For Loops?

**For Loops** are control structures that allow executing repetitive code for a specified number of times, based on specific conditions.

### Why Use For Loops?

- **Reduce repetition** in code
- **Improve execution efficiency**
- **Precise control** over iteration count
- **Organize code** and make it more readable

## 🛠️ Practical Examples from the Lecture

### 📝 Basic Example: Counting from 1 to 5

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    
    return 0;
}
```

**Result:**
```
1
2
3
4
5
```

### 📝 Example 2: Repeating a Specific Statement

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Mohammed" << endl;
    }
    
    return 0;
}
```

**Result:**
```
Mohammed
Mohammed
Mohammed
Mohammed
Mohammed
```

### 📝 Example 3: Praising 100 Times

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        cout << "سبحان الله " << i << endl;
    }
    
    return 0;
}
```

**Result:**
```
سبحان الله 1
سبحان الله 2
سبحان الله 3
...
سبحان الله 100
```

### 📝 Example 4: Countdown from 5 to 1

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {
        cout << i << endl;
    }
    
    return 0;
}
```

**Result:**
```
5
4
3
2
1
```

### 📝 Example 5: Step by 2 (Odd Numbers)

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i += 2) {
        cout << i << endl;
    }
    
    return 0;
}
```

**Result:**
```
1
3
5
7
9
```

### 📝 Example 6: Step by 2 (Even Numbers)

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 10; i += 2) {
        cout << i << endl;
    }
    
    return 0;
}
```

**Result:**
```
0
2
4
6
8
10
```

## 🔧 For Loop Syntax

### Basic Structure

```cpp
for (initialization; condition; update) {
    // Code to be repeated
}
```

### Component Explanation:

- **`initialization`**: Initial value of the counter (executed only once)
- **`condition`**: Condition checked before each iteration
- **`update`**: Counter update after each iteration
- **`body`**: Code executed in each iteration

## 🎯 How It Works

### For Loop Step-by-Step Execution:

```cpp
for (int i = 1; i <= 3; i++) {
    cout << "Iteration: " << i << endl;
}
```

**Execution Steps:**

1. **First execution**: `i = 1`
2. **Check condition**: `1 <= 3` → true
3. **Execute body**: Print "Iteration: 1"
4. **Update**: `i++` → `i = 2`
5. **Check condition**: `2 <= 3` → true
6. **Execute body**: Print "Iteration: 2"
7. **Update**: `i++` → `i = 3`
8. **Check condition**: `3 <= 3` → true
9. **Execute body**: Print "Iteration: 3"
10. **Update**: `i++` → `i = 4`
11. **Check condition**: `4 <= 3` → false
12. **Exit loop**

## 🔄 Different Types of For Loops

### Ascending Count

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

### Descending Count

```cpp
for (int i = 5; i >= 1; i--) {
    cout << i << endl;
}
```

### Step Counting

```cpp
for (int i = 0; i <= 10; i += 2) {
    cout << i << endl;
}
```

## ⚠️ Common Errors

### 1. Wrong Semicolon Placement

```cpp
// ❌ Error - semicolon after for
for (int i = 1; i <= 5; i++); {
    cout << i << endl;
}

// ✅ Correct - no semicolon
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

### 2. Wrong Counter Update

```cpp
// ❌ Error - infinite loop
for (int i = 1; i <= 5; i--) {
    cout << i << endl;
}
```

## 🏆 Best Practices

### 1. Use Descriptive Counter Names

```cpp
// ✅ Good naming
for (int counter = 1; counter <= 10; counter++) {
    cout << counter << endl;
}
```

### 2. Choose Appropriate Counter Range

```cpp
// ✅ Clear range
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```

## 📝 Summary

### Core Concepts:

- **For Loops** are used for iteration for a specified number of times
- **Counter** controls the number of iterations
- **Condition** determines when the loop stops
- **Update** changes the counter value after each iteration

### Syntax:

```cpp
for (initialization; condition; update) {
    // iteration code
}
```

### Iteration Types:

1. **Ascending**: `for (int i = 1; i <= n; i++)`
2. **Descending**: `for (int i = n; i >= 1; i--)`
3. **With steps**: `for (int i = 0; i <= n; i += step)`

### Important Rules:

1. **Don't put semicolon** immediately after for
2. **Ensure counter update** to avoid infinite loops
3. **Choose appropriate range** for counter

### Benefits of For Loops:

1. **Reduce repetition** in code
2. **Improve efficiency** and organization
3. **Precise control** over iterations

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>