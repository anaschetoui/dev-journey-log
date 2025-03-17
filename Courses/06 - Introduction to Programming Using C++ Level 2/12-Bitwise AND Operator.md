<div dir="rtl" style="text-align: right;">

<a id="arabic-bitwise-and"></a>
[English ↙](#english-bitwise-and)

# 🔢 عامل AND البتيوي (Bitwise AND Operator)

## 🎯 المقدمة

في هذا الدرس، سنتعلم عن **عامل AND البتيوي (Bitwise AND Operator)** في لغة C++. هذا العامل يختلف عن عامل AND المنطقي (Logical AND) الذي تعلمناه سابقاً، ويعمل على مستوى البتات (Bits) للأعداد.

## 💡 المفاهيم الأساسية

### الفرق بين AND المنطقي وAND البتيوي:

| النوع | الرمز | الوظيفة | المستوى |
|:---|:---:|:---|:---|
| **Logical AND** | `&&` | يعمل على القيم المنطقية (true/false) | مستوى القيم |
| **Bitwise AND** | `&` | يعمل على البتات الفردية للأعداد | مستوى البتات |

### ما هو عامل AND البتيوي؟

**عامل AND البتيوي (`&`)** هو عامل في لغة C++ يقوم **بمقارنة كل بت (bit) على حدة** بين عددين، ويعمل عملية AND منطقية على كل زوج من البتات المقابلة.

## 🔍 كيف يعمل عامل AND البتيوي؟

### عملية التحويل والمقارنة:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المثال: 12 & 25

الخطوة 1: تحويل الأعداد إلى النظام الثنائي (Binary)
12 → 00001100  (الثنائي)
25 → 00011001  (الثنائي)

الخطوة 2: تطبيق AND على كل بت مقابل
  00001100  (12)
& 00011001  (25)
---------------
  00001000  (النتيجة)

الخطوة 3: تحويل النتيجة إلى النظام العشري
00001000 → 8  (العشري)

النتيجة النهائية: 12 & 25 = 8
```

</div>

### جدول حقائق AND البتيوي:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Bit A | Bit B | A & B
------|-------|------
  0   |   0   |   0
  0   |   1   |   0
  1   |   0   |   0
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
    
    // استخدام عامل AND البتيوي
    result = a & b;
    
    cout << "12 & 25 = " << result << endl;
    
    return 0;
}
```

</div>

### نتيجة التشغيل:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الإخراج:
12 & 25 = 8
```

</div>

## 🔄 مقارنة بين AND المنطقي وAND البتيوي

### مثال بالمقارنة المباشرة:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 25;
    
    // Bitwise AND (عملية بتوية)
    int bitwiseResult = a & b;
    
    // Logical AND (عملية منطقية)
    bool logicalResult = a && b;
    
    cout << "Bitwise AND (12 & 25): " << bitwiseResult << endl;
    cout << "Logical AND (12 && 25): " << logicalResult << endl;
    
    return 0;
}
```

</div>

### نتيجة المقارنة:

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الإخراج:
Bitwise AND (12 & 25): 8
Logical AND (12 && 25): 1  (أو true)
```

**التفسير:**
- `12 & 25`: يعمل على مستوى البتات → النتيجة: 8
- `12 && 25`: يعمل على القيم المنطقية → 12 (true) و 25 (true) → true → 1

</div>

## 🧮 تحليل تفصيلي لعملية 12 & 25

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

### عملية AND بتوية بتوية:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
المقارنة بتة بتة:
البت 7: 0 & 0 = 0
البت 6: 0 & 0 = 0
البت 5: 0 & 0 = 0
البت 4: 0 & 1 = 0
البت 3: 1 & 1 = 1  ← هذا يعطينا القيمة 8
البت 2: 1 & 0 = 0
البت 1: 0 & 0 = 0
البت 0: 0 & 1 = 0

النتيجة الثنائية: 00001000
التحويل للعشري: 0×128 + 0×64 + 0×32 + 0×16 + 1×8 + 0×4 + 0×2 + 0×1 = 8
```

</div>

## 💡 أمثلة إضافية لفهم أفضل

### المثال 1: 5 & 3

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 5 & 3;
    cout << "5 & 3 = " << result << endl;
    
    return 0;
}
```

**التحليل:**
```
5 → 00000101
3 → 00000011
-----------
   → 00000001 → 1
```
**الإخراج:** `5 & 3 = 1`

</div>

### المثال 2: 15 & 7

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 15 & 7;
    cout << "15 & 7 = " << result << endl;
    
    return 0;
}
```

