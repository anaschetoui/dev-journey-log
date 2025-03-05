<div dir="rtl">

<a id="arabic-for-loops-arrays"></a>
[English ↙](#english-for-loops-arrays)

# 🔄 حلقات التكرار والمصفوفات: For Loops & Arrays

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيفية استخدام **حلقات التكرار For Loops** مع **المصفوفات Arrays** لمعالجة البيانات بشكل فعال ومنظم.

## 💡 المفاهيم الأساسية

### لماذا نستخدم For Loops مع Arrays؟

- **التكرار عبر عناصر المصفوفة** بسهولة
- **معالجة كميات كبيرة** من البيانات
- **تنفيذ عمليات متكررة** على جميع العناصر
- **تحسين كفاءة** البرنامج

## 🛠️ مثال عملي شامل

### 📝 البرنامج الرئيسي

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// بروتوتايات الدوال
void ReadArrayData(int arr[100], int& length);
void PrintArrayData(int arr[100], int length);
int CalculateArraySum(int arr[100], int length);
float CalculateArrayAverage(int arr[100], int length);

int main() {
    int arr1[100], length;
    
    ReadArrayData(arr1, length);
    PrintArrayData(arr1, length);
    
    cout << "Sum = " << CalculateArraySum(arr1, length) << endl;
    cout << "Average = " << CalculateArrayAverage(arr1, length) << endl;
    
    return 0;
}
```

</div>

### 📝 الدالة 1: قراءة بيانات المصفوفة

<div dir="ltr" align="left">

```cpp
void ReadArrayData(int arr[100], int& length) {
    cout << "How many numbers do you want to enter? (1-100): ";
    cin >> length;
    
    for (int i = 0; i < length; i++) {
        cout << "Please enter number " << (i + 1) << ": ";
        cin >> arr[i];
    }
}
```

</div>

### 📝 الدالة 2: طباعة بيانات المصفوفة

<div dir="ltr" align="left">

```cpp
void PrintArrayData(int arr[100], int length) {
    cout << "Array elements: " << endl;
    for (int i = 0; i < length; i++) {
        cout << "Number " << (i + 1) << ": " << arr[i] << endl;
    }
}
```

</div>

### 📝 الدالة 3: حساب مجموع عناصر المصفوفة

<div dir="ltr" align="left">

```cpp
int CalculateArraySum(int arr[100], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}
```

</div>

### 📝 الدالة 4: حساب متوسط عناصر المصفوفة

<div dir="ltr" align="left">

```cpp
float CalculateArrayAverage(int arr[100], int length) {
    int sum = CalculateArraySum(arr, length);
    return (float)sum / length;
}
```

</div>

## 🔧 شرح مفصل للكود

### كيفية عمل For Loop مع Arrays

<div dir="ltr" align="left">

```cpp
for (int i = 0; i < length; i++) {
    // الوصول لعنصر المصفوفة باستخدام arr[i]
    // i تبدأ من 0 وتنتهي عند length - 1
}
```

</div>

### مثال توضيحي:

<div dir="ltr" align="left">

```cpp
// إذا أدخل المستخدم 5 أرقام
for (int i = 0; i < 5; i++) {
    cin >> arr[i];  // يقرأ arr[0], arr[1], arr[2], arr[3], arr[4]
}

for (int i = 0; i < 5; i++) {
    cout << arr[i];  // يطبع arr[0], arr[1], arr[2], arr[3], arr[4]
}
```

</div>

## 🎯 مخرجات البرنامج

### مثال على التنفيذ:

```
How many numbers do you want to enter? (1-100): 5
Please enter number 1: 100
Please enter number 2: 99
Please enter number 3: 55
Please enter number 4: 77
Please enter number 5: 88

Array elements:
Number 1: 100
Number 2: 99
Number 3: 55
Number 4: 77
Number 5: 88

Sum = 419
Average = 83.8
```

## 🔄 أنواع التكرار مع المصفوفات

### التكرار من البداية للنهاية

<div dir="ltr" align="left">

```cpp
for (int i = 0; i < length; i++) {
    // معالجة العنصر arr[i]
}
```

</div>

### التكرار من النهاية للبداية

<div dir="ltr" align="left">

```cpp
for (int i = length - 1; i >= 0; i--) {
    // معالجة العنصر arr[i]
}
```

</div>

## 💡 تطبيقات عملية

### البحث عن أكبر عنصر

<div dir="ltr" align="left">

```cpp
int FindMaxElement(int arr[100], int length) {
    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```

</div>

### البحث عن أصغر عنصر

<div dir="ltr" align="left">

```cpp
int FindMinElement(int arr[100], int length) {
    int min = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام ثوابت لأحجام المصفوفات

<div dir="ltr" align="left">

```cpp
const int MAX_SIZE = 100;

void ReadArrayData(int arr[MAX_SIZE], int& length) {
    // الكود
}
```

</div>

### 2. التحقق من حدود المصفوفة

<div dir="ltr" align="left">

```cpp
void ReadArrayData(int arr[100], int& length) {
    do {
        cout << "How many numbers? (1-100): ";
        cin >> length;
    } while (length < 1 || length > 100);
    
    // باقي الكود
}
```

</div>

### 3. إعادة استخدام الدوال

<div dir="ltr" align="left">

```cpp
// بدلاً من كتابة كود الجمع مرتين
float CalculateArrayAverage(int arr[100], int length) {
    // إعادة استخدام دالة الجمع الموجودة
    int sum = CalculateArraySum(arr, length);
    return (float)sum / length;
}
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:

- **For Loops** مع **Arrays** تمكننا من معالجة بيانات متعددة بكفاءة
- **المؤشر i** يتحكم في الوصول لعناصر المصفوفة
- **الدوال المتخصصة** تجعل الكود أكثر تنظيماً

### فوائد هذا النهج:

1. **كود منظم** وسهل الصيانة
2. **إعادة استخدام** الدوال
3. **فصل المهام** بين القراءة والطباعة والحساب
4. **مرونة** في التعامل مع أحجام مختلفة من البيانات

### هيكل البرنامج النموذجي:

```cpp
// 1. قراءة البيانات
ReadArrayData(array, length);

// 2. معالجة البيانات
int sum = CalculateArraySum(array, length);
float average = CalculateArrayAverage(array, length);

// 3. عرض النتائج
PrintArrayData(array, length);
```

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

<a id="english-for-loops-arrays"></a>
[العربية ↗](#arabic-for-loops-arrays)

# 🔄 For Loops & Arrays

## 🎯 Introduction

In this lesson, we'll learn how to use **For Loops** with **Arrays** to process data efficiently and systematically.

## 💡 Core Concepts

### Why Use For Loops with Arrays?

- **Iterate through array elements** easily
- **Process large amounts** of data
- **Perform repetitive operations** on all elements
- **Improve program** efficiency

## 🛠️ Comprehensive Practical Example

### 📝 Main Program

```cpp
#include <iostream>
using namespace std;

// Function prototypes
void ReadArrayData(int arr[100], int& length);
void PrintArrayData(int arr[100], int length);
int CalculateArraySum(int arr[100], int length);
float CalculateArrayAverage(int arr[100], int length);

int main() {
    int arr1[100], length;
    
    ReadArrayData(arr1, length);
    PrintArrayData(arr1, length);
    
    cout << "Sum = " << CalculateArraySum(arr1, length) << endl;
    cout << "Average = " << CalculateArrayAverage(arr1, length) << endl;
    
    return 0;
}
```

### 📝 Function 1: Read Array Data

```cpp
void ReadArrayData(int arr[100], int& length) {
    cout << "How many numbers do you want to enter? (1-100): ";
    cin >> length;
    
    for (int i = 0; i < length; i++) {
        cout << "Please enter number " << (i + 1) << ": ";
        cin >> arr[i];
    }
}
```

### 📝 Function 2: Print Array Data

```cpp
void PrintArrayData(int arr[100], int length) {
    cout << "Array elements: " << endl;
    for (int i = 0; i < length; i++) {
        cout << "Number " << (i + 1) << ": " << arr[i] << endl;
    }
}
```

### 📝 Function 3: Calculate Array Sum

```cpp
int CalculateArraySum(int arr[100], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}
```

### 📝 Function 4: Calculate Array Average

```cpp
float CalculateArrayAverage(int arr[100], int length) {
    int sum = CalculateArraySum(arr, length);
    return (float)sum / length;
}
```

## 🔧 Detailed Code Explanation

### How For Loop Works with Arrays

```cpp
for (int i = 0; i < length; i++) {
    // Access array element using arr[i]
    // i starts from 0 and ends at length - 1
}
```

### Demonstration Example:

```cpp
// If user enters 5 numbers
for (int i = 0; i < 5; i++) {
    cin >> arr[i];  // Reads arr[0], arr[1], arr[2], arr[3], arr[4]
}

for (int i = 0; i < 5; i++) {
    cout << arr[i];  // Prints arr[0], arr[1], arr[2], arr[3], arr[4]
}
```

## 🎯 Program Output

### Execution Example:

```
How many numbers do you want to enter? (1-100): 5
Please enter number 1: 100
Please enter number 2: 99
Please enter number 3: 55
Please enter number 4: 77
Please enter number 5: 88

Array elements:
Number 1: 100
Number 2: 99
Number 3: 55
Number 4: 77
Number 5: 88

Sum = 419
Average = 83.8
```

## 🔄 Types of Iteration with Arrays

### Forward Iteration

```cpp
for (int i = 0; i < length; i++) {
    // Process element arr[i]
}
```

### Backward Iteration

```cpp
for (int i = length - 1; i >= 0; i--) {
    // Process element arr[i]
}
```

## 💡 Practical Applications

### Find Maximum Element

```cpp
int FindMaxElement(int arr[100], int length) {
    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```

### Find Minimum Element

```cpp
int FindMinElement(int arr[100], int length) {
    int min = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
```

## 🏆 Best Practices

### 1. Use Constants for Array Sizes

```cpp
const int MAX_SIZE = 100;

void ReadArrayData(int arr[MAX_SIZE], int& length) {
    // Code
}
```

### 2. Validate Array Bounds

```cpp
void ReadArrayData(int arr[100], int& length) {
    do {
        cout << "How many numbers? (1-100): ";
        cin >> length;
    } while (length < 1 || length > 100);
    
    // Rest of code
}
```

### 3. Reuse Functions

```cpp
// Instead of writing sum code twice
float CalculateArrayAverage(int arr[100], int length) {
    // Reuse existing sum function
    int sum = CalculateArraySum(arr, length);
    return (float)sum / length;
}
```

## 📝 Summary

### Core Concepts:

- **For Loops** with **Arrays** enable efficient processing of multiple data
- **Index i** controls access to array elements
- **Specialized functions** make code more organized

### Benefits of This Approach:

1. **Organized code** that's easy to maintain
2. **Function reuse**
3. **Separation of tasks** between reading, printing, and calculation
4. **Flexibility** in handling different data sizes

### Typical Program Structure:

```cpp
// 1. Read data
ReadArrayData(array, length);

// 2. Process data
int sum = CalculateArraySum(array, length);
float average = CalculateArrayAverage(array, length);

// 3. Display results
PrintArrayData(array, length);
```

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>