<div dir="rtl">

<a id="arabic-continue-statement"></a>
[English ↙](#english-continue-statement)

# 🔄 جملة Continue Statement

## 🎯 المقدمة

في هذا الدرس، سنتعلم **جملة Continue Statement** التي تُستخدم لتخطي الجزء المتبقي من التكرار الحالي في الحلقة والانتقال مباشرة إلى التكرار التالي.

## 💡 المفاهيم الأساسية

### ما هي Continue Statement؟

**Continue Statement** هي جملة تتخطى تنفيذ الأوامر المتبقية في التكرار الحالي للحلقة وتنتقل مباشرة إلى التكرار التالي.

### الفرق بين Break و Continue:

- **Break**: تخرج من الحلقة تماماً
- **Continue**: تنتقل إلى التكرار التالي في نفس الحلقة

## 🛠️ أمثلة عملية من المحاضرة

### 📝 المثال الأول: المقارنة بين Continue و Break

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    // مثال مع Continue
    cout << "Using Continue Statement:" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // تخطي التكرار عندما i = 3
        }
        cout << "i = " << i << endl;
    }
    
    cout << "----------------" << endl;
    
    // مثال مع Break للمقارنة
    cout << "Using Break Statement:" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // الخروج من الحلقة عندما i = 3
        }
        cout << "i = " << i << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
Using Continue Statement:
i = 1
i = 2
i = 4
i = 5
----------------
Using Break Statement:
i = 1
i = 2
```

</div>

### 📝 المثال الثاني: تخطي الأرقام الفردية

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers from 1 to 10:" << endl;
    
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {  // إذا كان الرقم فردياً
            continue;      // تخطى هذا التكرار
        }
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}
```

**النتيجة:**
```
Even numbers from 1 to 10:
2 4 6 8 10
```

</div>

### 📝 المثال الثالث: Homework العملي - جمع الأرقام الأصغر من 50

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number;
    
    cout << "Enter 5 numbers:" << endl;
    
    for (int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        
        // إذا كان الرقم أكبر من 50، تخطى هذا التكرار
        if (number > 50) {
            cout << "The number is greater than 50 and won't be calculated" << endl;
            continue;  // تخطى عملية الجمع
        }
        
        // هذا الكود لن ينفذ إذا تم تنفيذ continue
        sum = sum + number;
        cout << "Current sum: " << sum << endl;
    }
    
    cout << "Final sum (numbers <= 50 only): " << sum << endl;
    
    return 0;
}
```

**مثال على التنفيذ:**
```
Enter 5 numbers:
Enter number 1: 10
Current sum: 10
Enter number 2: 20
Current sum: 30
Enter number 3: 55
The number is greater than 50 and won't be calculated
Enter number 4: 10
Current sum: 40
Enter number 5: 20
Current sum: 60
Final sum (numbers <= 50 only): 60
```

</div>

## 🔧 بناء جملة Continue

### الهيكل الأساسي

<div dir="ltr" align="left">

```cpp
for (int i = 0; i < n; i++) {
    // كود قبل الشرط
    
    if (condition) {
        continue;  // تخطي الكود المتبقي والانتقال للتكرار التالي
    }
    
    // كود بعد الشرط (لا ينفذ إذا تحقق continue)
}
```

## 🎯 آلية العمل

### كيف تعمل Continue Statement خطوة بخطوة؟

<div dir="ltr" align="left">

```cpp
for (int i = 1; i <= 4; i++) {
    cout << "Before condition: " << i << endl;
    
    if (i == 2) {
        continue;
    }
    
    cout << "After condition: " << i << endl;
}
```

**خطوات التنفيذ:**

1. **i = 1**: طباعة "Before: 1" → الشرط false → طباعة "After: 1"
2. **i = 2**: طباعة "Before: 2" → الشرط true → continue → تخطي "After: 2"
3. **i = 3**: طباعة "Before: 3" → الشرط false → طباعة "After: 3"
4. **i = 4**: طباعة "Before: 4" → الشرط false → طباعة "After: 4"

**النتيجة:**
```
Before condition: 1
After condition: 1
Before condition: 2
Before condition: 3
After condition: 3
Before condition: 4
After condition: 4
```

</div>

## 🔄 استخدام Continue مع While Loop

### مثال مع While Loop

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    
    while (i < 5) {
        i++;
        
        if (i == 3) {
            continue;  // تخطي عندما i = 3
        }
        
        cout << "i = " << i << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
i = 1
i = 2
i = 4
i = 5
```

