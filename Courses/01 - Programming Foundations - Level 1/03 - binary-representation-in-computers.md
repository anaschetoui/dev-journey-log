<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right;">

# تمثيل البيانات في الكمبيوتر: النظام الثنائي

## مقدمة

**الكمبيوتر جهاز إلكتروني** لا يفهم إلا لغة الكهرباء: إما **تشغيل (1)** أو **إيقاف (0)**. كل ما تراه على الكمبيوتر (نصوص، صور، فيديوهات) يُخزن في النهاية كسلسلة من الأصفار والواحدات.

## النظام العشري مقابل النظام الثنائي

| النظام العشري (Decimal) | النظام الثنائي (Binary) |
|-------------------------|------------------------|
| يستخدم أرقام من 0 إلى 9  | يستخدم فقط 0 و 1        |
| أساس 10 (Base 10)        | أساس 2 (Base 2)         |
| ما نستخدمه يومياً        | ما يستخدمه الكمبيوتر     |

## وحدات التخزين الأساسية

### البت (Bit)
- أصغر وحدة تخزين في الكمبيوتر
- يمكنها تخزين إما 0 أو 1 فقط
- تمثل حالة واحدة فقط: إما مرور الكهرباء (1) أو عدم مرورها (0)

### البايت (Byte)
- 8 بت مجتمعة تكوّن بايت واحد
- أصغر وحدة يمكن تمثيل معلومات مفيدة بها
- يمكن تمثيل الأرقام من 0 إلى 255 في بايت واحد

```
 MSB                                LSB
  ↓                                  ↓
[ 0    0    0    0    0    0    0    0 ]
  ↑    ↑    ↑    ↑    ↑    ↑    ↑    ↑
 128   64   32   16   8    4    2    1
 2⁷   2⁶   2⁵   2⁴   2³   2²   2¹   2⁰
```

MSB = Most Significant Bit (أكثر البتات أهمية)
LSB = Least Significant Bit (أقل البتات أهمية)

## تحويل الأرقام من النظام العشري إلى النظام الثنائي

### الطريقة:
1. حدد أي قوى الرقم 2 تُجمع لتعطي الرقم المطلوب
2. ضع 1 في موقع كل قوة مستخدمة، و0 في باقي المواقع

### أمثلة:

| الرقم العشري | تحليله إلى قوى 2 | التمثيل الثنائي |
|--------------|-----------------|-----------------|
| 3            | 2 + 1 (2¹ + 2⁰)  | 00000011        |
| 8            | 8 (2³)           | 00001000        |
| 5            | 4 + 1 (2² + 2⁰)  | 00000101        |
| 20           | 16 + 4 (2⁴ + 2²) | 00010100        |
| 21           | 16 + 4 + 1 (2⁴ + 2² + 2⁰) | 00010101 |

## تحويل الأرقام من النظام الثنائي إلى النظام العشري

### الطريقة:
1. اضرب كل رقم في النظام الثنائي بقيمة موقعه (2⁰, 2¹, 2², إلخ)
2. اجمع النتائج

### أمثلة:

| التمثيل الثنائي | الحساب | الرقم العشري |
|-----------------|--------|--------------|
| 00000011        | 2 + 1  | 3            |
| 00001000        | 8      | 8            |
| 00000101        | 4 + 1  | 5            |
| 00010100        | 16 + 4 | 20           |
| 00010101        | 16 + 4 + 1 | 21       |

## حدود التخزين

| عدد البايتات | أقصى قيمة يمكن تمثيلها |
|--------------|------------------------|
| 1 بايت (8 بت) | 255 (2⁸ - 1)          |
| 2 بايت (16 بت) | 65,535 (2¹⁶ - 1)      |

## تمثيل النصوص

### نظام ASCII
- جدول يربط بين الرموز والأرقام
- كل حرف يقابله رقم محدد:
  - حرف A = 65
  - حرف B = 66
  - حرف Z = 90
  - حرف a = 97
  - حرف z = 122

### مثال:
الحرف A يمثل بالرقم 65 في نظام ASCII، وفي النظام الثنائي يكون:
```
01000001 = 64 + 1 = 65
```

### كيف يميز الكمبيوتر بين الحرف A والرقم 65؟
- الكمبيوتر لا يميز بينهما في التخزين
- التمييز يكون حسب السياق والاستخدام في البرنامج
- مثال: "عمري 44" (44 تفهم كرقم) مقابل "فاتورة الكهرباء 44" (44 تفهم كمبلغ مالي)

## تمثيل اللغات غير الإنجليزية

### مشكلة نظام ASCII
- يدعم فقط الحروف الإنجليزية والرموز الأساسية
- لا يدعم اللغات الأخرى مثل العربية

### نظام يونيكود (Unicode)
- امتداد لنظام ASCII
- يدعم جميع اللغات والرموز حول العالم
- يمكن تمثيل الحروف العربية وغيرها

