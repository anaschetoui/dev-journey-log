<div dir="rtl">

<a id="arabic-break-statement"></a>
[English ↙](#english-break-statement)

# 🔄 جملة Break Statement

## 🎯 المقدمة

في هذا الدرس، سنتعلم **جملة Break Statement** التي تُستخدم للخروج المبكر من الحلقات التكرارية عندما نتحقق من شرط معين، مما يحسن أداء البرنامج.

## 💡 المفاهيم الأساسية

### ما هي Break Statement؟

**Break Statement** هي جملة تسمح بالخروج الفوري من الحلقة التكرارية (For, While, Do While) عند تحقق شرط معين، دون انتظار اكتمال جميع التكرارات.

### لماذا نستخدم Break Statement؟

- **تحسين الأداء** بتجنب التكرارات غير الضرورية
- **الخروج المبكر** عند تحقيق الهدف
- **توفير الوقت** في معالجة البيانات الكبيرة
- **كفاءة أفضل** في البحث والمعالجة

## 🛠️ أمثلة عملية من المحاضرة

### 📝 المثال الأول: الخروج المبكر من For Loop

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Iteration: " << i << endl;
        
        if (i == 3) {
            cout << "Breaking at i = 3" << endl;
            break;  // الخروج من الحلقة عندما i = 3
        }
    }
    
    cout << "Loop finished!" << endl;
    return 0;
}
```

**النتيجة:**
```
Iteration: 1
Iteration: 2
Iteration: 3
Breaking at i = 3
Loop finished!
```

</div>

### 📝 المثال الثاني: البحث في المصفوفة بدون Break

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int searchFor = 20;
    
    for (int i = 0; i < 10; i++) {
        cout << "Checking position " << i << endl;
        
        if (arr[i] == searchFor) {
            cout << "Found " << searchFor << " at position " << i << endl;
        }
    }
    
    return 0;
}
```

**النتيجة:**
```
Checking position 0
Checking position 1
Found 20 at position 1
Checking position 2
Checking position 3
Checking position 4
Checking position 5
Checking position 6
Checking position 7
Checking position 8
Checking position 9
```

</div>

### 📝 المثال الثالث: البحث في المصفوفة مع Break (محسّن)

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int searchFor = 20;
    
    for (int i = 0; i < 10; i++) {
        cout << "Checking position " << i << endl;
        
        if (arr[i] == searchFor) {
            cout << "Found " << searchFor << " at position " << i << endl;
            break;  // الخروج بعد العثور على العنصر
        }
    }
    
    return 0;
}
```

**النتيجة:**
```
Checking position 0
Checking position 1
Found 20 at position 1
```

</div>

## 🔧 بناء جملة Break

### الهيكل الأساسي

<div dir="ltr" align="left">

```cpp
for (int i = 0; i < n; i++) {
    // كود قبل الشرط
    
    if (condition) {
        break;  // الخروج الفوري من الحلقة
    }
    
    // كود بعد الشرط (لا ينفذ إذا تحقق break)
}
```

</div>

## 🎯 آلية العمل

### كيف تعمل Break Statement خطوة بخطوة؟

<div dir="ltr" align="left">

```cpp
for (int i = 1; i <= 5; i++) {
    cout << "Before condition: " << i << endl;
    
    if (i == 3) {
        break;
    }
    
    cout << "After condition: " << i << endl;
}
```

**خطوات التنفيذ:**

1. **i = 1**: طباعة "Before: 1" → الشرط false → طباعة "After: 1"
2. **i = 2**: طباعة "Before: 2" → الشرط false → طباعة "After: 2"
3. **i = 3**: طباعة "Before: 3" → الشرط true → break → الخروج

**النتيجة:**
```
Before condition: 1
After condition: 1
Before condition: 2
After condition: 2
Before condition: 3
```

</div>

## 💡 تطبيقات عملية

### البحث عن عنصر في مصفوفة كبيرة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10000;
    int numbers[SIZE];
    
    // تعبئة المصفوفة بأرقام عشوائية
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = i * 2;  // أرقام زوجية
    }
    
    int target = 500;  // الرقم المطلوب البحث عنه
    bool found = false;
    
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == target) {
            cout << "Found " << target << " at position " << i << endl;
            found = true;
            break;  // توفير 9500 تكرار غير ضروري
        }
    }
    
    if (!found) {
        cout << target << " not found in the array." << endl;
    }
    
    return 0;
}
```

</div>

### التحقق من وجود قيمة سالبة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int values[] = {15, 8, -3, 22, 17, 9, 4};
    bool hasNegative = false;
    
    for (int i = 0; i < 7; i++) {
        if (values[i] < 0) {
            cout << "Found negative value: " << values[i] << " at position " << i << endl;
            hasNegative = true;
            break;  // لا داعي للتحقق من بقية العناصر
        }
    }
    
    if (!hasNegative) {
        cout << "No negative values found." << endl;
    }
    
    return 0;
}
```

</div>

## 🔄 استخدام Break مع While Loop

### مثال مع While Loop

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    
    while (i <= 10) {
        cout << "i = " << i << endl;
        
        if (i == 5) {
            cout << "Breaking at i = 5" << endl;
            break;
        }
        
        i++;
    }
    
    return 0;
}
```