</div>

## 💡 تطبيقات عملية

### تخطي القيم غير المرغوب فيها

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {15, -5, 30, -8, 25, 0, 40};
    int positiveSum = 0;
    
    for (int i = 0; i < 7; i++) {
        // تخطي الأرقام السالبة والصفر
        if (numbers[i] <= 0) {
            cout << "Skipping: " << numbers[i] << endl;
            continue;
        }
        
        positiveSum += numbers[i];
        cout << "Added " << numbers[i] << ", sum: " << positiveSum << endl;
    }
    
    cout << "Sum of positive numbers: " << positiveSum << endl;
    
    return 0;
}
```

**النتيجة:**
```
Added 15, sum: 15
Skipping: -5
Added 30, sum: 45
Skipping: -8
Added 25, sum: 70
Skipping: 0
Added 40, sum: 110
Sum of positive numbers: 110
```

</div>

### معالجة البيانات مع استثناءات

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Processing numbers 1 to 10:" << endl;
    
    for (int i = 1; i <= 10; i++) {
        // تخطي الأرقام القابلة للقسمة على 3
        if (i % 3 == 0) {
            cout << "Skipping multiple of 3: " << i << endl;
            continue;
        }
        
        // تخطي الأرقام القابلة للقسمة على 5
        if (i % 5 == 0) {
            cout << "Skipping multiple of 5: " << i << endl;
            continue;
        }
        
        cout << "Processing number: " << i << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
Processing number: 1
Processing number: 2
Skipping multiple of 3: 3
Processing number: 4
Skipping multiple of 5: 5
Skipping multiple of 3: 6
Processing number: 7
Processing number: 8
Skipping multiple of 3: 9
Skipping multiple of 5: 10
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام Continue لتجنب التعشيق العميق

<div dir="ltr" align="left">

```cpp
// ✅ استخدام Continue لجعل الكود أكثر قابلية للقراءة
for (int i = 0; i < n; i++) {
    if (shouldSkip(i)) {
        continue;
    }
    
    // الكود الرئيسي هنا
    processItem(i);
}

// ❌ تعشيق عميق يصعب قراءته
for (int i = 0; i < n; i++) {
    if (!shouldSkip(i)) {
        // الكود الرئيسي هنا
        processItem(i);
    }
}
```

</div>

### 2. وضع الشروط المبكرة في بداية التكرار

<div dir="ltr" align="left">

```cpp
// ✅ الشروط المبكرة في البداية
for (int i = 0; i < n; i++) {
    if (!isValid(data[i])) {
        continue;
    }
    
    if (!isAvailable(data[i])) {
        continue;
    }
    
    // معالجة البيانات الصالحة فقط
    processValidData(data[i]);
}
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:

- **Continue Statement** تتخطى الكود المتبقي في التكرار الحالي
- **تنتقل مباشرة** إلى التكرار التالي في نفس الحلقة
- **لا تخرج من الحلقة** مثل Break
- **تفيد في** تخطي الحالات غير المرغوب فيها

### بناء الجملة:

```cpp
continue;
```

### الفرق بين Break و Continue:

| Break | Continue |
|-------|----------|
| تخرج من الحلقة تماماً | تنتقل للتكرار التالي |
| تنهي التنفيذ كاملاً | تتخطى الجزء المتبقي فقط |
| مفيدة للخروج المبكر | مفيدة لتخطي حالات معينة |

### حالات الاستخدام الشائعة:

1. **تخطي القيم غير المرغوب فيها** في المعالجة
2. **تجنب التعشيق العميق** في الشروط
3. **معالجة البيانات مع استثناءات**
4. **تحسين قابلية قراءة الكود**