## التطبيق العملي

1. **حفظ البيانات بكفاءة**: استخدام البتات لتمثيل معلومات متعددة في مساحة صغيرة
2. **المينيو المشفر**: يمكن تمثيل عدة خيارات في رقم ثنائي واحد
   - مثال: الرقم 21 (10101) يمكن أن يمثل طلبًا يحتوي على بيتزا وشاورما وعصير

---

## الخلاصة

1. الكمبيوتر يفهم فقط الأصفار والواحدات (النظام الثنائي)
2. البايت (8 بت) هو أصغر وحدة لتمثيل المعلومات المفيدة
3. كل البيانات (أرقام، نصوص، وسائط) تُحوّل إلى نظام ثنائي
4. نستخدم جداول مثل ASCII ويونيكود لتمثيل النصوص والرموز

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Data Representation in Computers: The Binary System

## Introduction

**A computer is an electronic device** that only understands the language of electricity: either **ON (1)** or **OFF (0)**. Everything you see on a computer (text, images, videos) is ultimately stored as a sequence of zeros and ones.

## Decimal vs. Binary System

| Decimal System | Binary System |
|----------------|---------------|
| Uses digits 0-9 | Uses only 0 and 1 |
| Base 10        | Base 2        |
| What we use daily | What computers use |

## Basic Storage Units

### Bit
- The smallest unit of storage in a computer
- Can store either 0 or 1 only
- Represents one state only: either electricity passing (1) or not passing (0)

### Byte
- 8 bits grouped together form one byte
- Smallest unit that can represent meaningful information
- Can represent numbers from 0 to 255 in a single byte

```
 MSB					LSB
  ↓									 ↓
[ 0    0    0    0    0    0    0    0 ]
  ↑    ↑    ↑    ↑    ↑    ↑    ↑    ↑
 128   64   32   16   8    4    2    1
  2⁷    2⁶   2⁵   2⁴  2³   2²   2¹   2⁰
```

MSB = Most Significant Bit
LSB = Least Significant Bit

## Converting Numbers from Decimal to Binary

### Method:
1. Determine which powers of 2 sum up to the desired number
2. Put 1 in positions of used powers, and 0 in the rest

### Examples:

| Decimal | Powers of 2 | Binary Representation |
|---------|-------------|----------------------|
| 3       | 2 + 1 (2¹ + 2⁰) | 00000011          |
| 8       | 8 (2³)      | 00001000              |
| 5       | 4 + 1 (2² + 2⁰) | 00000101          |
| 20      | 16 + 4 (2⁴ + 2²) | 00010100         |
| 21      | 16 + 4 + 1 (2⁴ + 2² + 2⁰) | 00010101 |

## Converting Numbers from Binary to Decimal

### Method:
1. Multiply each digit in the binary by its position value (2⁰, 2¹, 2², etc.)
2. Add up all results

### Examples:

| Binary | Calculation | Decimal |
|--------|-------------|---------|
| 00000011 | 2 + 1     | 3       |
| 00001000 | 8         | 8       |
| 00000101 | 4 + 1     | 5       |
| 00010100 | 16 + 4    | 20      |
| 00010101 | 16 + 4 + 1 | 21     |

## Storage Limits

| Number of Bytes | Maximum Value |
|-----------------|---------------|
| 1 byte (8 bits) | 255 (2⁸ - 1) |
| 2 bytes (16 bits) | 65,535 (2¹⁶ - 1) |

## Text Representation

### ASCII System
- A table that maps characters to numbers
- Each letter has a specific number:
  - Letter A = 65
  - Letter B = 66
  - Letter Z = 90
  - Letter a = 97
  - Letter z = 122

### Example:
The letter A is represented as 65 in ASCII, and in binary:
```
01000001 = 64 + 1 = 65
```

### How does a computer distinguish between letter A and number 65?
- The computer doesn't distinguish between them in storage
- Distinction comes from context and use in the program
- Example: "I am 44" (44 understood as number) vs. "My bill is 44" (44 understood as money)

## Representing Non-English Languages

### ASCII Limitation
- Only supports English letters and basic symbols
- Doesn't support other languages like Arabic

### Unicode System
- An extension of ASCII
- Supports all languages and symbols worldwide
- Can represent Arabic letters and others

## Practical Application

1. **Efficient Data Storage**: Using bits to represent multiple pieces of information in small space
2. **Encoded Menus**: Can represent multiple options in a single binary number
   - Example: Number 21 (10101) can represent an order containing pizza, shawarma, and juice

---

## Summary

1. Computers only understand zeros and ones (binary system)
2. A byte (8 bits) is the smallest unit for meaningful information
3. All data (numbers, text, media) is converted to binary
4. We use tables like ASCII and Unicode to represent text and symbols

<br>
<br>
<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui - `anaschetoui`*