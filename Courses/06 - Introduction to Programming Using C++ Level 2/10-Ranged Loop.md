<div dir="rtl" style="text-align: right;">

<a id="arabic-ranged-loop"></a>
[English ↙](#english-ranged-loop)

# 🔄 الحلقة النطاقية (Ranged Loop)

## 🎯 المقدمة

في هذا الدرس، سنتعلم عن **الحلقة النطاقية (Ranged Loop)** في لغة C++. هذه الأداة تتيح لنا المرور على عناصر المجموعات (Collections) بطريقة مبسطة وأكثر كفاءة.

## 💡 المفاهيم الأساسية

### ما هي الحلقة النطاقية (Ranged Loop)؟

**الحلقة النطاقية** هي نوع من الحلقات في C++ تسمح بالمرور على جميع عناصر **المجموعة (Collection)** تلقائياً دون الحاجة إلى تحديد العداد (Counter) أو نطاق التكرار يدوياً.

### بناء الجملة (Syntax):

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
for (dataType variable : collection) {
    // كود يتكرر لكل عنصر في المجموعة
}
```

</div>

## 💻 مقارنة بين الحلقة التقليدية والحلقة النطاقية

### الطريقة التقليدية باستخدام for loop:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    
    // الحلقة التقليدية
    for (int i = 0; i < 4; i++) {
        cout << arr1[i] << " ";
    }
    
    return 0;
}
```

</div>

### الطريقة المبسطة باستخدام Ranged Loop:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    
    // الحلقة النطاقية
    for (int n : arr1) {
        cout << n << " ";
    }
    
    return 0;
}
```

</div>

## 🔍 شرح تفصيلي للحلقة النطاقية

### كيف تعمل الحلقة النطاقية:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
خطوات العمل:
1. for (int n : arr1)
   - int n: تعريف متغير من نفس نوع عناصر المصفوفة
   - arr1: المجموعة التي نريد المرور على عناصرها

2. آلية العمل:
   - تأخذ الحلقة أول عنصر من arr1
   - تضعه في المتغير n
   - تنفذ الكود الموجود داخل الحلقة
   - تنتقل إلى العنصر التالي
   - تستمر حتى تنتهي جميع العناصر

3. النتيجة:
   - طباعة: 1 2 3 4
```

</div>

### المزايا الرئيسية:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ لا تحتاج لمعرفة حجم المصفوفة
✅ لا تحتاج لعداد (i)
✅ تتعامل مع العناصر مباشرة
✅ أكثر أماناً (تجنب تجاوز الحدود)
✅ أوضح في القراءة
```

</div>

## 💡 أمثلة عملية متنوعة

### المثال 1: مصفوفة بأعداد مختلفة

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 6, 7, 8, 9};
    
    for (int num : numbers) {
        cout << num << " ";
    }
    // الناتج: 5 6 7 8 9
    
    return 0;
}
```

</div>

### المثال 2: مصفوفة أحرف

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    char letters[] = {'A', 'B', 'C', 'D'};
    
    for (char letter : letters) {
        cout << letter << " ";
    }
    // الناتج: A B C D
    
    return 0;
}
```

</div>

### المثال 3: مصفوفة أعداد حقيقية

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    double prices[] = {10.5, 20.3, 15.7, 8.9};
    
    for (double price : prices) {
        cout << price << " ";
    }
    // الناتج: 10.5 20.3 15.7 8.9
    
    return 0;
}
```

</div>

## 🛠️ استخدامات متقدمة

### مع مجموعات البيانات المختلفة:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // مع المصفوفات
    int arr[] = {1, 2, 3, 4, 5};
    
    // مع القيم المباشرة (initializer list)
    for (int n : {1, 3, 5, 7, 9}) {
        cout << n << " ";
    }
    // الناتج: 1 3 5 7 9
    
    return 0;
}
```

</div>

### مع عمليات حسابية داخل الحلقة:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    for (int num : numbers) {
        sum += num;  // جمع جميع الأرقام
        cout << "Current number: " << num 
             << ", Running sum: " << sum << endl;
    }
    
    cout << "Total sum: " << sum << endl;
    
    return 0;
}
```

</div>

## 🔄 مقارنة شاملة

