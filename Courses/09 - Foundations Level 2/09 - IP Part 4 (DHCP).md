# IP Part 4 (DHCP)

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# IP Part 4 (DHCP)

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **DHCP (Dynamic Host Configuration Protocol)**.
- سبب الحاجة إليه.
- كيف يقوم بتوزيع عناوين **IP Address** تلقائيًا.
- علاقته بعناوين **Dynamic IP Address**.

---

## 🔄 مراجعة سريعة

تعلمنا في الدروس السابقة أن:

- كل جهاز متصل بالشبكة يمتلك **IP Address**.
- توجد عدة أنواع من عناوين IP، مثل:
  - 🌐 Public IP Address
  - 🏠 Private IP Address
  - 📌 Static IP Address
  - 🔄 Dynamic IP Address

كما تعلمنا أن الجهاز لا يشترط أن يكون متصلًا بالإنترنت حتى يحصل على عنوان IP، فقد يكون داخل شبكة محلية (LAN).

---

## ❓ المشكلة مع التوزيع اليدوي

إذا كانت الشبكة تحتوي على عدد قليل من الأجهزة، فمن الممكن إعطاء كل جهاز عنوان IP يدويًا.

لكن عند وجود:

- 💻 100 جهاز
- 💻 1000 جهاز
- 💻 أو أكثر

فإن تعيين عنوان IP لكل جهاز يدويًا يصبح:

- ⏳ مستهلكًا للوقت.
- ⚠️ عرضة للأخطاء.

---

## ⚠️ لماذا تعتبر الأخطاء خطيرة؟

إذا حصل جهازان على:

- **نفس عنوان IP**

فقد يؤدي ذلك إلى:

- وصول البيانات إلى الجهاز الخطأ.
- توزيع الـ Packets بين الجهازين.
- حدوث مشاكل في الاتصال داخل الشبكة.

---

## 🎯 ما هو DHCP؟

**DHCP** هو اختصار:

**Dynamic Host Configuration Protocol**

وهو بروتوكول مسؤول عن:

- توزيع عناوين IP تلقائيًا على الأجهزة داخل الشبكة.

بدلًا من إعطاء كل جهاز عنوانًا يدويًا.

---

## 🔧 كيف يعمل DHCP؟

عند اتصال جهاز جديد بالشبكة:

1. يطلب الجهاز عنوان IP.
2. يقوم **DHCP Server** بتخصيص عنوان مناسب.
3. يحصل الجهاز على عنوان IP بشكل تلقائي.

---

## 🖥️ أين يوجد DHCP؟

DHCP قد يكون:

- مدمجًا داخل الـ **Gateway**.
- مدمجًا داخل الـ **Router**.
- أو يعمل على **DHCP Server** مستقل.

---

## 📋 توزيع عناوين IP

يمكن لمسؤول الشبكة تحديد:

- نطاق معين (Range) لعناوين IP.

ثم يقوم DHCP بتوزيع العناوين تلقائيًا ضمن هذا النطاق.

---

## ⏳ مدة صلاحية عنوان IP

عند إعطاء الجهاز عنوان IP:

- لا يكون دائمًا بشكل افتراضي.

بل يتم منحه لمدة محددة.

المدة الافتراضية قد تكون:

- أسبوعًا.

كما يمكن تغيير هذه المدة من إعدادات DHCP.

---

## 🔄 تجديد عنوان IP

قبل انتهاء مدة صلاحية عنوان IP، يقوم الجهاز بطلب:

- تجديد (Renew)

من DHCP Server.

ويقرر DHCP:

- منح الجهاز نفس العنوان.
- أو عدم منحه، حسب القواعد (Rules) والإعدادات الموجودة.

---

## 💡 تبسيط فكرة DHCP

- برنامج أو بروتوكول يمر على جميع الأجهزة الموجودة في الشبكة ويقوم بإعطاء كل جهاز عنوان IP تلقائيًا.

مع التأكيد على أن آلية عمله الفعلية أكبر من هذا التبسيط.

---

