# NAT and IP Mapping

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# NAT and IP Mapping

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **NAT (Network Address Translation)**.
- سبب استخدام NAT.
- كيف يسمح لعدة أجهزة باستخدام **Public IP Address** واحد.
- العلاقة بين **Public IP Address** و **Private IP Address**.

---

## 🔄 مراجعة سريعة

تعلمنا في الدروس السابقة أن:

- كل جهاز متصل بالشبكة يمتلك **IP Address**.
- توجد أنواع مختلفة من عناوين IP، منها:
  - 🌐 Public IP Address
  - 🏠 Private IP Address
- داخل الشبكات المحلية تحصل الأجهزة على عناوين IP خاصة بها باستخدام:
  - DHCP
  - أو التعيين اليدوي (Manual Assignment)

---

## ❓ لماذا نحتاج إلى NAT؟

داخل المنزل أو الشركة قد يوجد العديد من الأجهزة، مثل:

- 💻 أجهزة الكمبيوتر.
- 📱 الهواتف.
- 🖨️ الطابعات.

ولا تحتاج جميع هذه الأجهزة إلى امتلاك **Public IP Address** خاص بها.

بل يكفي أن تمتلك:

- **Private IP Address**

داخل الشبكة المحلية.

---

## 🏠 مثال

قد يكون داخل الشبكة المحلية:

- 192.168.1.2
- 192.168.1.3
- 192.168.1.4

ويمكن أن يمتلك جهاز في منزل الجار نفس هذه العناوين.

ولا يسبب ذلك مشكلة لأن هذه العناوين تستخدم داخل الشبكات المحلية فقط.

---

## 🎯 ما هو NAT؟

**NAT** هو اختصار:

**Network Address Translation**

وهو تقنية تعمل على:

- ربط العناوين الخاصة (**Private IP Addresses**) بالعنوان العام (**Public IP Address**).

---

## 📍 أين يعمل NAT؟

NAT يكون موجودًا عادة داخل:

- **Gateway**
- أو **Router**

وهو المسؤول عن إدارة عملية ترجمة العناوين.

---

## 🔧 كيف يعمل NAT؟

يحصل المنزل أو الشركة من مزود خدمة الإنترنت (**ISP**) على:

- **Public IP Address** واحد.

ثم يقوم NAT بـ:

- ربط هذا العنوان العام بجميع الأجهزة الموجودة داخل الشبكة المحلية.

وبذلك تستطيع جميع الأجهزة استخدام الإنترنت من خلال نفس الـ Public IP Address.

---

## 🌐 مثال على آلية العمل

إذا كانت الشركة تحتوي على:

- **1000 جهاز**

فإن:

- كل جهاز يمتلك **Private IP Address**.
- جميع الأجهزة تخرج إلى الإنترنت باستخدام **Public IP Address** واحد فقط.

---

## 📦 كيف يعيد NAT البيانات للجهاز الصحيح؟

عندما يرسل أحد الأجهزة طلبًا إلى الإنترنت، مثل طلب صفحة فيسبوك:

1. يرسل الجهاز الطلب.
2. يخرج الطلب إلى الإنترنت باستخدام الـ Public IP Address.
3. تعود البيانات على شكل Packets.
4. يقوم NAT بتحديد الجهاز الذي أرسل الطلب.
5. يعيد الـ Packets إلى الجهاز الصحيح داخل الشبكة.

---

## 💡 فوائد NAT

يساعد NAT على:

- توفير عناوين Public IP.
- تمكين عدد كبير من الأجهزة من مشاركة عنوان واحد.
- تقليل تكلفة إعداد الشبكات.

لو احتاج كل جهاز في العالم إلى Public IP Address مستقل، فإن ذلك سيؤدي إلى استهلاك عدد هائل من العناوين.

---

## 📋 جدول NAT

NAT يحتفظ بجدول يسمى:

**NAT Table**

يقوم من خلاله بـ:

- تتبع الأجهزة التي أرسلت الطلبات.
- تتبع مسار البيانات.
- إعادة Packets إلى الجهاز المناسب.

---

## ❓ سؤال للدرس القادم

إذا كان الجهاز الواحد يشغّل عدة برامج في الوقت نفسه، مثل:

- 🌐 متصفح الإنترنت.
- 🗄️ الاتصال بقاعدة بيانات.
- 💻 برنامج آخر يستخدم الإنترنت.

