<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# بروتوكول الإنترنت (IP) - الجزء الثاني (IPv6)

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- سبب ظهور **IPv6**.
- الفرق بين **IPv4** و **IPv6**.
- لماذا لم يعد **IPv4** كافيًا.
- طريقة كتابة عنوان **IPv6**.
- سبب استمرار استخدام الإصدارين معًا حتى الآن.

---

## 🔄 مراجعة سريعة

في الدروس السابقة تعلمنا أن:

- 📦 **TCP** مسؤول عن تقسيم البيانات إلى **Packets** وإعادة تجميعها.
- 📍 **IP** مسؤول عن إعطاء كل جهاز عنوانًا (**IP Address**) حتى يمكن الوصول إليه.

كل جهاز متصل بالشبكة، سواء كانت:

- 🌐 Internet
- 🏠 Local Area Network (LAN)

يحصل على **IP Address** خاص به.

---

## 🎯 مراجعة IPv4

تعلمنا أن:

- **IPv4** يتكون من **4 Bytes**.
- كل **Byte** يتكون من **8 Bits**.

وبالتالي:

- **IPv4 = 32 Bits**

ويستطيع توليد ما يقارب:

**4.2 مليار عنوان (IP Address).**

---

## ❓ لماذا لم يعد IPv4 كافيًا؟

رغم أن:

- **4.2 مليار عنوان** رقم كبير،

إلا أنه مع مرور الوقت:

- زاد عدد مستخدمي الإنترنت.
- ازداد عدد الشركات.
- ازداد عدد الأجهزة المتصلة بالشبكات.

لذلك أصبحت عناوين **IPv4** غير كافية لتلبية احتياجات العالم.

---

## 💡 الحل

تم تقديم إصدار جديد يسمى:

## 🌐 IPv6

هدفه:

- توفير عدد أكبر بكثير من عناوين IP.

---

## 🔑 قوة النظام الثنائي (Binary)

 قوة النظام الثنائي من خلال مثال:

كل **Bit** جديد يضاعف عدد القيم الممكنة.

ولهذا السبب فإن زيادة عدد الـ Bits تؤدي إلى زيادة هائلة جدًا في عدد عناوين IP الممكنة.

---

## 🆕 ما هو IPv6؟

**IPv6** هو الإصدار السادس من بروتوكول الإنترنت.

ويتميز بأنه:

- يتكون من **16 Bytes**.
- أي:

**128 Bits**

---

## 📝 طريقة كتابة IPv6

يُكتب عنوان IPv6 باستخدام:

**Hexadecimal**

وليس بالأرقام العشرية.

وذلك لأن:

- كتابة العنوان بالـ Hexadecimal أسهل.
- يسهل حفظه والتعامل معه.
- وفي النهاية يحوله الكمبيوتر داخليًا إلى **Binary**.

---

## ✂️ الصيغة المختصرة (Short Version)

يمكن اختصار عنوان IPv6 عن طريق:

- حذف الأصفار الموجودة على اليسار داخل كل جزء عندما لا يكون لها تأثير.

ويُسمى ذلك:

**Short Version of IPv6**

لتسهيل كتابة العنوان والتعامل معه.

---

## 🌍 عدد العناوين في IPv6

لأن IPv6 يتكون من:

- **128 Bits**

فإنه يستطيع توليد:

**2¹²⁸**

أي ما يقارب:

**3.4 × 10³⁸ عنوانًا**

 هذا يعادل تقريبًا:

**340 تريليون تريليون تريليون عنوان IP.**

وهو عدد ضخم جدًا يكفي احتياجات العالم لسنوات طويلة.

---

## 💻 هل يمتلك الجهاز IPv4 و IPv6 معًا؟

نعم.

عند فتح إعدادات الشبكة يمكن ملاحظة وجود:

- **IPv4 Address**
- **IPv6 Address**

أي أن الجهاز قد يمتلك الإصدارين معًا.

---

## ❓ لماذا ما زلنا نستخدم IPv4؟

رغم وجود IPv6، إلا أن:

- ليس جميع دول العالم انتقلت إليه.
- تختلف نسبة تبني IPv6 من دولة إلى أخرى.

لذلك ما زالت الشبكات تدعم:

- **IPv4**
- **IPv6**

في الوقت نفسه.

 الانتقال الكامل إلى IPv6 يحتاج إلى سنوات حتى تعتمد جميع الأنظمة الإصدار الجديد.

---

## 📊 مقارنة بين IPv4 و IPv6

| الخاصية | IPv4 | IPv6 |
|---------|------|------|
| 📦 الحجم | 4 Bytes | 16 Bytes |
| 🔢 عدد الـ Bits | 32 Bits | 128 Bits |
| ✍️ طريقة الكتابة | أرقام عشرية | Hexadecimal |
| 🌍 عدد العناوين | حوالي 4.2 مليار | حوالي 3.4 × 10³⁸ (340 تريليون تريليون تريليون) |

