# IP Part 3 (IP Types)

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# أنواع عناوين IP (IP Address Types)

---

## 📝 مقدمة

في هذا الدرس تم شرح الأنواع المختلفة لعناوين **IP Address**، والتعرف على الفرق بين:

- 🌐 Public IP Address
- 🏠 Private IP Address
- 📌 Static IP Address
- 🔄 Dynamic IP Address

كما تم توضيح الحالات التي يستخدم فيها كل نوع.

---

## 🔄 مراجعة سريعة

تعلمنا في الدروس السابقة أن:

- **IP Address** هو عنوان الجهاز على الشبكة.
- لكل جهاز متصل بالشبكة عنوان خاص به.
- يمكن أن يكون الجهاز متصلًا:
  - بالإنترنت.
  - أو بشبكة محلية (LAN).

---

## 📌 أنواع IP Address

يوجد أربعة أنواع رئيسية من عناوين IP.

---

## 🌐 1. Public IP Address

**Public** تعني:

- **عام**.

إذا كان جهازك يمتلك **Public IP Address**، فيمكن الوصول إليه من أي مكان في العالم عبر الإنترنت.

---

### 📍 من يمنح Public IP Address؟

يتم الحصول عليه من:

**ISP (Internet Service Provider)**

وهو مزود خدمة الإنترنت.

عند الاشتراك بخدمة الإنترنت، يقوم مزود الخدمة بإعطاء الجهاز **Public IP Address**.

---

## 🏠 2. Private IP Address

**Private IP Address** هو عنوان يستخدم داخل:

- المنزل.
- الشركة.
- المستشفى.
- أي شبكة محلية (LAN).

ولا يكون مرتبطًا مباشرةً بعناوين الإنترنت العامة.

---

### 💡 مثال

إذا كانت الشركة تحتوي على:

- **1000 جهاز**

فيمكن إعطاء كل جهاز **Private IP Address** حتى تتواصل الأجهزة مع بعضها داخل الشبكة.

وقد تمتلك الشركة اشتراك إنترنت واحد فقط يحصل على **Public IP Address** من مزود الخدمة.

---

### 📌 ملاحظة

يمكن استخدام:

- **IPv4**
- **IPv6**

مع كل من:

- Public IP
- Private IP

---

## 📌 3. Static IP Address

**Static** تعني:

- **ثابت**.

أي أن عنوان الـ IP لا يتغير.

---

### 🎯 متى يستخدم؟

الاستخدام الشائع له يكون مع:

- السيرفرات (Servers).

فعند استضافة موقع ويب على سيرفر، يحتاج السيرفر إلى **Static IP Address** حتى يبقى عنوانه ثابتًا ويمكن الوصول إليه دائمًا.

---

### 💰 كيف أحصل عليه؟

يتم طلبه من:

**ISP (Internet Service Provider)**

وغالبًا يتطلب:

- رسومًا إضافية.
- اشتراكًا شهريًا.

لأن مزود الخدمة يحجز هذا العنوان لصاحبه فقط.

---

### 📌 لماذا لا يستخدمه الجميع؟

لأن:

- سعره أعلى.
- معظم المستخدمين لا يحتاجون إلى عنوان ثابت.

---

## 🔄 4. Dynamic IP Address

**Dynamic** تعني:

- **متغير**.

يقوم مزود الخدمة بتغيير عنوان الـ IP بشكل دوري.

---

### ✅ المميزات

- أقل تكلفة.
- مناسب لمعظم المستخدمين.
- لا يحتاج المستخدم إلى عنوان ثابت.

---

### 🏠 داخل الشبكات المحلية

يمكن أيضًا استخدام:

**Dynamic IP Address**

داخل الشبكات المحلية بدلاً من إعطاء كل جهاز عنوانًا ثابتًا يدويًا.

الطريقة المستخدمة لتحقيق ذلك سيتم شرحها في الدروس القادمة.

---

## 📊 مقارنة بين Static و Dynamic

| الخاصية | Static IP | Dynamic IP |
|---------|-----------|------------|
| 📌 العنوان | ثابت | يتغير |
| 💰 التكلفة | أعلى | أقل |
| 🖥️ الاستخدام الشائع | السيرفرات | المستخدمون العاديون |
| 🔄 التغيير | لا يتغير | يتغير بشكل دوري |

---

## 📊 مقارنة بين Public و Private

| الخاصية | Public IP | Private IP |
|---------|-----------|------------|
| 🌍 الوصول | يمكن الوصول إليه عبر الإنترنت | يستخدم داخل الشبكة المحلية |
| 🏠 الاستخدام | الإنترنت | الشبكات المحلية (LAN) |
| 📍 مصدر العنوان | ISP | داخل الشبكة المحلية |

---

## 🔀 دمج الأنواع

