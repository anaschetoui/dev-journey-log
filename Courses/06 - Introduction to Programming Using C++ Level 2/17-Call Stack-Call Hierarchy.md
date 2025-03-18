<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## Call Stack / Call Hierarchy

في هذا الدرس، سنتعلم عن مفهوم Call Stack و Call Hierarchy في ++C، وكيفية تتبع استدعاءات الدوال أثناء تنفيذ البرنامج.

---

## مثال توضيحي لاستدعاء الدوال

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void function4() {
    cout << "Inside function4" << endl;
}

void function3() {
    cout << "Inside function3" << endl;
    function4();
}

void function2() {
    cout << "Inside function2" << endl;
    function3();
}

void function1() {
    cout << "Inside function1" << endl;
    function2();
}

int main() {
    cout << "Inside main" << endl;
    function1();
    return 0;
}
```

**الإخراج:**
```
Inside main
Inside function1
Inside function2
Inside function3
Inside function4
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## ما هو Call Stack؟

### التعريف

**Call Stack** هو هيكل بيانات يتابع استدعاءات الدوال في البرنامج. يتبع مبدأ **LIFO** (Last In, First Out) - آخر من يدخل هو أول من يخرج.

### كيف يعمل؟

1. عندما يبدأ البرنامج، تُدفع (push) الدالة `main()` إلى الـ Stack
2. عندما تستدعي `main()` الدالة `function1()`، تُدفع `function1()` إلى الـ Stack
3. تستمر هذه العملية مع كل استدعاء لدالة جديدة
4. عند انتهاء تنفيذ الدالة، تُطرد (pop) من الـ Stack

---

## عملية الـ Stack خطوة بخطوة

### 1. بداية البرنامج

```
Stack: [main]
Active Frame: main
```

### 2. بعد استدعاء function1

```
Stack: [main, function1]
Active Frame: function1
```

### 3. بعد استدعاء function2

```
Stack: [main, function1, function2]
Active Frame: function2
```

### 4. بعد استدعاء function3

```
Stack: [main, function1, function2, function3]
Active Frame: function3
```

### 5. بعد استدعاء function4

```
Stack: [main, function1, function2, function3, function4]
Active Frame: function4
```

### 6. بعد انتهاء function4

```
Stack: [main, function1, function2, function3]
Active Frame: function3
```

### 7. بعد انتهاء function3

```
Stack: [main, function1, function2]
Active Frame: function2
```

### 8. بعد انتهاء function2

```
Stack: [main, function1]
Active Frame: function1
```

### 9. بعد انتهاء function1

```
Stack: [main]
Active Frame: main
```

### 10. بعد انتهاء main

```
Stack: []
Active Frame: (لا يوجد)
```

---

## ما هو Active Frame؟

### التعريف

**Active Frame** (الإطار النشط) هو الدالة التي يتم تنفيذها حالياً في الذاكرة.

### خصائص Active Frame:

1. **واحد فقط** في كل لحظة
2. **يحتوي على** متغيرات الدالة ومعاملاتها
3. **يشير إلى** موقع التنفيذ الحالي في الدالة
4. **ينتقل** من دالة إلى أخرى مع استدعاءات الدوال

---

## ما هو Call Hierarchy؟

### التعريف

**Call Hierarchy** (التدرج الهرمي للاستدعاءات) هو عرض يوضح كيفية استدعاء الدوال لبعضها البعض.

### مثال للـ Call Hierarchy:

```
main
└── function1
    └── function2
        └── function3
            └── function4
```

### استخدام Call Hierarchy في الـ Debugging:

1. وضع Breakpoint في دالة معينة
2. استخدام ميزة "View Call Hierarchy" في الـ IDE
3. معرفة من الذي استدعى الدالة الحالية
4. تتبع سلسلة الاستدعاءات للخلف

---

## فوائد فهم Call Stack و Call Hierarchy

### 1. تصحيح الأخطاء (Debugging)
- تتبع مسار التنفيذ
- فهم كيفية وصول البرنامج إلى حالة معينة
- تحديد مصدر الأخطاء

### 2. تحسين الأداء
- فهم عمق استدعاءات الدوال
- تجنب الـ Stack Overflow
- تحسين استخدام الذاكرة

### 3. فهم بنية البرنامج
- رؤية العلاقات بين الدوال
- فهم تدفق التحكم في البرنامج
- تحليل تصميم الكود

---

## مفهوم الـ Stack في الذاكرة

### عمليات الـ Stack الأساسية:

| العملية | الوصف | المثال في استدعاء الدوال |
|---------|-------|--------------------------|
| **Push** | إضافة عنصر جديد إلى أعلى الـ Stack | `main()` تستدعي `function1()` |
| **Pop** | إزالة العنصر من أعلى الـ Stack | `function1()` تنتهي وتعود |
| **Top/Peek** | مشاهدة العنصر في أعلى الـ Stack | `Active Frame` الحالي |

### خصائص الـ Stack:
- **LIFO**: Last In, First Out
- **Size Limit**: حجم محدود (قد يسبب Stack Overflow)
- **Fast Operations**: عمليات سريعة في الطرف العلوي فقط

---

## الخلاصة

### المفاهيم الأساسية:

