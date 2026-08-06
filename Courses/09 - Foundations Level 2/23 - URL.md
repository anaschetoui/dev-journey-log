# URL (Uniform Resource Locator)

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو URL؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- معنى **URL**.
- مكونات الـ URL.
- وظيفة كل جزء من أجزاء الـ URL.
- مفهوم **Query** و **Query Parameters**.
- مفهوم **Fragment**.

---

## 🎯 ما هو URL؟

**URL** هو اختصار لـ:

> **Uniform Resource Locator**

وهو:

> **عنوان يحدد موقع مورد (Resource) داخل شبكة الحاسوب ويوفر آلية للوصول إليه.**

---

## 📂 ما هو Resource؟

المورد (**Resource**) هو أي عنصر يمكن الوصول إليه، مثل:

- صفحة ويب (Web Page)
- صورة (Image)
- ملف
- فيديو
- ملف صوتي
- أي محتوى موجود على موقع ويب

---

## 📌 لماذا نستخدم URL؟

يستخدم الـ URL للوصول إلى مورد معين.

يشبه ذلك مسار الملفات داخل نظام التشغيل.

مثال:

```text
C:\Users\Anas\Documents\File.txt
```

وكما يحتاج الملف إلى مسار للوصول إليه، يحتاج أي مورد على الويب إلى URL.

---

## 🧩 مكونات URL

مثال:

```text
https://video.google.co.uk:80/videoplay?docid=7246927612831078230&hl=en#00h02m30s
```

| الجزء | المثال | الوصف |
|--------|---------|--------|
| **Protocol** | `https` | البروتوكول المستخدم للاتصال بالخادم. |
| **Sub Domain** | `video` | اسم فرعي تابع للدومين الرئيسي. |
| **Domain Name** | `google.co.uk` | اسم النطاق الذي يشير إلى الخادم. |
| **Port** | `80` | المنفذ الذي يستخدمه البروتوكول للوصول إلى الخدمة. |
| **Path** | `/videoplay` | مسار المورد المطلوب داخل الخادم. |
| **Query** | `?docid=7246927612831078230&hl=en` | بيانات إضافية يتم إرسالها إلى المورد المطلوب. |
| **Fragment** | `#00h02m30s` | يشير إلى جزء معين داخل المورد. |

---

## 🌐 Protocol

البروتوكول هو الطريقة المستخدمة للتواصل مع الخادم.

أشهر البروتوكولات:

- HTTP
- HTTPS

---

## 📍 Sub Domain

هو اسم يسبق اسم النطاق الرئيسي.

مثال:

```text
video.google.co.uk
```

في هذا المثال:

```text
video
```

هو الـ Sub Domain.

---

## 🏷️ Domain Name

هو الاسم الذي يشير إلى الخادم.

مثال:

```text
google.co.uk
```

بدلاً من استخدام عنوان IP.

---

## 🚪 Port

الـ Port يحدد الخدمة أو البرنامج الذي سيتم الاتصال به.

مثال:

```text
:80
```

غالبًا لا يظهر في عنوان URL لأن المتصفح يستخدم المنفذ الافتراضي تلقائيًا.

---

## 📄 Path

يمثل موقع المورد المطلوب داخل الخادم.

مثال:

```text
/videoplay
```

قد يشير إلى:

- صفحة ويب
- صورة
- فيديو
- ملف

---

## ❓ Query

تبدأ بعلامة:

```text
?
```

وتستخدم لإرسال معلومات إضافية إلى المورد المطلوب.

مثال:

```text
?docid=7246927612831078230&hl=en
```

---

## ⚙️ Query Parameters

هي القيم الموجودة داخل الـ Query.

كل Parameter يتكون من:

```text
name=value
```

مثال:

```text
docid=7246927612831078230
```

```text
hl=en
```

يتم فصل الـ Parameters بعلامة:

```text
&
```

ويمكن استخدامها لإرسال معلومات مثل:

- Student ID
- Video ID
- Product ID
- Language

مثال:

```text
student?id=15
```

تستخدم الصفحة قيمة `15` لجلب بيانات الطالب من قاعدة البيانات.

---

## 📌 Fragment

يبدأ بعلامة:

```text
#
```

مثال:

```text
#00h02m30s
```

أو

```text
#section2
```

يستخدم للانتقال مباشرة إلى جزء معين داخل الصفحة أو المورد.

---

## 💡 هل يحتوي كل URL على جميع هذه الأجزاء؟

