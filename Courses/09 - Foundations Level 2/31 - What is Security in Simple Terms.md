# What is Security in Simple Terms?

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# ما هو Security ببساطة؟

---

## 📝 مقدمة

في هذا الدرس تم شرح:

- مفهوم الأمن (Security).
- لماذا لا يوجد نظام آمن بنسبة 100%.
- مفهوم **طبقات الحماية (Security Layers)**.
- أهمية السياسات الأمنية (Security Policies).
- دور الأشخاص والأنظمة في الأمن.
- لماذا يعتبر الأمن مسؤولية جميع أجزاء النظام.

---

## 🎯 ما هو Security؟

الأمن (**Security**) هو مجموعة من الإجراءات وطبقات الحماية التي تهدف إلى **تقليل فرص الاختراق** وجعل الوصول غير المصرح به أكثر صعوبة.

الفكرة الأساسية هي:

> **كلما أضفت طبقات حماية أكثر، أصبح النظام أكثر أمانًا.**

لكن:

> **لا يوجد نظام محصن بنسبة 100%.**

---

## 🏠 مثال المنزل

لنفترض أنك بنيت منزلًا.

أول خطوة طبيعية هي وضع باب رئيسي.

هل أصبح المنزل آمنًا بالكامل؟

الإجابة:

> **لا.**

لقد أضفت فقط أول طبقة حماية.

---

## 🚪 الطبقة الأولى

وضع باب خشبي.

هذا يمنع الدخول بسهولة، لكنه لا يمنع جميع محاولات الاختراق.

---

## 🔐 الطبقة الثانية

استبدال الباب بباب أمني فولاذي.

أصبح اختراق الباب أصعب.

لكن المنزل ما يزال قابلًا للاختراق من أماكن أخرى.

---

## 🪟 الطبقة الثالثة

إذا كانت النوافذ بدون حماية حديدية، يمكن لأي شخص كسر الزجاج والدخول.

إضافة قضبان حديدية للنوافذ تعتبر طبقة حماية جديدة.

---

## 📷 الطبقة الرابعة

إضافة كاميرات مراقبة.

الكاميرات لا تمنع الاختراق دائمًا، لكنها تساعد على:

- المراقبة.
- التسجيل.
- اكتشاف أي محاولة دخول.

---

## 🚨 الطبقة الخامسة

إضافة نظام إنذار.

يمكن للنظام أن:

- يكتشف الحركة.
- يطلق الإنذار.
- يرسل إشعارًا إلى الهاتف.

---

## 👮 طبقات إضافية

يمكن أيضًا إضافة وسائل حماية أخرى مثل:

- حراس أمن.
- كلاب حراسة.
- كاميرات خارجية.
- أسوار.
- أجهزة استشعار الحركة.
- أجهزة كشف الليزر.

كل وسيلة تضيف طبقة جديدة من الحماية.

---

## 🧱 مفهوم Security Layers

الأمن لا يعتمد على وسيلة واحدة.

بل يعتمد على:

> **عدة طبقات تعمل معًا.**

حتى إذا تجاوز المهاجم طبقة، ما تزال هناك طبقات أخرى تعيق وصوله.

---

## ⚠️ هل يوجد نظام آمن 100%؟

الإجابة:

> **لا.**

مهما كانت وسائل الحماية قوية، يبقى احتمال الاختراق موجودًا.

الهدف من الأمن ليس منع الاختراق بشكل مطلق، وإنما:

- تقليل احتماله.
- زيادة صعوبة تنفيذه.
- اكتشافه بسرعة.
- الحد من تأثيره.

---

## 🏦 لماذا البنك أكثر حماية من المنزل؟

لأن قيمة الأصول الموجودة داخله أكبر.

كلما زادت قيمة البيانات أو الأموال أو المعلومات، زادت الحاجة إلى:

- طبقات حماية إضافية.
- سياسات أمنية أكثر صرامة.
- مراقبة مستمرة.

