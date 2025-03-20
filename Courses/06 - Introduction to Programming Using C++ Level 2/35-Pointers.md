<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">
## المؤشرات (Pointers)

## ما هو المؤشر (Pointer)؟

### 🔍 **التعريف البسيط:**

- **مؤشر** هو **متغير عادي** مثل أي متغير آخر
- **الفرق**: بدلاً من تخزين قيمة عادية، يخزن **عنوان** متغير آخر في الذاكرة
- **مثله مثل**: دفتر عناوين الشرطة - يحتوي على عنوان المجرم، ليس المجرم نفسه

### 📝 **المقارنة بين المتغير العادي والمؤشر:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// متغير عادي
int a = 10;  // يخزن القيمة 10

// مؤشر
int *p = &a;  // يخزن عنوان a في الذاكرة
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## فهم الذاكرة والمتغيرات

### 🔍 **المتغير العادي في الذاكرة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📊 **في الذاكرة:**

| العنصر | المثال | الوصف |
|--------|--------|-------|
| **الاسم** | `a` | المعرف المستخدم |
| **القيمة** | `10` | البيانات المخزنة |
| **العنوان** | `0x1000` | موقع في الذاكرة |

### 🔍 **عرض القيمة والعنوان:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;

cout << "القيمة: " << a << endl;      // يطبع: 10
cout << "العنوان: " << &a << endl;    // يطبع: 0x1000 (مثلاً)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## تعريف المؤشر

### 📝 **بناء جملة تعريف المؤشر:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
type *pointerName;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **مثال عملي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;       // متغير عادي
int *p;           // تعريف مؤشر
p = &a;           // تخزين عنوان a في المؤشر
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **أو باختصار:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;  // تعريف وتخزين في سطر واحد
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## كيف يعمل في الذاكرة؟

### 📊 **الرسم التوضيحي:**

```
الذاكرة:

0x1000: [a = 10]     ← المتغير الأصلي
0x2000: [p = 0x1000] ← المؤشر (يخزن عنوان a)

العلاقة:
p → يشير إلى → a
```

### 🔍 **شرح العملية:**

1. `int a = 10;` → ينشئ متغير في الذاكرة (مثلاً في `0x1000`)
2. `int *p;` → ينشئ مؤشر (في `0x2000`)
3. `p = &a;` → يخزن عنوان `a` (`0x1000`) في `p`

---

## مثال كامل مع الشرح

### 📝 **البرنامج الكامل:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // 1. متغير عادي
    int a = 10;
    
    cout << "=== معلومات المتغير a ===" << endl;
    cout << "قيمة a: " << a << endl;
    cout << "عنوان a: " << &a << endl;
    
    // 2. تعريف مؤشر
    int *p;
    
    // 3. تخزين عنوان a في المؤشر
    p = &a;
    
    cout << "\n=== معلومات المؤشر p ===" << endl;
    cout << "قيمة المؤشر p (العنوان المخزن): " << p << endl;
    cout << "عنوان المؤشر p نفسه: " << &p << endl;
    
    return 0;
}
```

**النتيجة المحتملة:**
```
=== معلومات المتغير a ===
قيمة a: 10
عنوان a: 0x7ffc...

=== معلومات المؤشر p ===
قيمة المؤشر p (العنوان المخزن): 0x7ffc...
عنوان المؤشر p نفسه: 0x7ffc...   ← عنوان مختلف
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ملاحظات مهمة:**

1. `p` → تعرض **القيمة المخزنة في المؤشر** (وهي عنوان `a`)
2. `&p` → تعرض **عنوان المؤشر نفسه** في الذاكرة
3. المؤشر نفسه له عنوان في الذاكرة، لأنه متغير عادي

---

## الفرق بين المرجع والمؤشر

### 📊 **جدول المقارنة:**

| الخاصية | المرجع (Reference) | المؤشر (Pointer) |
|---------|-------------------|------------------|
| **الرمز** | `&` في التعريف | `*` في التعريف |
| **التعريف** | `int &x = a;` | `int *p = &a;` |
| **التغيير** | لا يمكن تغيير ما يشير إليه | يمكن تغيير ما يشير إليه |
| **القيمة الافتراضية** | لا يوجد | يمكن أن يكون `nullptr` |
| **الذاكرة** | لا ينشئ مكان جديد | ينشئ مكان جديد |

### 📝 **مثال المقارنة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;

