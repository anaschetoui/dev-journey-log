<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right;">

# الدرس السابع: النظام السادس عشر - الجزء الثاني

## مقدمة

في هذا الدرس سنتعلم طرق التحويل المباشر بين النظام الثنائي والنظام السادس عشر دون الحاجة لاستخدام النظام العشري كوسيط. هذه الطرق أكثر كفاءة وسرعة، وهي نفس الطرق التي يستخدمها الكمبيوتر داخلياً.

---

## مراجعة سريعة: النبل (Nibble)

قبل أن نبدأ، تذكر أن:
- **النبل** = 4 بت متجاورة
- **البايت الواحد** = نبلان (2 nibbles)
- **كل نبل** = رقم واحد في النظام السادس عشر

```
مثال على البايت مقسم إلى نبلز:
[ 1010 | 1101 ]
   ↑      ↑
النبل    النبل
العلوي   السفلي
 = A      = D
```

---

## التحويل من السادس عشر إلى الثنائي (مباشرة)

### الطريقة:
1. **فصل** كل رقم سادس عشر عن الآخر
2. **حوّل** كل رقم إلى نبل ثنائي (4 بت)
3. **اجمع** النبلز معاً بالترتيب

### مثال 1: تحويل `1D5` إلى ثنائي

```
الخطوة 1: فصل الأرقام
1D5 → 1 | D | 5

الخطوة 2: تحويل كل رقم إلى نبل (4 بت)
1 → 0001 (أضف أصفار لإكمال النبل)
D → 1101 (D = 13 في العشري = 1101 في الثنائي)
5 → 0101 (5 = 0101 في الثنائي)

الخطوة 3: اجمع النبلز
0001 + 1101 + 0101 = 000111010101

النتيجة النهائية: 000111010101
```

### مثال 2: تحويل `5E9` إلى ثنائي

```
فصل الأرقام: 5E9 → 5 | E | 9

تحويل إلى نبلز:
5 → 0101
E → 1110 (E = 14 = 1110)
9 → 1001

الجمع: 0101 + 1110 + 1001 = 010111101001
```

### مثال 3: تحويل `1DF` إلى ثنائي

```
فصل الأرقام: 1DF → 1 | D | F

تحويل إلى نبلز:
1 → 0001
D → 1101 (D = 13 = 1101)
F → 1111 (F = 15 = 1111)

الجمع: 0001 + 1101 + 1111 = 000111011111
```

---

## التحويل من الثنائي إلى السادس عشر (مباشرة)

### الطريقة:
1. **قسّم** الرقم الثنائي إلى مجموعات من 4 بت (نبلز)
2. **حوّل** كل نبل إلى رقم عشري
3. **حوّل** كل رقم عشري إلى رقم سادس عشر
4. **اجمع** الأرقام بالترتيب

### مثال 1: تحويل `000111010101` إلى سادس عشر

```
الخطوة 1: تقسيم إلى نبلز (من اليمين لليسار)
000111010101 → 0001 | 1101 | 0101

الخطوة 2: تحويل كل نبل إلى عشري
0001 = 1
1101 = 13
0101 = 5

الخطوة 3: تحويل العشري إلى سادس عشر
1 → 1
13 → D
5 → 5

الخطوة 4: الجمع بالترتيب
النتيجة: 1D5
```

### مثال 2: تحويل `000111011111` إلى سادس عشر

```
تقسيم إلى نبلز: 0001 | 1101 | 1111

تحويل إلى عشري:
0001 = 1
1101 = 13  
1111 = 15

تحويل إلى سادس عشر:
1 → 1
13 → D
15 → F

النتيجة: 1DF
```

---

## جدول التحويل السريع للنبل

| ثنائي | عشري | سادس عشر |
|-------|------|----------|
| 0000 | 0 | 0 |
| 0001 | 1 | 1 |
| 0010 | 2 | 2 |
| 0011 | 3 | 3 |
| 0100 | 4 | 4 |
| 0101 | 5 | 5 |
| 0110 | 6 | 6 |
| 0111 | 7 | 7 |
| 1000 | 8 | 8 |
| 1001 | 9 | 9 |
| 1010 | 10 | A |
| 1011 | 11 | B |
| 1100 | 12 | C |
| 1101 | 13 | D |
| 1110 | 14 | E |
| 1111 | 15 | F |

---

## مقارنة الطرق

### الطريقة القديمة (غير مباشرة)
```
Hex → Decimal → Binary
أو
Binary → Decimal → Hex
```
- **الخطوات**: 2 مراحل تحويل
- **الوقت**: أطول
- **المعقدة**: حسابات عشرية معقدة

### الطريقة الجديدة (مباشرة)
```
Hex ↔ Binary (مباشرة عبر النبلز)
```
- **الخطوات**: مرحلة واحدة
- **الوقت**: أسرع
- **البساطة**: تحويل بسيط للنبلز

