<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right;">

# الدرس الحادي عشر: لغات البرمجة - الجزء الأول

## مقدمة

لغات البرمجة هي جسر التواصل بينك وبين الكمبيوتر. في هذا الدرس سنفهم ما هي لغات البرمجة، ولماذا تطورت عبر التاريخ، وكيف تعمل. هذا الدرس هو بداية سلسلة مهمة عن لغات البرمجة ستساعدك في فهم عالم البرمجة بشكل عميق.

---

## ما هي لغة البرمجة؟

### التعريف الأساسي
**لغة البرمجة** هي مجرد **أداة** (Tool) تساعدك في كتابة مجموعة من الأوامر بترتيب معين، حتى يفهم الكمبيوتر ما تريد منه وينفذ المهمة التي أوكلتها إليه.

> **Programming language is only a tool to help you write instructions to computer to perform certain operation or task**

### خصائص الكمبيوتر
```
الكمبيوتر:
✓ سريع جداً في التنفيذ
✗ لا يفهم من تلقاء نفسه
✗ يحتاج تعليمات واضحة ومفصلة
```

### مثال بسيط
تخيل أنك تريد من الكمبيوتر أن يطبع "Hello World" على الشاشة. الكمبيوتر لا يعرف ماذا يعني "اطبع" ولا ما هي "الشاشة" حتى تخبره بوضوح عبر لغة يفهمها.

---

## ما هو الـ Code؟

### التعريف
**الـ Code** هو مجموعة الـ Instructions (الأوامر) التي تكتبها باستخدام لغة برمجة معينة، ليستخدمها الكمبيوتر في تنفيذ المهمة أو العملية التي طلبتها منه.

### مثال توضيحي
```
المهمة: اطبع "Hello World"
الـ Code: print("Hello World")
النتيجة: Hello World يظهر على الشاشة
```

---

## تطور لغات البرمجة عبر التاريخ

### المستوى الأول: Machine Language

#### التعريف
**Machine Language** هي لغة برمجة مكونة من تعليمات Binary أو Hexadecimal يفهمها الكمبيوتر بشكل مباشر.

> **Machine Language is computer programming language consisting of binary or hexadecimal instructions which a computer can respond to directly**

#### مثال: "Hello World" بـ Machine Language
```
0x48656c6c6f20576f726c64210a00
0x48656c6c
0x6f20576f
0x726c6421
0x0a00
```

#### خصائص Machine Language
```
المزايا:
✓ الأسرع على الإطلاق
✓ يفهمها الـ CPU مباشرة
✓ لا تحتاج ترجمة

العيوب:
✗ صعبة جداً للبشر
✗ عرضة للأخطاء
✗ تستغرق وقتاً طويلاً للكتابة
```

### المستوى الثاني: Assembly Language

#### التعريف
لغة أسهل قليلاً من Machine Language، تستخدم كلمات مفهومة نسبياً للبشر، لكنها ما زالت معقدة.

#### مثال: "Hello World" بـ Assembly Language
```assembly
push    rbp
mov     rbp, rsp
mov     esi, OFFSET FLAT:.LC0
mov     edi, OFFSET FLAT:_ZSt4cout
call    printf
mov     eax, 0
pop     rbp
ret

.LC0:
    .string "Hello World"
```

#### خصائص Assembly Language
```
المزايا:
✓ أسهل من Machine Language
✓ سرعة عالية
✓ تحكم دقيق في الـ Hardware

العيوب:
✗ ما زالت صعبة جداً
✗ تحتاج خبرة عميقة
✗ كود طويل لمهام بسيطة
```

### المستوى الثالث: High-Level Languages

#### التعريف
لغات مصممة لتكون قريبة من لغة البشر، سهلة الفهم والكتابة.

#### مثال: "Hello World" بـ High-Level Languages
```basic
' لغة BASIC
PRINT "Hello World"
```

```python
# لغة Python
print("Hello World")
```

```java
// لغة Java
public class Hello {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}
```

#### أمثلة على High-Level Languages
- **Python**
- **Java** 
- **C++**
- **JavaScript**
- **C#**
- **Visual Basic.NET**

