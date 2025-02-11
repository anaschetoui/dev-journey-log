<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right;">

# الدرس الثامن: النظام الثماني في الكمبيوتر

## مقدمة

النظام الثماني (Octal) هو آخر نظام عد سندرسه في سلسلة أساسيات المبرمج. هذا النظام يشبه كثيراً النظام السادس عشر في طريقة عمله، لكن مع اختلافات مهمة سنتعرف عليها.

---

## مراجعة سريعة لأنظمة العد

قبل أن ندخل في النظام الثماني، دعونا نراجع الأنظمة التي تعلمناها:

| النظام | الأساس | الأرقام المستخدمة | المجموعة |
|--------|-------|------------------|----------|
| العشري (Decimal) | 10 | 0-9 | 10 رموز |
| الثنائي (Binary) | 2 | 0, 1 | 2 رمز |
| السادس عشر (Hexadecimal) | 16 | 0-9, A-F | 16 رمز |
| الثماني (Octal) | 8 | 0-7 | 8 أرقام |

---

## ما هو النظام الثماني؟

### التعريف الأساسي
- **النظام الثماني** = نظام عد أساسه 8
- **الأرقام المستخدمة**: 0, 1, 2, 3, 4, 5, 6, 7
- **عدد الأرقام**: 8 أرقام فقط
- **Base**: 8 (لذلك يُسمى Base 8)

### الفرق عن النظام السادس عشر
- **النظام السادس عشر**: مجموعات من 4 بت (Nibbles)
- **النظام الثماني**: مجموعات من **3 بت** فقط

```
مثال على التقسيم:
Hexadecimal: [ 1010 | 1101 ] (4 bits each)
Octal:      [ 101 | 010 | 101 ] (3 bits each)
```

---

## السياق التاريخي

### لماذا يوجد النظام الثماني؟

**في الماضي:**
- البايت لم يكن 8 بت كما اليوم
- كان البايت **6 بت فقط**
- لذلك كانوا يقسمونه إلى مجموعتين من **3 بت لكل منهما**
- هذا أدى لظهور النظام الثماني

**اليوم:**
- البايت أصبح 8 بت
- يُقسم إلى مجموعتين من 4 بت (Nibbles)
- لذلك أصبح النظام السادس عشر أكثر شيوعاً

---

## الاستخدام الحالي

### هل ما زال النظام الثماني مستخدماً؟
- **نادر الاستخدام** في البرمجة الحديثة
- **يوجد في بعض الأنظمة القديمة**
- **مهم للمبرمج** معرفته للتكامل مع الأنظمة القديمة

### لماذا تراجع استخدامه؟
- الكمبيوترات الحديثة تعتمد على 8 بت للبايت
- النظام السادس عشر أكثر ملاءمة (4 بت × 2 = 8 بت)
- التحويل أسهل مع النظام السادس عشر

---

## البادئات (Prefixes) في النظام الثماني

مثل النظام السادس عشر، للنظام الثماني بادئات مختلفة:

| السياق | البادئة | مثال |
|---------|---------|--------|
| C/C++ | `0` | `0755` |
| Python | `0o` | `0o755` |
| عام | `0O` | `0O755` |

> **تذكر**: عندما ترى `0` متبوعاً برقم، فهذا يعني أنه نظام ثماني

---

## كيف يعمل النظام الثماني؟

### النظام الموضعي
مثل باقي الأنظمة، النظام الثماني يعتمد على المواضع:

```
المواضع في النظام الثماني:
... 8³  8²  8¹  8⁰
... 512 64  8   1
```

### مثال توضيحي: الرقم 725₈

```
7 × 8² + 2 × 8¹ + 5 × 8⁰
= 7 × 64 + 2 × 8 + 5 × 1  
= 448 + 16 + 5
= 469₁₀
```

---

## التحويل من العشري إلى الثماني

### الطريقة
**نفس طريقة النظام السادس عشر، لكن:**
- بدلاً من القسمة على 16 → **اقسم على 8**
- بدلاً من الضرب في 16 → **اضرب في 8**

### مثال: تحويل 469 إلى ثماني

```
469 ÷ 8 = 58.625
الجزء الصحيح: 58
الباقي: 0.625 × 8 = 5

58 ÷ 8 = 7.25  
الجزء الصحيح: 7
الباقي: 0.25 × 8 = 2

7 ÷ 8 = 0.875
الجزء الصحيح: 0
الباقي: 7 (لأن 7 < 8)

البواقي بالعكس: 7, 2, 5
النتيجة: 725₈
```

---

## التحويل من الثماني إلى العشري

### الطريقة
اضرب كل رقم في قوة الموضع المناسبة واجمع النتائج

### مثال: تحويل 725₈ إلى عشري