---


## الخلاصة

- **التحويل المباشر** أسرع وأكثر كفاءة من الطرق غير المباشرة
- **النبل** (4 بت) هو وحدة التحويل الأساسية
- **كل رقم سادس عشر** يقابل نبل واحد في النظام الثنائي
- **الكمبيوتر** يستخدم هذه الطريقة داخلياً لسرعتها وبساطتها

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Lesson 7: Hexadecimal System - Part 2

## Introduction

In this lesson, we'll learn direct conversion methods between binary and hexadecimal systems without using decimal as an intermediary. These methods are more efficient and faster, and they're the same methods computers use internally.

---

## Quick Review: Nibble

Before we begin, remember that:
- **Nibble** = 4 adjacent bits
- **One Byte** = Two nibbles (2 nibbles)
- **Each nibble** = One hexadecimal digit

```
Example of byte divided into nibbles:
[ 1010 | 1101 ]
   ↑      ↑
Upper   Lower
Nibble  Nibble
 = A      = D
```

---

## Converting from Hexadecimal to Binary (Direct)

### Method:
1. **Separate** each hexadecimal digit
2. **Convert** each digit to a binary nibble (4 bits)
3. **Combine** nibbles together in order

### Example 1: Converting `1D5` to Binary

```
Step 1: Separate digits
1D5 → 1 | D | 5

Step 2: Convert each digit to nibble (4 bits)
1 → 0001 (add zeros to complete nibble)
D → 1101 (D = 13 in decimal = 1101 in binary)
5 → 0101 (5 = 0101 in binary)

Step 3: Combine nibbles
0001 + 1101 + 0101 = 000111010101

Final Result: 000111010101
```

### Example 2: Converting `5E9` to Binary

```
Separate digits: 5E9 → 5 | E | 9

Convert to nibbles:
5 → 0101
E → 1110 (E = 14 = 1110)
9 → 1001

Combine: 0101 + 1110 + 1001 = 010111101001
```

### Example 3: Converting `1DF` to Binary

```
Separate digits: 1DF → 1 | D | F

Convert to nibbles:
1 → 0001
D → 1101 (D = 13 = 1101)
F → 1111 (F = 15 = 1111)

Combine: 0001 + 1101 + 1111 = 000111011111
```

---

## Converting from Binary to Hexadecimal (Direct)

### Method:
1. **Divide** the binary number into groups of 4 bits (nibbles)
2. **Convert** each nibble to decimal
3. **Convert** each decimal to hexadecimal
4. **Combine** digits in order

### Example 1: Converting `000111010101` to Hexadecimal

```
Step 1: Divide into nibbles (from right to left)
000111010101 → 0001 | 1101 | 0101

Step 2: Convert each nibble to decimal
0001 = 1
1101 = 13
0101 = 5

Step 3: Convert decimal to hexadecimal
1 → 1
13 → D
5 → 5

Step 4: Combine in order
Result: 1D5
```

### Example 2: Converting `000111011111` to Hexadecimal

```
Divide into nibbles: 0001 | 1101 | 1111

Convert to decimal:
0001 = 1
1101 = 13
1111 = 15

Convert to hexadecimal:
1 → 1
13 → D
15 → F

Result: 1DF
```

---

## Quick Nibble Conversion Table

| Binary | Decimal | Hexadecimal |
|--------|---------|-------------|
| 0000 | 0 | 0 |
| 0001 | 1 | 1 |
| 0010 | 2 | 2 |
| 0011 | 3 | 3 |
| 0100 | 4 | 4 |
| 0101 | 5 | 5 |
| 0110 | 6 | 6 |
| 0111 | 7 | 7 |
| 1000 | 8 | 8 |
| 1001 | 9 | 9 |
| 1010 | 10 | A |
| 1011 | 11 | B |
| 1100 | 12 | C |
| 1101 | 13 | D |
| 1110 | 14 | E |
| 1111 | 15 | F |

---

## Method Comparison

### Old Method (Indirect)
```
Hex → Decimal → Binary
or
Binary → Decimal → Hex
```
- **Steps**: 2 conversion stages
- **Time**: Longer
- **Complexity**: Complex decimal calculations

### New Method (Direct)
```
Hex ↔ Binary (directly via nibbles)
```
- **Steps**: Single stage
- **Time**: Faster
- **Simplicity**: Simple nibble conversion

---


## Summary

- **Direct conversion** is faster and more efficient than indirect methods
- **Nibble** (4 bits) is the basic conversion unit
- **Each hexadecimal digit** corresponds to one nibble in binary
- **Computers** use this method internally for its speed and simplicity

---

*Anas Chetoui* - `@anaschetoui`