// المرجع - اسم بديل
int &ref = a;  // ref هو اسم آخر لـ a

// المؤشر - يخزن العنوان
int *ptr = &a;  // ptr يخزن عنوان a

// تغيير المرجع (مستحيل)
// ref = b;  // خطأ! لا يمكن تغيير المرجع

// تغيير المؤشر (ممكن)
int b = 20;
ptr = &b;  // صحيح! ptr يشير الآن إلى b
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## قواعد مهمة في استخدام المؤشرات

### ✅ **القواعد الصحيحة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// 1. المؤشر يجب أن يكون من نفس نوع المتغير
int a = 10;
int *p = &a;  // ✅ صحيح - أنواع متطابقة

// 2. يمكن تعريف مؤشر بدون تهيئة (ثم تهيئته لاحقاً)
int *q;       // ✅ صحيح
q = &a;       // ✅ صحيح

// 3. المؤشر يمكن أن يشير إلى أي متغير من نفس النوع
int x = 5, y = 10;
int *ptr = &x;  // ✅ يشير إلى x
ptr = &y;       // ✅ الآن يشير إلى y
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### ❌ **الأخطاء الشائعة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// 1. تخزين قيمة عادية في المؤشر
int *p = 10;  // ⚠️ خطأ! المؤشر يخزن عناوين فقط

// 2. أنواع غير متطابقة
float f = 3.14;
int *p = &f;  // ⚠️ خطأ! المؤشر int لا يمكن أن يشير إلى float

// 3. استخدام مؤشر غير مهيئ
int *q;
*q = 10;  // ⚠️ خطأ! q لا يشير إلى أي مكان
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## لماذا نستخدم المؤشرات؟

### 🔍 **فوائد المؤشرات:**

1. **الوصول السريع**: الوصول إلى البيانات عن طريق العنوان أسرع من البحث عنها
2. **توفير الذاكرة**: بدلاً من نسخ كائن كبير، نخزن عنوانه فقط
3. **المرونة**: يمكن تغيير ما يشير إليه المؤشر أثناء التشغيل
4. **الهياكل الديناميكية**: أساس هياكل البيانات مثل القوائم المرتبطة

### 💡 **التشبيه العملي:**

> **المتغير**: مثل صندوق مخدرات وزنها 2 طن  
> **المؤشر**: مثل عنوان الصندوق ومفتاحه  
> **الأسهل**: إعطاء العنوان والمفتاح، ليس حمل الصندوق!

---

## أنواع البيانات والمؤشرات

### 📝 **مؤشرات لأنواع مختلفة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// مؤشرات لأنواع مختلفة
int integerVar = 10;
int *intPtr = &integerVar;     // مؤشر إلى عدد صحيح

float floatVar = 3.14;
float *floatPtr = &floatVar;   // مؤشر إلى عدد عشري

char charVar = 'A';
char *charPtr = &charVar;      // مؤشر إلى حرف

bool boolVar = true;
bool *boolPtr = &boolVar;      // مؤشر إلى قيمة منطقية
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **القاعدة الذهبية:**

> **المؤشر يجب أن يكون من نفس نوع المتغير الذي يشير إليه**

---

## مثال شامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // ثلاثة متغيرات
    int var1 = 100;
    int var2 = 200;
    int var3 = 300;
    
    // مؤشر يشير إلى var1
    int *ptr = &var1;
    
    cout << "=== الحالة الأولية ===" << endl;
    cout << "ptr يشير إلى var1" << endl;
    cout << "قيمة ptr: " << *ptr << endl;  // سنتعلم * لاحقاً
    cout << "عنوان ptr: " << ptr << endl;
    
    // تغيير اتجاه المؤشر إلى var2
    ptr = &var2;
    
    cout << "\n=== بعد تغيير الاتجاه ===" << endl;
    cout << "ptr يشير الآن إلى var2" << endl;
    cout << "قيمة ptr: " << *ptr << endl;
    cout << "عنوان ptr: " << ptr << endl;
    
    // تغيير اتجاه المؤشر إلى var3
    ptr = &var3;
    
    cout << "\n=== بعد تغيير الاتجاه مرة أخرى ===" << endl;
    cout << "ptr يشير الآن إلى var3" << endl;
    cout << "قيمة ptr: " << *ptr << endl;
    cout << "عنوان ptr: " << ptr << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ملاحظة:**
