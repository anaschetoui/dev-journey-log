# What are Ports and Sockets?

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو Port و Socket؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- لماذا لا يكفي **IP Address** وحده.
- مفهوم **Port**.
- مفهوم **Socket Address**.
- مفهوم **Socket** في البرمجة.
- أمثلة على أشهر أرقام الـ Ports.

---

## 🎯 لماذا لا يكفي IP Address؟

تعرفنا في الدروس السابقة أن:

- **IP Address** يحدد عنوان الجهاز على الشبكة.
- لكنه لا يستطيع تحديد البرنامج أو الخدمة داخل الجهاز.

لنشبّه الأمر بعنوان عمارة:

- **IP Address** = عنوان العمارة.
- **Port** = رقم الشقة داخل العمارة.

لذلك لا يكفي الوصول إلى الجهاز فقط، بل يجب معرفة أي برنامج هو المقصود.

---

## 🖥️ وجود أكثر من Server على نفس الجهاز

يمكن لجهاز واحد أن يحتوي على أكثر من Server، مثل:

- Web Server
- Mail Server
- Servers أخرى

وجميعها تشترك في نفس **IP Address**، لذلك يحتاج كل Server إلى Port خاص به حتى تصل البيانات إلى الخدمة الصحيحة.

---

## 🔑 ما هو Port؟

**Port** هو:

> **رقم يتم إرفاقه مع IP Address لتمييز نقطة الاتصال (Connection Endpoint).**

ويُستخدم لتحديد البرنامج أو الخدمة التي يجب أن تستقبل البيانات.

مثال:

```text
192.168.1.10:23
```

- **192.168.1.10** ← IP Address
- **23** ← Port Number

---

## 📦 وظيفة Port

عند وصول الـ Packets إلى الجهاز:

- يقوم **IP Address** بإيصالها إلى الجهاز الصحيح.
- يقوم **Port** بإيصالها إلى البرنامج أو الخدمة الصحيحة داخل الجهاز.

بدون Port ستصل البيانات إلى الجهاز، لكنها لن تعرف إلى أي برنامج يجب أن تذهب.

---

## 🔗 ما هو Socket Address؟

يتكون **Socket Address** من:

- **IP Address**
- **Port**

الصيغة:

```text
IP Address : Port
```

مثال:

```text
192.168.1.10:23
```

وهذا يسمى:

**Socket Address**

---

## 💡 ما هو Socket؟

الـ **Socket** عبارة عن قناة اتصال تسمح لبرنامجين أو جهازين بالتواصل المباشر وإرسال واستقبال البيانات.

يستخدم في تطوير تطبيقات كثيرة مثل تطبيقات المحادثة (Chat Applications).

---

## 📊 أمثلة على أشهر Ports

بعض المنافذ المعروفة:

| Port | Protocol | الاستخدام |
|------:|----------|------------|
| **20** | FTP | نقل البيانات |
| **21** | FTP | التحكم |
| **22** | SSH | الاتصال الآمن |
| **23** | Telnet | تسجيل الدخول |
| **25** | SMTP | البريد الإلكتروني |
| **53** | DNS | خدمة أسماء النطاقات |
| **67 / 68** | DHCP | توزيع عناوين IP |
| **80** | HTTP | صفحات الويب |
| **123** | NTP | مزامنة الوقت |
| **161 / 162** | SNMP | إدارة الشبكات |
| **389** | LDAP | خدمات الدليل |
| **443** | HTTPS | الويب الآمن |

---

## 🌐 أمثلة ذكرها المحاضر

### HTTP

- يستخدم بروتوكول **HTTP** لجلب صفحات الويب.
- المنفذ الافتراضي له هو:

**Port 80**

---

### SMTP

- يستخدم بروتوكول **SMTP** لإرسال واستقبال البريد الإلكتروني.
- المنفذ الافتراضي له هو:

**Port 25**

---

## 🔒 أهمية Ports

تساعد المنافذ في:

- تمييز الخدمات المختلفة داخل نفس الجهاز.
- تشغيل عدة Servers أو برامج على نفس الجهاز.
- تنظيم استقبال البيانات لكل برنامج.
- استخدامها في بعض إعدادات أمن الشبكات (Security).

---

## ✅ الخلاصة

- **IP Address** يحدد الجهاز.
- **Port** يحدد البرنامج أو الخدمة داخل الجهاز.
- **Socket Address = IP Address + Port**.
- **Socket** قناة اتصال بين البرامج أو الأجهزة.
- لكل خدمة أو بروتوكول Port معروف، مثل:
  - HTTP → 80
  - SMTP → 25

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What are Ports and Sockets?

---

## 📝 Introduction

This lesson explains:

- Why an **IP Address** alone is not enough.
- The concept of a **Port**.
- What a **Socket Address** is.
- The meaning of a **Socket** in programming.
- Common well-known port numbers.

---

## 🎯 Why Isn't an IP Address Enough?

From previous lessons:

- An **IP Address** identifies a device on the network.
- It does **not** identify which application or service should receive the incoming data.

The instructor compared it to an apartment building:

- **IP Address** = Building address.
- **Port** = Apartment number.

---

## 🖥️ Multiple Servers on One Machine

A single computer can host multiple servers, such as:

- Web Server
- Mail Server
- Other servers

Since they all share the same IP Address, each service requires its own Port.

---

## 🔑 What is a Port?

A **Port** is:

> **A number assigned to uniquely identify a connection endpoint.**

It tells the operating system which application should receive the incoming data.

Example:

```text
192.168.1.10:23
```

- **192.168.1.10** → IP Address
- **23** → Port Number

---

## 📦 What Does a Port Do?

When packets arrive:

- The **IP Address** delivers them to the correct computer.
- The **Port** delivers them to the correct application or service.

Without a Port, packets reach the computer but cannot be directed to the intended application.

---

## 🔗 What is a Socket Address?

A **Socket Address** consists of:

- IP Address
- Port Number

Format:

```text
IP Address:Port
```

Example:

```text
192.168.1.10:23
```

This combination is called a **Socket Address**.

---

## 💡 What is a Socket?

A **Socket** is a communication channel that allows applications or computers to exchange data directly.

Sockets are commonly used to build applications such as chat programs.

---

## 📊 Common Port Numbers

Several well-known ports:

| Port | Protocol | Description |
|------:|----------|-------------|
| **20** | FTP | File transfer (data) |
| **21** | FTP | File transfer (control) |
| **22** | SSH | Secure remote login |
| **23** | Telnet | Remote login |
| **25** | SMTP | Email transfer |
| **53** | DNS | Domain Name System |
| **67 / 68** | DHCP | Dynamic IP configuration |
| **80** | HTTP | Web pages |
| **123** | NTP | Network time synchronization |
| **161 / 162** | SNMP | Network management |
| **389** | LDAP | Directory services |
| **443** | HTTPS | Secure web communication |

---

## 🌐 Examples

### HTTP

The **HTTP** protocol is used to retrieve web pages.

Default Port:

**80**

---

### SMTP

The **SMTP** protocol is responsible for handling email.

Default Port:

**25**

---

## 🔒 Why Are Ports Important?

Ports make it possible to:

- Run multiple services on the same computer.
- Deliver packets to the correct application.
- Distinguish between different network services.
- Support network security configurations.

---

## 🔑 Summary

- **IP Address** identifies the device.
- **Port** identifies the application or service.
- **Socket Address = IP Address + Port**.
- **Socket** provides a communication channel between applications.
- Common examples:
  - HTTP → Port 80
  - SMTP → Port 25

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>