---

## الحلقة المفقودة: Translator Software

### المشكلة
```
المبرمج يكتب:        print("Hello World")
الكمبيوتر يفهم:       0x48656c6c6f20576f726c64210a00

كيف يتم التحويل؟ 🤔
```

### الحل: Translator Software

الـ Translator Software هي برامج وظيفتها الوحيدة ترجمة High-Level Languages إلى Machine Language.

#### نوعان من الـ Translators

1. **Compiler (المترجم)**
2. **Interpreter (المفسر)**

> **ملاحظة**: سنتناول الفرق بينهما بالتفصيل في الدرس القادم.

---

## أنواع الـ Code

### Source Code
**التعريف**: الـ Code الذي تكتبه أنت بلغة برمجة High-Level.

```python
# هذا source code
print("Hello World")
name = "Ahmed"
print(f"Hello {name}")
```

### Object Code
**التعريف**: الـ Code المترجم إلى Machine Language الذي يفهمه الكمبيوتر مباشرة.

```
# هذا object code (مثال مبسط)
0x48656c6c6f20576f726c64
0x41686d6564
0x48656c6c6f20
```

### العلاقة بينهما
```
Source Code ──[Compiler/Interpreter]──> Object Code
     ↑                                      ↓
  يكتبه المبرمج                        ينفذه الكمبيوتر
```

---

## مقارنة مستويات اللغات

### جدول المقارنة الشامل

| الخاصية | Machine Language | Assembly | High-Level |
|---------|------------------|----------|------------|
| **السرعة** | الأسرع | سريع جداً | متوسط إلى سريع |
| **Readability** | مستحيل | صعب جداً | سهل |
| **سهولة التعلم** | مستحيل | صعب جداً | سهل |
| **طول الكود** | طويل جداً | طويل | قصير |
| **الأخطاء** | كثيرة جداً | كثيرة | قليلة |
| **وقت التطوير** | طويل جداً | طويل | قصير |

### الهرم البرمجي

```
        Readability وسهولة التعلم ↑
                   │
         ┌─────────────────┐
         │  High-Level     │  ← Python, Java, C#
         │   Languages     │
         └─────────────────┘
              │
         ┌─────────────────┐
         │    Assembly     │  ← mov, push, call
         │    Language     │
         └─────────────────┘
              │
         ┌─────────────────┐
         │    Machine      │  ← 0x48656c, 1010110
         │    Language     │
         └─────────────────┘
                   │
                السرعة ↓
```

---

## العلاقة بين القرب من الـ Hardware والخصائص

### القاعدة الذهبية

```
كلما اقتربت من الـ Hardware:
✓ زادت السرعة
✗ قلت الـ Readability
✗ زادت صعوبة التعلم

كلما ابتعدت عن الـ Hardware:
✓ زادت الـ Readability
✓ سهل التعلم والاستخدام
✗ قلت السرعة (نسبياً)
```

### أمثلة عملية

**السرعة (من الأسرع للأبطأ):**
1. Machine Language 🥇
2. Assembly 🥈
3. C/C++ 🥉
4. Java/C#
5. Python/JavaScript

**سهولة التعلم (من الأسهل للأصعب):**
1. Python 🥇
2. JavaScript 🥈  
3. Java/C# 🥉
4. C/C++
5. Assembly
6. Machine Language

---

## لماذا تطورت لغات البرمجة؟

### المشكلة الأساسية
```
برنامج "Hello World" بـ Machine Language:
0x48656c6c6f20576f726c64210a00
0x48656c6c0x6f20576f0x726c6421
0x0a00...

تخيل برنامج من 10,000 سطر! 😱
```

### الحلول المتدرجة

1. **Assembly**: جعل الكود مقروءاً نسبياً
2. **High-Level**: جعل البرمجة في متناول البشر
3. **Translator Software**: سد الفجوة بين البشر والآلة

---

## أمثلة توضيحية متقدمة

### مثال: حساب مجموع رقمين

#### بـ Machine Language
```
0xB8200000000xBB050000000x01D80x89C70xB8010000000xCD80
```