- `*ptr` → سنتعلمه في الدرس القادم (Dereferencing)
- يعطينا القيمة المخزنة في العنوان الذي يشير إليه المؤشر

---

## الخلاصة

### 🔑 **النقاط الرئيسية:**

1. **المؤشر (Pointer)** هو **متغير عادي** يخزن **عنوان** متغير آخر
2. **رمزه**: `*` قبل اسم المتغير
3. **يجب أن يكون** من نفس نوع المتغير الذي يشير إليه
4. **يمكن تغيير** ما يشير إليه أثناء تنفيذ البرنامج

### 💡 **خصائص المؤشر:**

1. **يخزن العناوين فقط**، ليس القيم العادية
2. **له عنوان خاص به** في الذاكرة
3. **مرن** - يمكن تغيير اتجاهه
4. **أساسي** في البرمجة المتقدمة وهياكل البيانات

### 📝 **بناء الجملة:**

```cpp
// تعريف مؤشر
type *pointerName;

// تهيئة المؤشر
pointerName = &variable;

// تعريف وتهيئة في سطر واحد
type *pointerName = &variable;
```

### ⚠️ **تحذيرات:**

1. **لا تخزن قيمة عادية** في المؤشر
2. **تأكد من التطابق** بين نوع المؤشر ونوع المتغير
3. **لا تستخدم مؤشراً غير مهيئاً**


</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Pointers

---

## What is a Pointer?

### 🔍 **Simple Definition:**

- A **pointer** is a **regular variable** like any other variable
- **Difference**: Instead of storing a normal value, it stores the **address** of another variable in memory
- **Like**: Police address book - contains criminal's address, not the criminal themselves

### 📝 **Comparison Between Regular Variable and Pointer:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Regular variable
int a = 10;  // Stores value 10

// Pointer
int *p = &a;  // Stores address of a in memory
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Understanding Memory and Variables

### 🔍 **Regular Variable in Memory:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📊 **In Memory:**

| Element | Example | Description |
|---------|---------|-------------|
| **Name** | `a` | Identifier used |
| **Value** | `10` | Stored data |
| **Address** | `0x1000` | Location in memory |

### 🔍 **Display Value and Address:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;

cout << "Value: " << a << endl;      // Prints: 10
cout << "Address: " << &a << endl;   // Prints: 0x1000 (for example)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Defining Pointers

### 📝 **Pointer Definition Syntax:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
type *pointerName;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Practical Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;       // Regular variable
int *p;           // Define pointer
p = &a;           // Store address of a in pointer
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Or Shortened:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;
int *p = &a;  // Define and store in one line
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How It Works in Memory

### 📊 **Visual Representation:**

```
Memory:

0x1000: [a = 10]     ← Original variable
0x2000: [p = 0x1000] ← Pointer (stores address of a)

Relationship:
p → points to → a
```

### 🔍 **Process Explanation:**

1. `int a = 10;` → Creates variable in memory (e.g., at `0x1000`)
2. `int *p;` → Creates pointer (at `0x2000`)
3. `p = &a;` → Stores address of `a` (`0x1000`) in `p`

---

## Complete Example with Explanation

### 📝 **Complete Program:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // 1. Regular variable
    int a = 10;
    
    cout << "=== Variable a Information ===" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    
    // 2. Define pointer
    int *p;
    
    // 3. Store address of a in pointer
    p = &a;
    
    cout << "\n=== Pointer p Information ===" << endl;
    cout << "Value of pointer p (stored address): " << p << endl;
    cout << "Address of pointer p itself: " << &p << endl;
    
    return 0;
}
```

**Possible Output:**
```
=== Variable a Information ===
Value of a: 10
Address of a: 0x7ffc...

=== Pointer p Information ===
Value of pointer p (stored address): 0x7ffc...
Address of pointer p itself: 0x7ffc...   ← Different address
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Important Notes:**

1. `p` → Shows **value stored in pointer** (which is address of `a`)
2. `&p` → Shows **address of pointer itself** in memory
3. Pointer itself has address in memory, because it's a regular variable

---

## Difference Between Reference and Pointer

### 📊 **Comparison Table:**

| Property | Reference | Pointer |
|----------|-----------|---------|
| **Symbol** | `&` in definition | `*` in definition |
| **Definition** | `int &x = a;` | `int *p = &a;` |
| **Changeable** | Cannot change what it refers to | Can change what it points to |
| **Default Value** | None | Can be `nullptr` |
| **Memory** | Doesn't create new location | Creates new location |

