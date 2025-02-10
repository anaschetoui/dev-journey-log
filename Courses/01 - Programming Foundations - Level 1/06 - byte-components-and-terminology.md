<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right;">

# الدرس السادس: أجزاء البايت ومصطلحاتها

## مقدمة

هذا الدرس يركز على المصطلحات الأساسية المتعلقة بمكونات البايت. هذه المصطلحات ضرورية لفهم الدروس القادمة في البرمجة وعلوم الكمبيوتر.

---

## مراجعة سريعة للمفاهيم الأساسية

### البت (Bit)
- أصغر وحدة في الذاكرة
- يمكن تخزين قيمة واحدة فقط: **0** أو **1**
- اختصار لـ Binary Digit

### البايت (Byte)
- مجموعة من **8 بت** مجتمعة
- أصغر وحدة يمكن تمثيل بيانات مفيدة بها

```
بايت واحد = 8 بت
[ 0 | 1 | 0 | 1 | 1 | 0 | 1 | 0 ]
  7   6   5   4   3   2   1   0    ← أرقام المواقع
```

---

## مكونات البايت الفرعية

### الكرامب (Crumb)
- **التعريف**: مجموعة من **2 بت** متجاورة
- **الغرض**: تجميع صغير للبتات

```
مثال على الكرامبز في بايت واحد:
[ 01 | 10 | 11 | 00 ]
   ↑    ↑    ↑    ↑
كرامب كرامب كرامب كرامب
  4    3    2    1
```

### النبل (Nibble)
- **التعريف**: مجموعة من **4 بت** متجاورة
- **المعنى البديل**: نصف بايت (Half Byte)
- **الأهمية**: يمثل رقماً واحداً في النظام السادس عشر

```
بايت واحد = نبلين (nibbles):
[ 1010 | 1101 ]
   ↑      ↑
النبل    النبل
العلوي   السفلي
```

---

## تصنيف أجزاء البايت

### النبل السفلي (Lower Nibble)
- أول 4 بت في البايت (المواقع 0-3)
- يحتوي على القيم الأقل أهمية
- يمثل الخانة الأولى في النظام السادس عشر

### النبل العلوي (Upper Nibble)  
- آخر 4 بت في البايت (المواقع 4-7)
- يحتوي على القيم الأكثر أهمية
- يمثل الخانة الثانية في النظام السادس عشر

```
مثال توضيحي:
البايت: 10110101

النبل العلوي: 1011 (المواقع 7,6,5,4)
النبل السفلي: 0101 (المواقع 3,2,1,0)
```

---

## البتات المميزة

### أقل البتات أهمية (LSB - Least Significant Bit)
- **الموقع**: البت رقم 0 (أول بت من اليمين)
- **القيمة**: 2⁰ = 1
- **السبب**: يحتوي على أصغر قيمة ممكنة

### أكثر البتات أهمية (MSB - Most Significant Bit)
- **الموقع**: البت رقم 7 (آخر بت من اليمين)  
- **القيمة**: 2⁷ = 128
- **السبب**: يحتوي على أكبر قيمة ممكنة

```
مخطط البايت مع القيم:
MSB                           LSB
 ↓                             ↓
[128] [64] [32] [16] [8] [4] [2] [1]
  7    6    5    4   3   2   1   0  ← أرقام المواقع
 2⁷   2⁶   2⁵   2⁴  2³  2²  2¹  2⁰ ← القيم
```

---

## جدول العلاقات الكمية

| الوحدة | العدد في البايت | العدد في النبل |
|--------|-----------------|----------------|
| بت (Bit) | 8 بت | 4 بت |
| كرامب (Crumb) | 4 كرامب | 2 كرامب |
| نبل (Nibble) | 2 نبل | 1 نبل |

---

## مثال تطبيقي

### تحليل البايت: `11010110`

```
البايت الكامل: 11010110

تقسيم النبلز:
- النبل العلوي: 1101 = D في النظام السادس عشر
- النبل السفلي: 0110 = 6 في النظام السادس عشر
- التمثيل السادس عشر: D6

تقسيم الكرامبز:
- الكرامب 4: 11 (المواقع 7,6)
- الكرامب 3: 01 (المواقع 5,4)  
- الكرامب 2: 01 (المواقع 3,2)
- الكرامب 1: 10 (المواقع 1,0)

البتات المميزة:
- MSB: 1 (الموقع 7)
- LSB: 0 (الموقع 0)
```

---

## الواجب المنزلي

أجب على الأسئلة التالية:

### أسئلة التعريفات
1. ما هو البت (Bit)؟
2. ما هو الكرامب (Crumb)؟
3. ما هو النبل (Nibble)؟
4. ما هو البايت (Byte)؟

### أسئلة الكميات
5. كم بت موجود في البايت الواحد؟
6. كم كرامب موجود في البايت الواحد؟
7. كم نبل موجود في البايت الواحد؟
8. كم كرامب موجود في النبل الواحد؟