**التحليل:**
```
15 → 00001111
7  → 00000111
------------
   → 00000111 → 7
```
**الإخراج:** `15 & 7 = 7`

</div>

### المثال 3: 10 & 6

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 10 & 6;
    cout << "10 & 6 = " << result << endl;
    
    return 0;
}
```

**التحليل:**
```
10 → 00001010
6  → 00000110
------------
   → 00000010 → 2
```
**الإخراج:** `10 & 6 = 2`

</div>

## ⚠️ ملاحظات مهمة

### الفروقات الأساسية:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Bitwise AND (&):
   - يعمل على الأعداد الصحيحة
   - يعطي نتيجة رقمية
   - يعمل على مستوى البتات
   - مثال: 12 & 25 = 8

✅ Logical AND (&&):
   - يعمل على القيم المنطقية
   - يعطي true أو false
   - يعمل على مستوى القيم الكاملة
   - مثال: 12 && 25 = true
```

</div>

### متى نستخدم كل نوع؟

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
استخدم Bitwise AND (&) عندما:
- تحتاج التعامل مع البتات الفردية
- تعمل على أعلام (flags) أو أقنعة (masks)
- تريد استخراج أجزاء محددة من الأعداد
- تعمل في برمجة منخفضة المستوى

استخدم Logical AND (&&) عندما:
- تحتاج اتخاذ قرارات شرطية
- تتحقق من شروط متعددة
- تعمل في المنطق البرمجي العادي
- تريد نتيجة true/false فقط
```

</div>

## 📊 الخلاصة

### المفاهيم الرئيسية:

| المفهوم | الشرح |
|:---|:---|
| **Bitwise AND** | عملية AND على مستوى البتات |
| **الرمز** | `&` (علامة واحدة) |
| **المدخلات** | أعداد صحيحة |
| **المخرجات** | عدد صحيح |
| **المستوى** | مستوى البتات (منخفض) |

### خطوات عمل Bitwise AND:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. أخذ عددين صحيحين (مثال: 12 و 25)
2. تحويل كل عدد إلى النظام الثنائي
3. مقارنة كل بت مع البت المقابل
4. تطبيق عملية AND على كل زوج بتات
5. تجميع النتائج في عدد ثنائي جديد
6. تحويل النتيجة إلى النظام العشري
```

</div>

### مثال مرجعي سريع:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Bitwise AND
int x = 12 & 25;  // النتيجة: 8

// Logical AND
bool y = 12 && 25; // النتيجة: true (1)
```

</div>

**تذكر:** عامل AND البتيوي (`&`) أداة قوية للتعامل مع **البيانات على مستوى البتات**، بينما عامل AND المنطقي (`&&`) للتعامل مع **القرارات والمنطق** في برامجك! 🔢

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

<a id="english-bitwise-and"></a>
[العربية ↗](#arabic-bitwise-and)

# 🔢 Bitwise AND Operator

## 🎯 Introduction

In this lesson, we'll learn about the **Bitwise AND Operator** in C++. This operator is different from the Logical AND operator we learned previously, and it works at the bit level of numbers.

## 💡 Core Concepts

### Difference Between Logical AND and Bitwise AND:

| Type | Symbol | Function | Level |
|:---|:---:|:---|:---|
| **Logical AND** | `&&` | Works on logical values (true/false) | Value level |
| **Bitwise AND** | `&` | Works on individual bits of numbers | Bit level |

### What is the Bitwise AND Operator?

The **Bitwise AND operator (`&`)** is an operator in C++ that **compares each bit individually** between two numbers, performing a logical AND operation on each pair of corresponding bits.

## 🔍 How Does Bitwise AND Work?

### Conversion and Comparison Process:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Example: 12 & 25

Step 1: Convert numbers to Binary system
12 → 00001100  (Binary)
25 → 00011001  (Binary)

Step 2: Apply AND on each corresponding bit
  00001100  (12)
& 00011001  (25)
---------------
  00001000  (Result)

Step 3: Convert result to Decimal system
00001000 → 8  (Decimal)

Final Result: 12 & 25 = 8
```

</div>

### Bitwise AND Truth Table:

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Bit A | Bit B | A & B
------|-------|------
  0   |   0   |   0
  0   |   1   |   0
  1   |   0   |   0
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
    
    // Using Bitwise AND operator
    result = a & b;
    
    cout << "12 & 25 = " << result << endl;
    
    return 0;
}
```

</div>

### Execution Result:

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Output:
12 & 25 = 8
```

