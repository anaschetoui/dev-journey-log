<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right;">

# الدرس الخامس: النظام السادس عشر في الكمبيوتر

## مقدمة

**النظام السادس عشر (Hexadecimal)** يعتبر من أهم أنظمة العد في الكمبيوتر بعد النظام الثنائي. وهو نظام وسيط يسهل على المبرمجين قراءة وفهم البيانات المخزنة في شكل ثنائي.

---

## ما هو النظام السادس عشر؟

### التعريف الأساسي
- **النظام السادس عشر**: نظام عد يعتمد على 16 رمزاً مختلفاً
- **الأساس (Base)**: 16 (لذلك يُسمى Base 16)
- **الرموز**: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F

### مقارنة أنظمة العد

| النظام | الأساس | الرموز المستخدمة |
|--------|-------|------------------|
| العشري (Decimal) | 10 | 0-9 |
| الثنائي (Binary) | 2 | 0, 1 |
| السادس عشر (Hexadecimal) | 16 | 0-9, A-F |

### جدول تحويل الأرقام الأساسية

| العشري | السادس عشر | الثنائي |
|--------|------------|---------|
| 0 | 0 | 0000 |
| 1 | 1 | 0001 |
| 2 | 2 | 0010 |
| 3 | 3 | 0011 |
| 4 | 4 | 0100 |
| 5 | 5 | 0101 |
| 6 | 6 | 0110 |
| 7 | 7 | 0111 |
| 8 | 8 | 1000 |
| 9 | 9 | 1001 |
| 10 | A | 1010 |
| 11 | B | 1011 |
| 12 | C | 1100 |
| 13 | D | 1101 |
| 14 | E | 1110 |
| 15 | F | 1111 |

---

## لماذا يستخدم النظام السادس عشر؟

### المشكلة في النظام الثنائي
```
النظام الثنائي: 11011110
صعب القراءة للإنسان! 🤯
```

### الحل: النظام السادس عشر
```
النظام السادس عشر: DE
سهل القراءة! 😊
```

### الفوائد الرئيسية:
1. **تمثيل مضغوط**: كل بايت (8 بت) يمثل برقمين فقط في النظام السادس عشر
2. **سهولة القراءة**: أسهل بكثير من قراءة سلسلة طويلة من 0 و1
3. **استخدام واسع**: في البرمجة وتطوير الويب وأنظمة الألوان

---

## البادئات (Prefixes) في لغات البرمجة المختلفة

| التقنية/اللغة | البادئة | مثال |
|-------------|--------|-------|
| HTML/CSS | `#` | `#FFFFFF` |
| C, C++, Java | `0x` | `0xFF` |
| Unicode | `\u+` | `\u+0041` |
| Assembly | `$` | `$FF` |

---

## التحويل من العشري إلى السادس عشر

### الطريقة:
1. اقسم الرقم العشري على 16
2. فصل الجزء الصحيح عن الجزء العشري
3. اضرب الجزء العشري في 16 للحصول على الباقي
4. كرر العملية حتى يصبح الجزء الصحيح أقل من 16
5. اقرأ البواقي من الأسفل إلى الأعلى

### مثال 1: تحويل العدد 469

```
469 ÷ 16 = 29.3125
الجزء الصحيح: 29
الباقي: 0.3125 × 16 = 5

29 ÷ 16 = 1.8125  
الجزء الصحيح: 1
الباقي: 0.8125 × 16 = 13

1 ÷ 16 = 0.0625
الجزء الصحيح: 0  
الباقي: 1 (لأن 1 < 16)

البواقي: 5, 13, 1
التحويل: 5 = 5, 13 = D, 1 = 1
النتيجة: 1D5 (من الأسفل للأعلى)
```

### مثال 2: تحويل العدد 1513

```
1513 ÷ 16 = 94.5625
الجزء الصحيح: 94
الباقي: 0.5625 × 16 = 9

94 ÷ 16 = 5.875
الجزء الصحيح: 5
الباقي: 0.875 × 16 = 14

5 < 16، إذن الباقي = 5

البواقي: 9, 14, 5
التحويل: 9 = 9, 14 = E, 5 = 5
النتيجة: 5E9
```

---

## التحويل من السادس عشر إلى العشري

### الطريقة:
اضرب كل رقم في قيمة موقعه (16⁰, 16¹, 16², إلخ) واجمع النتائج

### مثال 1: تحويل 1D5

