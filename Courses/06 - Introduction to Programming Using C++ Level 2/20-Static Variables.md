<a id="arabic"></a>
[English ↙](#english)

## Static Variables

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">



## مثال: متغير عادي

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void myFunction() {
    int number = 1;        // متغير عادي
    cout << number << " "; // طباعة: 1
    number = number + 1;   // زيادة: 1 → 2
}

int main() {
    myFunction();  // الأول: 1
    myFunction();  // الثاني: 1  
    myFunction();  // الثالث: 1
    return 0;
}
```

**الإخراج:**
```
1 1 1
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### لماذا النتيجة `1 1 1`؟

- المتغير العادي **يتم تعريفه** في كل استدعاء للدالة
- **يتم تدميره** عند انتهاء الدالة
- **يبدأ من القيمة الأولية** كل مرة

---

## نفس المثال باستخدام Static Variable

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void myFunction() {
    static int number = 1;  // ⭐ متغير static
    cout << number << " ";  // طباعة القيمة الحالية
    number = number + 1;    // زيادة القيمة
}

int main() {
    myFunction();  // الأول: 1
    myFunction();  // الثاني: 2  
    myFunction();  // الثالث: 3
    return 0;
}
```

**الإخراج:**
```
1 2 3
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### لماذا النتيجة `1 2 3`؟

- Static variable **يتم تعريفه مرة واحدة فقط**
- **لا يتم تدميره** عند انتهاء الدالة
- **يحافظ على القيمة** بين الاستدعاءات

---

## الفرق بين المتغير العادي و Static Variable

| المتغير العادي | Static Variable |
|---------------|-----------------|
| **يتم تعريفه** في كل استدعاء | **يتم تعريفه مرة واحدة فقط** |
| **يتم تدميره** عند انتهاء الدالة | **لا يتم تدميره** عند انتهاء الدالة |
| **يبدأ من القيمة الأولية** كل مرة | **يحافظ على القيمة** بين الاستدعاءات |
| **عمره**: فترة الدالة فقط | **عمره**: فترة البرنامج كله |

---

## كيف يعمل Static Variable؟

### 1. التعريف مرة واحدة فقط

```cpp
static int number = 1;  // ⭐ يتم تنفيذ هذا السطر مرة واحدة فقط
```

### 2. الحفاظ على القيمة في الذاكرة

- الكومبايلر **يحتفظ** بالمتغير ولا يدمره
- القيمة **تظل في الذاكرة** بين استدعاءات الدالة

### 3. العمر (Lifetime)

- **عمر Static variable**: فترة البرنامج كله
- **عمر المتغير العادي**: فترة الدالة فقط

---

## الخلاصة

### المفاهيم الأساسية:

1. **Static Variable** يحتفظ بقيمته بين استدعاءات الدالة
2. **يُعرف مرة واحدة** عند أول استدعاء للدالة
3. **لا يُدمر** عند انتهاء الدالة
4. **عمره** هو عمر البرنامج كله

### الفكرة الرئيسية:

> **"Static Variable يحتفظ بقيمته في الذاكرة ولا يتم تدميره عند انتهاء الدالة"**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Static Variables

---

## Example: Normal Variable

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void myFunction() {
    int number = 1;        // Normal variable
    cout << number << " "; // Print: 1
    number = number + 1;   // Increase: 1 → 2
}

int main() {
    myFunction();  // First: 1
    myFunction();  // Second: 1  
    myFunction();  // Third: 1
    return 0;
}
```

**Output:**
```
1 1 1
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Why Result `1 1 1`?

- Normal variable **defined** each time function is called
- **Destroyed** when function ends
- **Starts from initial value** each time

---

## Same Example Using Static Variable

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

void myFunction() {
    static int number = 1;  // ⭐ Static variable
    cout << number << " ";  // Print current value
    number = number + 1;    // Increase value
}

int main() {
    myFunction();  // First: 1
    myFunction();  // Second: 2  
    myFunction();  // Third: 3
    return 0;
}
```

**Output:**
```
1 2 3
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Why Result `1 2 3`?

- Static variable **defined only once**
- **Not destroyed** when function ends
- **Keeps value** between calls

---

## Difference Between Normal Variable and Static Variable

| Normal Variable | Static Variable |
|----------------|-----------------|
| **Defined** each call | **Defined only once** |
| **Destroyed** when function ends | **Not destroyed** when function ends |
| **Starts from initial value** each time | **Keeps value** between calls |
| **Lifetime**: function duration only | **Lifetime**: entire program duration |

---

## How Static Variable Works?

### 1. Defined Only Once

```cpp
static int number = 1;  // ⭐ This line executes only once
```

### 2. Value Preserved in Memory

- Compiler **keeps** the variable and doesn't destroy it
- Value **remains in memory** between function calls

### 3. Lifetime

- **Static variable lifetime**: entire program duration
- **Normal variable lifetime**: function duration only

---

## Summary

### Core Concepts:

1. **Static Variable** keeps its value between function calls
2. **Defined once** on first function call
3. **Not destroyed** when function ends
4. **Lifetime** is the entire program lifetime

### Main Idea:

> **"Static Variable keeps its value in memory and is not destroyed when function ends"**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>