**النتيجة:**
```
i = 1
i = 2
i = 3
i = 4
i = 5
Breaking at i = 5
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام Break عند تحقيق الهدف

<div dir="ltr" align="left">

```cpp
// ✅ استخدام جيد للـ Break
for (int i = 0; i < largeNumber; i++) {
    if (foundWhatWeNeed(i)) {
        processResult(i);
        break;  // توقف عند تحقيق الهدف
    }
}
```

</div>

### 2. تجنب الاستخدام المفرط للـ Break

<div dir="ltr" align="left">

```cpp
// ❌ استخدام مفرط للـ Break
for (int i = 0; i < n; i++) {
    if (condition1) break;
    if (condition2) break;
    if (condition3) break;
    // يصعب متابعة تدفق البرنامج
}

// ✅ تصميم أوضح
for (int i = 0; i < n; i++) {
    bool shouldBreak = false;
    
    if (condition1) shouldBreak = true;
    else if (condition2) shouldBreak = true;
    else if (condition3) shouldBreak = true;
    
    if (shouldBreak) break;
}
```

</div>

## 📝 Homework من المحاضرة

### المطلوب: برنامج بحث في مصفوفة باستخدام Break

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    // تعريف المصفوفة
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int searchFor = 20;
    
    // البحث باستخدام Break
    for (int i = 0; i < 10; i++) {
        cout << "Iteration " << i << ": Checking element " << arr[i] << endl;
        
        if (arr[i] == searchFor) {
            cout << "✓ Found " << searchFor << " at position " << i << endl;
            break;  // الخروج بعد العثور على العنصر
        }
        
        cout << "✗ Not found at position " << i << endl;
    }
    
    return 0;
}
```

**النتيجة المتوقعة:**
```
Iteration 0: Checking element 10
✗ Not found at position 0
Iteration 1: Checking element 20
✓ Found 20 at position 1
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:

- **Break Statement** تخرج من الحلقة فوراً عند تنفيذها
- **تحسن الأداء** بتجنب التكرارات غير الضرورية
- **تستخدم مع** جميع أنواع الحلقات (For, While, Do While)
- **لا تنفذ** أي كود بعدها داخل الحلقة

### بناء الجملة:

```cpp
break;
```

### حالات الاستخدام الشائعة:

1. **البحث في المصفوفات** عند العثور على العنصر
2. **التحقق من الشروط** التي تتطلب إيقاف المعالجة
3. **معالجة الأخطاء** التي تتطلب إيقاف التنفيذ
4. **تحسين الأداء** في البيانات الكبيرة

### قواعد مهمة:

1. **استخدم Break** عندما تحقق هدفك مبكراً
2. **تجنب الإكثار** من Break في الحلقة الواحدة
3. **ضع Break** بعد معالجة النتيجة مباشرة
4. **اختبر البرنامج** مع وبwithout Break لمقارنة الأداء

### فوائد Break Statement:

1. **تحسين الأداء** بشكل ملحوظ
2. **توفير الوقت** في المعالجة
3. **كود أكثر كفاءة** وفعالية
4. **استجابة أسرع** في التطبيقات

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

<a id="english-break-statement"></a>
[العربية ↗](#arabic-break-statement)

# 🔄 Break Statement

## 🎯 Introduction

In this lesson, we'll learn about the **Break Statement** which is used for early exit from loops when a specific condition is met, improving program performance.

## 💡 Core Concepts

### What is Break Statement?

**Break Statement** is a statement that allows immediate exit from a loop (For, While, Do While) when a specific condition is met, without waiting for all iterations to complete.

### Why Use Break Statement?

- **Improve performance** by avoiding unnecessary iterations
- **Early exit** when goal is achieved
- **Save time** in processing large data
- **Better efficiency** in search and processing

## 🛠️ Practical Examples from the Lecture

### 📝 Example 1: Early Exit from For Loop

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Iteration: " << i << endl;
        
        if (i == 3) {
            cout << "Breaking at i = 3" << endl;
            break;  // Exit loop when i = 3
        }
    }
    
    cout << "Loop finished!" << endl;
    return 0;
}
```

**Result:**
```
Iteration: 1
Iteration: 2
Iteration: 3
Breaking at i = 3
Loop finished!
```

### 📝 Example 2: Array Search Without Break

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int searchFor = 20;
    
    for (int i = 0; i < 10; i++) {
        cout << "Checking position " << i << endl;
        
        if (arr[i] == searchFor) {
            cout << "Found " << searchFor << " at position " << i << endl;
        }
    }
    
    return 0;
}
```

**Result:**
```
Checking position 0
Checking position 1
Found 20 at position 1
Checking position 2
Checking position 3
Checking position 4
Checking position 5
Checking position 6
Checking position 7
Checking position 8
Checking position 9
```

### 📝 Example 3: Array Search With Break (Optimized)

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int searchFor = 20;
    
    for (int i = 0; i < 10; i++) {
        cout << "Checking position " << i << endl;
        
        if (arr[i] == searchFor) {
            cout << "Found " << searchFor << " at position " << i << endl;
            break;  // Exit after finding the element
        }
    }
    
    return 0;
}
```