يمكن الجمع بين نوعي العنوان وطريقة التخصيص.

فقد يكون الجهاز:

- 🌐 Public + Static
- 🌐 Public + Dynamic
- 🏠 Private + Static
- 🏠 Private + Dynamic

---

## 🔑 الخلاصة

- يوجد أربعة أنواع رئيسية من عناوين IP:
  - Public IP Address
  - Private IP Address
  - Static IP Address
  - Dynamic IP Address
- **Public IP** يمنحه مزود خدمة الإنترنت ويمكن الوصول إليه عبر الإنترنت.
- **Private IP** يستخدم داخل الشبكات المحلية.
- **Static IP** ثابت ويستخدم غالبًا مع السيرفرات.
- **Dynamic IP** يتغير بشكل دوري ويستخدمه معظم المستخدمين.
- يمكن الجمع بين Public أو Private مع Static أو Dynamic حسب الحاجة.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# IP Part 3 (IP Types)
---

## 📝 Introduction

This lesson explains the four main types of **IP Addresses** and the differences between:

- 🌐 Public IP Address
- 🏠 Private IP Address
- 📌 Static IP Address
- 🔄 Dynamic IP Address

It also explains where each type is commonly used.

---

## 🔄 Quick Review

From previous lessons:

- An **IP Address** is the address of a device on a network.
- Every connected device has its own IP address.
- Devices may be connected either to:
  - The Internet.
  - A Local Area Network (LAN).

---

## 📌 Types of IP Addresses

There are four main IP address types.

---

## 🌐 1. Public IP Address

A **Public IP Address** is:

- Accessible from anywhere on the Internet.

---

### 📍 Who Provides It?

A Public IP Address is assigned by an:

**ISP (Internet Service Provider)**

When a user subscribes to an Internet service, the ISP assigns a Public IP Address.

---

## 🏠 2. Private IP Address

A **Private IP Address** is used inside:

- Homes.
- Companies.
- Hospitals.
- Local Area Networks (LANs).

It is not directly used for Internet access.

---

### 💡 Example

A company with:

- **1,000 computers**

can assign a **Private IP Address** to every device for internal communication, while using only one Public IP Address from the ISP for Internet connectivity.

---

### 📌 Note

Both:

- **IPv4**
- **IPv6**

can be used for:

- Public IP Addresses.
- Private IP Addresses.

---

## 📌 3. Static IP Address

A **Static IP Address** is:

- A permanent IP address that does not change.

---

### 🎯 Common Usage

It is commonly used with:

- Servers.

For example, a server hosting a website usually requires a Static IP Address so users can always reach it.

---

### 💰 How Do You Get One?

A Static IP Address is requested from the:

**Internet Service Provider (ISP)**

It usually requires:

- An additional monthly fee.

The ISP reserves that address exclusively for the customer.

---

### 📌 Why Doesn't Everyone Use It?

Because:

- It is more expensive.
- Most users do not need a permanent IP address.

---

## 🔄 4. Dynamic IP Address

A **Dynamic IP Address** is:

- An IP address that changes periodically.

The ISP automatically changes it over time.

---

### ✅ Advantages

- Lower cost.
- Suitable for most users.
- No need for a permanent address.

---

### 🏠 Inside Local Networks

Dynamic IP Addresses can also be assigned inside local networks instead of manually assigning a fixed address to every computer.

This process will be explained in future lessons.

---

## 📊 Static vs Dynamic

| Feature | Static IP | Dynamic IP |
|---------|-----------|------------|
| 📌 Address | Fixed | Changes |
| 💰 Cost | Higher | Lower |
| 🖥️ Typical Usage | Servers | Regular users |
| 🔄 Changes Over Time | No | Yes |

---

## 📊 Public vs Private

| Feature | Public IP | Private IP |
|---------|------------|-------------|
| 🌍 Accessibility | Reachable from the Internet | Used only inside local networks |
| 🏠 Usage | Internet | Local networks (LANs) |
| 📍 Assigned By | ISP | Local network |

---

## 🔀 Combining the Types

The instructor explained that these categories can be combined.

A device may have:

- 🌐 Public + Static
- 🌐 Public + Dynamic
- 🏠 Private + Static
- 🏠 Private + Dynamic

---

## 🔑 Summary

- There are four main IP address types:
  - Public IP Address
  - Private IP Address
  - Static IP Address
  - Dynamic IP Address
- A **Public IP** is assigned by an ISP and is accessible over the Internet.
- A **Private IP** is used within local networks.
- A **Static IP** remains fixed and is commonly used by servers.
- A **Dynamic IP** changes over time and is used by most users.
- Public/Private and Static/Dynamic can be combined depending on network requirements.

<br>
<br>
<br>
<br>
<br>

---

*Anas Chetoui* - `@anaschetoui`

</div>