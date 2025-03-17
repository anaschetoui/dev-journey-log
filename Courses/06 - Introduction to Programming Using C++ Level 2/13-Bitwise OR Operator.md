<div dir="rtl" style="text-align: right;">

<a id="arabic-bitwise-or"></a>
[English ↙](#english-bitwise-or)

# 🔢 عامل OR البتيوي (Bitwise OR Operator)

## 🎯 المقدمة

في هذا الدرس، سنتعلم عن **عامل OR البتيوي (Bitwise OR Operator)** في لغة C++. هذا العامل يختلف عن عامل OR المنطقي (Logical OR) الذي تعلمناه سابقاً، ويعمل على مستوى البتات (Bits) للأعداد.

## 💡 المفاهيم الأساسية

### الفرق بين OR المنطقي وOR البتيوي:

| النوع | الرمز | الوظيفة | المستوى |
|:---|:---:|:---|:---|
| **Logical OR** | `||` | يعمل على القيم المنطقية (true/false) | مستوى القيم |
| **Bitwise OR** | `|` | يعمل على البتات الفردية للأعداد | مستوى البتات |

### ما هو عامل OR البتيوي؟

**عامل OR البتيوي (`|`)** هو عامل في لغة C++ يقوم **بمقارنة كل بت (bit) على حدة** بين عددين، ويعمل عملية OR منطقية على كل زوج من البتات المقابلة.

## 🔍 كيف يعمل عامل OR البتيوي؟

### عملية التحويل والمقارنة:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المثال: 12 | 25

الخطوة 1: تحويل الأعداد إلى النظام الثنائي (Binary)
12 → 00001100  (الثنائي)
25 → 00011001  (الثنائي)

الخطوة 2: تطبيق OR على كل بت مقابل
  00001100  (12)
| 00011001  (25)
---------------
  00011101  (النتيجة)

الخطوة 3: تحويل النتيجة إلى النظام العشري
00011101 → 29  (العشري)

النتيجة النهائية: 12 | 25 = 29
```

</div>

### جدول حقائق OR البتيوي:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Bit A | Bit B | A | B
------|-------|------
  0   |   0   |   0
  0   |   1   |   1
  1   |   0   |   1
  1   |   1   |   1
```

</div>

## 💻 مثال عملي في C++

### الكود الأساسي:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 25;
    int result;
    
    // استخدام عامل OR البتيوي
    result = a | b;
    
    cout << "12 | 25 = " << result << endl;
    
    return 0;
}
```

</div>

### نتيجة التشغيل:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الإخراج:
12 | 25 = 29
```

</div>

## 🔄 مقارنة بين OR المنطقي وOR البتيوي

### مثال بالمقارنة المباشرة:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 25;
    
    // Bitwise OR (عملية بتوية)
    int bitwiseResult = a | b;
    
    // Logical OR (عملية منطقية)
    bool logicalResult = a || b;
    
    cout << "Bitwise OR (12 | 25): " << bitwiseResult << endl;
    cout << "Logical OR (12 || 25): " << logicalResult << endl;
    
    return 0;
}
```

</div>

### نتيجة المقارنة:

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الإخراج:
Bitwise OR (12 | 25): 29
Logical OR (12 || 25): 1  (أو true)
```

**التفسير:**
- `12 | 25`: يعمل على مستوى البتات → النتيجة: 29
- `12 || 25`: يعمل على القيم المنطقية → 12 (true) و 25 (true) → true → 1

</div>

## 🧮 تحليل تفصيلي لعملية 12 | 25

### التحويل الثنائي المفصل:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
العدد 12 في النظام الثنائي:
12 ÷ 2 = 6  الباقي 0  ← LSB (أقل بت أهمية)
6 ÷ 2 = 3   الباقي 0
3 ÷ 2 = 1   الباقي 1
1 ÷ 2 = 0   الباقي 1  ← MSB (أكثر بت أهمية)
النتيجة: 1100 ← نكمل بالأصفار: 00001100

العدد 25 في النظام الثنائي:
25 ÷ 2 = 12 الباقي 1  ← LSB
12 ÷ 2 = 6  الباقي 0
6 ÷ 2 = 3   الباقي 0
3 ÷ 2 = 1   الباقي 1
1 ÷ 2 = 0   الباقي 1  ← MSB
النتيجة: 11001 ← نكمل بالأصفار: 00011001
```

</div>

### عملية OR بتوية بتوية:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المقارنة بتة بتة:
البت 7: 0 | 0 = 0
البت 6: 0 | 0 = 0
البت 5: 0 | 0 = 0
البت 4: 0 | 1 = 1
البت 3: 1 | 1 = 1
البت 2: 1 | 0 = 1
البت 1: 0 | 0 = 0
البت 0: 0 | 1 = 1

النتيجة الثنائية: 00011101
التحويل للعشري: 0×128 + 0×64 + 0×32 + 1×16 + 1×8 + 1×4 + 0×2 + 1×1 = 29
```

