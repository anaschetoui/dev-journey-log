<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو Business Intelligence؟ وما هو Cube؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم **Business Intelligence (BI)**.
- الفرق بين البيانات (Data) والمعلومات (Information).
- أهمية BI في الشركات.
- مفهوم **Cube** و **Dimensions**.
- كيفية تحليل البيانات لاتخاذ قرارات أفضل.
- أشهر أدوات Business Intelligence.

---

## 🎯 ما هو Business Intelligence؟

**Business Intelligence (BI)** هو مجموعة من الأدوات والتقنيات التي تحول:

> **Raw Data → Useful Information**

أي تحويل **البيانات الخام** إلى **معلومات مفيدة** تساعد المدراء وصناع القرار على اتخاذ قرارات صحيحة.

الهدف الأساسي من BI هو:

- استخراج المعلومات من البيانات.
- عرض النتائج بطريقة سهلة.
- مساعدة الإدارة على اتخاذ قرارات مبنية على حقائق.

---

## 📊 لماذا نحتاج Business Intelligence؟

البيانات وحدها لا تعني شيئًا.

على سبيل المثال:

لنفترض أن لدينا بيانات درجات الحرارة لآخر **100 سنة**.

هذه مجرد بيانات خام.

لكن عندما يخبرنا النظام أن:

> "متوسط درجات الحرارة في آخر ثلاثة أشهر ارتفع بنسبة 12% مقارنة بالفترة السابقة."

فهنا أصبحت البيانات **معلومة (Information)** يمكن الاستفادة منها.

---

## 📌 Data vs Information

### Data

هي البيانات الخام.

مثل:

- 200000 منتج تم بيعه.
- 10 موظفين استقالوا.
- 500 عملية بيع.

هذه الأرقام وحدها لا تساعد على اتخاذ قرار.

---

### Information

هي البيانات بعد تحليلها.

مثل:

- معدل الاستقالات ارتفع 20%.
- المنتج رقم 5 هو الأكثر مبيعًا.
- المبيعات انخفضت في شهر فبراير.

هذه معلومات تساعد الإدارة على اتخاذ القرار.

---

## 💼 لماذا تحتاج الشركات إلى BI؟

في معظم الشركات:

- بيانات الموظفين موجودة في HR System.
- بيانات العملاء موجودة في CRM.
- بيانات المحاسبة موجودة في ERP.
- بيانات المخزون موجودة في نظام آخر.

لكن هذه البيانات غالبًا تكون موزعة في أماكن مختلفة.

وظيفة BI هي:

- جمع البيانات.
- ربطها معًا.
- تحليلها.
- تحويلها إلى معلومات مفيدة.

---

## 🚨 المشاكل التي يحلها BI

بدون BI قد تواجه الشركات:

- بيانات كثيرة.
- معلومات قليلة.
- تقارير تستغرق وقتًا طويلًا.
- صعوبة في معرفة أسباب المشاكل.
- قرارات تعتمد على التخمين.

ولهذا يقال:

> **Data Everywhere, Information Nowhere**

أي:

> البيانات موجودة في كل مكان، لكن المعلومات غير موجودة.

---

## 📈 مثال بسيط

لنفترض أن مدير الشركة علم أن:

> تم بيع **200000 منتج**.

هل هذه معلومة مفيدة؟

ليس كثيرًا.

لكن إذا تم تقسيمها كالتالي:

| المنتج | المبيعات |
|--------|---------:|
| Product 1 | 25000 |
| Product 2 | 50000 |
| Product 3 | 30000 |
| Product 4 | 5000 |
| Product 5 | 80000 |
| Product 6 | 10000 |

أصبح المدير يعرف:

- المنتج الأكثر مبيعًا.
- المنتج الأقل مبيعًا.

وبذلك يمكنه البحث عن سبب ضعف مبيعات أحد المنتجات.

---

## 🧊 ما هو Cube؟

الـ **Cube** هو طريقة لتنظيم البيانات بحيث يمكن تحليلها من عدة زوايا (**Dimensions**) في الوقت نفسه.

بدلًا من رؤية البيانات من زاوية واحدة فقط، يمكن رؤيتها من عدة أبعاد.

---

## 📦 ما هو Dimension؟

الـ Dimension هو محور تحليل البيانات.

أمثلة:

- Product
- Time
- Customer
- Country
- City
- Department

كل واحد منها يمثل بعدًا مختلفًا.

---

## 🧩 مثال على Cube

نفترض أن لدينا ثلاثة أبعاد:

- Product
- Time
- Customer

بدلاً من معرفة:

> عدد المبيعات فقط

يمكن معرفة:

- مبيعات كل منتج.
- في أي شهر.
- لأي عميل.

أي يمكن تحليل البيانات من ثلاث زوايا في وقت واحد.

---

## 🔍 Drill Down

يسمح Cube بالانتقال من المعلومات العامة إلى التفاصيل.

مثلاً:

في البداية:

> تم بيع 200000 منتج.

ثم:

حسب المنتج.

ثم:

حسب الشهر.

ثم:

حسب العميل.

كل مستوى يعطي تفاصيل أكثر.

---

## 📊 Dashboard

بعد تحليل البيانات داخل Cube يمكن إنشاء:

**Dashboard**

وهي لوحة تعرض:

- الرسوم البيانية.
- نسب المبيعات.
- المقارنات.
- المؤشرات.
- التنبيهات.

بدل قراءة آلاف الصفوف من البيانات.

---

## 🎯 لماذا يستخدم المدراء Dashboard؟

تساعدهم على معرفة:

- هل المبيعات ترتفع أم تنخفض؟
- هل يوجد منتج ضعيف؟
- هل يوجد ارتفاع في الاستقالات؟
- هل توجد مشكلة في منطقة معينة؟

كل ذلك بنظرة واحدة.

---

## 🧠 ماذا يقدم BI لصناع القرار؟

يساعدهم في معرفة:

### ماذا حدث؟

مثل:

- كم بلغت المبيعات؟
- كم موظفًا استقال؟

---

### ماذا يحدث الآن؟

من خلال:

- Dashboard
- Charts
- Reports

---

### ماذا قد يحدث مستقبلًا؟

عن طريق:

- تحليل البيانات السابقة.
- Forecasting.
- التوقعات المبنية على البيانات.

---

## 📌 ما هو Forecasting؟

هو محاولة توقع المستقبل اعتمادًا على:

- البيانات التاريخية.
- الأنماط السابقة.
- التحليل الإحصائي.

وليس على التخمين.

---

## 🛠️ أشهر أدوات Business Intelligence

من أشهر الأدوات:

- Microsoft Power BI
- Tableau
- Qlik Sense
- Oracle BI
- IBM Cognos
- SAS Business Intelligence

كما يمكن تنفيذ تحليلات بسيطة باستخدام:

- Microsoft Excel (Pivot Tables)

---

## 📊 Pivot Table

يعتبر Pivot Table في Excel مثالًا بسيطًا لفكرة BI.

يسمح بتحليل البيانات حسب:

- المنتج.
- التاريخ.
- العميل.
- المدينة.

وغيرها من الأبعاد.

---

## ✅ فوائد Business Intelligence

- تحويل البيانات إلى معلومات.
- تسريع اتخاذ القرار.
- إنشاء تقارير بسهولة.
- إنشاء Dashboards.
- تحليل البيانات من عدة أبعاد.
- اكتشاف المشكلات مبكرًا.
- دعم التنبؤ بالمستقبل.
- تحسين أداء الشركات.

---

## ⚠️ ملاحظة

أدوات BI لا تنشئ البيانات.

بل تعتمد على البيانات الموجودة مسبقًا داخل الأنظمة المختلفة، ثم تقوم بتحليلها وعرضها بطريقة تساعد على اتخاذ القرار.

---

## 🔑 الخلاصة

- **Business Intelligence (BI)** يحول البيانات الخام إلى معلومات مفيدة.
- يساعد المدراء وصناع القرار على اتخاذ قرارات مبنية على البيانات.
- **Cube** ينظم البيانات لتحليلها من عدة أبعاد (Dimensions).
- **Dimension** هو محور يتم تحليل البيانات من خلاله، مثل المنتج أو الوقت أو العميل.
- **Drill Down** يسمح بالانتقال من النظرة العامة إلى التفاصيل.
- **Dashboard** تعرض النتائج بشكل مرئي يسهل فهمه.
- من أشهر أدوات BI: **Power BI** و **Tableau** و **Qlik Sense**.

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What Is Business Intelligence? What Is a Cube?

---

## 📝 Introduction

This lesson explains:

- The concept of Business Intelligence (BI).
- The difference between data and information.
- Why businesses use BI.
- The concept of Cubes and Dimensions.
- How BI helps managers make better decisions.
- Popular Business Intelligence tools.

---

## 🎯 What Is Business Intelligence?

**Business Intelligence (BI)** is a collection of technologies and tools used to transform:

> **Raw Data → Useful Information**

The goal is to help managers and decision-makers make informed decisions based on data rather than assumptions.

---

## 📊 Why Do We Need BI?

Raw data alone has little value.

For example, storing temperature records for the past 100 years is simply data.

However, discovering that:

