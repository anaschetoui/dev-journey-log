# How Data is Transferred? (Packets)

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# كيف يتم نقل البيانات؟ (Packets)

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- كيفية انتقال البيانات بين أجهزة الكمبيوتر.
- أن نفس المبدأ يُستخدم سواء داخل **الشبكة المحلية (LAN)** أو عبر **الإنترنت**.
- مفهوم **Packet** ولماذا يتم تقسيم الملفات إلى أجزاء صغيرة قبل إرسالها.

---

## 🌐 انتقال البيانات بين الأجهزة

عندما يريد جهاز كمبيوتر إرسال ملف إلى جهاز آخر، مثل:

- 🖼️ صورة
- 🎵 ملف صوتي
- 🎥 فيديو
- 🎮 لعبة
- 📄 أي ملف آخر

فإن جميع هذه الملفات تُعامل بنفس الطريقة أثناء عملية النقل.

---

## 🔑 جميع الملفات تتحول إلى Binary

كما تمت الإشارة في الدروس السابقة:

كل ما يراه أو يسمعه الكمبيوتر يتم تمثيله على شكل:

- **Binary**

لذلك فإن:

- الصورة عبارة عن Binary.
- الفيديو عبارة عن Binary.
- ملف الموسيقى عبارة عن Binary.
- اللعبة عبارة عن Binary.
- أي ملف آخر عبارة عن Binary.

---

## ✂️ لماذا يتم تقسيم الملف؟

لا يقوم الكمبيوتر بإرسال الملف كاملاً دفعة واحدة.

بدلاً من ذلك يقوم بتقسيمه إلى أجزاء صغيرة.

فعلى سبيل المثال:

- صورة واحدة قد يتم تقسيمها إلى **36 جزءًا**.
- وقد يكون العدد أقل أو أكثر حسب الملف.

كل جزء من هذه الأجزاء يسمى:

## 🎯 Packet

**Packet** هي:

> جزء صغير من البيانات (Data)، سواء كانت صورة أو فيديو أو لعبة أو أي ملف آخر.

---

## 📤 كيف تتم عملية الإرسال؟

يقوم الكمبيوتر المرسل بما يلي:

1. تقسيم الملف إلى Packets.
2. معرفة عدد الـ Packets.
3. إرسالها واحدة تلو الأخرى إلى الجهاز المستقبل.

ويتم إبلاغ الجهاز المستقبل بعدد الـ Packets المتوقع وصولها.

---

## 📥 كيف تتم عملية الاستقبال؟

يقوم الجهاز المستقبل بـ:

- انتظار جميع الـ Packets.
- التأكد من وصول العدد الكامل.
- إعادة تجميعها لتكوين الملف الأصلي.

---

## 🔢 هل تصل الـ Packets بالترتيب؟

ليس بالضرورة.

قد تصل بعض الـ Packets قبل غيرها.

لكن ذلك لا يسبب مشكلة لأن:

- كل Packet تحتوي على معلومات تحدد ترتيبها.
- بعد وصول جميع الـ Packets يتم ترتيبها بالشكل الصحيح ثم إعادة بناء الملف.

---

## 💡 مثال

إذا كانت الصورة مقسمة إلى:

- **36 Packet**

فإن الجهاز المستقبل ينتظر وصول جميع الـ 36 Packet، ثم يعيد ترتيبها وتجميعها حتى تظهر الصورة مرة أخرى.

---

## 🚀 لماذا يتم استخدام Packets؟

### ✅ أولًا: تسريع عملية الإرسال

بدلاً من إرسال ملف كبير دفعة واحدة، يتم إرسال أجزاء صغيرة بشكل متتابع، مما يجعل عملية النقل أكثر كفاءة.

---

### ✅ ثانيًا: السماح بتنفيذ عمليات متعددة

عند تنزيل أكثر من ملف في الوقت نفسه، يستطيع نظام التشغيل توزيع الموارد بين عمليات التنزيل المختلفة لأن البيانات تُرسل على شكل Packets.

---

### ✅ ثالثًا: الاستفادة من Download Accelerators

برامج **Download Accelerator** تعمل عن طريق:

- تنزيل أكثر من Packet في الوقت نفسه.
- تنفيذ عمليات التنزيل بشكل متوازٍ (**Parallel**).

وبعد اكتمال التنزيل يتم جمع جميع الـ Packets وإعادة تكوين الملف.

