<div dir="rtl" style="text-align: right;">

<a id="arabic-validate-number"></a>
[English ↙](#english-validate-number)

# ✅ التحقق من صحة الرقم (Validate Number)

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيفية **التحقق من صحة المدخلات الرقمية** في لغة C++. سنتعلم كيف نمنع المستخدم من إدخال أحرف أو رموز غير صحيحة عند طلب رقم منه.

## 💡 المفاهيم الأساسية

### لماذا نحتاج التحقق من المدخلات؟

عندما نطلب من المستخدم إدخال رقم، قد يقوم بإدخال **أحرف أو رموز غير رقمية** مثل الحرف 'A'. هذا قد يتسبب في أخطاء في البرنامج. لذلك نحتاج للتحقق من أن المدخل هو رقم صحيح.

### المشكلة الشائعة:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المشكلة:
- نطلب من المستخدم: "Please enter a number"
- المستخدم يدخل: 'A' (حرف)
- البرنامج يتعطل أو يعطي نتائج خاطئة

الحل:
- التحقق من أن المدخل رقم صحيح
- إذا كان خطأ، نطلب من المستخدم إعادة الإدخال
- نكرر حتى يدخل المستخدم رقم صحيح
```

</div>

## 💻 مثال عملي: برنامج التحقق من الرقم

### الكود الكامل:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <limits>
using namespace std;

int readNumber() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    
    while (cin.fail()) {
        cin.clear();  // مسح حالة الخطأ
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // تجاهل المدخل الخاطئ
        
        cout << "Invalid number. Please enter a valid one: ";
        cin >> number;
    }
    
    return number;
}

int main() {
    int num = readNumber();
    cout << "Your number is: " << num << endl;
    
    return 0;
}
```

</div>

## 🔍 شرح تفصيلي للكود

### الجزء 1: دالة قراءة الرقم مع التحقق

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int readNumber() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;
```
**الوظيفة:**
- تعريف متغير `number` لتخزين الرقم
- طباعة رسالة للمستخدم لطلب إدخال رقم
- قراءة المدخل من المستخدم وتخزينه في `number`

</div>

### الجزء 2: التحقق من صحة المدخل

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
    while (cin.fail()) {
```
**الشرط:**
- `cin.fail()` ترجع `true` إذا فشلت عملية القراءة
- الفشل يحدث عندما يدخل المستخدم شيئاً غير رقم (مثل 'A')
- إذا كان `true`، ندخل في الحلقة للتعامل مع الخطأ

</div>

### الجزء 3: معالجة الخطأ

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
        cin.clear();
```
**الوظيفة:**
- `cin.clear()` تمسح حالة الخطأ (error state)
- بدون هذه الدالة، يبقى `cin` في حالة خطأ ولا يقبل مدخلات جديدة
- ضرورية للاستمرار في قراءة المدخلات بعد الخطأ

</div>

### الجزء 4: تجاهل المدخل الخاطئ

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
```
**الوظيفة:**
- `cin.ignore()` تتجاهل المدخلات السابقة في buffer
- `numeric_limits<streamsize>::max()`: تجاهل العدد الأقصى من الأحرف
- `'\n'`: تتوقف عند نهاية السطر (Enter)
- ضرورية لمنع التكرار اللانهائي للخطأ

</div>

### الجزء 5: طلب الإدخال مرة أخرى

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
        cout << "Invalid number. Please enter a valid one: ";
        cin >> number;
    }
    
    return number;
}
```
**الوظيفة:**
- طباعة رسالة خطأ للمستخدم
- طلب إدخال رقم جديد
- تكرار الحلقة حتى يدخل المستخدم رقم صحيح
- إرجاع الرقم الصحيح في النهاية

</div>

## 🎯 سيناريوهات التشغيل

### السيناريو 1: إدخال رقم صحيح مباشرة

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الإدخال: 10
المخرجات:
Please enter a number: 10
Your number is: 10

التفسير:
- cin >> number يقرأ الرقم 10 بنجاح
- cin.fail() ترجع false
- لا ندخل في while loop
- نرجع الرقم مباشرة
```

</div>

