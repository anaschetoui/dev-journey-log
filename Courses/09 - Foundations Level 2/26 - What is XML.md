# What is XML?

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو XML؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **XML**.
- لماذا تعتبر XML لغة وصفية وليست لغة برمجة.
- كيفية استخدام XML لتنظيم البيانات.
- أهمية XML في تخزين البيانات وتبادلها بين الأنظمة.
- الفرق بين XML و HTML.

---

## 🎯 ما هو XML؟

**XML** اختصار لـ:

> **Extensible Markup Language**

وهي **لغة وصفية (Markup Language)** وليست لغة برمجة.

الغرض منها هو:

- تخزين البيانات.
- تنظيم البيانات.
- نقل البيانات بين الأنظمة.

---

## 📝 لغة وصفية وليست لغة برمجة

XML لا تحتوي على منطق برمجي مثل:

- If
- Loops
- Functions

بل تستخدم لوصف البيانات بطريقة منظمة يمكن قراءتها بسهولة.

---

## 👥 قابلة للقراءة من الإنسان والآلة

تم تصميم XML بحيث تكون:

- **Human Readable**
- **Machine Readable**

أي أن الإنسان يستطيع قراءتها بسهولة، كما تستطيع البرامج والأنظمة معالجتها بسهولة أيضاً.

---

## 📦 تنظيم البيانات

تقوم XML بتمثيل البيانات داخل Tags مرتبة.

مثال:

```xml
<Employee>
    <ID>1</ID>
    <Name>Ahmed</Name>
    <Department>IT</Department>
</Employee>
```

يسهل هذا التنظيم:

- قراءة البيانات.
- البحث داخلها.
- تعديلها.
- حذفها.
- إضافة بيانات جديدة.

---

## 🔍 البحث والتعديل

بما أن البيانات منظمة، يمكن:

- البحث داخل ملف XML.
- تحديث البيانات.
- حذف البيانات.
- التنقل بين العناصر بسهولة.

---

## 📁 XML كملف بيانات

يمكن اعتبار XML ملفاً يحتوي على بيانات منظمة.

يختلف عن الملفات النصية العادية لأنه يستخدم Tags لتنظيم المعلومات بشكل واضح.

---

## 🌍 مستقلة عن نظام التشغيل

بما أن XML عبارة عن نص (Text)، يمكن قراءتها على جميع أنظمة التشغيل مثل:

- Windows
- Linux
- macOS
- Android
- iOS

ولهذا تعتبر:

> **Platform Independent**

---

## 🌐 نقل البيانات بين الأنظمة

تستخدم XML بكثرة لتبادل البيانات بين التطبيقات المختلفة.

حتى إذا كانت التطبيقات تعمل على:

- أنظمة تشغيل مختلفة.
- لغات برمجة مختلفة.

يبقى بإمكانها تبادل البيانات باستخدام XML.

---

## 🔄 التكامل بين التطبيقات

تسهل XML عملية **Integration** بين الأنظمة المختلفة.

مثال:

- برنامج محاسبة.
- نظام جامعي.

يمكنهما تبادل البيانات باستخدام ملفات XML.

---

## 🏷️ لماذا اسمها Extensible؟

كلمة **Extensible** تعني أن المطور هو من يحدد أسماء الـ Tags وبنية الملف.

مثال:

```xml
<Employees>
    <Employee>
        <Name>Ali</Name>
        <Email>ali@example.com</Email>
    </Employee>
</Employees>
```

ويمكن تصميم بنية مختلفة تماماً مثل:

```xml
<Books>
    <Book>
        <Title>Book Name</Title>
        <Author>Author Name</Author>
    </Book>
</Books>
```

لا توجد أسماء Tags مفروضة مسبقاً.

---

## 🔄 XML و HTML

كلاهما يعتبران Markup Language.

لكن يوجد اختلاف مهم:

### HTML

- Tags محددة مسبقاً.
- تستخدم لبناء صفحات الويب.

### XML

- المطور ينشئ الـ Tags بنفسه.
- تستخدم لتمثيل البيانات.

---

## ⚙️ استخدامات XML

تستخدم XML في:

- تخزين البيانات.
- تبادل البيانات.
- التكامل بين الأنظمة.
- ملفات الإعدادات (Configuration Files).

---

## 🎨 XML مع XSLT

يمكن استخدام **XSLT** مع XML لتحويل البيانات إلى تنسيقات مختلفة مثل:

