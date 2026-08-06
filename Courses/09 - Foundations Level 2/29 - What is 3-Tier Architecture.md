# What is 3-Tier Architecture?

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هي معمارية الطبقات الثلاث (3-Tier Architecture)؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **3-Tier Architecture**.
- مبدأ **Separation of Concerns**.
- مكونات كل طبقة (Layer).
- كيفية تواصل الطبقات مع بعضها.
- فوائد تقسيم التطبيق إلى طبقات مستقلة.
- لماذا تعتبر هذه المعمارية من أساسيات بناء التطبيقات الاحترافية.

---

## 🎯 ما هي 3-Tier Architecture؟

هي أسلوب لتصميم التطبيقات يقسم النظام إلى **ثلاث طبقات مستقلة**، بحيث تكون لكل طبقة مسؤولية محددة.

الهدف من هذا التقسيم هو:

- إعادة استخدام الكود (Reusability).
- سهولة الصيانة (Maintainability).
- سهولة التوسع (Scalability).
- تقليل تكرار الكود.
- تحسين تنظيم المشروع.

---

## 🧩 الطبقات الثلاث

يتكون التطبيق من ثلاث طبقات رئيسية:

1. **Presentation Layer**
2. **Business Layer**
3. **Data Layer**

كل طبقة تؤدي وظيفة مختلفة ولا تتداخل مسؤولياتها مع الطبقات الأخرى.

---

## 🖥️ الطبقة الأولى: Presentation Layer

وتسمى أيضًا:

- Presentation Tier
- User Interface Layer
- Client Tier

وظيفتها:

- عرض البيانات للمستخدم.
- استقبال مدخلات المستخدم.
- تنفيذ بعض عمليات التحقق البسيطة (Validation).

لا تحتوي على منطق العمل (Business Logic).

يمكن أن تكون:

- Web Application
- Desktop Application
- Mobile Application

كلها تستخدم نفس منطق العمل الموجود في الطبقة الثانية.

---

## ⚙️ الطبقة الثانية: Business Layer

وتسمى أيضًا:

- Business Tier
- Middle Tier
- Business Logic Layer

وهي أهم طبقة في النظام.

تحتوي على:

- Business Logic
- العمليات الحسابية
- القوانين الخاصة بالنظام
- التحقق من البيانات
- تنفيذ العمليات مثل:

  - تحويل الأموال
  - حساب العمولات
  - التحقق من الرصيد
  - تنفيذ العمليات البنكية

هذه الطبقة لا تعرض البيانات ولا تتعامل مباشرة مع واجهة المستخدم.

---

## 🗄️ الطبقة الثالثة: Data Layer

وتسمى أيضًا:

- Data Tier
- Data Access Layer
- Data Access Tier
- Persistence Layer

وظيفتها:

- قراءة البيانات من قاعدة البيانات.
- حفظ البيانات.
- تعديل البيانات.
- حذف البيانات.

لا تحتوي على Business Logic.

---

## 🔄 طريقة عمل الطبقات

تسلسل العمل يكون دائمًا بالشكل التالي:

```text
Presentation Layer
        │
        ▼
Business Layer
        │
        ▼
Data Layer
        │
        ▼
Database
```

ولا يسمح لواجهة المستخدم بالوصول مباشرة إلى قاعدة البيانات.

---

## 💳 مثال عملي (نظام بنك)

لنفترض أن لدينا تطبيق بنك يحتوي على:

- تطبيق ويب.
- تطبيق سطح مكتب.
- تطبيق موبايل.

جميع هذه التطبيقات تحتاج إلى تنفيذ عملية:

- تحويل الأموال (Transfer Money)

بدلاً من كتابة كود التحويل داخل كل تطبيق، يتم وضعه مرة واحدة داخل **Business Layer**.

عند الضغط على زر التحويل:

1. واجهة المستخدم ترسل الطلب.
2. Business Layer تتحقق من الرصيد.
3. تحسب العمولة.
4. تنفذ عملية التحويل.
5. ترسل أوامر الحفظ إلى Data Layer.
6. تقوم Data Layer بتحديث قاعدة البيانات.