### السيناريو 2: إدخال حرف 'A'

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الإدخال: A
المخرجات:
Please enter a number: A
Invalid number. Please enter a valid one: 

التفسير:
- cin >> number يفشل في قراءة 'A' كرقم
- cin.fail() ترجع true
- ندخل في while loop
- ننفذ cin.clear() و cin.ignore()
- نطلب إدخال جديد
```

</div>

### السيناريو 3: إدخال عدة أحرف ثم رقم

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الإدخال: abc (ثم) 123
المخرجات:
Please enter a number: abc
Invalid number. Please enter a valid one: 123
Your number is: 123

التفسير:
- أول إدخال 'abc' يسبب فشل
- نحذف الخطأ ونتجاهل 'abc'
- نطلب إدخال جديد
- الإدخال الثاني '123' مقبول
```

</div>

## ⚠️ أهمية cin.ignore()

### ماذا يحدث بدون cin.ignore()؟

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
بدون cin.ignore():
- الإدخال: aaa
- cin يقرأ أول 'a' ويفشل
- cin.clear() تمسح الخطأ
- لكن 'aa' المتبقية تبقى في buffer
- cin >> number تحاول قراءة 'a' التالية
- تتكرر الحلقة إلى ما لا نهاية

مع cin.ignore():
- الإدخال: aaa
- نتجاهل كل 'aaa' حتى نهاية السطر
- نطلب إدخال جديد نظيف
```

</div>

### معنى المتغيرات في cin.ignore():

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
cin.ignore(numeric_limits<streamsize>::max(), '\n');

1. numeric_limits<streamsize>::max()
   - أكبر عدد ممكن من الأحرف لتجاهله
   - يضمن تجاهل كل المحتوى المتبقي

2. '\n'
   - حرف نهاية السطر (Enter)
   - تتوقف عند هذا الحرف
   - تضمن تجاهل السطر الحالي فقط
```

</div>

## 💡 تحسينات على الكود

### إضافة حدود للرقم (Optional):

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int readNumberInRange(int min, int max) {
    int number;
    cout << "Please enter a number between " << min << " and " << max << ": ";
    cin >> number;
    
    while (cin.fail() || number < min || number > max) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Invalid number. Please enter a number between " 
             << min << " and " << max << ": ";
        cin >> number;
    }
    
    return number;
}
```

</div>

### استخدام الدالة في البرنامج الرئيسي:

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    // قراءة رقم مع تحقق أساسي
    int age = readNumber();
    cout << "Age: " << age << endl;
    
    // قراءة رقم ضمن نطاق محدد
    int score = readNumberInRange(0, 100);
    cout << "Score: " << score << endl;
    
    return 0;
}
```

</div>

## 🔧 مكتبة limits

### لماذا نحتاج #include <limits>؟

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الغرض من <limits>:
- تحتوي على numeric_limits
- numeric_limits<streamsize>::max()
- تعطي أكبر قيمة ممكنة لـ streamsize
- تضمن تجاهل جميع الأحرف المتبقية في buffer
- بدونها، قد لا نتمكن من تجاهل جميع المدخلات الطويلة
```

</div>

### بديل بسيط بدون limits:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// بديل باستخدام رقم كبير ثابت
cin.ignore(1000, '\n');

// أو تجاهل حتى نهاية السطر فقط
cin.ignore('\n');
```

**ملاحظة:** استخدام `numeric_limits` أكثر أماناً لأنه يتعامل مع أي طول للمدخلات.

## 📝 نصائح عملية

### نصائح لكتابة كود تحقق قوي:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. دائماً تحقق من cin.fail() بعد القراءة
2. استخدم cin.clear() لمسح حالة الخطأ
3. استخدم cin.ignore() لتجاهل المدخلات غير الصالحة
4. كرر الطلب حتى يحصل المستخدم على إدخال صحيح
5. قدم رسائل خطأ واضحة للمستخدم
6. فكر في حدود المدخلات (أرقام موجبة، نطاق معين، إلخ)
```

</div>

### هيكل التحقق النموذجي:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. اقرأ المدخل من المستخدم
2. إذا (فشل القراءة) {
   - امسح حالة الخطأ
   - تجاهل المدخلات غير الصالحة
   - اعرض رسالة خطأ
   - اطلب إدخالاً جديداً
   - كرر من الخطوة 2
}
3. إذا (المدخل خارج النطاق المطلوب) {
   - اعرض رسالة خطأ
   - اطلب إدخالاً جديداً
   - كرر من الخطوة 2
}
4. أرجع المدخل الصحيح
```

