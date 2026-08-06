# FTP

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو FTP؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **FTP**.
- وظيفة **File Transfer Protocol**.
- الفرق بين **HTTP** و **FTP**.
- استخدامات FTP.
- مميزات بروتوكول FTP.

---

## 🎯 ما هو FTP؟

**FTP** هو اختصار لـ:

> **File Transfer Protocol**

وهو:

> **بروتوكول مخصص لنقل الملفات بين جهازين عبر الشبكة.**

يمكن استخدامه من أجل:

- رفع الملفات (Upload).
- تنزيل الملفات (Download).
- نقل الملفات بين أجهزة الكمبيوتر والخوادم.

---

## 📂 لماذا نستخدم FTP؟

عند تطوير موقع ويب على جهازك، تكون جميع الملفات محفوظة محليًا، مثل:

- صفحات HTML
- الصور
- ملفات CSS
- ملفات JavaScript
- الفيديوهات
- الملفات الصوتية

ولكي يصبح الموقع متاحًا على الإنترنت، يجب نقل هذه الملفات إلى الخادم (Web Server).

لهذا الغرض يستخدم بروتوكول **FTP**.

---

## 🔄 كيف يعمل FTP؟

يعتمد FTP على وجود برنامج يسمى:

> **FTP Client**

يقوم هذا البرنامج بالاتصال بخادم FTP ثم يسمح لك بـ:

- رفع الملفات إلى الخادم.
- تنزيل الملفات من الخادم.
- إدارة الملفات والمجلدات.

---

## 📤 Upload

يمكن استخدام FTP لرفع:

- صفحات الموقع.
- الصور.
- الفيديوهات.
- الملفات الصوتية.
- أي ملفات أخرى.

مثال:

```text
Your Computer
        │
        │ Upload
        ▼
   FTP Server
```

---

## 📥 Download

يمكن أيضًا تنزيل الملفات من الخادم إلى جهازك.

مثال:

```text
FTP Server
      │
      │ Download
      ▼
Your Computer
```

---

## 🌍 أين يستخدم FTP؟

يستخدم FTP عادة في:

- نشر مواقع الويب.
- نقل الملفات بين الأجهزة.
- رفع ملفات المشاريع إلى الخوادم.
- تنزيل النسخ الاحتياطية (Backups).

---

## 🔀 HTTP vs FTP

| HTTP | FTP |
|-------|-----|
| يستخدم للوصول إلى محتوى الويب. | يستخدم لنقل الملفات. |
| يعرض صفحات الويب داخل المتصفح. | يرفع وينزل الملفات بين الأجهزة والخوادم. |
| يتعامل مع موارد الويب. | يتعامل مع الملفات والمجلدات. |

---

## ⭐ مميزات FTP

يوفر FTP العديد من المزايا، منها:

### نقل عدة ملفات ومجلدات

يمكن رفع أو تنزيل عدد كبير من الملفات والمجلدات في عملية واحدة.

---

### استكمال النقل بعد انقطاع الاتصال

إذا انقطع الاتصال أثناء نقل الملفات، يمكن متابعة العملية من النقطة التي توقفت عندها دون الحاجة إلى إعادة النقل بالكامل.

---

### قائمة انتظار (Queue)

يمكن إضافة عدة عمليات رفع أو تنزيل إلى قائمة انتظار ليتم تنفيذها بالتتابع.

---

### جدولة عمليات النقل

يمكن تحديد وقت معين لبدء عملية رفع أو تنزيل الملفات.

---

### دعم الملفات الكبيرة

يسمح FTP بنقل الملفات الكبيرة، ولا يفرض قيودًا صغيرة على حجم الملف الواحد.

---

## 📌 بروتوكول TCP

يعتمد FTP على:

> **TCP/IP**

ويستخدم بروتوكول **TCP** لضمان وصول الملفات بشكل صحيح أثناء عملية النقل.

---

## 🔑 الخلاصة

- **FTP** اختصار لـ **File Transfer Protocol**.
- يستخدم لنقل الملفات بين الأجهزة والخوادم.
- يمكن استخدامه لرفع الملفات وتنزيلها.
- يعتمد على برنامج يسمى **FTP Client**.
- يستخدم بشكل شائع في نشر مواقع الويب.
- من أهم مميزاته:
  - نقل ملفات متعددة.
  - استكمال النقل بعد انقطاع الاتصال.
  - دعم قائمة الانتظار.
  - جدولة عمليات النقل.
  - دعم الملفات الكبيرة.
- يعتمد على بروتوكول **TCP/IP**.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is FTP?

---

## 📝 Introduction

This lesson explains:

- The concept of **FTP**.
- The purpose of the **File Transfer Protocol**.
- The difference between **HTTP** and **FTP**.
- Common uses of FTP.
- The main features of FTP.

---

## 🎯 What is FTP?

**FTP** stands for:

> **File Transfer Protocol**

It is:

> **A protocol designed to transfer files between two computers over a network.**

It can be used to:

- Upload files.
- Download files.
- Transfer files between computers and servers.

---

## 📂 Why Do We Use FTP?

When developing a website on your computer, all project files are stored locally, such as:

- HTML pages
- Images
- CSS files
- JavaScript files
- Videos
- Audio files

To make the website available online, these files must be transferred to a web server.

This is one of the primary purposes of **FTP**.

---

## 🔄 How Does FTP Work?

FTP typically uses a program called an:

> **FTP Client**

The FTP Client connects to an FTP Server and allows you to:

- Upload files.
- Download files.
- Manage files and folders.

---

## 📤 Upload

FTP can upload:

- Website pages
- Images
- Videos
- Audio files
- Any other files

Example:

```text
Your Computer
        │
        │ Upload
        ▼
   FTP Server
```

---

## 📥 Download

FTP can also download files from the server to your computer.

Example:

```text
FTP Server
      │
      │ Download
      ▼
Your Computer
```

---

## 🌍 Common Uses of FTP

FTP is commonly used for:

- Publishing websites.
- Transferring files between computers.
- Uploading project files to servers.
- Downloading backups.

---

## 🔀 HTTP vs FTP

| HTTP | FTP |
|------|-----|
| Used to access web content. | Used to transfer files. |
| Displays webpages in a browser. | Uploads and downloads files. |
| Works with web resources. | Works with files and directories. |

---

## ⭐ Features of FTP

FTP provides several useful features.

### Transfer Multiple Files and Directories

FTP can upload or download many files and folders in a single operation.

---

### Resume Interrupted Transfers

If the connection is lost during a transfer, FTP can continue from where it stopped instead of starting over.

---

### Transfer Queue

Multiple upload or download operations can be placed in a queue and processed automatically.

---

### Scheduled Transfers

Transfers can be scheduled to start at a specific time.

---

### Large File Support

FTP supports transferring large files and is commonly used for large website projects.

---

## 📌 TCP Protocol

FTP is built on:

> **TCP/IP**

It uses the **TCP** protocol to ensure reliable file delivery.

---

## 🔑 Summary

- **FTP** stands for **File Transfer Protocol**.
- It transfers files between computers and servers.
- It supports both uploading and downloading files.
- It commonly uses an **FTP Client**.
- It is widely used for website deployment.
- Key features include:
  - Multiple file transfers.
  - Resume interrupted transfers.
  - Transfer queues.
  - Scheduled transfers.
  - Large file support.
- FTP relies on **TCP/IP** for reliable communication.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>