### 📝 **Comparison Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int a = 10;

// Reference - alternative name
int &ref = a;  // ref is another name for a

// Pointer - stores address
int *ptr = &a;  // ptr stores address of a

// Changing reference (impossible)
// ref = b;  // Error! Cannot change reference

// Changing pointer (possible)
int b = 20;
ptr = &b;  // Correct! ptr now points to b
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Important Rules for Using Pointers

### ✅ **Correct Rules:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// 1. Pointer must be same type as variable
int a = 10;
int *p = &a;  // ✅ Correct - matching types

// 2. Can define pointer without initialization (initialize later)
int *q;       // ✅ Correct
q = &a;       // ✅ Correct

// 3. Pointer can point to any variable of same type
int x = 5, y = 10;
int *ptr = &x;  // ✅ Points to x
ptr = &y;       // ✅ Now points to y
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### ❌ **Common Errors:**

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// 1. Storing normal value in pointer
int *p = 10;  // ⚠️ Error! Pointer stores addresses only

// 2. Type mismatch
float f = 3.14;
int *p = &f;  // ⚠️ Error! int pointer cannot point to float

// 3. Using uninitialized pointer
int *q;
*q = 10;  // ⚠️ Error! q doesn't point anywhere
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Why Use Pointers?

### 🔍 **Benefits of Pointers:**

1. **Fast Access**: Accessing data by address is faster than searching
2. **Memory Saving**: Instead of copying large object, store its address only
3. **Flexibility**: Can change what pointer points to during runtime
4. **Dynamic Structures**: Foundation for data structures like linked lists

### 💡 **Practical Analogy:**

> **Variable**: Like a 2-ton drug box  
> **Pointer**: Like the box's address and key  
> **Easier**: Give address and key, not carry the box!

---

## Data Types and Pointers

### 📝 **Pointers to Different Types:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Pointers to different types
int integerVar = 10;
int *intPtr = &integerVar;     // Pointer to integer

float floatVar = 3.14;
float *floatPtr = &floatVar;   // Pointer to float

char charVar = 'A';
char *charPtr = &charVar;      // Pointer to character

bool boolVar = true;
bool *boolPtr = &boolVar;      // Pointer to boolean
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Golden Rule:**

> **Pointer must be same type as variable it points to**

---

## Comprehensive Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // Three variables
    int var1 = 100;
    int var2 = 200;
    int var3 = 300;
    
    // Pointer points to var1
    int *ptr = &var1;
    
    cout << "=== Initial State ===" << endl;
    cout << "ptr points to var1" << endl;
    cout << "Value at ptr: " << *ptr << endl;  // We'll learn * later
    cout << "Address in ptr: " << ptr << endl;
    
    // Change pointer direction to var2
    ptr = &var2;
    
    cout << "\n=== After Changing Direction ===" << endl;
    cout << "ptr now points to var2" << endl;
    cout << "Value at ptr: " << *ptr << endl;
    cout << "Address in ptr: " << ptr << endl;
    
    // Change pointer direction to var3
    ptr = &var3;
    
    cout << "\n=== After Changing Direction Again ===" << endl;
    cout << "ptr now points to var3" << endl;
    cout << "Value at ptr: " << *ptr << endl;
    cout << "Address in ptr: " << ptr << endl;
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Note:**
- `*ptr` → We'll learn in next lesson (Dereferencing)
- Gives us value stored at address pointed by pointer

---

## Summary

### 🔑 **Key Points:**

1. **Pointer** is a **regular variable** that stores **address** of another variable
2. **Symbol**: `*` before variable name
3. **Must be** same type as variable it points to
4. **Can change** what it points to during program execution

### 💡 **Pointer Properties:**

1. **Stores addresses only**, not normal values
2. **Has its own address** in memory
3. **Flexible** - can change direction
4. **Fundamental** in advanced programming and data structures

### 📝 **Syntax:**

```cpp
// Define pointer
type *pointerName;

// Initialize pointer
pointerName = &variable;

// Define and initialize in one line
type *pointerName = &variable;
```

### ⚠️ **Warnings:**

1. **Don't store normal value** in pointer
2. **Ensure compatibility** between pointer type and variable type
3. **Don't use uninitialized pointer**



---
*Anas Chetoui* - `@anaschetoui`

</div>