### الحلقة التقليدية (for loop):

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[] = {1, 2, 3, 4};

for (int i = 0; i < 4; i++) {
    cout << arr[i] << " ";
}
```

**مميزات:**
- تحكم كامل في الفهرس (i)
- يمكن تغيير اتجاه المرور
- تناسب الحالات المعقدة

</div>

### الحلقة النطاقية (Ranged Loop):

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[] = {1, 2, 3, 4};

for (int n : arr) {
    cout << n << " ";
}
```

**مميزات:**
- أبسط وأوضح
- لا تحتاج معرفة الحجم
- تتجنب أخطاء الحدود
- مناسبة للمجموعات البسيطة

</div>

## 🎯 أمثلة إضافية

### مثال 1: مع نصوص

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Ali", "Omar", "Fatima", "Lina"};
    
    for (string name : names) {
        cout << "Hello, " << name << "!" << endl;
    }
    
    return 0;
}
```

</div>

### مثال 2: مع البيانات المركبة

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    struct Point {
        int x, y;
    };
    
    Point points[] = {{1, 2}, {3, 4}, {5, 6}};
    
    for (Point p : points) {
        cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
    }
    
    return 0;
}
```

</div>

## 💡 ملاحظات مهمة

### متى تستخدم الحلقة النطاقية؟

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ استخدم Ranged Loop عندما:
- تريد المرور على جميع العناصر
- لا تحتاج إلى الفهرس (i)
- المجموعة ثابتة الحجم
- الكود يحتاج إلى البساطة والوضوح

✅ استخدم الحلقة التقليدية عندما:
- تحتاج إلى الفهرس (i)
- تريد تغيير اتجاه المرور
- تحتاج إلى منطق معقد في التكرار
- تتعامل مع حالات خاصة
```

</div>

### أنواع البيانات المتوافقة:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
أنواع البيانات التي تعمل مع Ranged Loop:
- المصفوفات (Arrays)
- القوائم (Initializer lists)
- الـ Vectors (لاحقاً)
- الـ Strings (لاحقاً)
- أي مجموعة (Collection) تدعم التكرار
```

</div>

## 📊 الخلاصة

### الفوائد الرئيسية:

| الفائدة | الشرح |
|:---|:---|
| **البساطة** | بناء جملة أبسط وأوضح |
| **الأمان** | تجنب أخطاء تجاوز الحدود |
| **الكفاءة** | لا حاجة لحساب الحجم يدوياً |
| **المرونة** | تعمل مع أنواع بيانات مختلفة |

### بناء الجملة الأساسي:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
for (نوع_البيانات متغير : المجموعة) {
    // كود ينفذ لكل عنصر
}

أمثلة:
for (int num : numbers) { ... }
for (char letter : letters) { ... }
for (string name : names) { ... }
```

</div>

**تذكر:** الحلقة النطاقية أداة مفيدة للمرور على **المجموعات (Collections)**، لكنها **لا تحل محل** الحلقات التقليدية في جميع الحالات! 🔄

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
<br>
<br>
<br>
<br>
<br>
<br>

<a id="english-ranged-loop"></a>
[العربية ↗](#arabic-ranged-loop)

# 🔄 Ranged Loop

## 🎯 Introduction

In this lesson, we'll learn about **Ranged Loop** in C++. This tool allows us to iterate through collection elements in a simplified and more efficient way.

## 💡 Core Concepts

### What is Ranged Loop?

**Ranged Loop** is a type of loop in C++ that allows automatically iterating through all elements of a **Collection** without needing to manually specify a counter or iteration range.

### Syntax:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
for (dataType variable : collection) {
    // code that repeats for each element in collection
}
```

</div>

## 💻 Comparison Between Traditional Loop and Ranged Loop

### Traditional Method using for loop:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    
    // Traditional loop
    for (int i = 0; i < 4; i++) {
        cout << arr1[i] << " ";
    }
    
    return 0;
}
```

</div>

### Simplified Method using Ranged Loop:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    
    // Ranged Loop
    for (int n : arr1) {
        cout << n << " ";
    }
    
    return 0;
}
```

</div>

## 🔍 Detailed Explanation of Ranged Loop

