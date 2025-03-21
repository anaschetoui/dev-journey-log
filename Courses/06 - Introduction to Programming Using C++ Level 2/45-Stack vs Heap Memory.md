<a id="arabic"></a>
[English ↙](#english)
# Stack vs Heap Memory
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## المقدمة: تقسيم الذاكرة (RAM)

### 🧠 **كيف تنقسم الذاكرة في البرنامج؟**

تنقسم ذاكرة البرنامج (RAM) إلى أربعة أجزاء رئيسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Code Area       ← تخزين الأوامر والتعليمات
2. Static/Global   ← المتغيرات العامة والثابتة  
3. Stack Memory    ← الذاكرة المحددة (المصروف)
4. Heap Memory     ← الذاكرة المفتوحة (بنك الذاكرة)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الجزء 1: Code Area (منطقة التعليمات)

### 📝 **ما يخزن هنا:**
- كود البرنامج (Source Code)
- التعليمات البرمجية (Instructions)
- الأوامر بعد الترجمة

### 🔍 **خصائصه:**
- حجم صغير نسبياً
- يخصص عند بدء البرنامج
- للقراءة فقط (Read-Only)

---

## الجزء 2: Static/Global Area

### 📝 **ما يخزن هنا:**
- المتغيرات العامة (Global Variables)
- المتغيرات الثابتة (Static Variables)

### 🔍 **خصائصه:**
- يظل محجوزاً طوال حياة البرنامج
- من بداية البرنامج حتى نهايته
- حجمه ثابت ومعروف مسبقاً

---

## الجزء 3: Stack Memory (الذاكرة المحددة)

### 🎯 **ما هو الـ Stack؟**
هو الذاكرة المحددة التي يخصصها نظام التشغيل للبرنامج بناءً على احتياجاته المعروفة مسبقاً.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    int x;              // ← يخزن في Stack
    float arr[100];     // ← يخزن في Stack
    char name[50];      // ← يخزن في Stack
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **ما يخزن في Stack:**
- المتغيرات المحلية (Local Variables)
- معاملات الدوال (Function Parameters)
- بيانات الاستدعاء (Call Data)
- المؤشرات نفسها (Pointers themselves)

### 🔍 **خصائص Stack:**
1. **محدد الحجم** ← يخصص مقدماً (مثلاً 1MB)
2. **سريع الوصول** ← Faster Access
3. **إدارة تلقائية** ← Auto-managed
4. **محدود المساحة** ← Limited Space

---

## الجزء 4: Heap Memory (الذاكرة المفتوحة)

### 🏦 **ما هو الـ Heap؟**
هو بقية الذاكرة المتاحة في النظام، والتي يمكن الوصول إليها بشكل ديناميكي.

### 💡 **تشبيه: المصروف vs دفتر الشيكات**
- **Stack** ← مثل المصروف اليومي المحدد (100 دينار)
- **Pointers** ← مثل دفتر الشيكات
- **Heap** ← مثل البنك الكبير

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    int* ptr;           // ← يخزن في Stack (المؤشر نفسه)
    ptr = new int;      // ← القيمة تخزن في Heap
    *ptr = 100;         // ← الوصول للقيمة في Heap
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **ما يخزن في Heap:**
- المتغيرات الديناميكية (Dynamic Variables)
- المصفوفات الديناميكية (Dynamic Arrays)
- الكائنات الديناميكية (Dynamic Objects)

### 🔍 **خصائص Heap:**
1. **كبير الحجم** ← مساحة ضخمة (بقية الـ RAM)
2. **ديناميكي** ← Dynamic Allocation
3. **إدارة يدوية** ← Manual Management
4. **أبطأ وصولاً** ← Slower Access

---

## مقارنة مفصلة: Stack vs Heap

### 📊 **مقارنة مباشرة:**

| الخاصية | Stack Memory | Heap Memory |
|---------|--------------|-------------|
| **الحجم** | محدود (مثلاً 1MB) | كبير جداً (بقية الـ RAM) |
| **السرعة** | سريع جداً | أبطأ نسبياً |
| **الإدارة** | تلقائية (Auto) | يدوية (Manual) |
| **التخصيص** | ثابت (Static) | ديناميكي (Dynamic) |
| **مثال** | `int x;` | `int* ptr = new int;` |
| **الحياة** | مع نطاق المتغير | حتى `delete` |
| **التكلفة** | منخفضة | أعلى |

---

## مثال توضيحي

### 🎯 **كيف يعملان معاً؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Global Variable → تخزن في Static/Global Area
int globalVar = 10;

int main() {
    // Local Variables → تخزن في Stack
    int localVar = 20;
    float arr[50];
    
    // Pointer نفسه → يخزن في Stack
    int* dynamicPtr;
    
    // Dynamic Allocation → القيمة تخزن في Heap
    dynamicPtr = new int;
    *dynamicPtr = 30;
    
    // استخدام الذاكرة من كلا المنطقتين
    cout << "Global (Static): " << globalVar << endl;
    cout << "Local (Stack): " << localVar << endl;
    cout << "Dynamic (Heap): " << *dynamicPtr << endl;
    
    // تحرير ذاكرة Heap
    delete dynamicPtr;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## دور المؤشرات (Pointers)

### 🔑 **لماذا نحتاج المؤشرات؟**

المؤشرات هي "دفتر الشيكات" الذي يسمح لك بالوصول إلى **Heap Memory**:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
بدون Pointers → تستخدم Stack فقط ← محدود
مع Pointers   → تستخدم Stack + Heap ← غير محدود
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **كيف يعمل؟**
1. **المؤشر نفسه** ← يخزن في Stack (كدفتر شيكات في جيبك)
2. **عملية new** ← تكتب شيكاً للبنك (Heap)
3. **القيمة** ← تخزن في Heap (الرصيد في البنك)
4. **عملية delete** ← تسحب الرصيد وتحرر المكان

---

## الخلاصة والتطبيقات

### ✅ **متى نستخدم Stack؟**
- عندما نعرف حجم البيانات مسبقاً
- للمتغيرات المؤقتة قصيرة العمر
- عندما نريد سرعة عالية في الوصول

### ✅ **متى نستخدم Heap؟**
- عندما لا نعرف حجم البيانات مسبقاً
- للبيانات كبيرة الحجم
- عندما نريد التحكم في دورة حياة البيانات
- للهياكل الديناميكية (مثل القوائم المرتبطة)

### ⚠️ **ملاحظات هامة:**
1. **كل اللغات** تستخدم هذا النظام، لكن C++ تمنحك تحكم مباشر
2. **نسيان delete** → يؤدي إلى تسرب الذاكرة (Memory Leak)
3. **الوصول لـ Heap** → أبطأ لأنه يحتاج إلى تخصيص ديناميكي
4. **Stack Overflow** → يحدث عندما تتجاوز حجم الـ Stack المحدد

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Stack vs Heap Memory

---

## Introduction: Memory Division (RAM)

### 🧠 **How is Program Memory Divided?**

Program memory (RAM) is divided into four main parts:

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Code Area       ← Stores commands and instructions
2. Static/Global   ← Global and static variables  
3. Stack Memory    ← Limited memory (allowance)
4. Heap Memory     ← Open memory (memory bank)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Part 1: Code Area (Instructions Area)

### 📝 **What's Stored Here:**
- Program code (Source Code)
- Program instructions
- Commands after compilation

### 🔍 **Characteristics:**
- Relatively small size
- Allocated at program start
- Read-Only

---

## Part 2: Static/Global Area

### 📝 **What's Stored Here:**
- Global Variables
- Static Variables

### 🔍 **Characteristics:**
- Remains allocated throughout program life
- From program start to end
- Fixed and known size in advance

---

## Part 3: Stack Memory (Limited Memory)

### 🎯 **What is Stack?**
The limited memory allocated by the operating system to the program based on known requirements.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    int x;              // ← Stored in Stack
    float arr[100];     // ← Stored in Stack
    char name[50];      // ← Stored in Stack
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📝 **What's Stored in Stack:**
- Local Variables
- Function Parameters
- Call Data
- Pointers themselves

### 🔍 **Stack Characteristics:**
1. **Fixed Size** ← Pre-allocated (e.g., 1MB)
2. **Fast Access** ← Faster Access
3. **Auto-managed** ← Automatic management
4. **Limited Space** ← Limited Space

---

## Part 4: Heap Memory (Open Memory)

### 🏦 **What is Heap?**
The remaining available memory in the system, which can be accessed dynamically.

### 💡 **Analogy: Allowance vs Checkbook**
- **Stack** ← Like daily limited allowance (100 dinars)
- **Pointers** ← Like checkbook
- **Heap** ← Like big bank

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    int* ptr;           // ← Stored in Stack (pointer itself)
    ptr = new int;      // ← Value stored in Heap
    *ptr = 100;         // ← Access value in Heap
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📝 **What's Stored in Heap:**
- Dynamic Variables
- Dynamic Arrays
- Dynamic Objects

### 🔍 **Heap Characteristics:**
1. **Large Size** ← Huge space (rest of RAM)
2. **Dynamic** ← Dynamic Allocation
3. **Manual Management** ← Manual Management
4. **Slower Access** ← Slower Access

---

## Detailed Comparison: Stack vs Heap

### 📊 **Direct Comparison:**

| Property | Stack Memory | Heap Memory |
|----------|--------------|-------------|
| **Size** | Limited (e.g., 1MB) | Very large (rest of RAM) |
| **Speed** | Very fast | Relatively slower |
| **Management** | Automatic | Manual |
| **Allocation** | Static | Dynamic |
| **Example** | `int x;` | `int* ptr = new int;` |
| **Lifetime** | With variable scope | Until `delete` |
| **Cost** | Low | Higher |

---

## Illustrative Example

### 🎯 **How They Work Together?**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

// Global Variable → Stored in Static/Global Area
int globalVar = 10;

int main() {
    // Local Variables → Stored in Stack
    int localVar = 20;
    float arr[50];
    
    // Pointer itself → Stored in Stack
    int* dynamicPtr;
    
    // Dynamic Allocation → Value stored in Heap
    dynamicPtr = new int;
    *dynamicPtr = 30;
    
    // Using memory from both areas
    cout << "Global (Static): " << globalVar << endl;
    cout << "Local (Stack): " << localVar << endl;
    cout << "Dynamic (Heap): " << *dynamicPtr << endl;
    
    // Free Heap memory
    delete dynamicPtr;
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Role of Pointers

### 🔑 **Why Do We Need Pointers?**

Pointers are the "checkbook" that allows you to access **Heap Memory**:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Without Pointers → Use Stack only ← Limited
With Pointers    → Use Stack + Heap ← Unlimited
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📝 **How It Works:**
1. **Pointer itself** ← Stored in Stack (like checkbook in pocket)
2. **new operation** ← Write check to bank (Heap)
3. **Value** ← Stored in Heap (balance in bank)
4. **delete operation** ← Withdraw balance and free space

---

## Summary and Applications

### ✅ **When to Use Stack?**
- When we know data size in advance
- For temporary, short-lived variables
- When we need high access speed

### ✅ **When to Use Heap?**
- When we don't know data size in advance
- For large data
- When we want to control data lifecycle
- For dynamic structures (like linked lists)

### ⚠️ **Important Notes:**
1. **All languages** use this system, but C++ gives you direct control
2. **Forgetting delete** → Causes memory leaks
3. **Heap access** → Slower because needs dynamic allocation
4. **Stack Overflow** → Occurs when exceeding Stack size limit

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>