- HTML
- PDF
- Word Documents

وذلك بعرض نفس البيانات بأشكال مختلفة.

---

## 💡 فوائد XML

تساعد XML على:

- تنظيم البيانات.
- مشاركة البيانات بسهولة.
- تسهيل التكامل بين الأنظمة.
- العمل على مختلف أنظمة التشغيل.
- إنشاء بنية بيانات مخصصة حسب الحاجة.

---

## 🔑 الخلاصة

- **XML** اختصار لـ **Extensible Markup Language**.
- هي لغة وصفية وليست لغة برمجة.
- تستخدم لتخزين البيانات وتنظيمها ونقلها.
- يمكن قراءتها من الإنسان والآلة.
- المطور هو من يحدد أسماء الـ Tags.
- تستخدم في تبادل البيانات والتكامل بين التطبيقات.
- تعمل على جميع أنظمة التشغيل لأنها تعتمد على النصوص.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is XML?

---

## 📝 Introduction

This lesson explains:

- The concept of **XML**.
- Why XML is a markup language rather than a programming language.
- How XML organizes data.
- The role of XML in storing and exchanging data.
- The difference between XML and HTML.

---

## 🎯 What is XML?

**XML** stands for:

> **Extensible Markup Language**

It is a **Markup Language**, not a programming language.

Its primary purpose is to:

- Store data.
- Organize data.
- Transfer data between systems.

---

## 📝 A Markup Language, Not a Programming Language

XML does not provide programming features such as:

- If statements
- Loops
- Functions

Instead, it describes data using a structured format.

---

## 👥 Human and Machine Readable

XML is designed to be both:

- **Human Readable**
- **Machine Readable**

This allows both people and software to read and process the same data easily.

---

## 📦 Organizing Data

XML represents data using structured tags.

Example:

```xml
<Employee>
    <ID>1</ID>
    <Name>Ahmed</Name>
    <Department>IT</Department>
</Employee>
```

This structure makes data easy to:

- Read
- Search
- Update
- Delete
- Extend

---

## 🔍 Searching and Updating Data

Because XML data is organized, applications can:

- Search through XML documents.
- Update information.
- Delete data.
- Navigate between elements.

---

## 📁 XML as a Data File

An XML document can be viewed as a structured data file.

Unlike ordinary text files, XML organizes information using tags.

---

## 🌍 Platform Independent

Since XML is plain text, it can be read on virtually any operating system, including:

- Windows
- Linux
- macOS
- Android
- iOS

Therefore, XML is considered:

> **Platform Independent**

---

## 🌐 Exchanging Data Between Systems

XML is widely used to exchange data between applications.

Even when applications use:

- Different operating systems.
- Different programming languages.

They can still exchange information using XML.

---

## 🔄 System Integration

XML simplifies **integration** between different applications.

For example:

- An accounting system.
- A university management system.

Both can exchange data using XML.

---

## 🏷️ Why Is It Called "Extensible"?

The word **Extensible** means developers create their own tags and document structure.

Example:

```xml
<Employees>
    <Employee>
        <Name>Ali</Name>
        <Email>ali@example.com</Email>
    </Employee>
</Employees>
```

Another application may use a completely different structure:

```xml
<Books>
    <Book>
        <Title>Book Name</Title>
        <Author>Author Name</Author>
    </Book>
</Books>
```

The tag names are completely defined by the developer.

---

## 🔄 XML vs HTML

Both XML and HTML are markup languages.

The difference is:

### HTML

- Uses predefined tags.
- Designed to display web pages.

### XML

- Developers define their own tags.
- Designed to represent and exchange data.

---

## ⚙️ Common Uses of XML

XML is commonly used for:

- Data storage.
- Data exchange.
- System integration.
- Configuration files.

---

## 🎨 XML with XSLT

XML can be combined with **XSLT** to transform the same data into formats such as:

- HTML
- PDF
- Word documents

This allows the same XML data to be presented in different ways.

---

## 💡 Benefits of XML

XML helps to:

- Organize data.
- Share information easily.
- Simplify system integration.
- Work across different operating systems.
- Create custom data structures.

---

## 🔑 Summary

- **XML** stands for **Extensible Markup Language**.
- It is a markup language, not a programming language.
- It is used to store, organize, and transfer data.
- XML is both human-readable and machine-readable.
- Developers define their own tags and document structure.
- XML is widely used for data exchange and system integration.
- Because it is plain text, it is platform independent.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>