### How Ranged Loop Works:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Working Steps:
1. for (int n : arr1)
   - int n: Define variable of same type as array elements
   - arr1: Collection we want to iterate through

2. Mechanism:
   - Loop takes first element from arr1
   - Puts it in variable n
   - Executes code inside loop
   - Moves to next element
   - Continues until all elements are processed

3. Result:
   - Output: 1 2 3 4
```

</div>

### Main Advantages:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Don't need to know array size
✅ Don't need counter (i)
✅ Work directly with elements
✅ More safe (avoid boundary errors)
✅ Clearer to read
```

</div>

## 💡 Various Practical Examples

### Example 1: Array with Different Numbers

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 6, 7, 8, 9};
    
    for (int num : numbers) {
        cout << num << " ";
    }
    // Output: 5 6 7 8 9
    
    return 0;
}
```

</div>

### Example 2: Character Array

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    char letters[] = {'A', 'B', 'C', 'D'};
    
    for (char letter : letters) {
        cout << letter << " ";
    }
    // Output: A B C D
    
    return 0;
}
```

</div>

### Example 3: Double Array

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    double prices[] = {10.5, 20.3, 15.7, 8.9};
    
    for (double price : prices) {
        cout << price << " ";
    }
    // Output: 10.5 20.3 15.7 8.9
    
    return 0;
}
```

</div>

## 🛠️ Advanced Uses

### With Different Data Collections:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // With arrays
    int arr[] = {1, 2, 3, 4, 5};
    
    // With direct values (initializer list)
    for (int n : {1, 3, 5, 7, 9}) {
        cout << n << " ";
    }
    // Output: 1 3 5 7 9
    
    return 0;
}
```

</div>

### With Calculations Inside Loop:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    for (int num : numbers) {
        sum += num;  // Sum all numbers
        cout << "Current number: " << num 
             << ", Running sum: " << sum << endl;
    }
    
    cout << "Total sum: " << sum << endl;
    
    return 0;
}
```

</div>

## 🔄 Comprehensive Comparison

### Traditional Loop (for loop):

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[] = {1, 2, 3, 4};

for (int i = 0; i < 4; i++) {
    cout << arr[i] << " ";
}
```

**Advantages:**
- Full control over index (i)
- Can change iteration direction
- Suitable for complex cases

</div>

### Ranged Loop:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int arr[] = {1, 2, 3, 4};

for (int n : arr) {
    cout << n << " ";
}
```

**Advantages:**
- Simpler and clearer
- Don't need to know size
- Avoid boundary errors
- Suitable for simple collections

</div>

## 🎯 Additional Examples

### Example 1: With Strings

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Ali", "Omar", "Fatima", "Lina"};
    
    for (string name : names) {
        cout << "Hello, " << name << "!" << endl;
    }
    
    return 0;
}
```

</div>

### Example 2: With Complex Data

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    struct Point {
        int x, y;
    };
    
    Point points[] = {{1, 2}, {3, 4}, {5, 6}};
    
    for (Point p : points) {
        cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
    }
    
    return 0;
}
```

</div>

## 💡 Important Notes

### When to Use Ranged Loop?

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Use Ranged Loop when:
- You want to iterate through all elements
- You don't need index (i)
- Collection has fixed size
- Code needs simplicity and clarity

✅ Use Traditional Loop when:
- You need index (i)
- You want to change iteration direction
- You need complex iteration logic
- Dealing with special cases
```

</div>

### Compatible Data Types:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Data types that work with Ranged Loop:
- Arrays
- Initializer lists
- Vectors (later)
- Strings (later)
- Any Collection that supports iteration
```

</div>

## 📊 Summary

### Main Benefits:

| Benefit | Explanation |
|:---|:---|
| **Simplicity** | Simpler and clearer syntax |
| **Safety** | Avoid boundary errors |
| **Efficiency** | No need to calculate size manually |
| **Flexibility** | Works with different data types |

### Basic Syntax:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
for (dataType variable : collection) {
    // code executed for each element
}

Examples:
for (int num : numbers) { ... }
for (char letter : letters) { ... }
for (string name : names) { ... }
```

</div>

**Remember:** Ranged loop is a useful tool for iterating through **Collections**, but it **doesn't replace** traditional loops in all cases! 🔄

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>