# What is Subnet Mask?

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو Subnet Mask؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **Subnetting**.
- معنى **Subnet Mask**.
- كيفية تقسيم الشبكات إلى شبكات فرعية.
- العلاقة بين **IP Address** و **Subnet Mask**.
- أنواع الشبكات **Class A** و **Class B** و **Class C**.

---

## 🌐 مراجعة سريعة

تعرفنا سابقًا على:

- كل جهاز متصل بالشبكة يمتلك **IP Address**.
- يقوم **Router** أو **Gateway** بتوفير الاتصال بالإنترنت.
- يربط **NAT** العناوين الخاصة (Private IP) بالعنوان العام (Public IP).
- يمكن توزيع عناوين IP بشكل **Static** أو **Dynamic** باستخدام **DHCP**.

---

## 🎯 ما هو Subnetting؟

**Subnetting** هو:

> **تقسيم شبكة واحدة إلى شبكتين أو أكثر من الشبكات الأصغر (Subnets).**

ويستخدم من أجل:

- تحسين كفاءة التوجيه (Routing).
- زيادة الأمان.
- تنظيم الشبكات الكبيرة.

---

## 🏢 لماذا نستخدم Subnets؟

في الشركات التي تحتوي على مئات الأجهزة، لا يكون وضع جميع الأجهزة داخل شبكة واحدة خيارًا مناسبًا.

يمكن تقسيم الشبكة إلى عدة شبكات فرعية، مثل:

- قسم المحاسبة.
- قسم التطوير.
- قسم الموارد البشرية.
- قسم تقنية المعلومات.

كل شبكة فرعية تحتوي على أجهزتها الخاصة، ويمكن التحكم في الوصول بينها.

---

## 🔒 فوائد Subnetting

يساعد Subnetting على:

- التحكم في صلاحيات الوصول.
- منع بعض الأجهزة من الوصول إلى أجهزة أخرى.
- تحسين مستوى الأمان.
- تنظيم الشبكات بصورة أفضل.
- تحسين كفاءة التوجيه.

---

## 🖥️ مكونات IP Address

يتكون عنوان الـ IP من جزأين:

- **Network ID**
- **Host ID (Device ID)**

حيث:

- **Network ID** يحدد الشبكة.
- **Host ID** يحدد الجهاز داخل الشبكة.

---

## 📋 ما هو Subnet Mask؟

يشبه **Subnet Mask** عنوان الـ IP من حيث الشكل، لكنه **ليس عنوان IP**.

وظيفته:

- تحديد جزء الشبكة (**Network ID**).
- تحديد جزء الجهاز (**Host ID**).

وباستخدامه مع عنوان الـ IP يمكن معرفة:

- نوع الشبكة.
- عدد الأجهزة التي يمكن إضافتها إليها.

---

## ⚙️ إعدادات TCP/IP

تتضمن إعدادات الشبكة عادةً:

- Obtain IP Address Automatically (DHCP)
- IP Address
- Subnet Mask
- Default Gateway
- DNS

---

## 📊 Class A

### 🔑 Subnet Mask

```text
255.0.0.0
```

### الخصائص

- أول Byte للشبكة.
- الثلاثة Bytes الأخرى للأجهزة.

عدد الأجهزة التقريبي:

- **2²⁴ ≈ 16,777,216 جهاز**

> العدد الفعلي أقل بقليل (2²⁴ − 2)، لكن الرقم السابق يوضح الفكرة.

---

## 📊 Class B

### 🔑 Subnet Mask

```text
255.255.0.0
```

### الخصائص

- أول Byteين للشبكة.
- آخر Byteين للأجهزة.

عدد الأجهزة:

- **2¹⁶ = 65,536 جهاز**

---

## 📊 Class C

### 🔑 Subnet Mask

```text
255.255.255.0
```

### الخصائص

- أول ثلاثة Bytes للشبكة.
- آخر Byte للأجهزة.

عدد الأجهزة:

- **2⁸ = 256 عنوانًا تقريبًا**
- تدعم حوالي **255 جهازًا**.

---

## 🔍 CIDR

يعتمد **CIDR (Classless Inter-Domain Routing)** على عدد الـ Bits المحجوزة للشبكة.

الأكثر شيوعًا:

- **/8** → Class A
- **/16** → Class B
- **/24** → Class C

حيث:

- Class A يحجز **8 Bits**.
- Class B يحجز **16 Bits**.
- Class C يحجز **24 Bits**.

ويمكن تعديل هذا التقسيم حسب الحاجة.

---

## 💡 أهمية Subnetting

يساعد Subnetting على:

- فصل أقسام الشركة داخل شبكات مستقلة.
- التحكم في الوصول بين الأجهزة.
- زيادة الأمان.
- إدارة الشبكات الكبيرة بكفاءة.

