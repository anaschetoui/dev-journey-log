# Surfing Internet (Browsers)

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# تصفح الإنترنت (المتصفحات)

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- ما هو **Browser**.
- وظيفة متصفح الإنترنت.
- كيف يتم عرض صفحات الويب.
- العلاقة بين المتصفح وملفات **HTML**.
- نظرة عامة على دورة تحميل صفحة الويب.

---

## 🌐 مراجعة سريعة

تعرفنا سابقًا على:

- الإنترنت هو شبكة تربط الشبكات ببعضها.
- **WWW** هو مجموعة من مواقع الويب التي تعمل عبر الإنترنت.
- يتم الوصول إلى مواقع الويب باستخدام المتصفح.

---

## 🌍 ما هو Browser؟

**Browser** هو:

> **برنامج يستخدم للوصول إلى مواقع الويب وعرض محتواها.**

أمثلة على أشهر المتصفحات:

- Google Chrome
- Mozilla Firefox
- Microsoft Edge / Internet Explorer
- Safari
- Opera

---

## 🎯 وظيفة المتصفح

يقوم المتصفح بـ:

- إرسال طلب إلى موقع الويب.
- تنزيل صفحة الويب.
- تفسير محتويات الصفحة.
- عرض الصفحة للمستخدم بشكل مفهوم.

---

## 🌐 ماذا يحدث عند كتابة عنوان موقع؟

عند كتابة عنوان مثل:

```text
https://programmingadvices.com
```

يقوم المتصفح بإرسال طلب إلى الموقع.

بعد ذلك يستقبل صفحة الويب ويعرضها على الشاشة.

---

## 🔗 URL

عنوان الموقع الذي يتم إدخاله في المتصفح يسمى:

> **URL**

مثال:

```text
https://programmingadvices.com
```

وسيتم شرح مكوناته بالتفصيل في الدروس القادمة.

---

## 📨 HTTP Request

بعد إدخال عنوان الموقع:

يقوم المتصفح بإرسال:

> **HTTP Request**

إلى خادم الموقع.

---

## 📥 HTTP Response

يقوم خادم الموقع بإرجاع:

> **HTTP Response**

ويحتوي على ملفات الصفحة التي سيعرضها المتصفح.

---

## 📄 ما الذي يقوم المتصفح بتنزيله؟

يقوم المتصفح أولًا بتنزيل ملف:

> **HTML**

وهو ملف نصي يحتوي على وصف الصفحة.

---

## 🏗️ HTML

**HTML** عبارة عن:

> **لغة توصيف (Markup Language)**

تستخدم لوصف مكونات صفحة الويب مثل:

- العناوين.
- الفقرات.
- القوائم.
- الروابط.
- الصور.

---

## 🧩 HTML Tags

تعتمد صفحات HTML على عناصر تسمى:

> **Tags**

مثل:

- Headings
- Paragraphs
- Lists
- Images
- Links

ويستخدمها المتصفح لمعرفة كيفية عرض الصفحة.

---

## 🎨 كيف يعرض المتصفح الصفحة؟

يقوم المتصفح بقراءة ملف HTML ثم:

- يفسر عناصر الصفحة.
- ينشئ التنسيق المناسب.
- يعرض النصوص.
- يعرض الصور.
- يعرض الألوان.
- يعرض الروابط.

وبذلك تظهر الصفحة بالشكل الذي يراه المستخدم.

---

## 🖼️ كيف يتم تحميل الصور؟

لا تكون الصور نفسها موجودة داخل ملف HTML.

بل يحتوي HTML على:

- روابط الصور (Image URLs).

يقوم المتصفح عند العثور على صورة بـ:

- تنزيل الصورة من الرابط.
- عرضها في مكانها داخل الصفحة.

ولهذا قد تظهر النصوص أولًا ثم تبدأ الصور بالتحميل إذا كان الاتصال بطيئًا.

---

## ⚙️ Rendering

عملية تحويل ملفات HTML إلى صفحة مرئية تسمى:

> **Rendering**

وفيها يقوم المتصفح بتفسير الصفحة ورسمها على الشاشة.

---

## 📄 Static HTML

قد تكون صفحة HTML:

- ثابتة (Static).

أي أن محتواها مكتوب مباشرة داخل الملف.

---

## 🔄 Dynamic HTML

وقد تكون:

- ديناميكية (Dynamic).

بحيث يتم إنشاء صفحة HTML بواسطة الخادم اعتمادًا على:

- قاعدة بيانات.
- ملفات.
- بيانات المستخدم.

ثم يتم إرسال الصفحة النهائية إلى المتصفح.

---

## 💡 ملخص دورة تحميل الصفحة