### قواعد مهمة:

1. **استخدم Continue** عندما تريد تخطي تكرار معين
2. **ضع الشروط المبكرة** في بداية التكرار
3. **استخدم Break** عندما تريد إنهاء الحلقة تماماً
4. **اختبر السلوك** مع حالات مختلفة

### فوائد Continue Statement:

1. **كود أكثر نظافة** وقابلية للقراءة
2. **تجنب التعشيق العميق** للشروط
3. **معالجة أكثر كفاءة** للبيانات
4. **مرونة في التعامل** مع الحالات الخاصة

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

<a id="english-continue-statement"></a>
[العربية ↗](#arabic-continue-statement)

# 🔄 Continue Statement

## 🎯 Introduction

In this lesson, we'll learn about the **Continue Statement** which is used to skip the remaining part of the current iteration in a loop and move directly to the next iteration.

## 💡 Core Concepts

### What is Continue Statement?

**Continue Statement** is a statement that skips the execution of remaining commands in the current loop iteration and moves directly to the next iteration.

### Difference Between Break and Continue:

- **Break**: Exits the loop completely
- **Continue**: Moves to the next iteration in the same loop

## 🛠️ Practical Examples from the Lecture

### 📝 Example 1: Comparison Between Continue and Break

```cpp
#include <iostream>
using namespace std;

int main() {
    // Example with Continue
    cout << "Using Continue Statement:" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip iteration when i = 3
        }
        cout << "i = " << i << endl;
    }
    
    cout << "----------------" << endl;
    
    // Example with Break for comparison
    cout << "Using Break Statement:" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Exit loop when i = 3
        }
        cout << "i = " << i << endl;
    }
    
    return 0;
}
```

**Result:**
```
Using Continue Statement:
i = 1
i = 2
i = 4
i = 5
----------------
Using Break Statement:
i = 1
i = 2
```

### 📝 Example 2: Skipping Odd Numbers

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers from 1 to 10:" << endl;
    
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {  // If number is odd
            continue;      // Skip this iteration
        }
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}
```

**Result:**
```
Even numbers from 1 to 10:
2 4 6 8 10
```

### 📝 Example 3: Practical Homework - Sum Numbers Less Than 50

```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number;
    
    cout << "Enter 5 numbers:" << endl;
    
    for (int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        
        // If number is greater than 50, skip this iteration
        if (number > 50) {
            cout << "The number is greater than 50 and won't be calculated" << endl;
            continue;  // Skip the addition process
        }
        
        // This code won't execute if continue is executed
        sum = sum + number;
        cout << "Current sum: " << sum << endl;
    }
    
    cout << "Final sum (numbers <= 50 only): " << sum << endl;
    
    return 0;
}
```

**Execution Example:**
```
Enter 5 numbers:
Enter number 1: 10
Current sum: 10
Enter number 2: 20
Current sum: 30
Enter number 3: 55
The number is greater than 50 and won't be calculated
Enter number 4: 10
Current sum: 40
Enter number 5: 20
Current sum: 60
Final sum (numbers <= 50 only): 60
```

## 🔧 Continue Statement Syntax

### Basic Structure

```cpp
for (int i = 0; i < n; i++) {
    // code before condition
    
    if (condition) {
        continue;  // Skip remaining code and move to next iteration
    }
    
    // code after condition (not executed if continue occurs)
}
```

## 🎯 How It Works

### Continue Statement Step-by-Step Execution:

```cpp
for (int i = 1; i <= 4; i++) {
    cout << "Before condition: " << i << endl;
    
    if (i == 2) {
        continue;
    }
    
    cout << "After condition: " << i << endl;
}
```

**Execution Steps:**

1. **i = 1**: print "Before: 1" → condition false → print "After: 1"
2. **i = 2**: print "Before: 2" → condition true → continue → skip "After: 2"
3. **i = 3**: print "Before: 3" → condition false → print "After: 3"
4. **i = 4**: print "Before: 4" → condition false → print "After: 4"

**Result:**
```
Before condition: 1
After condition: 1
Before condition: 2
Before condition: 3
After condition: 3
Before condition: 4
After condition: 4
```

## 🔄 Using Continue with While Loop

### Example with While Loop

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    
    while (i < 5) {
        i++;
        
        if (i == 3) {
            continue;  // Skip when i = 3
        }
        
        cout << "i = " << i << endl;
    }
    
    return 0;
}
```