</div>

## 🎯 الخلاصة

### الدوال الأساسية المستخدمة:

| الدالة | الوظيفة |
|:---|:---|
| **cin.fail()** | التحقق إذا فشلت عملية القراءة |
| **cin.clear()** | مسح حالة الخطأ في cin |
| **cin.ignore()** | تجاهل المدخلات في buffer |
| **numeric_limits** | الحصول على القيم الحدية للأنواع |

### خطوات التحقق من الرقم:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. cin >> number           ← قراءة الرقم
2. while (cin.fail())      ← التحقق من الفشل
3. cin.clear()            ← مسح الخطأ
4. cin.ignore(...)        ← تجاهل المدخل الخاطئ
5. طلب إدخال جديد        ← إعادة المحاولة
6. return number          ← إرجاع الرقم الصحيح
```

</div>

**تذكر:** التحقق من المدخلات يجعل برامجك **أكثر قوة وأقل عرضة للأخطاء**، ويوفر **تجربة مستخدم أفضل**! ✅

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

<a id="english-validate-number"></a>
[العربية ↗](#arabic-validate-number)

# ✅ Validate Number

## 🎯 Introduction

In this lesson, we'll learn how to **validate numeric inputs** in C++. We'll learn how to prevent users from entering incorrect characters or symbols when asking for a number.

## 💡 Core Concepts

### Why Do We Need Input Validation?

When we ask a user to enter a number, they might enter **non-numeric characters or symbols** like the letter 'A'. This can cause errors in the program. Therefore, we need to verify that the input is a valid number.

### Common Problem:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Problem:
- We ask user: "Please enter a number"
- User enters: 'A' (letter)
- Program crashes or gives wrong results

Solution:
- Verify that input is a valid number
- If wrong, ask user to re-enter
- Repeat until user enters valid number
```

</div>

## 💻 Practical Example: Number Validation Program

### Complete Code:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <limits>
using namespace std;

int readNumber() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    
    while (cin.fail()) {
        cin.clear();  // Clear error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore wrong input
        
        cout << "Invalid number. Please enter a valid one: ";
        cin >> number;
    }
    
    return number;
}

int main() {
    int num = readNumber();
    cout << "Your number is: " << num << endl;
    
    return 0;
}
```

</div>

## 🔍 Detailed Code Explanation

### Part 1: Number Reading Function with Validation

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int readNumber() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;
```
**Function:**
- Define variable `number` to store the number
- Print message to user asking for number input
- Read input from user and store in `number`

</div>