```
المواقع: 1D5
        ↑ ↑ ↑
       16² 16¹ 16⁰

5 × 16⁰ = 5 × 1 = 5
D × 16¹ = 13 × 16 = 208  
1 × 16² = 1 × 256 = 256

المجموع: 5 + 208 + 256 = 469
```

### مثال 2: تحويل 5E9

```
المواقع: 5E9
        ↑ ↑ ↑
       16² 16¹ 16⁰

9 × 16⁰ = 9 × 1 = 9
E × 16¹ = 14 × 16 = 224
5 × 16² = 5 × 256 = 1280

المجموع: 9 + 224 + 1280 = 1513
```

---

## التحويل بين السادس عشر والثنائي

### من السادس عشر إلى الثنائي:
1. حوّل من السادس عشر إلى العشري
2. حوّل من العشري إلى الثنائي

### مثال: تحويل 1D5

```
الخطوة 1: 1D5 → 469 (كما حسبنا سابقاً)

الخطوة 2: 469 إلى ثنائي
469 = 256 + 128 + 64 + 16 + 4 + 1
    = 2⁸ + 2⁷ + 2⁶ + 2⁴ + 2² + 2⁰
    = 111010101
```

### من الثنائي إلى السادس عشر:
1. حوّل من الثنائي إلى العشري  
2. حوّل من العشري إلى السادس عشر

---

## التطبيقات العملية

### 1. أكواد الألوان في الويب
```css
الأبيض: #FFFFFF  
الأسود: #000000
الأحمر: #FF0000
الأخضر: #00FF00
الأزرق: #0000FF
```

### 2. عناوين الذاكرة
```
0x7FFE1234: موقع في الذاكرة
0xFF: قيمة بايت
```

### 3. أكواد Unicode
```
\u+0041: الحرف A
\u+0627: الحرف ا
```

---

## تمارين الواجب المنزلي

### التمرين الأول: حوّل من السادس عشر إلى العشري
1. `2A3`
2. `FF0`
3. `1BC`
4. `ABC`

### التمرين الثاني: حوّل من العشري إلى السادس عشر
1. `255`
2. `1024`
3. `2048`
4. `999`

### التمرين الثالث: حوّل من السادس عشر إلى الثنائي
1. `A5`
2. `FF`
3. `123`
4. `C0DE`

---

## الخلاصة

1. **النظام السادس عشر** هو نظام عد أساسه 16، يستخدم الرموز 0-9 وA-F
2. **الهدف الرئيسي** هو تسهيل قراءة البيانات الثنائية للمبرمجين
3. **التحويلات** تتم عبر نظام العشري كوسيط
4. **الاستخدامات** واسعة في البرمجة: الألوان، عناوين الذاكرة، الترميز

> **تذكر**: البرمجة تحتاج إلى ممارسة مستمرة. حل الواجبات أمر ضروري لإتقان هذه المفاهيم!

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Lesson 5: The Hexadecimal System in Computers

## Introduction

**The Hexadecimal System** is one of the most important number systems in computing after binary. It serves as an intermediate system that makes it easier for programmers to read and understand data stored in binary format.

---

## What is the Hexadecimal System?

### Basic Definition
- **Hexadecimal System**: A number system based on 16 different symbols
- **Base**: 16 (hence called Base 16)
- **Symbols**: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F

### Number System Comparison

| System | Base | Symbols Used |
|--------|------|-------------|
| Decimal | 10 | 0-9 |
| Binary | 2 | 0, 1 |
| Hexadecimal | 16 | 0-9, A-F |

### Basic Number Conversion Table

| Decimal | Hexadecimal | Binary |
|---------|------------|--------|
| 0 | 0 | 0000 |
| 1 | 1 | 0001 |
| 2 | 2 | 0010 |
| 3 | 3 | 0011 |
| 4 | 4 | 0100 |
| 5 | 5 | 0101 |
| 6 | 6 | 0110 |
| 7 | 7 | 0111 |
| 8 | 8 | 1000 |
| 9 | 9 | 1001 |
| 10 | A | 1010 |
| 11 | B | 1011 |
| 12 | C | 1100 |
| 13 | D | 1101 |
| 14 | E | 1110 |
| 15 | F | 1111 |

---

## Why Use the Hexadecimal System?

### The Binary Problem
```
Binary System: 11011110
Hard for humans to read! 🤯
```

### The Solution: Hexadecimal
```
Hexadecimal System: DE  
Easy to read! 😊
```