مثال:

يمكن إنشاء شبكة مستقلة لفريق تطوير يعمل على مشروع حساس بحيث لا يتمكن باقي المطورين من الوصول إليها.

---

## 🔑 الخلاصة

- **Subnetting** يعني تقسيم الشبكة إلى شبكات أصغر.
- **Subnet Mask** يحدد جزء الشبكة وجزء الجهاز داخل عنوان الـ IP.
- يتكون عنوان الـ IP من:
  - Network ID
  - Host ID
- أشهر أنواع الشبكات:
  - Class A → 255.0.0.0
  - Class B → 255.255.0.0
  - Class C → 255.255.255.0
- يساعد Subnetting على تحسين الأمان وتنظيم وإدارة الشبكات الكبيرة.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is Subnet Mask?

---

## 📝 Introduction

This lesson covers:

- The concept of **Subnetting**.
- The purpose of a **Subnet Mask**.
- Dividing a network into smaller subnetworks.
- The relationship between **IP Address** and **Subnet Mask**.
- Network classes: **Class A**, **Class B**, and **Class C**.

---

## 🌐 Quick Review

Previously learned concepts:

- Every device connected to a network has an **IP Address**.
- A **Router** or **Gateway** provides Internet connectivity.
- **NAT** maps private IP addresses to a public IP address.
- IP addresses can be assigned statically or dynamically using **DHCP**.

---

## 🎯 What is Subnetting?

**Subnetting** is:

> **The practice of dividing one network into two or more smaller subnetworks (Subnets).**

Its primary goals are:

- Improve routing efficiency.
- Increase network security.
- Better organize large networks.

---

## 🏢 Why Use Subnets?

In organizations with hundreds of devices, placing every device on a single network is impractical.

Instead, the network can be divided into subnetworks such as:

- Accounting
- Development
- Human Resources
- IT Department

Each subnet contains its own devices, and communication between subnets can be controlled.

---

## 🔒 Benefits of Subnetting

Subnetting helps to:

- Control access permissions.
- Restrict communication between devices.
- Improve network security.
- Organize networks efficiently.
- Improve routing performance.

---

## 🖥️ Components of an IP Address

An IP Address consists of two parts:

- **Network ID**
- **Host ID (Device ID)**

Where:

- **Network ID** identifies the network.
- **Host ID** identifies the individual device.

---

## 📋 What is a Subnet Mask?

A **Subnet Mask** looks similar to an IP Address, but it is **not** an IP Address.

Its purpose is to identify:

- The **Network ID** portion.
- The **Host ID** portion.

Together with the IP Address, it determines:

- The network type.
- The maximum number of supported hosts.

---

## ⚙️ TCP/IP Properties

Typical TCP/IP settings include:

- Obtain IP Address Automatically (DHCP)
- IP Address
- Subnet Mask
- Default Gateway
- DNS

---

## 📊 Class A

### Subnet Mask

```text
255.0.0.0
```

### Characteristics

- First byte → Network ID
- Remaining three bytes → Host IDs

Approximate hosts:

- **2²⁴ ≈ 16,777,216 Hosts**

> The actual usable number is slightly smaller (2²⁴ − 2).

---

## 📊 Class B

### Subnet Mask

```text
255.255.0.0
```

### Characteristics

- First two bytes → Network ID
- Last two bytes → Host IDs

Supported hosts:

- **2¹⁶ = 65,536 Hosts**

---

## 📊 Class C

### Subnet Mask

```text
255.255.255.0
```

### Characteristics

- First three bytes → Network ID
- Last byte → Host IDs

Supported hosts:

- **2⁸ ≈ 256 addresses**
- About **255 hosts**.

---

## 🔍 CIDR

**CIDR (Classless Inter-Domain Routing)** uses the number of reserved network bits.

Common prefixes:

- **/8** → Class A
- **/16** → Class B
- **/24** → Class C

Because:

- Class A reserves **8 bits**.
- Class B reserves **16 bits**.
- Class C reserves **24 bits**.

The allocation can be customized to meet network requirements.

---

## 💡 Why is Subnetting Important?

Subnetting helps to:

- Separate departments into independent networks.
- Control communication between devices.
- Improve security.
- Simplify large network management.

Example:

A dedicated subnet can be assigned to developers working on a sensitive project so other developers cannot access it.

---

## 🔑 Summary

- **Subnetting** divides one network into smaller subnetworks.
- A **Subnet Mask** identifies the network and host portions of an IP Address.
- Every IP Address consists of:
  - Network ID
  - Host ID
- Common subnet classes:
  - Class A → 255.0.0.0
  - Class B → 255.255.0.0
  - Class C → 255.255.255.0
- Subnetting improves network organization, security, and management.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>