### Part 2: Input Validation Check

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
    while (cin.fail()) {
```
**Condition:**
- `cin.fail()` returns `true` if reading operation failed
- Failure happens when user enters non-numeric value (like 'A')
- If `true`, enter loop to handle error

</div>

### Part 3: Error Handling

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
        cin.clear();
```
**Function:**
- `cin.clear()` clears error state
- Without this function, `cin` remains in error state and won't accept new inputs
- Essential to continue reading inputs after error

</div>

### Part 4: Ignoring Wrong Input

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
```
**Function:**
- `cin.ignore()` ignores previous inputs in buffer
- `numeric_limits<streamsize>::max()`: ignore maximum possible characters
- `'\n'`: stop at end of line (Enter)
- Essential to prevent infinite error loop

</div>

### Part 5: Requesting Input Again

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
        cout << "Invalid number. Please enter a valid one: ";
        cin >> number;
    }
    
    return number;
}
```
**Function:**
- Print error message to user
- Request new number input
- Repeat loop until user enters valid number
- Return correct number at the end

</div>

## 🎯 Operation Scenarios

### Scenario 1: Direct Valid Number Input

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Input: 10
Output:
Please enter a number: 10
Your number is: 10

Explanation:
- cin >> number successfully reads number 10
- cin.fail() returns false
- Don't enter while loop
- Return number directly
```

</div>

### Scenario 2: Entering Letter 'A'

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Input: A
Output:
Please enter a number: A
Invalid number. Please enter a valid one: 

Explanation:
- cin >> number fails to read 'A' as number
- cin.fail() returns true
- Enter while loop
- Execute cin.clear() and cin.ignore()
- Request new input
```

</div>

### Scenario 3: Entering Multiple Letters Then Number

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Input: abc (then) 123
Output:
Please enter a number: abc
Invalid number. Please enter a valid one: 123
Your number is: 123

Explanation:
- First input 'abc' causes failure
- Clear error and ignore 'abc'
- Request new input
- Second input '123' accepted
```

</div>

## ⚠️ Importance of cin.ignore()

### What Happens Without cin.ignore()?

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Without cin.ignore():
- Input: aaa
- cin reads first 'a' and fails
- cin.clear() clears error
- But remaining 'aa' stays in buffer
- cin >> number tries to read next 'a'
- Loop repeats infinitely

With cin.ignore():
- Input: aaa
- Ignore all 'aaa' until end of line
- Request clean new input
```

</div>

### Meaning of Variables in cin.ignore():

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
cin.ignore(numeric_limits<streamsize>::max(), '\n');

1. numeric_limits<streamsize>::max()
   - Maximum possible characters to ignore
   - Ensures ignoring all remaining content

2. '\n'
   - End of line character (Enter)
   - Stop at this character
   - Ensure ignoring only current line
```

</div>

## 💡 Code Improvements

### Adding Number Range (Optional):

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int readNumberInRange(int min, int max) {
    int number;
    cout << "Please enter a number between " << min << " and " << max << ": ";
    cin >> number;
    
    while (cin.fail() || number < min || number > max) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Invalid number. Please enter a number between " 
             << min << " and " << max << ": ";
        cin >> number;
    }
    
    return number;
}
```

</div>

### Using Function in Main Program:

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
int main() {
    // Reading number with basic validation
    int age = readNumber();
    cout << "Age: " << age << endl;
    
    // Reading number within specific range
    int score = readNumberInRange(0, 100);
    cout << "Score: " << score << endl;
    
    return 0;
}
```

</div>

## 🔧 Limits Library

### Why Do We Need #include <limits>?

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Purpose of <limits>:
- Contains numeric_limits
- numeric_limits<streamsize>::max()
- Gives maximum possible value for streamsize
- Ensures ignoring all remaining characters in buffer
- Without it, might not be able to ignore all long inputs
```

</div>

### Simple Alternative Without limits:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Alternative using fixed large number
cin.ignore(1000, '\n');

// Or ignore until end of line only
cin.ignore('\n');
```

**Note:** Using `numeric_limits` is safer as it handles any input length.

## 📝 Practical Tips

### Tips for Writing Robust Validation Code:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Always check cin.fail() after reading
2. Use cin.clear() to clear error state
3. Use cin.ignore() to ignore invalid inputs
4. Repeat request until user gets correct input
5. Provide clear error messages to user
6. Consider input limits (positive numbers, specific range, etc.)
```

</div>

### Typical Validation Structure:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Read input from user
2. If (reading failed) {
   - Clear error state
   - Ignore invalid inputs
   - Display error message
   - Request new input
   - Repeat from step 2
}
3. If (input outside required range) {
   - Display error message
   - Request new input
   - Repeat from step 2
}
4. Return valid input
```

</div>

## 🎯 Summary

### Basic Functions Used:

| Function | Purpose |
|:---|:---|
| **cin.fail()** | Check if reading operation failed |
| **cin.clear()** | Clear error state in cin |
| **cin.ignore()** | Ignore inputs in buffer |
| **numeric_limits** | Get limit values for types |

### Number Validation Steps:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. cin >> number           ← Read number
2. while (cin.fail())      ← Check for failure
3. cin.clear()            ← Clear error
4. cin.ignore(...)        ← Ignore wrong input
5. Request new input      ← Try again
6. return number          ← Return correct number
```

</div>

**Remember:** Input validation makes your programs **more robust and less error-prone**, and provides **better user experience**! ✅

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>