---

## ❌ ماذا يحدث إذا لم نستخدم 3-Tier؟

لو كتبنا كود التحويل داخل:

- تطبيق الويب.
- تطبيق الموبايل.
- تطبيق سطح المكتب.

فسنكرر نفس الكود ثلاث مرات.

ولو تغيرت قوانين التحويل لاحقًا فسيتوجب تعديل الكود في جميع الأماكن.

وهذا يزيد:

- الوقت.
- التكلفة.
- الأخطاء.

---

## ✅ ماذا يحدث عند استخدام 3-Tier؟

يكتب كود التحويل مرة واحدة فقط داخل Business Layer.

جميع التطبيقات تستخدم نفس الدالة.

وعند تعديل منطق العمل يتم التعديل في مكان واحد فقط.

---

## 🔁 إعادة استخدام الكود (Reusability)

إذا قررت الشركة لاحقًا إضافة:

- تطبيق iOS

فلن تحتاج إلى إعادة كتابة Business Logic.

يكفي إنشاء واجهة المستخدم الجديدة وربطها مع Business Layer.

وبذلك يتم إعادة استخدام معظم الكود الموجود مسبقًا.

---

## 🔧 سهولة الصيانة (Maintainability)

إذا أرادت الشركة إضافة عمولة جديدة على التحويل:

بدلاً من تعديل:

- Web
- Mobile
- Desktop

يتم تعديل Business Layer فقط.

وبذلك تنعكس التغييرات على جميع التطبيقات.

---

## 📈 سهولة التوسع (Scalability)

يمكن إضافة:

- تطبيقات جديدة.
- واجهات جديدة.
- خدمات API.
- Integration Layer.

دون تعديل الطبقات الأخرى.

---

## 🗃️ تغيير قاعدة البيانات

إذا كان النظام يستخدم:

- SQL Server

ثم قررت الشركة الانتقال إلى:

- Oracle
- MySQL
- Files

فلن تحتاج إلى تعديل Presentation Layer أو Business Layer.

يكفي تعديل Data Layer فقط.

---

## 🚫 قاعدة مهمة

لا يسمح لـ Presentation Layer بالتعامل مباشرة مع قاعدة البيانات.

يجب أن يمر أي طلب عبر Business Layer.

وهذا يسمى:

> **Separation of Concerns**

أي فصل مسؤوليات كل طبقة عن الأخرى.

---

## 🎯 فوائد 3-Tier Architecture

- تنظيم المشروع.
- تقليل تكرار الكود.
- سهولة الصيانة.
- سهولة التوسع.
- إعادة استخدام الكود.
- سهيل اختبار النظام.
- إمكانية تغيير قاعدة البيانات بسهولة.
- إمكانية إضافة واجهات جديدة بسهولة.
- تقليل الأخطاء البرمجية.

---

## 📚 أسماء الطبقات المختلفة

### Presentation Layer

- Presentation Tier
- Client Tier
- User Interface Layer

### Business Layer

- Business Tier
- Middle Tier
- Business Logic Layer

### Data Layer

- Data Tier
- Data Access Layer
- Data Access Tier
- Persistence Layer

---

## 🔑 الخلاصة

- **3-Tier Architecture** هي طريقة لتنظيم التطبيقات إلى ثلاث طبقات مستقلة.
- كل طبقة لها مسؤولية محددة.
- Presentation Layer مسؤولة عن واجهة المستخدم.
- Business Layer تحتوي على منطق العمل.
- Data Layer مسؤولة عن التعامل مع قاعدة البيانات.
- الطبقات تتواصل بالتسلسل ولا تتجاوز مسؤولياتها.
- تساعد على إعادة استخدام الكود، سهولة الصيانة، وسهولة التوسع.

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What is 3-Tier Architecture?

---

## 📝 Introduction

This lesson explains:

- The concept of 3-Tier Architecture.
- Separation of Concerns.
- The responsibility of each layer.
- How the layers communicate.
- The benefits of separating an application into layers.