```
المواضع: 7 2 5
         ↑ ↑ ↑
        8² 8¹ 8⁰

5 × 8⁰ = 5 × 1 = 5
2 × 8¹ = 2 × 8 = 16
7 × 8² = 7 × 64 = 448

المجموع: 5 + 16 + 448 = 469₁₀
```

---

## التحويل بين الثماني والثنائي

### من الثماني إلى الثنائي (مباشرة)
كل رقم ثماني = 3 بت ثنائي

```
مثال: 725₈ إلى ثنائي

7 → 111
2 → 010  
5 → 101

النتيجة: 111010101₂
```

### جدول التحويل السريع

| ثماني | ثنائي (3 بت) |
|--------|-------------|
| 0 | 000 |
| 1 | 001 |
| 2 | 010 |
| 3 | 011 |
| 4 | 100 |
| 5 | 101 |
| 6 | 110 |
| 7 | 111 |

### من الثنائي إلى الثماني
1. **قسّم** الرقم الثنائي إلى مجموعات من 3 بت
2. **حوّل** كل مجموعة إلى رقم ثماني
3. **اجمع** الأرقام

```
مثال: 111010101₂ إلى ثماني

تقسيم: 111 | 010 | 101

111 = 7
010 = 2
101 = 5

النتيجة: 725₈
```

---

## مقارنة شاملة لأنظمة العد

| الخاصية | عشري | ثنائي | ثماني | سادس عشر |
|---------|------|-------|--------|-----------|
| الأساس | 10 | 2 | 8 | 16 |
| الأرقام | 0-9 | 0,1 | 0-7 | 0-9,A-F |
| البتات لكل رقم | متغير | 1 | 3 | 4 |
| الاستخدام | يومي | داخلي للكمبيوتر | قليل | شائع في البرمجة |
| سهولة القراءة | عالية | صعبة | متوسطة | سهلة |

---

## مثال من الواقع: ASCII

```
الحرف 'A' في الأنظمة المختلفة:
- العشري: 65
- الثنائي: 01000001
- السادس عشر: 41
- الثماني: 101
```

---

## سبب وجود هذه الأنظمة

### المشكلة مع النظام الثنائي
```
"I love you" في النظام الثنائي:
010010010010000001101100011011110111011001100101001000000111100101101111011101010
صعب جداً للقراءة! 😵‍💫
```

### الحل: التمثيل المختصر
```
نفس النص:
- في الثماني: مختصر لكن ليس الأفضل
- في السادس عشر: 49 6c 6f 76 65 20 79 6f 75
سهل القراءة نسبياً! 😊
```

---

## الخلاصة

1. **النظام الثماني** نظام عد أساسه 8، يستخدم الأرقام 0-7
2. **نشأ تاريخياً** لأن البايت كان 6 بت، فكان يُقسم لمجموعتين من 3 بت
3. **نادر الاستخدام** اليوم لأن البايت أصبح 8 بت
4. **مهم للمبرمج** معرفته للتكامل مع الأنظمة القديمة
5. **التحويل سهل** إذا فهمت النظام السادس عشر

> **نصيحة**: البرمجة سهلة إذا تعلمت خطوة بخطوة. التعلم تراكمي، وكل درس يبني على السابق!

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Lesson 8: The Octal System in Computers

## Introduction

The Octal system is the final number system we'll study in our programming fundamentals series. This system works very similarly to the hexadecimal system, but with important differences we'll explore.

---

## Quick Review of Number Systems

Before diving into the octal system, let's review the systems we've learned:

| System | Base | Digits Used | Total Symbols |
|--------|------|-------------|---------------|
| Decimal | 10 | 0-9 | 10 symbols |
| Binary | 2 | 0, 1 | 2 symbols |
| Hexadecimal | 16 | 0-9, A-F | 16 symbols |
| Octal | 8 | 0-7 | 8 digits |

---

## What is the Octal System?

### Basic Definition
- **Octal System** = Number system with base 8
- **Digits Used**: 0, 1, 2, 3, 4, 5, 6, 7
- **Total Digits**: 8 digits only
- **Base**: 8 (hence called Base 8)

### Difference from Hexadecimal
- **Hexadecimal**: Groups of 4 bits (Nibbles)
- **Octal**: Groups of **3 bits** only

```
Grouping Example:
Hexadecimal: [ 1010 | 1101 ] (4 bits each)
Octal:      [ 101 | 010 | 101 ] (3 bits each)
```

---

## Historical Context

### Why Does the Octal System Exist?

**In the Past:**
- Bytes weren't 8 bits as they are today
- Bytes were **only 6 bits**
- They were divided into two groups of **3 bits each**
- This led to the creation of the octal system