فكيف يعرف النظام أي برنامج هو الذي طلب البيانات؟

وأوضح أن:

- **IP Address** يحدد الجهاز فقط.

أما كيفية تحديد البرنامج داخل الجهاز فسيتم شرحها في الدرس القادم.

---

## 🔑 الخلاصة

- **NAT** اختصار لـ **Network Address Translation**.
- يعمل عادة داخل الـ Router أو Gateway.
- يربط **Private IP Addresses** مع **Public IP Address** واحد.
- يسمح لجميع الأجهزة داخل الشبكة باستخدام نفس عنوان الإنترنت العام.
- يحتفظ بجدول (NAT Table) لتتبع الطلبات وإعادة البيانات إلى الجهاز الصحيح.
- يحدد IP Address الجهاز فقط، أما كيفية الوصول إلى البرنامج داخل الجهاز فسيتم شرحها لاحقًا.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# NAT and IP Mapping

---

## 📝 Introduction

This lesson explains:

- The concept of **NAT (Network Address Translation)**.
- Why NAT is needed.
- How multiple devices share a single **Public IP Address**.
- The relationship between **Public IP Addresses** and **Private IP Addresses**.

---

## 🔄 Quick Review

From previous lessons:

- Every device connected to a network has an **IP Address**.
- Common IP address types include:
  - 🌐 Public IP Address
  - 🏠 Private IP Address
- Devices inside local networks receive their addresses through:
  - DHCP
  - Or manual assignment.

---

## ❓ Why Do We Need NAT?

A home or company network may contain many devices, such as:

- 💻 Computers.
- 📱 Smartphones.
- 🖨️ Printers.

These devices do not all require their own **Public IP Address**.

Instead, they use:

- **Private IP Addresses**

inside the local network.

---

## 🏠 Example

Inside a local network, devices may have addresses such as:

- 192.168.1.2
- 192.168.1.3
- 192.168.1.4

A neighbor's network may use exactly the same addresses.

This is not a problem because these addresses are private to each local network.

---

## 🎯 What is NAT?

**NAT** stands for:

**Network Address Translation**

It is a technique that:

- Maps **Private IP Addresses** to a **Public IP Address**.

---

## 📍 Where Does NAT Run?

NAT is typically implemented inside a:

- **Gateway**
- Or **Router**

where it manages address translation.

---

## 🔧 How Does NAT Work?

A home or company usually receives:

- One **Public IP Address**

from its Internet Service Provider (ISP).

NAT then:

- Maps that public address to all devices inside the local network.

As a result, every device can access the Internet using the same Public IP Address.

---

## 🌐 Example

Suppose a company has:

- **1,000 computers**

Each computer has its own **Private IP Address**, but all Internet traffic leaves the network using only one **Public IP Address**.

---

## 📦 Returning Data to the Correct Device

When a device sends a request, such as opening Facebook:

1. The request leaves through the Public IP Address.
2. The Internet sends the response back.
3. The response arrives as packets.
4. NAT determines which device originally sent the request.
5. NAT forwards the packets to the correct device.

---

## 💡 Benefits of NAT

NAT helps to:

- Save Public IP addresses.
- Allow many devices to share one Public IP.
- Reduce the cost of network deployment.

Every device required its own Public IP Address, an enormous number of addresses would be consumed.

---

## 📋 NAT Table

NAT maintains a:

**NAT Table**

which is used to:

- Track outgoing requests.
- Track routing information.
- Return packets to the correct device.

---

## ❓ Question for the Next Lesson

Important question:

If one computer is running multiple applications at the same time, such as:

- 🌐 A web browser.
- 🗄️ A database connection.
- 💻 Another Internet application.

How does the system know which application requested the returned data?

He explained that:

- An **IP Address** identifies the device only.

The method used to identify the specific application will be covered in the next lesson.

---

## 🔑 Summary

- **NAT** stands for **Network Address Translation**.
- It usually runs on a Router or Gateway.
- It maps many **Private IP Addresses** to a single **Public IP Address**.
- It allows all devices on a local network to share one Internet address.
- NAT keeps a **NAT Table** to track requests and return packets to the correct device.
- An **IP Address** identifies the device, while identifying the application inside the device will be explained in the next lesson.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>