لا.

قد يكون بسيطًا مثل:

```text
https://google.com
```

أو قد يحتوي أيضًا على:

- Port
- Path
- Query
- Query Parameters
- Fragment

بحسب احتياجات التطبيق.

---

## 🔑 الخلاصة

- **URL** اختصار لـ **Uniform Resource Locator**.
- يستخدم لتحديد موقع مورد على الشبكة والوصول إليه.
- يمكن أن يشير إلى صفحة أو صورة أو فيديو أو أي ملف.
- يتكون من:
  - Protocol
  - Sub Domain
  - Domain Name
  - Port
  - Path
  - Query
  - Query Parameters
  - Fragment
- ليست كل عناوين URL تحتوي على جميع هذه الأجزاء.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is a URL?

---

## 📝 Introduction

This lesson explains:

- The meaning of a **URL**.
- The components of a URL.
- The purpose of each component.
- **Query** and **Query Parameters**.
- **Fragment**.

---

## 🎯 What is a URL?

**URL** stands for:

> **Uniform Resource Locator**

It is:

> **The address that identifies the location of a resource on a computer network and provides a mechanism to retrieve it.**

---

## 📂 What is a Resource?

A **Resource** is anything that can be accessed, such as:

- A web page
- An image
- A file
- A video
- An audio file
- Any content hosted on a website

---

## 📌 Why Do We Need a URL?

A URL provides the location of a resource.

It is similar to a file path in an operating system.

Example:

```text
C:\Users\Anas\Documents\File.txt
```

Just as every file has a path, every web resource has a URL.

---

## 🧩 URL Components

Example:

```text
https://video.google.co.uk:80/videoplay?docid=7246927612831078230&hl=en#00h02m30s
```

| Component | Example | Description |
|-----------|---------|-------------|
| **Protocol** | `https` | The protocol used to communicate with the server. |
| **Sub Domain** | `video` | A subdivision of the main domain. |
| **Domain Name** | `google.co.uk` | The registered domain name. |
| **Port** | `80` | The network port used by the protocol. |
| **Path** | `/videoplay` | The location of the requested resource. |
| **Query** | `?docid=7246927612831078230&hl=en` | Additional information sent to the requested resource. |
| **Fragment** | `#00h02m30s` | Points to a specific location within the resource. |

---

## 🌐 Protocol

The protocol defines how the browser communicates with the server.

Common examples:

- HTTP
- HTTPS

---

## 📍 Sub Domain

A name placed before the main domain.

Example:

```text
video.google.co.uk
```

Here,

```text
video
```

is the Sub Domain.

---

## 🏷️ Domain Name

The human-readable name that identifies the server.

Example:

```text
google.co.uk
```

instead of using an IP Address.

---

## 🚪 Port

The Port specifies the destination service or application.

Example:

```text
:80
```

It is usually omitted because the browser automatically uses the default port.

---

## 📄 Path

The Path specifies the location of the requested resource.

Example:

```text
/videoplay
```

It may refer to:

- A webpage
- An image
- A video
- A file

---

## ❓ Query

A Query begins with:

```text
?
```

It sends additional information to the requested resource.

Example:

```text
?docid=7246927612831078230&hl=en
```

---

## ⚙️ Query Parameters

Query Parameters are the individual key-value pairs contained inside the Query.

Each parameter follows the format:

```text
name=value
```

Example:

```text
docid=7246927612831078230
```

```text
hl=en
```

Multiple parameters are separated by:

```text
&
```

They can represent values such as:

- Student ID
- Video ID
- Product ID
- Language

Example:

```text
student?id=15
```

The page can use `15` to retrieve that student's information from a database.

---

## 📌 Fragment

A Fragment begins with:

```text
#
```

Example:

```text
#00h02m30s
```

or

```text
#section2
```

It tells the browser to jump directly to a specific section of the resource.

---

## 💡 Does Every URL Include All Components?

No.

A URL may simply be:

```text
https://google.com
```

or it may also include:

- Port
- Path
- Query
- Query Parameters
- Fragment

depending on the application's requirements.

---

## 🔑 Summary

- **URL** stands for **Uniform Resource Locator**.
- It identifies the location of a resource and provides a way to access it.
- A resource may be a webpage, image, video, or file.
- A URL may contain:
  - Protocol
  - Sub Domain
  - Domain Name
  - Port
  - Path
  - Query
  - Query Parameters
  - Fragment
- Not every URL contains all of these components.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>