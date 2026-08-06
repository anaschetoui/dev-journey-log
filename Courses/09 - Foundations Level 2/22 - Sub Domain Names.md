# Sub Domain Names

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو Sub Domain؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **Sub Domain**.
- الفرق بين **Domain** و **Sub Domain**.
- استخدامات الـ Sub Domains.
- ربط كل Sub Domain بعنوان IP مختلف.

---

## 🌐 مراجعة سريعة

تعرفنا سابقًا على:

- **Domain Name** هو اسم يسهل تذكره بدلاً من عنوان IP.
- يتم ربط الـ Domain بعنوان IP من خلال **DNS Record**.
- يقوم **DNS** بتحويل اسم النطاق إلى عنوان IP للوصول إلى الخادم.

---

## 🎯 ما هو Sub Domain؟

**Sub Domain** هو:

> **اسم فرعي يضاف قبل اسم النطاق الرئيسي لإنشاء جزء مستقل تابع له.**

الصيغة العامة:

```text
subdomain.domain.com
```

---

## 📋 الصيغة العامة

إذا كان اسم النطاق الرئيسي هو:

```text
programmingadvices.com
```

فيمكن إنشاء أسماء فرعية مثل:

```text
blog.programmingadvices.com
```

أو

```text
management.programmingadvices.com
```

أو

```text
jordan.programmingadvices.com
```

---

## 💡 لماذا نستخدم Sub Domains؟

يسمح Sub Domain بإنشاء أقسام أو مواقع مستقلة تحت نفس اسم النطاق الرئيسي.

يمكن استخدامه من أجل:

- مدونة (Blog).
- لوحة الإدارة (Management).
- مواقع مخصصة لدول مختلفة.
- خدمات مستقلة داخل نفس المشروع.

---

## 🌍 استضافة كل Sub Domain على خادم مختلف

ليس من الضروري أن تشير جميع الـ Sub Domains إلى نفس الخادم.

يمكن لكل Sub Domain أن يشير إلى **عنوان IP مختلف**.

مثال:

```text
blog.programmingadvices.com
        ↓
192.168.x.x
```

```text
management.programmingadvices.com
        ↓
203.x.x.x
```

```text
jordan.programmingadvices.com
        ↓
عنوان IP لخادم موجود في الأردن
```

وبذلك يمكن توزيع الخدمات على عدة خوادم مختلفة.

---

## ⚙️ كيف يتم إنشاء Sub Domain؟

بعد شراء اسم النطاق الرئيسي يمكن من لوحة التحكم الخاصة بمزود الدومين:

- إنشاء Sub Domain جديد.
- إضافة DNS Record خاص به.
- ربطه بعنوان IP معين.

---

## 📌 العلاقة مع DNS

كل Sub Domain يحتاج إلى:

- DNS Record خاص به.
- عنوان IP يشير إليه.

يقوم DNS بتحويل اسم الـ Sub Domain إلى عنوان IP بنفس الطريقة التي يعمل بها مع اسم النطاق الرئيسي.

---

## 🔑 الخلاصة

- **Sub Domain** هو اسم فرعي يسبق اسم النطاق الرئيسي.
- يستخدم لتنظيم المواقع والخدمات داخل نفس الدومين.
- يمكن لكل Sub Domain أن يشير إلى عنوان IP مختلف.
- يحتاج كل Sub Domain إلى DNS Record خاص به.
- يتم إنشاؤه من خلال لوحة إدارة الدومين.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is a Sub Domain?

---

## 📝 Introduction

This lesson explains:

- The concept of a **Sub Domain**.
- The difference between a **Domain** and a **Sub Domain**.
- Common uses of Sub Domains.
- Mapping Sub Domains to different IP addresses.

---

## 🌐 Quick Review

Previously learned concepts:

- A **Domain Name** is an easy-to-remember name instead of an IP Address.
- A **DNS Record** maps a Domain Name to an IP Address.
- **DNS** translates Domain Names into IP Addresses.

---

## 🎯 What is a Sub Domain?

A **Sub Domain** is:

> **A subdivision of a Domain Name that creates a separate section under the main domain.**

General format:

```text
subdomain.domain.com
```

---

## 📋 General Structure

If the main domain is:

```text
programmingadvices.com
```

Possible Sub Domains include:

```text
blog.programmingadvices.com
```

```text
management.programmingadvices.com
```

```text
jordan.programmingadvices.com
```

---

## 💡 Why Use Sub Domains?

Sub Domains make it possible to organize different services under one main domain.

Common uses include:

- Blogs
- Administration panels
- Country-specific websites
- Independent services within the same project

---

## 🌍 Different Servers for Different Sub Domains

Each Sub Domain can point to a different server.

Example:

```text
blog.programmingadvices.com
        ↓
192.168.x.x
```

```text
management.programmingadvices.com
        ↓
203.x.x.x
```

```text
jordan.programmingadvices.com
        ↓
An IP address of a server located in Jordan
```

This allows services to be distributed across multiple servers.

---

## ⚙️ Creating a Sub Domain

After purchasing a Domain Name, a Sub Domain can be created by:

- Adding a new Sub Domain.
- Creating its DNS Record.
- Mapping it to an IP Address.

---

## 📌 Relationship with DNS

Every Sub Domain requires:

- Its own DNS Record.
- An IP Address.

DNS resolves Sub Domains exactly as it resolves regular Domain Names.

---

## 🔑 Summary

- A **Sub Domain** is a name placed before the main Domain Name.
- It helps organize websites and services.
- Each Sub Domain can point to a different IP Address.
- Every Sub Domain requires its own DNS Record.
- Sub Domains are managed from the Domain provider's control panel.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>