---

## 💻 ماذا يعني ذلك في البرمجيات؟

نفس الفكرة تنطبق على البرامج.

الأمن لا يعني فقط كتابة كود جيد.

بل يشمل:

- التطبيق.
- الخادم (Server).
- الشبكة.
- قاعدة البيانات.
- المستخدمين.
- الصلاحيات.
- السياسات الأمنية.

---

## 👥 العامل البشري

قد تكون جميع وسائل الحماية موجودة.

لكن خطأ بسيط من موظف قد يؤدي إلى اختراق النظام.

أمثلة:

- فتح رابط ضار.
- مشاركة كلمة المرور.
- إعطاء صلاحيات غير ضرورية.
- عدم إزالة صلاحيات موظف غادر الشركة.

---

## 🔑 إدارة الصلاحيات (Access Control)

من أهم مبادئ الأمن:

كل شخص يحصل فقط على الصلاحيات التي يحتاجها.

مثلاً:

- ليس كل موظف يستطيع الوصول إلى بيانات الإنتاج (Production).
- عند استقالة موظف يجب إزالة صلاحياته مباشرة.

---

## 🌐 Production Environment

بيئة الإنتاج تحتوي على البيانات الحقيقية للمستخدمين.

لهذا يتم الوصول إليها عادة باستخدام وسائل حماية إضافية مثل:

- Enterprise VPN.
- صلاحيات محددة.
- سياسات أمنية صارمة.

---

## 🛡️ مراقبة الشبكة

الأمن لا يتوقف عند حماية الكود.

هناك أدوات تراقب:

- حركة الشبكة.
- عدد الطلبات.
- الأنشطة المشبوهة.

مثلاً:

إذا أرسل عنوان IP آلاف الطلبات خلال ثانية واحدة، فقد تقوم الأنظمة بحظره تلقائيًا.

---

## 📋 Security Policies

الشركات الكبيرة تعتمد على سياسات أمنية واضحة.

مثل:

- من يملك صلاحية الوصول؟
- متى تمنح الصلاحيات؟
- متى تزال؟
- كيف يتم الدخول إلى الأنظمة؟
- كيف تتم مراجعة الصلاحيات؟

---

## ⚙️ الأمن مسؤولية الجميع

الأمن لا يعتمد على شخص واحد.

بل يشمل:

- المطورين.
- مسؤولي الشبكات.
- مسؤولي قواعد البيانات.
- مسؤولي الأنظمة.
- مسؤولي الأمن.
- الموظفين.

أي خطأ من أي طرف قد يؤدي إلى ثغرة أمنية.

---

## ✅ أهم الأفكار

- الأمن يعتمد على إضافة طبقات متعددة.
- لا توجد طبقة واحدة تكفي.
- لا يوجد نظام محصن بالكامل.
- العامل البشري جزء أساسي من الأمن.
- السياسات الأمنية لا تقل أهمية عن التقنيات.
- الهدف هو تقليل المخاطر وليس القضاء عليها بالكامل.

---

## 🔑 الخلاصة

- **Security** هو عملية حماية الأنظمة بإضافة عدة طبقات أمنية.
- كل طبقة تجعل الاختراق أكثر صعوبة.
- لا يوجد نظام آمن بنسبة 100%.
- الأمن يشمل الكود، والخوادم، والشبكات، والصلاحيات، والأشخاص، والسياسات.
- إدارة الصلاحيات ومراقبة الأنظمة جزء أساسي من الأمن.
- تعتمد الشركات الكبيرة على مبدأ **Security Layers** لتقليل المخاطر.

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# What Is Security in Simple Terms?

---

## 📝 Introduction

This lesson explains:

- The concept of security.
- Why no system is 100% secure.
- The idea of security layers.
- The importance of security policies.
- The role of people in security.
- Why security is a system-wide responsibility.

---

## 🎯 What Is Security?