---

## 🎯 What Is 3-Tier Architecture?

**3-Tier Architecture** is a software architecture pattern that divides an application into **three independent layers**, where each layer has a specific responsibility.

Its main goals are:

- Code reusability.
- Easier maintenance.
- Better scalability.
- Reduced code duplication.
- Better application organization.

---

## 🧩 The Three Layers

A typical application consists of:

1. Presentation Layer
2. Business Layer
3. Data Layer

Each layer performs a different responsibility.

---

## 🖥️ Presentation Layer

Also called:

- Presentation Tier
- User Interface Layer
- Client Tier

Responsibilities:

- Display data.
- Receive user input.
- Perform simple validation.

It should not contain business logic.

Examples include:

- Web applications.
- Desktop applications.
- Mobile applications.

---

## ⚙️ Business Layer

Also called:

- Business Tier
- Middle Tier
- Business Logic Layer

This layer contains:

- Business rules.
- Calculations.
- Validations.
- Business logic.

Examples:

- Money transfer.
- Balance checking.
- Fee calculation.
- Banking operations.

---

## 🗄️ Data Layer

Also called:

- Data Tier
- Data Access Layer
- Data Access Tier
- Persistence Layer

Responsibilities:

- Read data.
- Save data.
- Update data.
- Delete data.

It contains only database access logic.

---

## 🔄 Communication Flow

The communication flow is:

```text
Presentation Layer
        │
        ▼
Business Layer
        │
        ▼
Data Layer
        │
        ▼
Database
```

The Presentation Layer should never communicate directly with the database.

---

## 💳 Banking Example

Suppose a banking system provides:

- A web application.
- A desktop application.
- A mobile application.

All of them need to perform money transfers.

Instead of implementing the transfer logic three times, it is implemented once inside the Business Layer.

The flow becomes:

1. User requests a transfer.
2. Business Layer validates the balance.
3. Calculates fees.
4. Performs the transfer.
5. Calls the Data Layer.
6. Data Layer updates the database.

---

## ❌ Without 3-Tier Architecture

If each application contains its own transfer logic:

- The same code is duplicated.
- Every change must be applied multiple times.
- Maintenance becomes expensive.

---

## ✅ With 3-Tier Architecture

The transfer logic exists only once.

Every application calls the same business function.

Any modification is made in one place only.

---

## 🔁 Code Reusability

If a company later develops:

- An iOS application

Only the Presentation Layer needs to be implemented.

The existing Business Layer can be reused without modification.

---

## 🔧 Maintainability

If transfer fees change:

Only the Business Layer needs updating.

All client applications automatically use the updated logic.

---

## 📈 Scalability

The architecture makes it easy to add:

- New applications.
- New interfaces.
- APIs.
- Integration layers.

Without rewriting the existing business logic.

---

## 🗃️ Changing the Database

If the application switches from:

- SQL Server

to:

- Oracle
- MySQL
- File storage

Only the Data Layer changes.

The Presentation Layer and Business Layer remain unchanged.

---

## 🚫 Separation of Concerns

Each layer has a single responsibility.

The Presentation Layer must never access the database directly.

All requests must pass through the Business Layer.

---

## ✅ Advantages

- Better organization.
- Code reuse.
- Easier maintenance.
- Easier scalability.
- Reduced duplication.
- Easier testing.
- Easier database replacement.
- Easier addition of new clients.

---

## 📚 Layer Terminology

### Presentation Layer

- Presentation Tier
- Client Tier
- User Interface Layer

### Business Layer

- Business Tier
- Middle Tier
- Business Logic Layer

### Data Layer

- Data Tier
- Data Access Layer
- Data Access Tier
- Persistence Layer

---

## 🔑 Summary

- 3-Tier Architecture separates an application into three independent layers.
- Each layer has a single responsibility.
- Presentation Layer handles the UI.
- Business Layer contains business logic.
- Data Layer communicates with the database.
- This architecture improves reusability, maintainability, scalability, and code organization.

<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>