عند فتح موقع ويب تحدث الخطوات التالية:

1. يكتب المستخدم عنوان الموقع (URL).
2. يرسل المتصفح HTTP Request.
3. يستقبل الخادم الطلب.
4. ينشئ أو يجهز صفحة HTML.
5. يرسل HTTP Response.
6. يقوم المتصفح بتنزيل الصفحة.
7. يفسر HTML.
8. ينزل الصور والملفات المطلوبة.
9. يعرض الصفحة للمستخدم.

---

## 🔑 الخلاصة

- **Browser** هو برنامج يستخدم لتصفح مواقع الويب.
- يقوم بإرسال **HTTP Request** واستقبال **HTTP Response**.
- يقوم بتنزيل ملفات **HTML**.
- يفسر عناصر HTML ويعرضها للمستخدم.
- يتم تنزيل الصور من روابطها أثناء عرض الصفحة.
- قد تكون صفحات HTML ثابتة أو ديناميكية.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Surfing Internet (Browsers)

---

## 📝 Introduction

This lesson covers:

- What a **Browser** is.
- The role of a web browser.
- How web pages are displayed.
- The relationship between browsers and **HTML**.
- A high-level overview of the web page loading process.

---

## 🌐 Quick Review

Previously learned concepts:

- The Internet is a network of interconnected networks.
- The **World Wide Web (WWW)** is a collection of websites running on the Internet.
- Websites are accessed through a web browser.

---

## 🌍 What is a Browser?

A **Browser** is:

> **A software application used to access and display websites.**

Common examples include:

- Google Chrome
- Mozilla Firefox
- Microsoft Edge / Internet Explorer
- Safari
- Opera

---

## 🎯 What Does a Browser Do?

A browser:

- Sends requests to websites.
- Downloads web pages.
- Interprets page content.
- Displays web pages for users.

---

## 🌐 What Happens When You Enter a Website Address?

When a user enters an address such as:

```text
https://programmingadvices.com
```

The browser sends a request to the website.

It then receives the page and displays it.

---

## 🔗 URL

The website address entered into the browser is called a:

> **URL**

Example:

```text
https://programmingadvices.com
```

Its components will be explained in later lessons.

---

## 📨 HTTP Request

After entering the URL, the browser sends an:

> **HTTP Request**

to the web server.

---

## 📥 HTTP Response

The web server returns an:

> **HTTP Response**

containing the resources needed to display the page.

---

## 📄 What Does the Browser Download?

The browser first downloads an:

> **HTML**

document.

An HTML document is simply a text file that describes the structure of a web page.

---

## 🏗️ HTML

**HTML** is a:

> **Markup Language**

used to describe web page elements such as:

- Headings
- Paragraphs
- Lists
- Links
- Images

---

## 🧩 HTML Tags

HTML pages consist of elements called:

> **Tags**

Examples include:

- Headings
- Paragraphs
- Lists
- Images
- Links

The browser interprets these tags to build the page.

---

## 🎨 How Does the Browser Display a Page?

The browser reads the HTML document and then:

- Interprets the HTML tags.
- Applies formatting.
- Displays text.
- Displays images.
- Displays colors.
- Displays hyperlinks.

This produces the web page shown to the user.

---

## 🖼️ How Are Images Loaded?

Images are not stored directly inside the HTML document.

Instead, HTML contains:

- Image URLs.

The browser:

- Downloads each image.
- Places it in the correct location.

With a slow Internet connection, text often appears before images because the browser downloads images separately.

---

## ⚙️ Rendering

The process of converting HTML into a visual web page is called:

> **Rendering**

During rendering, the browser interprets the HTML and draws the page on the screen.

---

## 📄 Static HTML

An HTML page may be:

- **Static**

where its content is written directly into the HTML file.

---

## 🔄 Dynamic HTML

Or it may be:

- **Dynamic**

where the web server generates the final HTML using:

- A database.
- Files.
- User data.

The generated HTML is then sent to the browser.

---

## 💡 Web Page Loading Process

The basic sequence is:

1. The user enters a URL.
2. The browser sends an HTTP Request.
3. The server receives the request.
4. The server prepares or generates an HTML page.
5. The server returns an HTTP Response.
6. The browser downloads the HTML.
7. The browser interprets the HTML.
8. Additional resources such as images are downloaded.
9. The page is rendered on the screen.

---

## 🔑 Summary

- A **Browser** is software used to browse websites.
- It sends **HTTP Requests** and receives **HTTP Responses**.
- It downloads **HTML** documents.
- It interprets HTML and renders web pages.
- Images are downloaded separately from their URLs.
- HTML pages can be **Static** or **Dynamic**.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>