</div>

## 💡 أمثلة إضافية لفهم أفضل

### المثال 1: 5 | 3

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 5 | 3;
    cout << "5 | 3 = " << result << endl;
    
    return 0;
}
```

**التحليل:**
```
5 → 00000101
3 → 00000011
-----------
   → 00000111 → 7
```
**الإخراج:** `5 | 3 = 7`

</div>

### المثال 2: 15 | 7

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 15 | 7;
    cout << "15 | 7 = " << result << endl;
    
    return 0;
}
```

**التحليل:**
```
15 → 00001111
7  → 00000111
------------
   → 00001111 → 15
```
**الإخراج:** `15 | 7 = 15`

</div>

### المثال 3: 10 | 6

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 10 | 6;
    cout << "10 | 6 = " << result << endl;
    
    return 0;
}
```

**التحليل:**
```
10 → 00001010
6  → 00000110
------------
   → 00001110 → 14
```
**الإخراج:** `10 | 6 = 14`

</div>

## ⚠️ ملاحظات مهمة

### الفروقات الأساسية:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Bitwise OR (|):
   - يعمل على الأعداد الصحيحة
   - يعطي نتيجة رقمية
   - يعمل على مستوى البتات
   - مثال: 12 | 25 = 29

✅ Logical OR (||):
   - يعمل على القيم المنطقية
   - يعطي true أو false
   - يعمل على مستوى القيم الكاملة
   - مثال: 12 || 25 = true
```

</div>

### متى نستخدم كل نوع؟

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
استخدم Bitwise OR (|) عندما:
- تحتاج دمج البتات من مصدرين مختلفين
- تعمل على أعلام (flags) أو أقنعة (masks)
- تريد تفعيل خيارات متعددة
- تعمل في برمجة منخفضة المستوى

استخدم Logical OR (||) عندما:
- تحتاج التحقق من شروط متعددة
- تريد true إذا تحقق أي شرط
- تعمل في المنطق البرمجي العادي
- تريد نتيجة true/false فقط
```

</div>

## 📊 الخلاصة

### المفاهيم الرئيسية:

| المفهوم | الشرح |
|:---|:---|
| **Bitwise OR** | عملية OR على مستوى البتات |
| **الرمز** | `|` (علامة واحدة) |
| **المدخلات** | أعداد صحيحة |
| **المخرجات** | عدد صحيح |
| **المستوى** | مستوى البتات (منخفض) |

### خطوات عمل Bitwise OR:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. أخذ عددين صحيحين (مثال: 12 و 25)
2. تحويل كل عدد إلى النظام الثنائي
3. مقارنة كل بت مع البت المقابل
4. تطبيق عملية OR على كل زوج بتات
5. تجميع النتائج في عدد ثنائي جديد
6. تحويل النتيجة إلى النظام العشري
```

</div>

### مثال مرجعي سريع:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Bitwise OR
int x = 12 | 25;  // النتيجة: 29

// Logical OR
bool y = 12 || 25; // النتيجة: true (1)
```

</div>

**تذكر:** عامل OR البتيوي (`|`) أداة قوية لـ **دمج البتات** من مصادر مختلفة، بينما عامل OR المنطقي (`||`) للتحقق من **شروط متعددة** في برامجك! 🔢

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

<a id="english-bitwise-or"></a>
[العربية ↗](#arabic-bitwise-or)

# 🔢 Bitwise OR Operator

## 🎯 Introduction

In this lesson, we'll learn about the **Bitwise OR Operator** in C++. This operator is different from the Logical OR operator we learned previously, and it works at the bit level of numbers.

## 💡 Core Concepts

### Difference Between Logical OR and Bitwise OR:

| Type | Symbol | Function | Level |
|:---|:---:|:---|:---|
| **Logical OR** | `||` | Works on logical values (true/false) | Value level |
| **Bitwise OR** | `|` | Works on individual bits of numbers | Bit level |

### What is the Bitwise OR Operator?

The **Bitwise OR operator (`|`)** is an operator in C++ that **compares each bit individually** between two numbers, performing a logical OR operation on each pair of corresponding bits.

## 🔍 How Does Bitwise OR Work?

### Conversion and Comparison Process:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Example: 12 | 25

Step 1: Convert numbers to Binary system
12 → 00001100  (Binary)
25 → 00011001  (Binary)

Step 2: Apply OR on each corresponding bit
  00001100  (12)
| 00011001  (25)
---------------
  00011101  (Result)

Step 3: Convert result to Decimal system
00011101 → 29  (Decimal)

Final Result: 12 | 25 = 29
```

</div>

### Bitwise OR Truth Table:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Bit A | Bit B | A | B
------|-------|------
  0   |   0   |   0
  0   |   1   |   1
  1   |   0   |   1
  1   |   1   |   1
```

</div>

## 💻 Practical Example in C++

### Basic Code:

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 25;
    int result;
    
    // Using Bitwise OR operator
    result = a | b;
    
    cout << "12 | 25 = " << result << endl;
    
    return 0;
}
```