---


## 🔑 الخلاصة

- ظهر **IPv6** لأن عدد عناوين **IPv4** لم يعد كافيًا.
- **IPv4** يتكون من **32 Bits**.
- **IPv6** يتكون من **128 Bits**.
- يكتب IPv6 باستخدام **Hexadecimal**.
- يمكن اختصار عنوان IPv6 بحذف بعض الأصفار وفق القواعد التي شرحها المحاضر.
- يستطيع IPv6 توفير حوالي **340 تريليون تريليون تريليون عنوان**.
- ما زال **IPv4** مستخدمًا لأن الانتقال الكامل إلى **IPv6** لم يكتمل في جميع دول العالم.
- يعمل **TCP** و **IP** معًا لإتمام عملية نقل البيانات عبر الشبكات.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Internet Protocol (IP) Part 2 (IPv6)

---

## 📝 Introduction

This lesson explains:

- Why **IPv6** was introduced.
- The difference between **IPv4** and **IPv6**.
- Why **IPv4** is no longer sufficient.
- How an **IPv6** address is written.
- Why both versions are still used today.

---

## 🔄 Quick Review

From the previous lessons:

- 📦 **TCP** divides data into packets and reassembles them.
- 📍 **IP** assigns an address (**IP Address**) to every device so it can be identified on a network.

Every device connected to either:

- 🌐 The Internet
- 🏠 A Local Area Network (LAN)

has its own **IP Address**.

---

## 🎯 IPv4 Review

We learned that:

- **IPv4** consists of **4 Bytes**.
- Each **Byte** contains **8 Bits**.

Therefore:

- **IPv4 = 32 Bits**

It can generate approximately:

**4.2 billion IP addresses.**

---

## ❓ Why Isn't IPv4 Enough?

Although:

- **4.2 billion addresses** seems like a very large number,

the increasing number of:

- Internet users,
- Companies,
- Connected devices,

made IPv4 addresses insufficient.

---

## 💡 The Solution

A new version was introduced:

## 🌐 IPv6

Its purpose is to provide a much larger address space.

---

## 🔑 The Power of Binary

The instructor explained that:

Every additional **Bit** doubles the number of possible values.

This is why increasing the number of Bits dramatically increases the number of available IP addresses.

---

## 🆕 What is IPv6?

**IPv6** is the sixth version of the Internet Protocol.

It consists of:

- **16 Bytes**
- Or:

**128 Bits**

---

## 📝 IPv6 Format

IPv6 addresses are written using:

**Hexadecimal**

instead of decimal numbers.

This makes them:

- Easier to write.
- Easier to read and remember.

Internally, the computer still converts them to **Binary**.

---

## ✂️ Short Version

An IPv6 address can be shortened by:

- Removing leading zeros inside each section when they have no effect.

This shortened representation is called the:

**Short Version of IPv6**

---

## 🌍 Number of IPv6 Addresses

Since IPv6 contains:

- **128 Bits**

it can generate:

**2¹²⁸**

or approximately:

**3.4 × 10³⁸ addresses**

This as roughly:

**340 trillion trillion trillion IP addresses.**

This is considered sufficient for global needs for many years.

---

## 💻 Can a Device Have Both Versions?

Yes.

In the network settings, a computer may display both:

- **IPv4 Address**
- **IPv6 Address**

---

## ❓ Why Is IPv4 Still Used?

Although IPv6 exists:

- Not every country has fully adopted it.
- Adoption rates vary across the world.

For this reason, today's networks continue supporting both:

- **IPv4**
- **IPv6**

The migration to IPv6 will take several years before IPv4 can eventually be phased out.

---

## 📊 IPv4 vs IPv6

| Feature | IPv4 | IPv6 |
|---------|------|------|
| 📦 Size | 4 Bytes | 16 Bytes |
| 🔢 Number of Bits | 32 Bits | 128 Bits |
| ✍️ Format | Decimal | Hexadecimal |
| 🌍 Address Space | About 4.2 Billion | About 3.4 × 10³⁸ (340 Trillion Trillion Trillion) |

---


## 🔑 Summary

- **IPv6** was introduced because **IPv4** addresses became insufficient.
- **IPv4** consists of **32 Bits**.
- **IPv6** consists of **128 Bits**.
- IPv6 addresses are written in **Hexadecimal**.
- IPv6 addresses can be shortened by removing unnecessary leading zeros.
- IPv6 provides approximately **340 trillion trillion trillion addresses**.
- Both **IPv4** and **IPv6** are still used because the transition is not yet complete worldwide.
- **TCP** and **IP** work together to transfer data across networks.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>