#### بـ Assembly Language
```assembly
mov eax, 32        ; تحميل الرقم الأول
mov ebx, 5         ; تحميل الرقم الثاني
add eax, ebx       ; جمع الرقمين
mov edi, eax       ; حفظ النتيجة
```

#### بـ High-Level Languages

```python
# Python
result = 32 + 5
print(result)
```

```java
// Java
int result = 32 + 5;
System.out.println(result);
```

```javascript
// JavaScript
let result = 32 + 5;
console.log(result);
```

---


## الخلاصة

```
💡 لغة البرمجة = أداة للتواصل مع الكمبيوتر
🏗️ تطورت من صعبة (Machine Language) إلى سهلة (High-Level)
🔄 الـ Translators تسد الفجوة بين البشر والآلة
⚖️ مقايضة دائمة: سرعة مقابل سهولة
🎯 الفهم أهم من الحفظ
```

### القاعدة الأهم
> **البرمجة ليست عن حفظ اللغات، بل عن فهم المبادئ وحل المشاكل!**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Lesson 11: Programming Languages - Part 1

## Introduction

Programming languages are the bridge between you and the computer. In this lesson, we'll understand what programming languages are, why they evolved throughout history, and how they work. This lesson is the beginning of an important series about programming languages that will help you understand the programming world deeply.

---

## What is a Programming Language?

### Basic Definition
A **programming language** is simply a **tool** that helps you write a set of instructions in a specific order, so the computer understands what you want from it and executes the task you assigned to it.

> **Programming language is only a tool to help you write instructions to computer to perform certain operation or task**

### Computer Characteristics
```
Computer:
✓ Extremely fast at execution
✗ Doesn't understand on its own
✗ Needs clear and detailed instructions
```

### Simple Example
Imagine you want the computer to print "Hello World" on the screen. The computer doesn't know what "print" means or what a "screen" is until you tell it clearly through a language it understands.

---

## What is Code?

### Definition
**Code** is the set of instructions you write using a specific programming language, for the computer to use in executing the task or operation you requested from it.

### Illustrative Example
```
Task: Print "Hello World"
Code: print("Hello World")
Result: Hello World appears on screen
```

---

## Evolution of Programming Languages Throughout History

### Level 1: Machine Language

#### Definition
**Machine Language** is a programming language consisting of binary or hexadecimal instructions that the computer understands directly.

> **Machine language is computer programming language consisting of binary or hexadecimal instructions which a computer can respond to directly**

#### Example: "Hello World" in Machine Language
```
0x48656c6c6f20576f726c64210a00
0x48656c6c
0x6f20576f
0x726c6421
0x0a00
```

#### Machine Language Characteristics
```
Advantages:
✓ Fastest possible execution
✓ CPU understands it directly
✓ No translation needed

Disadvantages:
✗ Extremely difficult for humans
✗ Error-prone
✗ Takes very long to write
```

### Level 2: Assembly Language

#### Definition
A language slightly easier than machine language, using relatively understandable words for humans, but still complex.

#### Example: "Hello World" in Assembly Language
```assembly
push    rbp
mov     rbp, rsp
mov     esi, OFFSET FLAT:.LC0
mov     edi, OFFSET FLAT:_ZSt4cout
call    printf
mov     eax, 0
pop     rbp
ret

.LC0:
    .string "Hello World"
```

#### Assembly Language Characteristics
```
Advantages:
✓ Easier than machine language
✓ High speed
✓ Precise hardware control

Disadvantages:
✗ Still very difficult
✗ Requires deep expertise
✗ Long code for simple tasks
```

### Level 3: High-Level Languages

#### Definition
Languages designed to be close to human language, easy to understand and write.

#### Example: "Hello World" in High-Level Languages
```basic
' BASIC language
PRINT "Hello World"
```

```python
# Python language
print("Hello World")
```

```java
// Java language
public class Hello {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}
```

#### Examples of High-Level Languages
- **Python**
- **Java**
- **C++**
- **JavaScript**
- **C#**
- **Visual Basic.NET**

---

## The Missing Link: Translator Software

