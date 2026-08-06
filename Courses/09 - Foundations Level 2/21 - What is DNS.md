# What is DNS?

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو DNS؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **DNS**.
- وظيفة **DNS Server**.
- العلاقة بين **Domain Name** و **IP Address**.
- كيفية الوصول إلى موقع ويب باستخدام اسم النطاق.
- مفهوم **DNS Record**.

---

## 🌐 مراجعة سريعة

تعرفنا سابقًا على:

- كل موقع ويب يعمل على **Server** يمتلك **Public IP Address**.
- يمكن شراء **Domain Name** وربطه بعنوان IP.
- يستخدم المستخدم اسم النطاق بدلاً من كتابة عنوان IP.

---

## 🎯 ما هو DNS؟

**DNS** هو اختصار لـ:

> **Domain Name System**

وهو النظام المسؤول عن تحويل **Domain Name** إلى **IP Address**.

---

## 💡 لماذا نحتاج إلى DNS؟

من السهل تذكر أسماء المواقع مثل:

```text
programmingadvices.com
```

لكن من الصعب تذكر عناوين IP مثل:

```text
104.19.238.117
```

يقوم DNS بتحويل اسم الموقع إلى عنوان الـ IP المناسب حتى يتمكن المتصفح من الوصول إلى الخادم.

---

## 📖 مثال بسيط

يشبه DNS **دليل جهات الاتصال في الهاتف**.

بدلاً من حفظ أرقام الهواتف، يتم حفظ أسماء الأشخاص.

عند اختيار اسم معين، يعرض الهاتف الرقم المرتبط به.

بنفس الطريقة:

- المستخدم يكتب اسم الموقع.
- DNS يبحث عن عنوان IP المقابل.
- يتم الاتصال بالخادم.

---

## 🔄 كيف يعمل DNS؟

عند كتابة:

```text
programmingadvices.com
```

تحدث الخطوات التالية:

1. يبحث الجهاز أولاً في سجل DNS المحلي (Local DNS Cache).
2. إذا لم يجد النتيجة، يرسل طلبًا إلى DNS Server.
3. يبحث DNS عن السجل المطلوب.
4. يعيد عنوان الـ IP المرتبط باسم النطاق.
5. يستخدم المتصفح عنوان الـ IP للوصول إلى الخادم.
6. يتم حفظ النتيجة محليًا لتسريع الطلبات المستقبلية.

---

## 📋 ما هو DNS Record؟

**DNS Record** هو:

> **سجل يربط بين Domain Name وعنوان IP معين.**

مثال:

```text
programmingadvices.com
        ↓
104.19.238.117
```

---

## 🖥️ تغيير عنوان IP

يمكن تغيير الخادم الذي يعمل عليه الموقع دون تغيير اسم النطاق.

يكفي تعديل الـ DNS Record ليشير إلى عنوان IP جديد.

بعدها سيصل جميع المستخدمين إلى الخادم الجديد باستخدام نفس اسم الموقع.

---

## 🌍 أكثر من Domain لنفس الموقع

يمكن ربط عدة أسماء نطاق بنفس الخادم.

على سبيل المثال:

- programmingadvices.com
- programmingadvices.net
- koko.com
- abouhadhoud.com

جميعها يمكن أن تشير إلى نفس عنوان الـ IP.

---

## ⚡ التخزين المحلي (DNS Cache)

بعد الحصول على عنوان IP لأول مرة، يتم حفظه محليًا.

لذلك لا يتم البحث في DNS في كل مرة يتم فيها فتح الموقع.

ويتم تحديث هذه البيانات بشكل دوري.

---

## 🔑 الخلاصة

- **DNS** اختصار لـ **Domain Name System**.
- يحول **Domain Name** إلى **IP Address**.
- يعتمد على سجلات تسمى **DNS Records**.
- يتم حفظ نتائج البحث محليًا لتسريع الوصول إلى المواقع.
- يمكن ربط عدة أسماء نطاق بنفس عنوان IP.
- يمكن تغيير الخادم بمجرد تعديل DNS Record دون تغيير اسم الموقع.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is DNS?

---

## 📝 Introduction

This lesson explains:

- The concept of **DNS**.
- The role of a **DNS Server**.
- The relationship between a **Domain Name** and an **IP Address**.
- How websites are reached using Domain Names.
- What a **DNS Record** is.

---

## 🌐 Quick Review

Previously learned concepts:

- Every website runs on a **Server** with a **Public IP Address**.
- A **Domain Name** can be purchased and linked to an IP Address.
- Users access websites using Domain Names instead of IP Addresses.

---

## 🎯 What is DNS?

**DNS** stands for:

> **Domain Name System**

It is the system responsible for translating a **Domain Name** into an **IP Address**.

---

## 💡 Why Do We Need DNS?

It is much easier to remember names like:

```text
programmingadvices.com
```

than IP addresses such as:

```text
104.19.238.117
```

DNS performs this translation automatically so browsers can connect to the correct server.

---

## 📖 A Simple Analogy

DNS works like a **phone contact list**.

Instead of remembering phone numbers, users remember names.

When a name is selected, the phone retrieves the associated number.

Similarly:

- The user enters a Domain Name.
- DNS looks up the corresponding IP Address.
- The browser connects to the server.

---

## 🔄 How DNS Works

When a user enters:

```text
programmingadvices.com
```

the following steps occur:

1. The computer checks its local DNS cache.
2. If no record is found, a request is sent to a DNS Server.
3. The DNS Server searches for the requested record.
4. The corresponding IP Address is returned.
5. The browser connects to the server using that IP Address.
6. The result is cached locally for future requests.

---

## 📋 What is a DNS Record?

A **DNS Record** is:

> **A record that maps a Domain Name to an IP Address.**

Example:

```text
programmingadvices.com
        ↓
104.19.238.117
```

---

## 🖥️ Changing the IP Address

A website can be moved to another server without changing its Domain Name.

Only the DNS Record needs to be updated with the new IP Address.

Users continue using the same Domain Name while reaching the new server.

---

## 🌍 Multiple Domains for One Website

Multiple Domain Names can point to the same server.

For example:

- programmingadvices.com
- programmingadvices.net
- koko.com
- abouhadhoud.com

All of them can resolve to the same IP Address.

---

## ⚡ Local DNS Cache

Once an IP Address is resolved, it is stored locally.

This reduces the need to query DNS servers every time the website is visited.

The cache is refreshed periodically.

---

## 🔑 Summary

- **DNS** stands for **Domain Name System**.
- It translates Domain Names into IP Addresses.
- DNS relies on **DNS Records**.
- DNS results are cached locally for faster access.
- Multiple Domain Names can point to the same IP Address.
- Changing the DNS Record allows a website to move to a different server without changing its Domain Name.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>