### أسئلة المصطلحات
9. ما معنى Lower Nibble؟
10. ما معنى Upper Nibble؟
11. ما معنى LSB ولماذا سُميت بهذا الاسم؟ وما القيمة الموجودة فيها؟
12. ما معنى MSB ولماذا سُميت بهذا الاسم؟ وما القيمة الموجودة فيها؟

---

## خلاصة سريعة

- **البت**: أصغر وحدة (0 أو 1)
- **الكرامب**: 2 بت
- **النبل**: 4 بت (نصف بايت)
- **البايت**: 8 بت (الوحدة الأساسية)

هذه المصطلحات أساسية لفهم الدروس القادمة في البرمجة وأنظمة الكمبيوتر.

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Lesson 6: Byte Components and Their Terminology

## Introduction

This lesson focuses on essential terminology related to byte components. These terms are crucial for understanding upcoming lessons in programming and computer science.

---

## Quick Review of Basic Concepts

### Bit
- The smallest unit in memory
- Can store only one value: **0** or **1**
- Short for Binary Digit

### Byte
- A group of **8 bits** together
- The smallest unit that can represent meaningful data

```
One Byte = 8 Bits
[ 0 | 1 | 0 | 1 | 1 | 0 | 1 | 0 ]
  7   6   5   4   3   2   1   0    ← Position numbers
```

---

## Byte Sub-components

### Crumb
- **Definition**: A group of **2 bits** adjacent to each other
- **Purpose**: Small grouping of bits

```
Example of Crumbs in one byte:
[ 01 | 10 | 11 | 00 ]
   ↑    ↑    ↑    ↑
Crumb Crumb Crumb Crumb
  4    3    2    1
```

### Nibble
- **Definition**: A group of **4 bits** adjacent to each other
- **Alternative meaning**: Half Byte
- **Importance**: Represents one digit in hexadecimal system

```
One Byte = Two Nibbles:
[ 1010 | 1101 ]
   ↑      ↑
Upper   Lower
Nibble  Nibble
```

---

## Classification of Byte Parts

### Lower Nibble
- First 4 bits in the byte (positions 0-3)
- Contains less significant values
- Represents the first digit in hexadecimal

### Upper Nibble
- Last 4 bits in the byte (positions 4-7)
- Contains more significant values
- Represents the second digit in hexadecimal

```
Illustrative Example:
Byte: 10110101

Upper Nibble: 1011 (positions 7,6,5,4)
Lower Nibble: 0101 (positions 3,2,1,0)
```

---

## Distinguished Bits

### Least Significant Bit (LSB)
- **Position**: Bit number 0 (first bit from right)
- **Value**: 2⁰ = 1
- **Reason**: Contains the smallest possible value

### Most Significant Bit (MSB)
- **Position**: Bit number 7 (last bit from right)
- **Value**: 2⁷ = 128
- **Reason**: Contains the largest possible value

```
Byte diagram with values:
MSB                           LSB
 ↓                             ↓
[128] [64] [32] [16] [8] [4] [2] [1]
  7    6    5    4   3   2   1   0  ← Position numbers
 2⁷   2⁶   2⁵   2⁴  2³  2²  2¹  2⁰ ← Values
```

---

## Quantitative Relationships Table

| Unit | Count in Byte | Count in Nibble |
|------|---------------|----------------|
| Bit | 8 bits | 4 bits |
| Crumb | 4 crumbs | 2 crumbs |
| Nibble | 2 nibbles | 1 nibble |

---

## Practical Example

### Analyzing Byte: `11010110`

```
Complete Byte: 11010110

Nibble Division:
- Upper Nibble: 1101 = D in hexadecimal
- Lower Nibble: 0110 = 6 in hexadecimal
- Hexadecimal Representation: D6

Crumb Division:
- Crumb 4: 11 (positions 7,6)
- Crumb 3: 01 (positions 5,4)
- Crumb 2: 01 (positions 3,2)
- Crumb 1: 10 (positions 1,0)

Distinguished Bits:
- MSB: 1 (position 7)
- LSB: 0 (position 0)
```

---

## Homework Assignment

Answer the following questions:

### Definition Questions
1. What is a Bit?
2. What is a Crumb?
3. What is a Nibble?
4. What is a Byte?

### Quantity Questions
5. How many bits are in one byte?
6. How many crumbs are in one byte?
7. How many nibbles are in one byte?
8. How many crumbs are in one nibble?

### Terminology Questions
9. What does Lower Nibble mean?
10. What does Upper Nibble mean?
11. What does LSB mean and why is it called that? What value does it contain?
12. What does MSB mean and why is it called that? What value does it contain?

---

## Quick Summary

- **Bit**: Smallest unit (0 or 1)
- **Crumb**: 2 bits
- **Nibble**: 4 bits (half byte)
- **Byte**: 8 bits (basic unit)

These terms are fundamental for understanding upcoming lessons in programming and computer systems.

---

*Anas Chetoui* - `@anaschetoui`