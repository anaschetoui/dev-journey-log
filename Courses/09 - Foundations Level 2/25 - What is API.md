# What is API?

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو API؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **API (Application Programming Interface)**.
- الفرق بين **Function** و **API** و **Web API**.
- كيف تسمح الـ APIs للبرامج بالتواصل مع بعضها.
- أمثلة عملية على استخدام الـ APIs.

---

## 🎯 ما هو API؟

**API** اختصار لـ:

> **Application Programming Interface**

يمكن اعتباره طريقة تسمح لبرنامج باستخدام وظائف يقدمها برنامج آخر.

الفكرة الأساسية هي أن وظيفة (Function) لم تعد محصورة داخل مشروع واحد، بل أصبحت متاحة لبرامج أخرى لاستخدامها.

---

## 🧩 من Function إلى API

في البداية قد يكون لديك Function داخل مشروع، مثل:

```text
Sum(Number1, Number2)
```

تقوم هذه الدالة بجمع رقمين وإرجاع الناتج.

يمكن استدعاؤها فقط من داخل نفس المشروع.

---

## 🚀 ترقية Function إلى API

عند تجهيز الـ Function بحيث تستطيع برامج أخرى استدعاءها، تصبح **API**.

بدلاً من أن تكون متاحة داخل المشروع فقط، تصبح خدمة يمكن استخدامها من تطبيقات أخرى.

---

## 🌍 Web API

إذا أصبحت الـ API متاحة عبر الإنترنت، فإنها تصبح **Web API** أو **Web Service**.

وبذلك يمكن لأي برنامج في أي مكان في العالم استدعاؤها والاستفادة منها.

---

## 🔄 لماذا نستخدم APIs؟

تسمح الـ APIs للبرامج المختلفة بالتكامل مع بعضها بسهولة، حتى لو كانت مكتوبة بلغات برمجة مختلفة.

مثال:

- برنامج مكتوب بـ C++
- برنامج آخر مكتوب بـ C#
- برنامج ثالث مكتوب بـ Python

يمكن لجميعها استخدام نفس الـ API.

---

## 🎬 مثال عملي

يمكن إنشاء مشروع يحتوي على قائمة الأفلام الموجودة في دور السينما.

يتم إنشاء Function مثل:

```text
GetMoviesList()
```

ثم يتم تحويلها إلى Web API.

أي برنامج يستطيع استدعاء هذه الـ API للحصول على أحدث قائمة بالأفلام دون الحاجة إلى إعادة كتابة نفس الكود.

---

## 💱 مثال آخر

برنامج محاسبة يحتاج إلى أسعار العملات.

بدلاً من تحديث الأسعار يدوياً كل يوم، يمكن استخدام API مثل:

```text
GetExchangeRate()
```

فتصل أحدث أسعار العملات مباشرة من مزود الخدمة.

---

## 🪪 مثال على الخدمات الحكومية

يمكن أن توفر جهة حكومية API للتحقق من بيانات المواطنين.

مثال:

- التحقق من صحة رقم الهوية.
- الاستعلام عن بيانات معينة.

يستطيع البرنامج إرسال الطلب إلى الـ API واستلام النتيجة مباشرة.

---

## 📦 مفهوم Black Box

عند استخدام API لا تحتاج لمعرفة كيفية تنفيذها داخلياً.

يكفي معرفة:

- ماذا ترسل إليها.
- ماذا تعيد لك.

أما طريقة تنفيذها الداخلية فهي مخفية عن المستخدم.

---

## 💡 فوائد API

يساعد API على:

- إعادة استخدام الكود.
- تسهيل التكامل بين الأنظمة.
- مشاركة الخدمات بين التطبيقات.
- تقليل تكرار كتابة نفس الوظائف.
- السماح لتطبيقات مختلفة بالتواصل مع بعضها.

---

## 🔑 الخلاصة

- **API** اختصار لـ **Application Programming Interface**.
- تبدأ كـ Function داخل مشروع.
- يمكن تطويرها لتصبح متاحة لتطبيقات أخرى.
- إذا أصبحت متاحة عبر الإنترنت تسمى **Web API** أو **Web Service**.
- تسمح للبرامج بالتواصل بغض النظر عن لغة البرمجة المستخدمة.
- لا تحتاج لمعرفة طريقة تنفيذها الداخلية، بل كيفية استخدامها فقط.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is API?

---

## 📝 Introduction

This lesson explains:

- The concept of **API (Application Programming Interface)**.
- The difference between a **Function**, **API**, and **Web API**.
- How APIs allow applications to communicate.
- Practical examples of API usage.

---

## 🎯 What is an API?

**API** stands for:

> **Application Programming Interface**

An API provides a way for one application to use functionality offered by another application.

The main idea is that a function is no longer limited to a single project and can be used by other programs.

---

## 🧩 From Function to API

A project may contain a function such as:

```text
Sum(Number1, Number2)
```

This function adds two numbers and returns the result.

Initially, it can only be called from within the same project.

---

## 🚀 Upgrading a Function to an API

When a function is prepared so that other applications can call it, it becomes an **API**.

Instead of serving only its own project, it becomes a service that other applications can use.

---

## 🌍 Web API

When an API is made available over the Internet, it becomes a **Web API** or **Web Service**.

Applications from anywhere in the world can send requests to it.

---

## 🔄 Why Use APIs?

APIs allow different applications to integrate with each other, even if they are written in different programming languages.

For example:

- A C++ application
- A C# application
- A Python application

All of them can use the same API.

---

## 🎬 Practical Example

A project can maintain a list of movies currently showing in cinemas.

It provides a function such as:

```text
GetMoviesList()
```

After exposing it as a Web API, other applications can retrieve the latest movie list without implementing the same logic themselves.

---

## 💱 Another Example

An accounting application needs current exchange rates.

Instead of updating the rates manually every day, it can call an API such as:

```text
GetExchangeRate()
```

The application always receives the latest exchange rates from the service provider.

---

## 🪪 Government Services Example

A government agency may provide an API to verify citizen information.

Examples include:

- Validating a national ID.
- Retrieving official records.

Applications simply send a request and receive the required information.

---

## 📦 Black Box Concept

When using an API, there is no need to understand how it is implemented internally.

You only need to know:

- What data to send.
- What response to expect.

The internal implementation remains hidden.

---

## 💡 Benefits of APIs

APIs help to:

- Reuse existing code.
- Integrate different systems.
- Share services between applications.
- Reduce duplicate development.
- Enable communication between software built with different technologies.

---

## 🔑 Summary

- **API** stands for **Application Programming Interface**.
- It often begins as a function inside a project.
- It can be exposed for use by other applications.
- When available over the Internet, it becomes a **Web API** or **Web Service**.
- APIs enable communication between applications regardless of the programming language used.
- Users of an API only need to know how to call it, not how it is implemented.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>