</div>

### Execution Result:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Output:
12 | 25 = 29
```

</div>

## 🔄 Comparison Between Logical OR and Bitwise OR

### Direct Comparison Example:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 25;
    
    // Bitwise OR (bit-level operation)
    int bitwiseResult = a | b;
    
    // Logical OR (logical operation)
    bool logicalResult = a || b;
    
    cout << "Bitwise OR (12 | 25): " << bitwiseResult << endl;
    cout << "Logical OR (12 || 25): " << logicalResult << endl;
    
    return 0;
}
```

</div>

### Comparison Result:

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Output:
Bitwise OR (12 | 25): 29
Logical OR (12 || 25): 1  (or true)
```

**Explanation:**
- `12 | 25`: Works at bit level → Result: 29
- `12 || 25`: Works at logical level → 12 (true) and 25 (true) → true → 1

</div>

## 🧮 Detailed Analysis of 12 | 25 Operation

### Detailed Binary Conversion:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Number 12 in Binary system:
12 ÷ 2 = 6  Remainder 0  ← LSB (Least Significant Bit)
6 ÷ 2 = 3   Remainder 0
3 ÷ 2 = 1   Remainder 1
1 ÷ 2 = 0   Remainder 1  ← MSB (Most Significant Bit)
Result: 1100 ← Complete with zeros: 00001100

Number 25 in Binary system:
25 ÷ 2 = 12 Remainder 1  ← LSB
12 ÷ 2 = 6  Remainder 0
6 ÷ 2 = 3   Remainder 0
3 ÷ 2 = 1   Remainder 1
1 ÷ 2 = 0   Remainder 1  ← MSB
Result: 11001 ← Complete with zeros: 00011001
```

</div>

### Bit-by-Bit OR Operation:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Bit-by-bit comparison:
Bit 7: 0 | 0 = 0
Bit 6: 0 | 0 = 0
Bit 5: 0 | 0 = 0
Bit 4: 0 | 1 = 1
Bit 3: 1 | 1 = 1
Bit 2: 1 | 0 = 1
Bit 1: 0 | 0 = 0
Bit 0: 0 | 1 = 1

Binary result: 00011101
Convert to decimal: 0×128 + 0×64 + 0×32 + 1×16 + 1×8 + 1×4 + 0×2 + 1×1 = 29
```

</div>

## 💡 Additional Examples for Better Understanding

### Example 1: 5 | 3

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 5 | 3;
    cout << "5 | 3 = " << result << endl;
    
    return 0;
}
```

**Analysis:**
```
5 → 00000101
3 → 00000011
-----------
   → 00000111 → 7
```
**Output:** `5 | 3 = 7`

</div>

### Example 2: 15 | 7

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 15 | 7;
    cout << "15 | 7 = " << result << endl;
    
    return 0;
}
```

**Analysis:**
```
15 → 00001111
7  → 00000111
------------
   → 00001111 → 15
```
**Output:** `15 | 7 = 15`

</div>

### Example 3: 10 | 6

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 10 | 6;
    cout << "10 | 6 = " << result << endl;
    
    return 0;
}
```

**Analysis:**
```
10 → 00001010
6  → 00000110
------------
   → 00001110 → 14
```
**Output:** `10 | 6 = 14`

</div>

## ⚠️ Important Notes

### Basic Differences:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Bitwise OR (|):
   - Works on integers
   - Gives numeric result
   - Works at bit level
   - Example: 12 | 25 = 29

✅ Logical OR (||):
   - Works on logical values
   - Gives true or false
   - Works at full value level
   - Example: 12 || 25 = true
```

</div>

### When to Use Each Type?

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Use Bitwise OR (|) when:
- You need to combine bits from different sources
- Working with flags or masks
- Want to enable multiple options
- Working in low-level programming

Use Logical OR (||) when:
- You need to check multiple conditions
- Want true if any condition is met
- Working in normal program logic
- Want only true/false result
```

</div>

## 📊 Summary

### Key Concepts:

| Concept | Explanation |
|:---|:---|
| **Bitwise OR** | OR operation at bit level |
| **Symbol** | `|` (single pipe) |
| **Inputs** | Integer numbers |
| **Outputs** | Integer number |
| **Level** | Bit level (low-level) |

### Bitwise OR Operation Steps:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Take two integer numbers (example: 12 and 25)
2. Convert each number to binary system
3. Compare each bit with corresponding bit
4. Apply OR operation on each bit pair
5. Collect results in new binary number
6. Convert result to decimal system
```

</div>

### Quick Reference Example:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Bitwise OR
int x = 12 | 25;  // Result: 29

// Logical OR
bool y = 12 || 25; // Result: true (1)
```

</div>

**Remember:** The Bitwise OR operator (`|`) is a powerful tool for **combining bits** from different sources, while the Logical OR operator (`||`) is for checking **multiple conditions** in your programs! 🔢

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>