**Result:**
```
Checking position 0
Checking position 1
Found 20 at position 1
```

## 🔧 Break Statement Syntax

### Basic Structure

```cpp
for (int i = 0; i < n; i++) {
    // code before condition
    
    if (condition) {
        break;  // Immediate exit from loop
    }
    
    // code after condition (not executed if break occurs)
}
```

## 🎯 How It Works

### Break Statement Step-by-Step Execution:

```cpp
for (int i = 1; i <= 5; i++) {
    cout << "Before condition: " << i << endl;
    
    if (i == 3) {
        break;
    }
    
    cout << "After condition: " << i << endl;
}
```

**Execution Steps:**

1. **i = 1**: print "Before: 1" → condition false → print "After: 1"
2. **i = 2**: print "Before: 2" → condition false → print "After: 2"
3. **i = 3**: print "Before: 3" → condition true → break → exit

**Result:**
```
Before condition: 1
After condition: 1
Before condition: 2
After condition: 2
Before condition: 3
```

## 💡 Practical Applications

### Searching Element in Large Array

```cpp
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10000;
    int numbers[SIZE];
    
    // Fill array with random numbers
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = i * 2;  // Even numbers
    }
    
    int target = 500;  // Number to search for
    bool found = false;
    
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == target) {
            cout << "Found " << target << " at position " << i << endl;
            found = true;
            break;  // Save 9500 unnecessary iterations
        }
    }
    
    if (!found) {
        cout << target << " not found in the array." << endl;
    }
    
    return 0;
}
```

### Checking for Negative Values

```cpp
#include <iostream>
using namespace std;

int main() {
    int values[] = {15, 8, -3, 22, 17, 9, 4};
    bool hasNegative = false;
    
    for (int i = 0; i < 7; i++) {
        if (values[i] < 0) {
            cout << "Found negative value: " << values[i] << " at position " << i << endl;
            hasNegative = true;
            break;  // No need to check remaining elements
        }
    }
    
    if (!hasNegative) {
        cout << "No negative values found." << endl;
    }
    
    return 0;
}
```

## 🔄 Using Break with While Loop

### Example with While Loop

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    
    while (i <= 10) {
        cout << "i = " << i << endl;
        
        if (i == 5) {
            cout << "Breaking at i = 5" << endl;
            break;
        }
        
        i++;
    }
    
    return 0;
}
```

**Result:**
```
i = 1
i = 2
i = 3
i = 4
i = 5
Breaking at i = 5
```

## 🏆 Best Practices

### 1. Use Break When Goal is Achieved

```cpp
// ✅ Good use of Break
for (int i = 0; i < largeNumber; i++) {
    if (foundWhatWeNeed(i)) {
        processResult(i);
        break;  // Stop when goal achieved
    }
}
```

### 2. Avoid Excessive Use of Break

```cpp
// ❌ Excessive use of Break
for (int i = 0; i < n; i++) {
    if (condition1) break;
    if (condition2) break;
    if (condition3) break;
    // Hard to follow program flow
}

// ✅ Clearer design
for (int i = 0; i < n; i++) {
    bool shouldBreak = false;
    
    if (condition1) shouldBreak = true;
    else if (condition2) shouldBreak = true;
    else if (condition3) shouldBreak = true;
    
    if (shouldBreak) break;
}
```

## 📝 Homework from the Lecture

### Requirement: Array Search Program Using Break

```cpp
#include <iostream>
using namespace std;

int main() {
    // Define array
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int searchFor = 20;
    
    // Search using Break
    for (int i = 0; i < 10; i++) {
        cout << "Iteration " << i << ": Checking element " << arr[i] << endl;
        
        if (arr[i] == searchFor) {
            cout << "✓ Found " << searchFor << " at position " << i << endl;
            break;  // Exit after finding the element
        }
        
        cout << "✗ Not found at position " << i << endl;
    }
    
    return 0;
}
```

**Expected Result:**
```
Iteration 0: Checking element 10
✗ Not found at position 0
Iteration 1: Checking element 20
✓ Found 20 at position 1
```

## 📝 Summary

### Core Concepts:

- **Break Statement** exits loop immediately when executed
- **Improves performance** by avoiding unnecessary iterations
- **Works with** all loop types (For, While, Do While)
- **Does not execute** any code after it within the loop

### Syntax:

```cpp
break;
```

### Common Use Cases:

1. **Array searching** when element is found
2. **Condition checking** that requires stopping processing
3. **Error handling** that requires stopping execution
4. **Performance optimization** with large data

### Important Rules:

1. **Use Break** when you achieve your goal early
2. **Avoid excessive** Break in single loop
3. **Place Break** immediately after processing result
4. **Test program** with and without Break to compare performance

### Benefits of Break Statement:

1. **Significant performance** improvement
2. **Time saving** in processing
3. **More efficient** and effective code
4. **Faster response** in applications

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>