## 📌 تعريف DHCP

> **DHCP is a client-server protocol that automatically provides an IP host with its IP address and other related configuration information.**

DHCP لا يوزع عنوان IP فقط، وإنما يوفر معلومات إعدادات أخرى سيتم شرحها في الدروس القادمة.

---

## 🔑 الخلاصة

- **DHCP** اختصار لـ **Dynamic Host Configuration Protocol**.
- وظيفته توزيع عناوين IP تلقائيًا.
- يساعد في إدارة الشبكات الكبيرة دون الحاجة إلى تعيين يدوي لكل جهاز.
- يمنع كثيرًا من الأخطاء الناتجة عن التوزيع اليدوي.
- يمنح عناوين IP لفترة زمنية محددة يمكن تعديلها من الإعدادات.
- قد يكون DHCP موجودًا داخل Router أو Gateway أو على Server مستقل.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# IP Part 4 (DHCP)

---

## 📝 Introduction

This lesson explains:

- The concept of **DHCP (Dynamic Host Configuration Protocol)**.
- Why DHCP is needed.
- How it automatically assigns **IP Addresses**.
- Its relationship with **Dynamic IP Addresses**.

---

## 🔄 Quick Review

From previous lessons:

- Every device connected to a network has an **IP Address**.
- Common IP address types include:
  - 🌐 Public IP Address
  - 🏠 Private IP Address
  - 📌 Static IP Address
  - 🔄 Dynamic IP Address

A device does not need an Internet connection to receive an IP address; it can also receive one on a Local Area Network (LAN).

---

## ❓ The Problem with Manual Assignment

When a network has only a few devices, assigning IP addresses manually is manageable.

However, for networks containing:

- 💻 100 devices
- 💻 1,000 devices
- 💻 or more

manual assignment becomes:

- Time-consuming.
- Error-prone.

---

## ⚠️ Why Are Manual Errors a Problem?

If two devices receive:

- The same IP Address,

it may cause:

- Data to reach the wrong device.
- Packets to be split between devices.
- Communication problems on the network.

---

## 🎯 What is DHCP?

**DHCP** stands for:

**Dynamic Host Configuration Protocol**

It is a protocol responsible for:

- Automatically assigning IP addresses to devices on a network.

Instead of assigning addresses manually.

---

## 🔧 How Does DHCP Work?

When a new device joins the network:

1. The device requests an IP address.
2. The **DHCP Server** assigns an available IP address.
3. The device automatically receives the assigned address.

---

## 🖥️ Where Does DHCP Run?

DHCP may be:

- Built into the **Gateway**.
- Built into the **Router**.
- Installed on a dedicated **DHCP Server**.

---

## 📋 IP Address Allocation

A network administrator can configure:

- A specific IP address range.

DHCP then distributes addresses automatically from that range.

---

## ⏳ IP Address Lease

An assigned IP address is usually **not permanent**.

Instead, it is leased for a limited period.

The default lease may be:

- One week.

This lease period can be changed through DHCP configuration.

---

## 🔄 Lease Renewal

Before the lease expires, the device requests a:

- Renewal

from the DHCP Server.

The server then decides whether to:

- Renew the same address.
- Or assign a different one, depending on the configured rules.

---

## 💡 Simplified View of DHCP

DHCP described as:

- A program or protocol that automatically goes through all devices on a network and assigns each one an IP address.

He also noted that the actual implementation is more sophisticated than this simplified explanation.

---

## 📌 DHCP Definition

> **DHCP is a client-server protocol that automatically provides an IP host with its IP address and other related configuration information.**

He also mentioned that DHCP supplies more than just IP addresses; additional configuration information will be discussed in future lessons.

---

## 🔑 Summary

- **DHCP** stands for **Dynamic Host Configuration Protocol**.
- It automatically assigns IP addresses.
- It simplifies the management of large networks.
- It reduces errors caused by manual IP assignment.
- IP addresses are assigned for a configurable lease period.
- DHCP can run on a Router, Gateway, or a dedicated DHCP Server.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>