</div>

## 🔄 Comparison Between Logical AND and Bitwise AND

### Direct Comparison Example:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 25;
    
    // Bitwise AND (bit-level operation)
    int bitwiseResult = a & b;
    
    // Logical AND (logical operation)
    bool logicalResult = a && b;
    
    cout << "Bitwise AND (12 & 25): " << bitwiseResult << endl;
    cout << "Logical AND (12 && 25): " << logicalResult << endl;
    
    return 0;
}
```

</div>

### Comparison Result:

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Output:
Bitwise AND (12 & 25): 8
Logical AND (12 && 25): 1  (or true)
```

**Explanation:**
- `12 & 25`: Works at bit level → Result: 8
- `12 && 25`: Works at logical level → 12 (true) and 25 (true) → true → 1

</div>

## 🧮 Detailed Analysis of 12 & 25 Operation

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

### Bit-by-Bit AND Operation:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Bit-by-bit comparison:
Bit 7: 0 & 0 = 0
Bit 6: 0 & 0 = 0
Bit 5: 0 & 0 = 0
Bit 4: 0 & 1 = 0
Bit 3: 1 & 1 = 1  ← This gives us value 8
Bit 2: 1 & 0 = 0
Bit 1: 0 & 0 = 0
Bit 0: 0 & 1 = 0

Binary result: 00001000
Convert to decimal: 0×128 + 0×64 + 0×32 + 0×16 + 1×8 + 0×4 + 0×2 + 0×1 = 8
```

</div>

## 💡 Additional Examples for Better Understanding

### Example 1: 5 & 3

<div dir="ltr" style="text-align: left; background-color: #e8f6f3; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 5 & 3;
    cout << "5 & 3 = " << result << endl;
    
    return 0;
}
```

**Analysis:**
```
5 → 00000101
3 → 00000011
-----------
   → 00000001 → 1
```
**Output:** `5 & 3 = 1`

</div>

### Example 2: 15 & 7

<div dir="ltr" style="text-align: left; background-color: #fef9e7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 15 & 7;
    cout << "15 & 7 = " << result << endl;
    
    return 0;
}
```

**Analysis:**
```
15 → 00001111
7  → 00000111
------------
   → 00000111 → 7
```
**Output:** `15 & 7 = 7`

</div>

### Example 3: 10 & 6

<div dir="ltr" style="text-align: left; background-color: #fff0f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int result = 10 & 6;
    cout << "10 & 6 = " << result << endl;
    
    return 0;
}
```

**Analysis:**
```
10 → 00001010
6  → 00000110
------------
   → 00000010 → 2
```
**Output:** `10 & 6 = 2`

</div>

## ⚠️ Important Notes

### Basic Differences:

<div dir="ltr" style="text-align: left; background-color: #f4ecf7; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Bitwise AND (&):
   - Works on integers
   - Gives numeric result
   - Works at bit level
   - Example: 12 & 25 = 8

✅ Logical AND (&&):
   - Works on logical values
   - Gives true or false
   - Works at full value level
   - Example: 12 && 25 = true
```

</div>

### When to Use Each Type?

<div dir="ltr" style="text-align: left; background-color: #fbeeee; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Use Bitwise AND (&) when:
- You need to work with individual bits
- Working with flags or masks
- Want to extract specific parts of numbers
- Working in low-level programming

Use Logical AND (&&) when:
- You need to make conditional decisions
- Checking multiple conditions
- Working in normal program logic
- Want only true/false result
```

</div>

## 📊 Summary

### Key Concepts:

| Concept | Explanation |
|:---|:---|
| **Bitwise AND** | AND operation at bit level |
| **Symbol** | `&` (single ampersand) |
| **Inputs** | Integer numbers |
| **Outputs** | Integer number |
| **Level** | Bit level (low-level) |

### Bitwise AND Operation Steps:

<div dir="ltr" style="text-align: left; background-color: #eafaf1; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Take two integer numbers (example: 12 and 25)
2. Convert each number to binary system
3. Compare each bit with corresponding bit
4. Apply AND operation on each bit pair
5. Collect results in new binary number
6. Convert result to decimal system
```

</div>

### Quick Reference Example:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// Bitwise AND
int x = 12 & 25;  // Result: 8

// Logical AND
bool y = 12 && 25; // Result: true (1)
```

</div>

**Remember:** The Bitwise AND operator (`&`) is a powerful tool for working with **data at the bit level**, while the Logical AND operator (`&&`) is for dealing with **decisions and logic** in your programs! 🔢

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>