**Security** is the practice of protecting systems by adding multiple layers of defense that make unauthorized access more difficult.

The main idea is:

> **The more security layers you add, the more secure the system becomes.**

However:

> **No system is completely secure.**

---

## 🏠 The House Example

Imagine building a house.

The first thing you do is install a front door.

Does that make the house completely secure?

No.

You have simply added the first security layer.

---

## 🚪 First Layer

A wooden front door.

It slows attackers down but does not stop every attack.

---

## 🔐 Second Layer

Replace it with a reinforced steel security door.

The house becomes harder to break into.

---

## 🪟 Third Layer

If the windows are unprotected, an intruder can simply break the glass.

Adding metal bars creates another layer of protection.

---

## 📷 Fourth Layer

Install security cameras.

They help:

- Monitor activity.
- Record evidence.
- Detect suspicious behavior.

---

## 🚨 Fifth Layer

Install an alarm system.

It can:

- Detect movement.
- Trigger alarms.
- Send notifications.

---

## 👮 Additional Layers

Other security measures include:

- Security guards.
- Guard dogs.
- Outdoor cameras.
- Fences.
- Motion sensors.
- Laser detection systems.

Each adds another layer of protection.

---

## 🧱 Security Layers

Security is not based on a single defense.

Instead, it relies on:

> **Multiple independent layers working together.**

If one layer fails, others continue protecting the system.

---

## ⚠️ Is Any System 100% Secure?

No.

Every system can potentially be compromised.

The objective of security is to:

- Reduce risk.
- Increase attack difficulty.
- Detect attacks quickly.
- Minimize damage.

---

## 🏦 Why Is a Bank More Secure Than a House?

Because it protects assets of much greater value.

More valuable assets require:

- Stronger protection.
- More security controls.
- Continuous monitoring.

---

## 💻 Security in Software

The same principle applies to software.

Security is not only about writing secure code.

It also includes:

- Applications.
- Servers.
- Networks.
- Databases.
- Users.
- Permissions.
- Security policies.

---

## 👥 The Human Factor

Even with strong technical security, human mistakes can cause security breaches.

Examples include:

- Clicking malicious links.
- Sharing passwords.
- Granting excessive permissions.
- Forgetting to remove access after an employee leaves.

---

## 🔑 Access Control

One of the most important security principles is:

**Give users only the permissions they actually need.**

For example:

- Not every employee should access production systems.
- Access should be removed immediately after an employee leaves.

---

## 🌐 Production Environment

Production systems contain real user data.

They are typically protected using additional mechanisms such as:

- Enterprise VPNs.
- Restricted access.
- Strict security policies.

---

## 🛡️ Network Monitoring

Security also includes monitoring network activity.

Security tools monitor:

- Network traffic.
- Request volume.
- Suspicious behavior.

For example:

If a single IP sends thousands of requests within seconds, the system may automatically block it.

---

## 📋 Security Policies

Large organizations enforce strict security policies covering:

- Who gets access.
- When access is granted.
- When access is revoked.
- How systems are accessed.
- How permissions are reviewed.

---

## ⚙️ Security Is Everyone's Responsibility

Security involves:

- Developers.
- System administrators.
- Database administrators.
- Network engineers.
- Security teams.
- Employees.

A single mistake from any participant can introduce a security vulnerability.

---

## ✅ Key Takeaways

- Security relies on multiple layers.
- No single protection is sufficient.
- No system is perfectly secure.
- Human factors play a major role.
- Policies are just as important as technology.
- The goal is risk reduction, not absolute protection.

---

## 🔑 Summary

- **Security** protects systems by adding multiple defense layers.
- Each layer increases the difficulty of successful attacks.
- No system is 100% secure.
- Security includes software, servers, networks, permissions, users, and policies.
- Access control and continuous monitoring are essential.
- Modern organizations follow a **layered security** approach to reduce risk.

<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>