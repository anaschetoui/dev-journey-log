<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# الأولويات الحسابية في البرمجة
## فهم تسلسل العمليات في الكمبيوتر

## مقدمة

أولويات الحساب (Calculation Priorities) هي قاعدة أساسية تحدد ترتيب تنفيذ العمليات الحسابية في الكمبيوتر. فهم هذه الأولويات يمنع الأخطاء الشائعة ويضمن الحصول على نتائج صحيحة في البرمجة.

---

## تسلسل الأولويات الحسابية

### هرم الأولويات الحسابية 🎯

يتبع الكمبيوتر تسلسلاً محدداً لتنفيذ العمليات:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. الأقواس () {} []
2. الأسس والأجذور ^ √ 
3. الضرب والقسمة × ÷ 
4. الجمع والطرح + -
```

</div>

<div dir="rtl" style="text-align: right;">

### قاعدة PEMDAS/BODMAS

**PEMDAS**:
- Parentheses (أقواس)
- Exponents (أسس)
- Multiplication (ضرب)
- Division (قسمة)
- Addition (جمع)
- Subtraction (طرح)

**BODMAS**:
- Brackets (أقواس)
- Orders (رتب/أسس)
- Division (قسمة)
- Multiplication (ضرب)
- Addition (جمع)
- Subtraction (طرح)

---

## أمثلة تطبيقية

### مثال 1: العمليات الأساسية

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
4 + 4 × 4 + 4 - 4 × 4
= 4 + (4×4) + 4 - (4×4)
= 4 + 16 + 4 - 16
= (4+16+4) - 16
= 24 - 16
= 8
```

</div>

<div dir="rtl" style="text-align: right;">

### مثال 2: الأقواس والأسس

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
18 ÷ (9 - 2 × 3)
= 18 ÷ (9 - 6)
= 18 ÷ 3
= 6
```

</div>

<div dir="rtl" style="text-align: right;">

### مثال 3: أقواس داخل أقواس

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
72 ÷ [10 - (4 + 5)]
= 72 ÷ [10 - 9]
= 72 ÷ 1
= 72
```

</div>

<div dir="rtl" style="text-align: right;">

### مثال 4: العمليات المركبة

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
5 × (6 × 2 - 6 - 1) × 2^2
= 5 × (12 - 6 - 1) × 4
= 5 × 5 × 4
= 25 × 4
= 100
```

</div>

<div dir="rtl" style="text-align: right;">

---

## أولويات العمليات المنطقية

### الدمج بين العمليات الحسابية والمنطقية

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
(9 > 2) OR (4 + 2 == 5) AND (5 == 5)
= true OR (6 == 5) AND true
= true OR false AND true
= true OR false
= true
```

</div>

<div dir="rtl" style="text-align: right;">

### قواعد الأولويات المنطقية

1. الأقواس أولاً
2. العمليات الحسابية داخل الأقواس
3. العمليات المنطقية (AND قبل OR)
4. التقييم من اليسار لليمين

---

## تمارين عملية

### حل هذه التمارين لتطبيق الأولويات

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ 8 + 3 × 2 - 4 ÷ 2
✅ (15 - 3) × 2 + 4^2
✅ 20 ÷ [4 × (2 + 3)]  
✅ 5 × (3 + 2^2) - 1
✅ (10 > 5) AND (3 × 2 == 6) OR (4 < 2)
```

</div>

<div dir="rtl" style="text-align: right;">

---

## الخلاصة

### النقاط الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 الأقواس دائمًا الأولى في الأولوية
🔢 الأسس تلي الأقواس في الأولوية
✖️ الضرب والقسمة نفس الأولوية (يسار لليمين)
➕ الجمع والطرح نفس الأولوية (يسار لليمين)
🧠 العمليات المنطقية تتبع نفس التسلسل
```

</div>

<div dir="rtl" style="text-align: right;">

### القاعدة الذهبية:
> **"التزم بتسلسل الأولويات لتجنب الأخطاء في نتائج البرامج"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Calculation Priorities in Programming
## Understanding Operation Sequence in Computers

## Introduction

Calculation priorities are fundamental rules that determine the order of executing arithmetic operations in computers. Understanding these priorities prevents common errors and ensures correct results in programming.

---

## Calculation Priority Sequence

### Priority Hierarchy 🎯

Computers follow a specific sequence for operation execution:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Parentheses () {} []
2. Exponents and Roots ^ √ 
3. Multiplication and Division × ÷ 
4. Addition and Subtraction + -
```

</div>

<div dir="rtl" style="text-align: right;">

### PEMDAS/BODMAS Rules

**PEMDAS**:
- Parentheses
- Exponents
- Multiplication
- Division
- Addition
- Subtraction

**BODMAS**:
- Brackets
- Orders
- Division
- Multiplication
- Addition
- Subtraction

---

## Practical Examples

### Example 1: Basic Operations

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
4 + 4 × 4 + 4 - 4 × 4
= 4 + (4×4) + 4 - (4×4)
= 4 + 16 + 4 - 16
= (4+16+4) - 16
= 24 - 16
= 8
```

</div>

<div dir="rtl" style="text-align: right;">

### Example 2: Parentheses and Exponents

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
18 ÷ (9 - 2 × 3)
= 18 ÷ (9 - 6)
= 18 ÷ 3
= 6
```

</div>

<div dir="rtl" style="text-align: right;">

### Example 3: Nested Parentheses

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
72 ÷ [10 - (4 + 5)]
= 72 ÷ [10 - 9]
= 72 ÷ 1
= 72
```

</div>

<div dir="rtl" style="text-align: right;">

### Example 4: Complex Operations

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
5 × (6 × 2 - 6 - 1) × 2^2
= 5 × (12 - 6 - 1) × 4
= 5 × 5 × 4
= 25 × 4
= 100
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Logical Operation Priorities

### Combining Arithmetic and Logical Operations

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
(9 > 2) OR (4 + 2 == 5) AND (5 == 5)
= true OR (6 == 5) AND true
= true OR false AND true
= true OR false
= true
```

</div>

<div dir="rtl" style="text-align: right;">

### Logical Priority Rules

1. Parentheses first
2. Arithmetic operations inside parentheses
3. Logical operations (AND before OR)
4. Left-to-right evaluation

---

## Practical Exercises

### Solve these exercises to apply priorities

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ 8 + 3 × 2 - 4 ÷ 2
✅ (15 - 3) × 2 + 4^2
✅ 20 ÷ [4 × (2 + 3)]  
✅ 5 × (3 + 2^2) - 1
✅ (10 > 5) AND (3 × 2 == 6) OR (4 < 2)
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Summary

### Key Points:

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 Parentheses always have highest priority
🔢 Exponents follow parentheses in priority
✖️ Multiplication and division same priority (left to right)
➕ Addition and subtraction same priority (left to right)
🧠 Logical operations follow same sequence
```

</div>

<div dir="rtl" style="text-align: right;">

### Golden Rule:
> **"Adhere to priority sequence to avoid errors in program results"**

</div>


<br>

---
*Anas Chetoui* - `@anaschetoui`