1. **Call Stack**: هيكل بيانات يتابع استدعاءات الدوال
2. **Active Frame**: الدالة التي تنفذ حالياً
3. **Call Hierarchy**: تدرج استدعاءات الدوال
4. **Push**: إضافة دالة إلى الـ Stack
5. **Pop**: إزالة دالة من الـ Stack

### كيف يعمل:

```
main() → function1() → function2() → function3() → function4()
```

### قاعدة الـ LIFO:
> **"آخر دالة تستدعى هي أول دالة تنتهي"**

### أهمية الفهم:
- أساسي للـ Debugging
- مهم لفهم تدفق البرنامج
- أساسي لموضوعات متقدمة مثل الـ Recursion

### النصيحة العملية:
استخدم "View Call Hierarchy" في الـ IDE لفهم كيفية استدعاء الدوال في برامجك الكبيرة.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Call Stack / Call Hierarchy

In this lesson, we will learn about the concepts of Call Stack and Call Hierarchy in C++, and how to track function calls during program execution.

---

## Example of Function Calls

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void function4() {
    cout << "Inside function4" << endl;
}

void function3() {
    cout << "Inside function3" << endl;
    function4();
}

void function2() {
    cout << "Inside function2" << endl;
    function3();
}

void function1() {
    cout << "Inside function1" << endl;
    function2();
}

int main() {
    cout << "Inside main" << endl;
    function1();
    return 0;
}
```

**Output:**
```
Inside main
Inside function1
Inside function2
Inside function3
Inside function4
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## What is Call Stack?

### Definition

**Call Stack** is a data structure that tracks function calls in a program. It follows the **LIFO** principle (Last In, First Out) - the last one to enter is the first one to leave.

### How It Works?

1. When the program starts, `main()` function is pushed to the Stack
2. When `main()` calls `function1()`, `function1()` is pushed to the Stack
3. This process continues with each new function call
4. When a function finishes execution, it is popped from the Stack

---

## Stack Process Step by Step

### 1. Program Start

```
Stack: [main]
Active Frame: main
```

### 2. After Calling function1

```
Stack: [main, function1]
Active Frame: function1
```

### 3. After Calling function2

```
Stack: [main, function1, function2]
Active Frame: function2
```

### 4. After Calling function3

```
Stack: [main, function1, function2, function3]
Active Frame: function3
```

### 5. After Calling function4

```
Stack: [main, function1, function2, function3, function4]
Active Frame: function4
```

### 6. After function4 Finishes

```
Stack: [main, function1, function2, function3]
Active Frame: function3
```

### 7. After function3 Finishes

```
Stack: [main, function1, function2]
Active Frame: function2
```

### 8. After function2 Finishes

```
Stack: [main, function1]
Active Frame: function1
```

### 9. After function1 Finishes

```
Stack: [main]
Active Frame: main
```

### 10. After main Finishes

```
Stack: []
Active Frame: (none)
```

---

## What is Active Frame?

### Definition

**Active Frame** is the function currently being executed in memory.

### Active Frame Characteristics:

1. **Only one** at any moment
2. **Contains** function variables and parameters
3. **Points to** current execution location in the function
4. **Moves** from one function to another with function calls

---

## What is Call Hierarchy?

### Definition

**Call Hierarchy** is a view that shows how functions call each other.

### Call Hierarchy Example:

```
main
└── function1
    └── function2
        └── function3
            └── function4
```

### Using Call Hierarchy in Debugging:

1. Set a Breakpoint in a specific function
2. Use "View Call Hierarchy" feature in IDE
3. Know who called the current function
4. Trace back the chain of calls

---

## Benefits of Understanding Call Stack and Call Hierarchy

### 1. Debugging
- Track execution path
- Understand how program reached a certain state
- Identify source of errors

### 2. Performance Improvement
- Understand function call depth
- Avoid Stack Overflow
- Optimize memory usage

### 3. Understanding Program Structure
- See relationships between functions
- Understand program control flow
- Analyze code design

---

## Stack Concept in Memory

### Basic Stack Operations:

| Operation | Description | Example in Function Calls |
|-----------|-------------|---------------------------|
| **Push** | Add new element to top of Stack | `main()` calls `function1()` |
| **Pop** | Remove element from top of Stack | `function1()` ends and returns |
| **Top/Peek** | View element at top of Stack | Current `Active Frame` |

### Stack Characteristics:
- **LIFO**: Last In, First Out
- **Size Limit**: Limited size (may cause Stack Overflow)
- **Fast Operations**: Fast operations only at the top

---

## Summary

### Core Concepts:

1. **Call Stack**: Data structure that tracks function calls
2. **Active Frame**: Function currently executing
3. **Call Hierarchy**: Hierarchy of function calls
4. **Push**: Add function to Stack
5. **Pop**: Remove function from Stack

### How It Works:

```
main() → function1() → function2() → function3() → function4()
```

### LIFO Rule:
> **"The last function called is the first function to finish"**

### Importance of Understanding:
- Essential for Debugging
- Important for understanding program flow
- Fundamental for advanced topics like Recursion

### Practical Advice:
Use "View Call Hierarchy" in your IDE to understand how functions are called in your large programs.

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>