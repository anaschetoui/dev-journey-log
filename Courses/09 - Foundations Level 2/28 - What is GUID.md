# What is GUID?

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو GUID؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **GUID **.
- لماذا يستخدم في البرمجة.
- كيف يتم توليده.
- لماذا يعتبر فريدًا على مستوى العالم.
- أمثلة عملية على استخدامه.

---

## 🎯 ما هو GUID؟

**GUID** اختصار لـ:

> **Globally Unique Identifier**

ويعرف أيضًا باسم:

> **UUID (Universally Unique Identifier)**

وهو عبارة عن **معرف فريد (Unique Identifier)** بطول **128 بت** يستخدم لإعطاء كل عنصر أو كائن أو سجل رقمًا يكاد يكون مستحيلاً أن يتكرر.

---

## 🔢 شكل GUID

يتكون GUID من:

- 128 بت.
- خمسة أجزاء (Groups).
- أرقام وحروف ست عشرية (Hexadecimal).

مثال:

```text
6F9619FF-8B86-D011-B42D-00C04FC964FF
```

---

## 🌍 لماذا يعتبر GUID فريدًا؟

يتم توليد GUID باستخدام خوارزمية تعتمد على عدة عوامل مثل:

- الوقت الحالي (Timestamp).
- عنوان MAC الخاص بالجهاز.
- أرقام عشوائية (Random Values).
- مكونات أخرى حسب الخوارزمية المستخدمة.

لهذا فإن احتمال تكراره صغير جدًا لدرجة يعتبر معها عمليًا **فريدًا على مستوى العالم**.

---

## 📌 لماذا نستخدم GUID؟

نستخدم GUID عندما نحتاج إلى:

- معرف لا يتكرر.
- إنشاء IDs بدون الحاجة إلى قاعدة بيانات.
- دمج البيانات القادمة من أنظمة مختلفة.
- ضمان أن كل عنصر يمتلك معرفًا فريدًا.

---

## 💻 توليد GUID

معظم لغات البرمجة توفر دوال جاهزة لإنشاء GUID.

مثال في C#:

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

```csharp
Guid.NewGuid()
``` 
</div>

كل استدعاء للدالة يولد GUID جديدًا مختلفًا.

---

## 🗄️ استخدام GUID في قواعد البيانات

توفر قواعد البيانات أيضًا دوال لإنشاء GUID.

مثال في SQL Server:

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

```sql
SELECT NEWID()
```
</div>

كل مرة يتم تنفيذها يتم إنشاء GUID جديد.

---

## ⚡ استخدام ذكي في SQL

يمكن استخدام `NEWID()` أيضًا لعرض النتائج بترتيب عشوائي.

مثال:
<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

```sql
SELECT *
FROM Employees
ORDER BY NEWID();
```
</div>
في كل تنفيذ للاستعلام:

- تبقى نفس البيانات.
- لكن ترتيب الصفوف يتغير بشكل عشوائي.

يستخدم ذلك في:

- ترتيب الأسئلة عشوائيًا.
- اختيار سجلات عشوائية.
- عرض محتوى مختلف في كل مرة.

---

## ✅ مميزات GUID

- فريد عالميًا.
- لا يحتاج إلى قاعدة بيانات لإنشائه.
- مدعوم في معظم لغات البرمجة.
- مدعوم في أغلب قواعد البيانات.
- مناسب للأنظمة الموزعة (Distributed Systems).
- يقلل احتمال تعارض المعرفات إلى درجة شبه معدومة.

---

## ⚠️ ملاحظة

رغم أن احتمال التكرار **ليس صفرًا رياضيًا**، إلا أنه صغير جدًا لدرجة يعتبر معها GUID فريدًا عمليًا في الاستخدامات الواقعية.

---

## 🔑 الخلاصة

- **GUID** اختصار لـ **Globally Unique Identifier**.
- يسمى أيضًا **UUID**.
- عبارة عن معرف بطول **128 بت**.
- يكتب بصيغة مكونة من خمسة أجزاء من القيم الست عشرية.
- يستخدم لإنشاء معرفات فريدة عالميًا.
- يمكن توليده بسهولة في لغات البرمجة وقواعد البيانات.
- يستخدم كثيرًا في التطبيقات وقواعد البيانات والأنظمة الموزعة.

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is GUID?

---

## 📝 Introduction

This lesson explains:

- The concept of GUID.
- Why it is used.
- How it is generated.
- Why it is considered globally unique.
- Practical examples of its usage.

---

## 🎯 What Is a GUID?

**GUID** stands for:

> **Globally Unique Identifier**

It is also commonly known as:

> **UUID (Universally Unique Identifier)**

A GUID is a **128-bit unique identifier** used to uniquely identify objects, records, or entities.

---

## 🔢 GUID Format

A GUID consists of:

- 128 bits.
- Five groups.
- Hexadecimal digits separated by hyphens.

Example:

```text
6F9619FF-8B86-D011-B42D-00C04FC964FF
```

---

## 🌍 Why Is It Globally Unique?

A GUID is generated using an algorithm that may incorporate factors such as:

- Current timestamp.
- Device MAC address.
- Random values.
- Other implementation-specific components.

This makes the probability of generating the same GUID extremely small.

---

## 📌 Why Do We Use GUIDs?

GUIDs are useful when we need:

- Unique identifiers.
- IDs generated without relying on a database.
- Safe integration between different systems.
- Globally unique records.

---

## 💻 Generating a GUID

Most programming languages provide built-in support for generating GUIDs.

Example in C#:

```csharp
Guid.NewGuid()
```

Every call returns a new unique GUID.

---

## 🗄️ GUIDs in Databases

Databases also provide built-in functions.

Example in SQL Server:

```sql
SELECT NEWID();
```

Each execution returns a different GUID.

---

## ⚡ Practical SQL Usage

`NEWID()` can also be used to randomize query results.

Example:

```sql
SELECT *
FROM Employees
ORDER BY NEWID();
```

Each execution returns:

- The same records.
- A different random order.

Common use cases include:

- Randomizing exam questions.
- Selecting random records.
- Displaying random content.

---

## ✅ Advantages

- Globally unique.
- No database required for generation.
- Supported by most programming languages.
- Supported by many database systems.
- Excellent for distributed systems.
- Extremely low probability of duplication.

---

## ⚠️ Note

GUIDs are not mathematically guaranteed to be unique, but the probability of duplication is so small that they are considered unique for practical software development.

---

## 🔑 Summary

- **GUID** stands for **Globally Unique Identifier**.
- Also known as **UUID**.
- It is a 128-bit unique identifier.
- It consists of five groups of hexadecimal characters.
- It is used to generate globally unique IDs.
- It is supported by programming languages and database systems.
- It is widely used in databases, distributed systems, and application development.

<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>