### Key Benefits:
1. **Compact Representation**: Each byte (8 bits) is represented with only 2 hexadecimal digits
2. **Readability**: Much easier than reading long strings of 0s and 1s
3. **Wide Usage**: In programming, web development, and color systems

---

## Prefixes in Different Programming Languages

| Technology/Language | Prefix | Example |
|-------------------|--------|---------|
| HTML/CSS | `#` | `#FFFFFF` |
| C, C++, Java | `0x` | `0xFF` |
| Unicode | `\u+` | `\u+0041` |
| Assembly | `$` | `$FF` |

---

## Converting from Decimal to Hexadecimal

### Method:
1. Divide the decimal number by 16
2. Separate the integer part from the decimal part
3. Multiply the decimal part by 16 to get the remainder
4. Repeat until the integer part is less than 16
5. Read remainders from bottom to top

### Example 1: Converting 469

```
469 ÷ 16 = 29.3125
Integer part: 29
Remainder: 0.3125 × 16 = 5

29 ÷ 16 = 1.8125
Integer part: 1
Remainder: 0.8125 × 16 = 13

1 ÷ 16 = 0.0625
Integer part: 0
Remainder: 1 (since 1 < 16)

Remainders: 5, 13, 1
Conversion: 5 = 5, 13 = D, 1 = 1
Result: 1D5 (bottom to top)
```

### Example 2: Converting 1513

```
1513 ÷ 16 = 94.5625
Integer part: 94
Remainder: 0.5625 × 16 = 9

94 ÷ 16 = 5.875
Integer part: 5
Remainder: 0.875 × 16 = 14

5 < 16, so remainder = 5

Remainders: 9, 14, 5
Conversion: 9 = 9, 14 = E, 5 = 5
Result: 5E9
```

---

## Converting from Hexadecimal to Decimal

### Method:
Multiply each digit by its position value (16⁰, 16¹, 16², etc.) and sum the results

### Example 1: Converting 1D5

```
Positions: 1D5
          ↑ ↑ ↑
         16² 16¹ 16⁰

5 × 16⁰ = 5 × 1 = 5
D × 16¹ = 13 × 16 = 208
1 × 16² = 1 × 256 = 256

Sum: 5 + 208 + 256 = 469
```

### Example 2: Converting 5E9

```
Positions: 5E9
          ↑ ↑ ↑
         16² 16¹ 16⁰

9 × 16⁰ = 9 × 1 = 9
E × 16¹ = 14 × 16 = 224
5 × 16² = 5 × 256 = 1280

Sum: 9 + 224 + 1280 = 1513
```

---

## Converting Between Hexadecimal and Binary

### From Hexadecimal to Binary:
1. Convert from hexadecimal to decimal
2. Convert from decimal to binary

### Example: Converting 1D5

```
Step 1: 1D5 → 469 (as calculated above)

Step 2: 469 to binary
469 = 256 + 128 + 64 + 16 + 4 + 1
    = 2⁸ + 2⁷ + 2⁶ + 2⁴ + 2² + 2⁰
    = 111010101
```

### From Binary to Hexadecimal:
1. Convert from binary to decimal
2. Convert from decimal to hexadecimal

---

## Practical Applications

### 1. Web Color Codes
```css
White: #FFFFFF
Black: #000000
Red: #FF0000
Green: #00FF00
Blue: #0000FF
```

### 2. Memory Addresses
```
0x7FFE1234: Memory location
0xFF: Byte value
```

### 3. Unicode Characters
```
\u+0041: Letter A
\u+0627: Arabic letter ا
```

---

## Homework Exercises

### Exercise 1: Convert from Hexadecimal to Decimal
1. `2A3`
2. `FF0`
3. `1BC`
4. `ABC`

### Exercise 2: Convert from Decimal to Hexadecimal
1. `255`
2. `1024`
3. `2048`
4. `999`

### Exercise 3: Convert from Hexadecimal to Binary
1. `A5`
2. `FF`
3. `123`
4. `C0DE`

---

## Summary

1. **The Hexadecimal System** is a base-16 number system using symbols 0-9 and A-F
2. **Main Purpose** is to make binary data more readable for programmers
3. **Conversions** are done through decimal as an intermediate step
4. **Applications** are widespread in programming: colors, memory addresses, encoding

> **Remember**: Programming requires continuous practice. Solving homework is essential to master these concepts!

---

*Anas Chetoui* - `@anaschetoui`