**Today:**
- Bytes became 8 bits
- Divided into two groups of 4 bits (Nibbles)
- This made hexadecimal more popular

---

## Current Usage

### Is the Octal System Still Used?
- **Rarely used** in modern programming
- **Found in some legacy systems**
- **Important for programmers** to understand for integration with older systems

### Why Did Its Usage Decline?
- Modern computers are based on 8-bit bytes
- Hexadecimal is more suitable (4 bits × 2 = 8 bits)
- Conversion is easier with hexadecimal

---

## Octal Prefixes

Like hexadecimal, octal has different prefixes:

| Context | Prefix | Example |
|---------|---------|---------|
| C/C++ | `0` | `0755` |
| Python | `0o` | `0o755` |
| General | `0O` | `0O755` |

> **Remember**: When you see `0` followed by a number, it means octal

---

## How Does the Octal System Work?

### Positional System
Like other systems, octal uses positional notation:

```
Positions in Octal:
... 8³  8²  8¹  8⁰
... 512 64  8   1
```

### Example: Number 725₈

```
7 × 8² + 2 × 8¹ + 5 × 8⁰
= 7 × 64 + 2 × 8 + 5 × 1  
= 448 + 16 + 5
= 469₁₀
```

---

## Converting from Decimal to Octal

### Method
**Same as hexadecimal method, but:**
- Instead of dividing by 16 → **divide by 8**
- Instead of multiplying by 16 → **multiply by 8**

### Example: Converting 469 to Octal

```
469 ÷ 8 = 58.625
Integer part: 58
Remainder: 0.625 × 8 = 5

58 ÷ 8 = 7.25
Integer part: 7
Remainder: 0.25 × 8 = 2

7 ÷ 8 = 0.875
Integer part: 0
Remainder: 7 (since 7 < 8)

Remainders in reverse: 7, 2, 5
Result: 725₈
```

---

## Converting from Octal to Decimal

### Method
Multiply each digit by its appropriate position power and sum the results

### Example: Converting 725₈ to Decimal

```
Positions: 7 2 5
          ↑ ↑ ↑
         8² 8¹ 8⁰

5 × 8⁰ = 5 × 1 = 5
2 × 8¹ = 2 × 8 = 16
7 × 8² = 7 × 64 = 448

Sum: 5 + 16 + 448 = 469₁₀
```

---

## Converting Between Octal and Binary

### From Octal to Binary (Direct)
Each octal digit = 3 binary bits

```
Example: 725₈ to Binary

7 → 111
2 → 010
5 → 101

Result: 111010101₂
```

### Quick Conversion Table

| Octal | Binary (3 bits) |
|-------|-----------------|
| 0 | 000 |
| 1 | 001 |
| 2 | 010 |
| 3 | 011 |
| 4 | 100 |
| 5 | 101 |
| 6 | 110 |
| 7 | 111 |

### From Binary to Octal
1. **Divide** the binary number into groups of 3 bits
2. **Convert** each group to an octal digit
3. **Combine** the digits

```
Example: 111010101₂ to Octal

Division: 111 | 010 | 101

111 = 7
010 = 2
101 = 5

Result: 725₈
```

---

## Comprehensive Comparison of Number Systems

| Feature | Decimal | Binary | Octal | Hexadecimal |
|---------|---------|--------|--------|-------------|
| Base | 10 | 2 | 8 | 16 |
| Digits | 0-9 | 0,1 | 0-7 | 0-9,A-F |
| Bits per digit | Variable | 1 | 3 | 4 |
| Usage | Daily | Computer internal | Rare | Common in programming |
| Readability | High | Difficult | Medium | Easy |

---

## Real-World Example: ASCII

```
Character 'A' in different systems:
- Decimal: 65
- Binary: 01000001
- Hexadecimal: 41
- Octal: 101
```

---

## Why These Systems Exist

### The Problem with Binary
```
"I love you" in binary:
010010010010000001101100011011110111011001100101001000000111100101101111011101010
Very difficult to read! 😵‍💫
```

### The Solution: Compact Representation
```
Same text:
- In Octal: Compact but not optimal
- In Hexadecimal: 49 6c 6f 76 65 20 79 6f 75
Much easier to read! 😊
```

---

## Summary

1. **The Octal System** is a base-8 number system using digits 0-7
2. **Historically emerged** because bytes were 6 bits, divided into two 3-bit groups
3. **Rarely used today** because bytes became 8 bits
4. **Important for programmers** to know for integration with legacy systems
5. **Easy to convert** if you understand the hexadecimal system

> **Tip**: Programming is easy when learned step by step. Learning is cumulative, and each lesson builds on the previous one!

---

*Anas Chetoui* - `@anaschetoui`