**Result:**
```
i = 1
i = 2
i = 4
i = 5
```

## 💡 Practical Applications

### Skipping Unwanted Values

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {15, -5, 30, -8, 25, 0, 40};
    int positiveSum = 0;
    
    for (int i = 0; i < 7; i++) {
        // Skip negative numbers and zero
        if (numbers[i] <= 0) {
            cout << "Skipping: " << numbers[i] << endl;
            continue;
        }
        
        positiveSum += numbers[i];
        cout << "Added " << numbers[i] << ", sum: " << positiveSum << endl;
    }
    
    cout << "Sum of positive numbers: " << positiveSum << endl;
    
    return 0;
}
```

**Result:**
```
Added 15, sum: 15
Skipping: -5
Added 30, sum: 45
Skipping: -8
Added 25, sum: 70
Skipping: 0
Added 40, sum: 110
Sum of positive numbers: 110
```

### Processing Data with Exceptions

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Processing numbers 1 to 10:" << endl;
    
    for (int i = 1; i <= 10; i++) {
        // Skip numbers divisible by 3
        if (i % 3 == 0) {
            cout << "Skipping multiple of 3: " << i << endl;
            continue;
        }
        
        // Skip numbers divisible by 5
        if (i % 5 == 0) {
            cout << "Skipping multiple of 5: " << i << endl;
            continue;
        }
        
        cout << "Processing number: " << i << endl;
    }
    
    return 0;
}
```

**Result:**
```
Processing number: 1
Processing number: 2
Skipping multiple of 3: 3
Processing number: 4
Skipping multiple of 5: 5
Skipping multiple of 3: 6
Processing number: 7
Processing number: 8
Skipping multiple of 3: 9
Skipping multiple of 5: 10
```

## 🏆 Best Practices

### 1. Use Continue to Avoid Deep Nesting

```cpp
// ✅ Using Continue for more readable code
for (int i = 0; i < n; i++) {
    if (shouldSkip(i)) {
        continue;
    }
    
    // Main code here
    processItem(i);
}

// ❌ Deep nesting that's hard to read
for (int i = 0; i < n; i++) {
    if (!shouldSkip(i)) {
        // Main code here
        processItem(i);
    }
}
```

### 2. Place Early Conditions at the Beginning

```cpp
// ✅ Early conditions at the beginning
for (int i = 0; i < n; i++) {
    if (!isValid(data[i])) {
        continue;
    }
    
    if (!isAvailable(data[i])) {
        continue;
    }
    
    // Process only valid data
    processValidData(data[i]);
}
```

## 📝 Summary

### Core Concepts:

- **Continue Statement** skips remaining code in current iteration
- **Moves directly** to next iteration in the same loop
- **Does not exit the loop** like Break
- **Useful for** skipping unwanted cases

### Syntax:

```cpp
continue;
```

### Difference Between Break and Continue:

| Break | Continue |
|-------|----------|
| Exits loop completely | Moves to next iteration |
| Ends execution completely | Skips only remaining part |
| Useful for early exit | Useful for skipping specific cases |

### Common Use Cases:

1. **Skipping unwanted values** in processing
2. **Avoiding deep nesting** in conditions
3. **Processing data with exceptions**
4. **Improving code readability**

### Important Rules:

1. **Use Continue** when you want to skip specific iterations
2. **Place early conditions** at the beginning of iteration
3. **Use Break** when you want to terminate the loop completely
4. **Test behavior** with different cases

### Benefits of Continue Statement:

1. **Cleaner code** that's more readable
2. **Avoids deep nesting** of conditions
3. **More efficient processing** of data
4. **Flexibility in handling** special cases

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>