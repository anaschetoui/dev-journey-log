# Transmission Control Protocol (TCP)

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# بروتوكول التحكم بالنقل (TCP)

---

## 📝 مقدمة

في هذا الدرس تم شرح **Transmission Control Protocol (TCP)**، وهو البروتوكول المسؤول عن إدارة عملية **تقسيم البيانات وإعادة تجميعها** أثناء انتقالها عبر الشبكة.

يعتمد هذا الدرس على المفاهيم التي تم شرحها في الدرس السابق حول **Packets**.

---

## 🔄 مراجعة سريعة

في الدرس السابق تعلمنا أن:

- 🖼️ الصورة أو الملف أو الفيديو أو اللعبة يتم تحويلها إلى **Binary**.
- ✂️ يتم تقسيم الملف إلى أجزاء صغيرة تسمى **Packets**.
- 📤 يتم إرسال هذه الـ Packets عبر الشبكة.
- 📥 يقوم الجهاز المستقبل بجمعها مرة أخرى لإعادة تكوين الملف الأصلي.

---

## 🎯 ما هو TCP؟

**TCP** هو اختصار:

**Transmission Control Protocol**

وهو البروتوكول المسؤول عن:

- تقسيم الملفات إلى Packets.
- استقبال الـ Packets.
- إعادة تجميعها بالشكل الصحيح.
- التأكد من وصول جميع الـ Packets كاملة.

---

## 🔧 مسؤوليات TCP

يقوم TCP بالمهام التالية:

- 📦 تقسيم الملف إلى Packets قبل الإرسال.
- 📤 إرسال الـ Packets عبر الشبكة.
- 📥 استقبال الـ Packets في الجهاز الآخر.
- 🔄 إعادة تجميعها بنفس ترتيبها الصحيح.
- ✅ التأكد من أن جميع الـ Packets وصلت كاملة.
- 🎯 إعادة إنشاء الملف كما كان قبل الإرسال.

---

## 📋 لماذا يقوم TCP بإعادة الترتيب؟

قد تصل الـ Packets بترتيب مختلف.

لذلك يقوم TCP بإضافة معلومات لكل Packet حتى يستطيع الجهاز المستقبل:

- معرفة ترتيبها الصحيح.
- إعادة تجميعها كما كانت عند الإرسال.

فالملف يجب أن يصل بنفس الشكل الذي أُرسل به.

---

## 🌐 دور TCP في الشبكة

يقوم TCP بإدارة عملية الاتصال بين التطبيقات عبر الشبكة.

كما أنه:

- يقوم بتقسيم الرسالة إلى Packets قبل إرسالها.
- ويعيد تجميعها بالترتيب الصحيح عند وصولها إلى الجهاز المستقبل.

---

## ❓ ما الذي لم يتم شرحه بعد؟

عملية نقل البيانات تتكون من جزأين:

1. ✅ تقسيم الـ Packets وإعادة تجميعها.
2. 📍 معرفة عنوان الجهاز الذي ستنتقل إليه البيانات.

وفي هذا الدرس تم شرح الجزء الأول فقط، أما معرفة عنوان الجهاز فسيتم شرحه في الدرس القادم.

---

## 🔑 الخلاصة

- **TCP** هو البروتوكول المسؤول عن إدارة عملية تقسيم البيانات وإعادة تجميعها.
- يقوم بتقسيم الملف إلى **Packets** قبل الإرسال.
- يتأكد من وصول جميع الـ Packets كاملة.
- يعيد ترتيبها وتجميعها حتى يعود الملف إلى شكله الأصلي.
- موضوع تحديد عنوان الجهاز المستقبل سيتم شرحه في الدرس التالي.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Transmission Control Protocol (TCP)

---

## 📝 Introduction

This lesson explains the **Transmission Control Protocol (TCP)**, the protocol responsible for **dividing data into packets and reassembling them** during transmission over a network.

This lesson builds on the previous lesson about **Packets**.

---

## 🔄 Quick Review

In the previous lesson, we learned that:

- 🖼️ Every image, file, video, or game is represented as **Binary**.
- ✂️ The file is divided into small pieces called **Packets**.
- 📤 These packets are transmitted through the network.
- 📥 The receiving computer collects them and rebuilds the original file.

---

## 🎯 What is TCP?

**TCP** stands for:

**Transmission Control Protocol**

It is the protocol responsible for:

- Dividing files into packets.
- Receiving packets.
- Reassembling packets correctly.
- Ensuring that all packets arrive successfully.

---

## 🔧 TCP Responsibilities

TCP performs the following tasks:

- 📦 Divides a file into packets before transmission.
- 📤 Sends the packets across the network.
- 📥 Receives the packets on the destination computer.
- 🔄 Reassembles them in the correct order.
- ✅ Verifies that every packet has arrived.
- 🎯 Reconstructs the original file.

---

## 📋 Why Does TCP Reorder Packets?

Packets may not arrive in the same order they were sent.

For this reason, TCP stores ordering information with each packet so the receiving computer can:

- Determine the correct order.
- Reassemble the original file exactly as it was sent.

---

## 🌐 TCP's Role in Networking

TCP manages communication between applications over a network.

It also:

- Divides messages into packets before transmission.
- Reassembles them in the correct order after they reach the destination.

---

## ❓ What Will Be Covered Next?

Data transmission involves two main parts:

1. ✅ Dividing packets and reassembling them.
2. 📍 Determining the destination computer's address.

This lesson covered only the first part. The second part will be explained in the next lesson.

---

## 🔑 Summary

- **TCP** is the protocol responsible for managing packet transmission.
- It divides files into **Packets** before sending them.
- It ensures that all packets arrive successfully.
- It reorders and reassembles them into the original file.
- The process of identifying the destination address will be covered in the next lesson.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>