---

## 📦 مفهوم Packet

إذا سمعت كلمة **Packet** فتذكر أنها تعني:

- جزءًا صغيرًا من ملف.

وأي ملف تريد:

- تنزيله.
- إرساله.
- نقله بين جهازين.

فإنه يتم:

1. تقسيمه إلى Packets.
2. إرسال هذه الـ Packets.
3. إعادة تجميعها عند وصولها.

---

## ❓ أسئلة سيتم الإجابة عنها لاحقًا

هناك سؤالين سيتم شرحهما في الدروس القادمة:

1. من المسؤول عن تقسيم الملف إلى Packets وإعادة تجميعه؟
2. كيف يعرف الكمبيوتر الجهاز الذي يجب إرسال البيانات إليه؟

---

## 🔑 الخلاصة

- جميع الملفات يتم التعامل معها على أنها **Binary**.
- أي ملف يتم تقسيمه إلى أجزاء صغيرة تسمى **Packets** قبل إرساله.
- قد تصل الـ Packets بترتيب مختلف.
- بعد وصول جميع الـ Packets يتم ترتيبها وإعادة تجميعها للحصول على الملف الأصلي.
- نفس المبدأ يُستخدم داخل الشبكات المحلية وعبر الإنترنت.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# How Data is Transferred? (Packets)

---

## 📝 Introduction

This lesson explains:

- How data is transferred between computers.
- That the same principle applies to both **local networks (LAN)** and the **Internet**.
- The concept of **Packets** and why files are divided before being transmitted.

---

## 🌐 Data Transfer Between Computers

When one computer sends a file to another, such as:

- 🖼️ An image
- 🎵 An audio file
- 🎥 A video
- 🎮 A game
- 📄 Any other file

all of them are transferred using the same process.

---

## 🔑 Everything Becomes Binary

As explained in previous lessons:

Everything stored or processed by a computer is represented as:

- **Binary**

Therefore:

- Images are Binary.
- Videos are Binary.
- Music files are Binary.
- Games are Binary.
- Every other file is Binary.

---

## ✂️ Why is a File Divided?

A computer does not send the entire file as one piece.

Instead, it divides the file into many smaller parts.

For example:

- A picture may be divided into **36 parts**.
- The number of parts depends on the file.

Each small part is called a:

## 🎯 Packet

A **Packet** is:

> A small piece of data from a file, whether it is an image, video, game, or any other type of file.

---

## 📤 Sending Process

The sending computer:

1. Divides the file into packets.
2. Knows how many packets exist.
3. Sends them one after another.

The receiving computer is informed of the total number of packets expected.

---

## 📥 Receiving Process

The receiving computer:

- Waits until all packets arrive.
- Confirms that every packet has been received.
- Reassembles them into the original file.

---

## 🔢 Do Packets Arrive in Order?

Not necessarily.

Packets may arrive in different orders.

This is not a problem because:

- Every packet carries information about its order.
- Once all packets arrive, they are reordered correctly and combined into the original file.

---

## 💡 Example

If an image is divided into:

- **36 Packets**

the receiving computer waits until all 36 packets have arrived before rebuilding the image.

---

## 🚀 Why Use Packets?

### ✅ Faster Transmission

Instead of sending one large file, many small packets are transmitted, making data transfer more efficient.

---

### ✅ Multiple Downloads

Since data is divided into packets, the operating system can manage multiple downloads and distribute system resources between them.

---

### ✅ Download Accelerators

A **Download Accelerator** works by:

- Downloading multiple packets simultaneously.
- Performing downloads in **parallel**.

When all packets have arrived, they are combined to recreate the original file.

---

## 📦 Packet Definition

Whenever you hear the term **Packet**, remember that it means:

- A small part of a file.

Any file that you:

- Download,
- Upload,
- Send,
- Transfer,

is divided into packets, transmitted, and then reassembled.

---

## ❓ Questions for Future Lessons

There are two questions that will be answered later:

1. Who is responsible for dividing and reassembling packets?
2. How does a computer know which destination computer should receive the data?

---

## 🔑 Summary

- Every file is represented as **Binary**.
- Files are divided into **Packets** before transmission.
- Packets may arrive out of order.
- After all packets arrive, they are reordered and reassembled into the original file.
- The same process is used in both local networks and across the Internet.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>