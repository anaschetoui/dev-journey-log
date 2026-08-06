# HTTP vs HTTPS Protocols

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# بروتوكولات HTTP و HTTPS

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- ما هو بروتوكول **HTTP**.
- ما هو بروتوكول **HTTPS**.
- الفرق بين HTTP و HTTPS.
- دور **SSL** و **TLS**.
- لماذا تستخدم بعض الصفحات HTTPS فقط.

---

## 🌐 مراجعة سريعة

تعرفنا سابقًا على:

- استخدام **Browser** للوصول إلى مواقع الويب.
- كتابة عنوان الموقع (**URL**) داخل المتصفح.
- إرسال **HTTP Request** واستقبال **HTTP Response**.
- تنزيل ملفات **HTML** وعرضها داخل المتصفح.

---

## 🌍 ما هو HTTP؟

**HTTP** هو اختصار لـ:

> **Hyper Text Transfer Protocol**

وهو البروتوكول الذي يستخدمه المتصفح للتواصل مع خادم الويب (Web Server).

---

## 🎯 وظيفة HTTP

يقوم HTTP بـ:

- إرسال طلبات صفحات الويب.
- استلام استجابات الخادم.
- نقل ملفات HTML.
- نقل النصوص والصور والصوت والفيديو وغيرها من البيانات.

وبذلك يسمح للمتصفح بالوصول إلى محتوى **World Wide Web**.

---

## 🔄 كيف يعمل HTTP؟

عند كتابة عنوان مثل:

```text
http://www.programmingadvices.com
```

تحدث الخطوات التالية:

1. يرسل المتصفح **HTTP Request**.
2. يستقبل Web Server الطلب.
3. يجهز الصفحة المطلوبة.
4. يرسل **HTTP Response**.
5. يقوم المتصفح بتنزيل الصفحة وعرضها.

---

## 🔌 المنفذ الافتراضي

يستخدم بروتوكول HTTP المنفذ:

```text
80
```

وهو المنفذ الافتراضي لهذا البروتوكول.

---

## 📄 البيانات المنقولة

يمكن لـ HTTP نقل أنواع مختلفة من البيانات مثل:

- HTML
- النصوص
- الصور
- الصوت
- الفيديو
- ملفات أخرى

---

## 🔒 ما هو HTTPS؟

**HTTPS** هو:

> **نسخة آمنة من HTTP.**

ويعمل بنفس الطريقة تقريبًا، لكنه يضيف طبقة حماية أثناء نقل البيانات.

---

## ⚠️ مشكلة HTTP

عند استخدام HTTP:

- تنتقل البيانات بدون تشفير.
- يمكن لأي جهة تعترض الاتصال رؤية البيانات المنقولة.

ولهذا لا يعتبر مناسبًا لنقل المعلومات الحساسة.

---

## ✅ مميزات HTTPS

يقوم HTTPS بـ:

- تشفير البيانات أثناء انتقالها.
- حماية المعلومات الحساسة.
- زيادة أمان الاتصال بين المستخدم والموقع.

---

## 🔐 ما هو Encryption؟

**Encryption** هو:

> **تحويل البيانات إلى صيغة غير مفهومة لا يمكن قراءتها إلا باستخدام المفتاح المناسب.**

حتى إذا تم اعتراض البيانات فلن تكون مفهومة بدون مفتاح فك التشفير.

---

## 🛡️ SSL و TLS

يعتمد HTTPS على تقنيات مثل:

- **SSL (Secure Sockets Layer)**
- **TLS (Transport Layer Security)**

وتقوم هذه الطبقات بـ:

- تشفير البيانات.
- فك تشفيرها عند الطرف الآخر.

---

## 📜 SSL Certificate

لاستخدام HTTPS يحتاج الموقع إلى:

> **SSL Certificate**

وتستخدم لإجراء عمليات التشفير وفك التشفير أثناء الاتصال.

---

## ⚡ الفرق بين SSL و TLS

كلاهما يستخدم لتأمين الاتصال.

لكن:

- **TLS** أكثر أمانًا.
- أكثر اعتمادية.
- أسرع من SSL.

---

## 🏦 لماذا لا تستخدم جميع الصفحات HTTPS؟

عملية التشفير تحتاج إلى معالجة إضافية.

لذلك قد تستخدم بعض المواقع:

- HTTP للصفحات العامة.
- HTTPS للصفحات التي تحتوي على معلومات حساسة.