### The Problem
```
Programmer writes:     print("Hello World")
Computer understands:  0x48656c6c6f20576f726c64210a00

How does the conversion happen? 🤔
```

### Solution: Translator Software

Translator software are programs whose only function is to translate high-level languages to machine language.

#### Two Types of Translators

1. **Compiler**
2. **Interpreter**

> **Note**: We'll cover the difference between them in detail in the next lesson.

---

## Types of Code

### Source Code
**Definition**: The code you write in a high-level programming language.

```python
# This is source code
print("Hello World")
name = "Ahmed"
print(f"Hello {name}")
```

### Object Code
**Definition**: The translated code in machine language that the computer understands directly.

```
# This is object code (simplified example)
0x48656c6c6f20576f726c64
0x41686d6564
0x48656c6c6f20
```

### Relationship Between Them
```
Source Code ──[Compiler/Interpreter]──> Object Code
     ↑                                      ↓
Written by programmer                  Executed by computer
```

---

## Comparison of Language Levels

### Comprehensive Comparison Table

| Feature | Machine Language | Assembly | High-Level |
|---------|------------------|----------|------------|
| **Speed** | Fastest | Very fast | Medium to fast |
| **Readability** | Impossible | Very difficult | Easy |
| **Learning Ease** | Impossible | Very difficult | Easy |
| **Code Length** | Very long | Long | Short |
| **Errors** | Very many | Many | Few |
| **Development Time** | Very long | Long | Short |

### Programming Pyramid

```
        Readability & Learning Ease ↑
                   │
         ┌─────────────────┐
         │  High-Level     │  ← Python, Java, C#
         │   Languages     │
         └─────────────────┘
              │
         ┌─────────────────┐
         │    Assembly     │  ← mov, push, call
         │    Language     │
         └─────────────────┘
              │
         ┌─────────────────┐
         │    Machine      │  ← 0x48656c, 1010110
         │    Language     │
         └─────────────────┘
                   │
                Speed ↓
```

---

## Relationship Between Hardware Proximity and Characteristics

### Golden Rule

```
The closer to hardware:
✓ Higher speed
✗ Lower readability
✗ Harder to learn

The farther from hardware:
✓ Higher readability
✓ Easy to learn and use
✗ Lower speed (relatively)
```

### Practical Examples

**Speed (fastest to slowest):**
1. Machine Language 🥇
2. Assembly 🥈
3. C/C++ 🥉
4. Java/C#
5. Python/JavaScript

**Learning Ease (easiest to hardest):**
1. Python 🥇
2. JavaScript 🥈
3. Java/C# 🥉
4. C/C++
5. Assembly
6. Machine Language

---

## Why Did Programming Languages Evolve?

### Basic Problem
```
"Hello World" program in machine language:
0x48656c6c6f20576f726c64210a00
0x48656c6c0x6f20576f0x726c6421
0x0a00...

Imagine a program with 10,000 lines! 😱
```

### Gradual Solutions

1. **Assembly**: Made code relatively readable
2. **High-Level**: Made programming accessible to humans
3. **Translator Software**: Bridged the gap between humans and machines

---

## Advanced Illustrative Examples

### Example: Calculate Sum of Two Numbers

#### In Machine Language
```
0xB8200000000xBB050000000x01D80x89C70xB8010000000xCD80
```

#### In Assembly Language
```assembly
mov eax, 32        ; Load first number
mov ebx, 5         ; Load second number
add eax, ebx       ; Add the numbers
mov edi, eax       ; Store result
```

#### In High-Level Languages

```python
# Python
result = 32 + 5
print(result)
```

```java
// Java
int result = 32 + 5;
System.out.println(result);
```

```javascript
// JavaScript
let result = 32 + 5;
console.log(result);
```

---

## Summary

```
💡 Programming Language = Tool to communicate with computer
🏗️ Evolved from difficult (machine language) to easy (high-level)
🔄 Translators bridge the gap between humans and machines
⚖️ Always a trade-off: speed vs. ease
🎯 Understanding is more important than memorization
```

### Most Important Rule
> **Programming isn't about memorizing languages, it's about understanding principles and solving problems!**

---

*Anas Chetoui* - `@anaschetoui`