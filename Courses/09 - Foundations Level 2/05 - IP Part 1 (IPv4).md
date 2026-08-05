# Internet Protocol (IP) Part 1 (IPv4)

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# بروتوكول الإنترنت (IP) - الجزء الأول (IPv4)

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **Internet Protocol (IP)**.
- العلاقة بين **TCP** و **IP**.
- مفهوم **IP Address**.
- التعرف على **IPv4** ولماذا سمي بهذا الاسم.

---

## 🔄 مراجعة سريعة

في الدرس السابق تعلمنا أن:

- **TCP** يقوم بتقسيم الملفات إلى **Packets**.
- يتم إرسال الـ Packets عبر الشبكة.
- يقوم الجهاز المستقبل بإعادة تجميعها بنفس الترتيب الصحيح.

لكن بقي سؤال مهم:

> **كيف يعرف الكمبيوتر الجهاز الذي يجب إرسال البيانات إليه؟**

الإجابة هي:

**Internet Protocol (IP).**

---

## 🎯 ما هو IP؟

**IP** هو اختصار:

**Internet Protocol**

وهو البروتوكول المسؤول عن:

- تحديد عنوان كل جهاز على الشبكة.
- معرفة الجهاز المقصود بإرسال البيانات إليه.

ولهذا السبب نجد دائمًا المصطلح:

**TCP/IP**

لأن البروتوكولين يعملان معًا ويكمل كل منهما الآخر.

---

## 🔑 ما هو البروتوكول؟

البروتوكول هو:

> **مجموعة قياسية من القواعد (Standard Set of Rules) تحدد كيفية تواصل الأجهزة عبر الشبكات السلكية أو اللاسلكية.**

ويعمل مع:

- 🔌 الشبكات السلكية (Wired).
- 📶 الشبكات اللاسلكية (Wireless).

---

## 🌐 الشبكات السلكية واللاسلكية

### 🔌 Wired Network

تتصل الأجهزة باستخدام:

- كابلات Ethernet.
- Switch.

---

### 📶 Wireless Network

تتواصل الأجهزة باستخدام:

- إشارات الراديو (**Radio Signals**).
- Wi-Fi.

وفي الحالتين يتم استخدام نفس بروتوكولات الاتصال.

---

## 📍 كيف يعرف الكمبيوتر الجهاز المقصود؟

كل جهاز متصل بالشبكة يمتلك:

- **عنوانًا (Address).**

سواء كان متصلًا:

- بالإنترنت.
- أو بشبكة محلية (LAN).

ولا يوجد جهاز يعمل على الشبكة بدون عنوان.

---

## 🏠 ما هو IP Address؟

**IP Address** هو:

> عنوان الجهاز على الشبكة.

ويمكن ان نشبّه الـ IP Address بعنوان المنزل.

فعندما يريد شخص الوصول إلى منزلك فإنه يحتاج إلى:

- الدولة.
- المدينة.
- الشارع.
- رقم المبنى.
- رقم الطابق.
- رقم الشقة.

أما في الشبكات فإن هذه المعلومات يمثلها:

**IP Address**

---

## 📌 وظيفة IP Address

يقوم IP Address بـ:

- تحديد مكان الجهاز على الشبكة.
- تمييز كل جهاز عن غيره.
- معرفة الجهاز الذي أرسل البيانات.
- معرفة الجهاز الذي يجب إرسال البيانات إليه.

وكل جهاز يمتلك عنوانًا مختلفًا عن الأجهزة الأخرى.

---

## 💻 أين أجد عنوان الـ IP؟

يمكن معرفة عنوان الجهاز من خلال إعدادات الشبكة.

 يمكن الدخول إلى:

- **Control Panel**
- **Network Settings**

ثم عرض معلومات الاتصال، حيث يظهر:

**IPv4 Address**

ومثال عليه:

```text
192.168.1.144
```

---

## 🔢 ما هو IPv4؟

**IPv4** هو اختصار:

**Internet Protocol Version 4**

وسمي بذلك لأنه يتكون من:

- **4 Bytes**

ويكتب بالشكل التالي:

```text
123.89.46.72
```

ويتكون من أربع خانات (Segments) يفصل بينها نقطة.

---

## 🧠 IPv4 والـ Binary

الكمبيوتر لا يتعامل مع الأرقام العشرية مباشرة، وإنما يحولها إلى:

- **Binary**

وكل جزء من أجزاء عنوان IPv4 يمثل:

- **Byte واحد.**

وكل Byte يتكون من:

- **8 Bits**

وبذلك فإن:

- IPv4 يتكون من **4 Bytes**.
- أي ما يعادل **32 Bits**.

---

## 🌍 لماذا يعتبر IPv4 مهمًا؟


عنوان IPv4 المكون من 32 Bit يسمح بتوليد ما يقارب:

- **4 مليارات و200 مليون عنوان تقريبًا.**

وهذا العدد يسمح بتوزيع عناوين على عدد هائل من الأجهزة حول العالم.

---

## 🌐 هل أحتاج إلى الإنترنت لاستخدام IP؟

لا.

يمكن استخدام IP حتى داخل:

- الشبكات المحلية (LAN).

فأي جهاز متصل بالشبكة المحلية يحصل على:

- **IP Address**

سواء كان:

- كمبيوترًا.
- هاتفًا.
- طابعة.
- أو أي جهاز آخر.

---

## 🤝 العلاقة بين TCP و IP

يعمل البروتوكولان معًا دائمًا.

### TCP مسؤول عن:

- تقسيم البيانات إلى Packets.
- إعادة تجميع البيانات.

### IP مسؤول عن:

- معرفة عنوان الجهاز.
- توجيه البيانات إلى الجهاز الصحيح.

ولهذا يظهر دائمًا المصطلح:

**TCP/IP**

---

## 🔑 الخلاصة

- **IP** اختصار لـ **Internet Protocol**.
- وظيفة IP هي **تحديد عنوان كل جهاز على الشبكة**.
- كل جهاز متصل بالشبكة يمتلك **IP Address** خاصًا به.
- **IPv4** يتكون من **4 Bytes** أو **32 Bits**.
- يوفر IPv4 حوالي **4.2 مليار عنوان**.
- يمكن استخدام IP داخل الشبكات المحلية أو عبر الإنترنت.
- يعمل **TCP** و **IP** معًا؛ فـ TCP يتعامل مع الـ Packets، بينما IP يتعامل مع عناوين الأجهزة.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Internet Protocol (IP) Part 1 (IPv4)

---

## 📝 Introduction

This lesson explains:

- The concept of the **Internet Protocol (IP)**.
- The relationship between **TCP** and **IP**.
- The concept of an **IP Address**.
- An introduction to **IPv4** and why it is called Version 4.

---

## 🔄 Quick Review

In the previous lesson, we learned that:

- **TCP** divides files into **Packets**.
- The packets are transmitted through the network.
- The receiving computer reassembles them in the correct order.

One important question remained:

> **How does a computer know which destination device should receive the data?**

The answer is:

**Internet Protocol (IP).**

---

## 🎯 What is IP?

**IP** stands for:

**Internet Protocol**

It is responsible for:

- Giving every device a network address.
- Identifying the destination device for transmitted data.

For this reason, the term:

**TCP/IP**

is commonly used because the two protocols work together.

---

## 🔑 What is a Protocol?

A protocol is:

> **A standard set of rules that defines how devices communicate over wired or wireless networks.**

It applies to:

- 🔌 Wired networks.
- 📶 Wireless networks.

---

## 🌐 Wired and Wireless Networks

### 🔌 Wired Network

Devices communicate using:

- Ethernet cables.
- Switches.

---

### 📶 Wireless Network

Devices communicate using:

- Radio signals.
- Wi-Fi.

The same communication principles apply in both cases.

---

## 📍 How Does a Computer Know the Destination?

Every device connected to a network has:

- An **Address**.

Whether it is connected to:

- The Internet.
- A Local Area Network (LAN).

No connected device operates without an address.

---

## 🏠 What is an IP Address?

An **IP Address** is:

> The address of a device on a network.

We can IP compare to a home address.

Just as a person needs your country, city, street, building, floor, and apartment number to find your home, computers use an **IP Address** to locate devices.

---

## 📌 Purpose of an IP Address

An IP Address is used to:

- Identify the location of a device.
- Distinguish one device from another.
- Identify the sender.
- Identify the destination.

Every connected device has its own unique address.

---

## 💻 Finding Your IP Address

You can find your IP address through:

- **Control Panel**
- **Network Settings**

where you can view:

**IPv4 Address**

Example:

```text
192.168.1.144
```

---

## 🔢 What is IPv4?

**IPv4** stands for:

**Internet Protocol Version 4**

It is called Version 4 because it consists of:

- **4 Bytes**

It is written like this:

```text
123.89.46.72
```

It contains four segments separated by dots.

---

## 🧠 IPv4 and Binary

Computers do not process decimal numbers directly.

Instead, they convert them into:

- **Binary**

Each section of an IPv4 address represents:

- One **Byte**.

Each Byte contains:

- **8 Bits**

Therefore:

- IPv4 consists of **4 Bytes**.
- Which equals **32 Bits**.

---

## 🌍 Why is IPv4 Important?


A 32-bit IPv4 address provides approximately:

- **4.2 billion unique addresses.**

This makes it possible to assign addresses to a massive number of devices worldwide.

---

## 🌐 Is Internet Required to Use IP?

No.

IP addresses are also used inside:

- Local Area Networks (LANs).

Any connected device, including:

- Computers.
- Phones.
- Printers.
- Other network devices.

receives an IP Address.

---

## 🤝 TCP and IP Relationship

The two protocols always work together.

### TCP is responsible for:

- Dividing data into packets.
- Reassembling packets.

### IP is responsible for:

- Addressing devices.
- Delivering data to the correct destination.

This is why they are commonly referred to as:

**TCP/IP**

---

## 🔑 Summary

- **IP** stands for **Internet Protocol**.
- IP is responsible for assigning and identifying device addresses.
- Every network device has its own **IP Address**.
- **IPv4** consists of **4 Bytes** or **32 Bits**.
- IPv4 provides approximately **4.2 billion addresses**.
- IP is used in both local networks and the Internet.
- **TCP** handles packets, while **IP** handles addressing and routing.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>