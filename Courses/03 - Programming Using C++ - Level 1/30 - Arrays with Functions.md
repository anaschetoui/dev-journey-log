<div dir="rtl">

<a id="arabic-arrays-functions"></a>
[English ↙](#english-arrays-functions)

# 🔄 المصفوفات مع الدوال | Arrays with Functions

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيفية التعامل مع المصفوفات (Arrays) وإرسالها كمعاملات (Parameters) للدوال (Functions) والإجراءات (Procedures). هذا الموضوع أساسي في البرمجة الوظيفية والإجرائية حيث نبني برامجنا مثل مكعبات الليجو.

## 💡 المفاهيم الأساسية

### إرسال المصفوفات للدوال

**المصفوفات تُرسل تلقائياً بالإشارة (By Reference)**:
- المصفوفات لا تُرسل بالقيمة (By Value) أبداً
- أي تعديل على المصفوفة داخل الدالة ينعكس على المصفوفة الأصلية
- لا حاجة لاستخدام `&` مع المصفوفات

### الفرق بين المصفوفات والهياكل

| النوع | طريقة الإرسال الافتراضية |
|-------|--------------------------|
| **المصفوفات (Arrays)** | By Reference (تلقائياً) |
| **الهياكل (Structures)** | By Value (ما لم تحدد By Reference) |

## 🛠️ أمثلة عملية

### 📝 مثال أساسي: قراءة وطباعة مصفوفة

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// إجراء لقراءة بيانات المصفوفة
void readArrayData(int x[3]) {
    cout << "Enter value for x[0]: ";
    cin >> x[0];
    
    cout << "Enter value for x[1]: ";
    cin >> x[1];
    
    cout << "Enter value for x[2]: ";
    cin >> x[2];
}

// إجراء لطباعة بيانات المصفوفة
void printArrayData(int x[3]) {
    cout << "Array values: " << endl;
    cout << "x[0] = " << x[0] << endl;
    cout << "x[1] = " << x[1] << endl;
    cout << "x[2] = " << x[2] << endl;
}

int main() {
    int x[3];  // تعريف مصفوفة من 3 عناصر
    
    // استدعاء الإجراءات
    readArrayData(x);   // إرسال المصفوفة للقراءة
    printArrayData(x);  // إرسال المصفوفة للطباعة
    
    return 0;
}
```

</div>

### 📝 مثال متقدم: دوال للمعالجة الحسابية

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

const int SIZE = 5;

// دالة لحساب مجموع عناصر المصفوفة
int calculateSum(int arr[SIZE]) {
    int sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    return sum;
}

// دالة لإيجاد أكبر عنصر في المصفوفة
int findMax(int arr[SIZE]) {
    int max = arr[0];
    for(int i = 1; i < SIZE; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// إجراء لتهيئة المصفوفة بقيم عشوائية
void initializeArray(int arr[SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 10;  // 10, 20, 30, 40, 50
    }
}

int main() {
    int numbers[SIZE];
    
    initializeArray(numbers);
    
    cout << "Sum: " << calculateSum(numbers) << endl;
    cout << "Max: " << findMax(numbers) << endl;
    
    return 0;
}
```

</div>

## ❌ الأخطاء الشائعة

### 1. محاولة استخدام & مع المصفوفات

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - لا حاجة لـ & مع المصفوفات
void readArray(int &arr[3]) {  // خطأ! غير مسموح
    // ...
}

// ✅ صحيح - المصفوفة تُرسل تلقائياً بالإشارة
void readArray(int arr[3]) {   // صحيح
    // ...
}
```

</div>

### 2. نسيان أن التعديلات تنعكس على المصفوفة الأصلية

<div dir="ltr" align="left">

```cpp
// ❌ قد يعطي نتائج غير متوقعة
void modifyArray(int arr[3]) {
    arr[0] = 100;  // هذا سيغير المصفوفة الأصلية!
}

int main() {
    int myArray[3] = {1, 2, 3};
    modifyArray(myArray);
    cout << myArray[0];  // سيطبع 100 وليس 1
}
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام ثوابت لأحجام المصفوفات

<div dir="ltr" align="left">

```cpp
// ✅ استخدام ثوابت للحجم
const int MAX_STUDENTS = 100;
const int DAYS_IN_WEEK = 7;

void processStudents(int students[MAX_STUDENTS]) {
    // معالجة بيانات الطلاب
}

void analyzeTemperatures(float temps[DAYS_IN_WEEK]) {
    // تحليل درجات الحرارة
}
```

</div>

### 2. تسمية الدوال بشكل معبر

<div dir="ltr" align="left">

```cpp
// ✅ تسمية معبرة
void readStudentGrades(int grades[], int size) {
    // قراءة درجات الطلاب
}

void calculateAverage(float numbers[], int count) {
    // حساب المتوسط
}

void sortArrayAscending(int arr[], int length) {
    // ترتيب المصفوفة تصاعدياً
}
```

</div>

### 3. تمرير حجم المصفوفة كمعامل إضافي

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// دالة عاملة تعمل مع أي حجم مصفوفة
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

// دالة لملء المصفوفة بقيم
void fillArray(int arr[], int size, int value) {
    for(int i = 0; i < size; i++) {
        arr[i] = value;
    }
}

int main() {
    const int SIZE1 = 3;
    const int SIZE2 = 5;
    
    int array1[SIZE1];
    int array2[SIZE2];
    
    fillArray(array1, SIZE1, 10);
    fillArray(array2, SIZE2, 20);
    
    printArray(array1, SIZE1);
    printArray(array2, SIZE2);
    
    return 0;
}
```

</div>

## 📊 فوائد استخدام المصفوفات مع الدوال

### بدون دوال
- كود مكرر ومعقد
- صعوبة في الصيانة
- صعوبة في إعادة الاستخدام
- أخطاء متكررة

### مع دوال
- كود منظم ونظيف
- سهولة الصيانة والتحديث
- إعادة استخدام الكود
- تقليل الأخطاء

## 📝 الملخص

### المفاهيم الأساسية:
- **المصفوفات تُرسل تلقائياً By Reference**
- **لا حاجة لـ &** مع المصفوفات
- **التعديلات تنعكس** على المصفوفة الأصلية

### قواعد مهمة:
1. **تعريف الدالة**: `void functionName(type arrayName[size])`
2. **استدعاء الدالة**: `functionName(arrayName)`
3. **لا تستخدم &** مع المصفوفات
4. **استخدم ثوابت** لأحجام المصفوفات

### أفضل الممارسات:
1. **تمرير الحجم** كمعامل إضافي للدوال العامة
2. **تسمية معبرة** للدوال تعكس وظيفتها
3. **كل دالة تقوم بمهمة واحدة** فقط
4. **استخدام ثوابت** لأحجام المصفوفات

### الفكرة الأساسية:
استخدام المصفوفات مع الدوال يحول البرمجة من كتابة كود معقد إلى بناء برامج مثل مكعبات الليجو، حيث كل دالة تقوم بمهمة محددة ويمكن إعادة استخدامها多次.

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

<a id="english-arrays-functions"></a>
[العربية ↗](#arabic-arrays-functions)

# 🔄 Arrays with Functions

## 🎯 Introduction

In this lesson, we'll learn how to work with Arrays and send them as Parameters to Functions and Procedures. This topic is fundamental in functional and procedural programming where we build our programs like Lego blocks.

## 💡 Core Concepts

### Sending Arrays to Functions

**Arrays are automatically sent by Reference**:
- Arrays are never sent by Value
- Any modifications to the array inside the function reflect on the original array
- No need to use `&` with arrays

### Difference Between Arrays and Structures

| Type | Default Passing Method |
|------|------------------------|
| **Arrays** | By Reference (automatically) |
| **Structures** | By Value (unless specified By Reference) |

## 🛠️ Practical Examples

### 📝 Basic Example: Reading and Printing Array

```cpp
#include <iostream>
using namespace std;

// Procedure to read array data
void readArrayData(int x[3]) {
    cout << "Enter value for x[0]: ";
    cin >> x[0];
    
    cout << "Enter value for x[1]: ";
    cin >> x[1];
    
    cout << "Enter value for x[2]: ";
    cin >> x[2];
}

// Procedure to print array data
void printArrayData(int x[3]) {
    cout << "Array values: " << endl;
    cout << "x[0] = " << x[0] << endl;
    cout << "x[1] = " << x[1] << endl;
    cout << "x[2] = " << x[2] << endl;
}

int main() {
    int x[3];  // Define array of 3 elements
    
    // Calling procedures
    readArrayData(x);   // Send array for reading
    printArrayData(x);  // Send array for printing
    
    return 0;
}
```

### 📝 Advanced Example: Arithmetic Processing Functions

```cpp
#include <iostream>
using namespace std;

const int SIZE = 5;

// Function to calculate sum of array elements
int calculateSum(int arr[SIZE]) {
    int sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find maximum element in array
int findMax(int arr[SIZE]) {
    int max = arr[0];
    for(int i = 1; i < SIZE; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Procedure to initialize array with values
void initializeArray(int arr[SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 10;  // 10, 20, 30, 40, 50
    }
}

int main() {
    int numbers[SIZE];
    
    initializeArray(numbers);
    
    cout << "Sum: " << calculateSum(numbers) << endl;
    cout << "Max: " << findMax(numbers) << endl;
    
    return 0;
}
```

## ❌ Common Errors

### 1. Trying to Use & with Arrays

```cpp
// ❌ Error - No need for & with arrays
void readArray(int &arr[3]) {  // Error! Not allowed
    // ...
}

// ✅ Correct - Array is automatically passed by reference
void readArray(int arr[3]) {   // Correct
    // ...
}
```

### 2. Forgetting that Modifications Reflect on Original Array

```cpp
// ❌ May give unexpected results
void modifyArray(int arr[3]) {
    arr[0] = 100;  // This will change the original array!
}

int main() {
    int myArray[3] = {1, 2, 3};
    modifyArray(myArray);
    cout << myArray[0];  // Will print 100 not 1
}
```

## 🏆 Best Practices

### 1. Using Constants for Array Sizes

```cpp
// ✅ Using constants for size
const int MAX_STUDENTS = 100;
const int DAYS_IN_WEEK = 7;

void processStudents(int students[MAX_STUDENTS]) {
    // Process student data
}

void analyzeTemperatures(float temps[DAYS_IN_WEEK]) {
    // Analyze temperatures
}
```

### 2. Descriptive Function Naming

```cpp
// ✅ Descriptive naming
void readStudentGrades(int grades[], int size) {
    // Read student grades
}

void calculateAverage(float numbers[], int count) {
    // Calculate average
}

void sortArrayAscending(int arr[], int length) {
    // Sort array in ascending order
}
```

### 3. Passing Array Size as Additional Parameter

```cpp
#include <iostream>
using namespace std;

// Generic function that works with any array size
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

// Function to fill array with values
void fillArray(int arr[], int size, int value) {
    for(int i = 0; i < size; i++) {
        arr[i] = value;
    }
}

int main() {
    const int SIZE1 = 3;
    const int SIZE2 = 5;
    
    int array1[SIZE1];
    int array2[SIZE2];
    
    fillArray(array1, SIZE1, 10);
    fillArray(array2, SIZE2, 20);
    
    printArray(array1, SIZE1);
    printArray(array2, SIZE2);
    
    return 0;
}
```

## 📊 Benefits of Using Arrays with Functions

### Without Functions
- Repeated and complex code
- Difficulty in maintenance
- Difficulty in reusability
- Frequent errors

### With Functions
- Organized and clean code
- Easy maintenance and updates
- Code reusability
- Reduced errors

## 📝 Summary

### Basic Concepts:
- **Arrays are automatically passed By Reference**
- **No need for &** with arrays
- **Modifications reflect** on the original array

### Important Rules:
1. **Function definition**: `void functionName(type arrayName[size])`
2. **Function call**: `functionName(arrayName)`
3. **Don't use &** with arrays
4. **Use constants** for array sizes

### Best Practices:
1. **Pass size** as additional parameter for generic functions
2. **Descriptive naming** for functions reflecting their purpose
3. **Each function does one task** only
4. **Use constants** for array sizes

### Core Concept:
Using arrays with functions transforms programming from writing complex code to building programs like Lego blocks, where each function performs a specific task and can be reused multiple times.

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>