> "The average temperature increased by 12% during the last quarter."

turns that raw data into useful information.

---

## 📌 Data vs Information

### Data

Raw facts such as:

- 200,000 products sold.
- 10 employee resignations.
- 500 sales transactions.

These numbers alone provide little insight.

---

### Information

Analyzed data that provides meaning.

Examples:

- Employee turnover increased by 20%.
- Product 5 is the best-selling product.
- Sales dropped during February.

Information supports better decisions.

---

## 💼 Why Businesses Need BI

Organizations usually store data in multiple systems:

- HR systems.
- CRM systems.
- ERP systems.
- Accounting systems.
- Inventory systems.

BI gathers all this data, analyzes it, and converts it into meaningful information.

---

## 🚨 Common Business Problems

Without BI, organizations often face:

- Large amounts of data.
- Limited useful information.
- Slow reporting.
- Poor visibility into problems.
- Decisions based on assumptions.

A common expression is:

> **Data Everywhere, Information Nowhere**

---

## 📈 Simple Example

Suppose a company sold:

> 200,000 products.

This alone says very little.

Now break it down:

| Product | Sales |
|---------|------:|
| Product 1 | 25,000 |
| Product 2 | 50,000 |
| Product 3 | 30,000 |
| Product 4 | 5,000 |
| Product 5 | 80,000 |
| Product 6 | 10,000 |

Now management can immediately identify:

- Best-selling products.
- Poor-performing products.

---

## 🧊 What Is a Cube?

A **Cube** is a multidimensional data structure that allows data to be analyzed from multiple perspectives (**Dimensions**) simultaneously.

Instead of viewing data from only one angle, users can explore it from several dimensions.

---

## 📦 What Is a Dimension?

A **Dimension** is a perspective used to analyze data.

Examples include:

- Product
- Time
- Customer
- Country
- City
- Department

Each dimension represents a different way to examine the same data.

---

## 🧩 Cube Example

Suppose we analyze sales using three dimensions:

- Product
- Time
- Customer

Instead of simply knowing total sales, we can determine:

- Which product was sold.
- During which month.
- To which customer.

---

## 🔍 Drill Down

**Drill Down** means moving from summary information to increasingly detailed information.

Example:

- Total sales.
- Sales by product.
- Sales by month.
- Sales by customer.

Each level reveals additional insights.

---

## 📊 Dashboard

After analyzing data, BI tools display the results through **Dashboards**.

Dashboards typically include:

- Charts.
- Graphs.
- KPIs.
- Comparisons.
- Alerts.

This allows managers to understand business performance quickly.

---

## 🎯 Why Managers Use Dashboards

Dashboards help answer questions such as:

- Are sales increasing?
- Which products perform poorly?
- Is employee turnover increasing?
- Which regions need attention?

---

## 🧠 BI Helps Answer Three Questions

### What happened?

Examples:

- How many products were sold?
- How many employees resigned?

---

### What is happening now?

Using:

- Dashboards.
- Charts.
- Live reports.

---

### What is likely to happen?

Using:

- Historical data.
- Trend analysis.
- Forecasting.

---

## 📌 What Is Forecasting?

Forecasting predicts future outcomes using:

- Historical data.
- Statistical analysis.
- Business trends.

It is based on data, not guesswork.

---

## 🛠️ Popular BI Tools

Common Business Intelligence tools include:

- Microsoft Power BI
- Tableau
- Qlik Sense
- Oracle BI
- IBM Cognos
- SAS Business Intelligence

Simple BI-style analysis can also be performed using:

- Microsoft Excel Pivot Tables

---

## 📊 Pivot Tables

Excel Pivot Tables provide a simple introduction to BI concepts.

They allow data to be analyzed by:

- Product.
- Time.
- Customer.
- Region.

and many other dimensions.

---

## ✅ Benefits of Business Intelligence

- Converts raw data into useful information.
- Improves decision-making.
- Generates reports quickly.
- Creates dashboards.
- Supports multidimensional analysis.
- Detects business problems early.
- Supports forecasting.
- Improves organizational performance.

---

## ⚠️ Note

Business Intelligence does not generate new data.

Instead, it analyzes existing data from different systems and presents it in a meaningful way for decision-makers.

---

## 🔑 Summary

- **Business Intelligence (BI)** transforms raw data into useful information.
- It helps managers make data-driven decisions.
- A **Cube** organizes data for multidimensional analysis.
- A **Dimension** is a perspective such as product, time, or customer.
- **Drill Down** reveals increasingly detailed information.
- **Dashboards** present insights visually.
- Popular BI tools include **Power BI**, **Tableau**, and **Qlik Sense**.

<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>