مثل:

- تسجيل الدخول.
- الدفع الإلكتروني.
- إدخال بيانات البطاقات البنكية.

---

## 🛒 مثال

قد يستخدم متجر إلكتروني:

- HTTP أثناء تصفح المنتجات.
- HTTPS عند صفحة الدفع (**Checkout**) لحماية بيانات بطاقة الدفع.

---

## 🔑 الخلاصة

- **HTTP** هو بروتوكول نقل صفحات الويب.
- يستخدم المنفذ **80**.
- ينقل البيانات بدون تشفير.
- **HTTPS** هو HTTP مع تشفير.
- يعتمد على **SSL** أو **TLS**.
- يستخدم لحماية البيانات الحساسة أثناء انتقالها.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# HTTP vs HTTPS Protocols

---

## 📝 Introduction

This lesson explains:

- What the **HTTP** protocol is.
- What the **HTTPS** protocol is.
- The differences between HTTP and HTTPS.
- The roles of **SSL** and **TLS**.
- Why some web pages use HTTPS only.

---

## 🌐 Quick Review

Previously learned concepts:

- A **Browser** is used to access websites.
- Users enter a **URL** into the browser.
- The browser sends an **HTTP Request** and receives an **HTTP Response**.
- HTML pages are downloaded and rendered by the browser.

---

## 🌍 What is HTTP?

**HTTP** stands for:

> **Hyper Text Transfer Protocol**

It is the protocol used by web browsers to communicate with web servers.

---

## 🎯 Purpose of HTTP

HTTP is responsible for:

- Sending web page requests.
- Receiving server responses.
- Transferring HTML documents.
- Transferring text, images, audio, video, and other web resources.

It allows browsers to access data on the **World Wide Web**.

---

## 🔄 How HTTP Works

When a user enters a URL such as:

```text
http://www.programmingadvices.com
```

The following steps occur:

1. The browser sends an **HTTP Request**.
2. The Web Server receives the request.
3. The requested page is prepared.
4. An **HTTP Response** is returned.
5. The browser downloads and displays the page.

---

## 🔌 Default Port

The default port used by HTTP is:

```text
80
```

---

## 📄 Types of Data

HTTP can transfer various types of content, including:

- HTML
- Text
- Images
- Audio
- Video
- Other files

---

## 🔒 What is HTTPS?

**HTTPS** is:

> **The secure version of HTTP.**

It works similarly to HTTP but adds encryption to protect transmitted data.

---

## ⚠️ The Problem with HTTP

With HTTP:

- Data is transmitted without encryption.
- Anyone intercepting the connection may be able to read the transmitted data.

For this reason, it is not suitable for sensitive information.

---

## ✅ Benefits of HTTPS

HTTPS provides:

- Encrypted communication.
- Better protection for sensitive information.
- A secure connection between the browser and the server.

---

## 🔐 What is Encryption?

**Encryption** is:

> **The process of converting readable data into an unreadable form that can only be decoded using the appropriate key.**

Even if intercepted, encrypted data cannot be understood without the correct key.

---

## 🛡️ SSL and TLS

HTTPS relies on technologies such as:

- **SSL (Secure Sockets Layer)**
- **TLS (Transport Layer Security)**

These technologies:

- Encrypt transmitted data.
- Decrypt it at the receiving side.

---

## 📜 SSL Certificate

To use HTTPS, a website needs an:

> **SSL Certificate**

It is used during encryption and decryption between the browser and the web server.

---

## ⚡ SSL vs TLS

Both SSL and TLS secure communications.

However:

- **TLS** provides stronger security.
- It is more reliable.
- It is generally faster than SSL.

---

## 🏦 Why Don't All Pages Use HTTPS?

Encryption requires additional processing.

For that reason, some websites may use:

- HTTP for public pages.
- HTTPS for pages containing sensitive information.

Examples include:

- Login pages.
- Payment pages.
- Credit card information.

---

## 🛒 Example

An online store may use:

- HTTP while browsing products.
- HTTPS during the checkout process to protect payment information.

---

## 🔑 Summary

- **HTTP** is the protocol used to transfer web pages.
- Its default port is **80**.
- HTTP transmits data without encryption.
- **HTTPS** is HTTP with encryption.
- It uses **SSL** or **TLS** to secure communications.
- HTTPS is used to protect sensitive information during transmission.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>