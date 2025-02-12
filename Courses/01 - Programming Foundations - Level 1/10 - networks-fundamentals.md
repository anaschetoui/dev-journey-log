<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right;">

# الدرس العاشر: الشبكات

## مقدمة

الشبكات هي أساس العالم الرقمي الذي نعيش فيه اليوم. من شبكة الواي فاي في منزلك إلى الإنترنت الذي يربط العالم، فهم الشبكات أمر ضروري لكل مبرمج. في هذا الدرس سنغطي الأساسيات المهمة للشبكات بشكل مبسط وواضح.

---

## ما هي الشبكات؟

### التعريف الأساسي
**الشبكة (Network)** هي مجموعة من أجهزة الكمبيوتر والأجهزة الأخرى المتصلة مع بعضها البعض لتبادل البيانات والموارد.

### الأجهزة التي تشكل الشبكة
```
أمثلة على الأجهزة في الشبكة:
📱 الهواتف الذكية
💻 أجهزة الكمبيوتر المحمولة  
🖥️ أجهزة كمبيوتر سطح المكتب
📟 الأجهزة اللوحية
🖨️ الطابعات
📺 التلفزيونات الذكية
🏠 أجهزة المنزل الذكي
```

### مثال من الواقع: شبكة منزلك
```
في منزلك الآن:
├── الهواتف الذكية (أنت وإخوانك)
├── الكمبيوترات المحمولة  
├── التلفزيون الذكي
├── الطابعة
└── أجهزة أخرى
    ↓
جميعها متصلة بالواي فاي = شبكة منزلية واحدة
```

---

## لماذا نحتاج الشبكات؟

### الأهداف الأساسية للشبكات

1. **تبادل البيانات**
   - إرسال الصور والملفات بسرعة
   - مشاركة المستندات بين الأجهزة

2. **مشاركة الموارد**
   - استخدام طابعة واحدة من عدة أجهزة
   - الوصول لملفات مخزنة على جهاز آخر

3. **التحكم عن بُعد**
   - التحكم في التلفزيون من الهاتف
   - إدارة الأجهزة المنزلية الذكية

4. **التواصل**
   - المراسلة الفورية
   - مكالمات الصوت والفيديو

---

## أنواع الشبكات

### الشبكة المحلية - LAN (Local Area Network)

#### التعريف
**الشبكة المحلية** هي شبكة تربط أجهزة قريبة من بعضها جغرافياً في مكان واحد.

#### الخصائص
```
✓ أجهزة قريبة من بعضها البعض
✓ سرعة عالية في نقل البيانات  
✓ تكلفة منخفضة نسبياً
✓ أمان عالي (سيطرة محلية)
✓ إدارة بسيطة
```

#### أمثلة على الشبكات المحلية
- **الشبكة المنزلية**: جميع أجهزتك في المنزل
- **شبكة المكتب**: أجهزة الشركة في مبنى واحد  
- **شبكة الجامعة**: أجهزة الكلية أو المبنى الواحد
- **شبكة المقهى**: أجهزة الزبائن والإدارة
- **شبكة المستشفى**: أجهزة القسم الواحد

### الشبكة الواسعة - WAN (Wide Area Network)

#### التعريف
**الشبكة الواسعة** هي شبكة تربط عدة شبكات محلية عبر مسافات جغرافية كبيرة.

#### الخصائص  
```
✓ تغطي مسافات واسعة (مدن، دول، قارات)
✓ تربط عدة شبكات محلية مع بعضها
✓ أبطأ من الشبكة المحلية عادة
✓ تكلفة أعلى في التشغيل
✓ إدارة معقدة أكثر
```

#### مثال: شبكة بنك عالمي
```
🏢 فرع الأردن (LAN) ←→ الشبكة المصرفية العالمية
🏢 فرع الإمارات (LAN) ←→     (WAN)
🏢 فرع المغرب (LAN) ←→    
🏢 فرع الهند (LAN) ←→      

جميع الفروع متصلة = WAN واحدة
```

---

## كيف تتواصل الأجهزة في الشبكة؟

### طرق الاتصال

توجد طريقتان أساسيتان للاتصال:

#### 1. الاتصال السلكي (Wired)

**الخصائص:**
- استخدام أسلاك فعلية لربط الأجهزة
- سرعة عالية واستقرار أفضل  
- أمان أعلى (صعب اختراقه)
- تكلفة تركيب أعلى

**المثال الشائع: Ethernet**
```
الكمبيوتر الأول ----┐
                    ├── Switch ──── الخادم
الكمبيوتر الثاني ----┘

الرمز: ---- يمثل كابل Ethernet
```

#### 2. الاتصال اللاسلكي (Wireless)

**الخصائص:**
- لا توجد أسلاك فعلية
- سهولة في التنقل والتوصيل
- تركيب أسهل ومرونة أكبر
- قد يكون أقل استقراراً أو سرعة

**المثال الشائع: Wi-Fi**
```
📱 الهاتف الذكي  )))  
💻 الكمبيوتر المحمول ))) ──── 📡 Router
🖨️ الطابعة        )))

الرمز: ))) يمثل إشارات لاسلكية
```

---

## المصطلحات المهمة

### Ethernet (إيثرنت)
**التعريف:** مجموعة من القواعد والمعايير التي تحدد كيفية تواصل الأجهزة عبر الشبكة السلكية.

**بعبارة بسيطة:** القوانين التي تتبعها الأجهزة المتصلة بالأسلاك للتفاهم مع بعضها.

### Wi-Fi (واي فاي)
**التعريف الكامل:** Wireless Fidelity (الإخلاص اللاسلكي)

**الحقيقة:** هذا مصطلح تسويقي! الاسم الحقيقي معقد، فاخترعوا "Wi-Fi" ليكون سهل التذكر.

**بعبارة بسيطة:** التقنية التي تسمح للأجهزة بالاتصال بالشبكة دون أسلاك عبر موجات الراديو.

### Protocol (البروتوكول)
**التعريف:** مجموعة معيارية من القواعد التي تحدد كيفية تواصل الأجهزة عبر الشبكة.

**مثال بسيط:** 
```
مثل قواعد المرور:
🚦 الضوء الأحمر = توقف  
🚦 الضوء الأخضر = امشي
🚦 الضوء الأصفر = استعد للتوقف

البروتوكولات مثل هذه القواعد، لكن للأجهزة!
```

---

## مقارنة شاملة

### جدول المقارنة بين LAN و WAN

| الخاصية | LAN | WAN |
|---------|-----|-----|
| **المدى الجغرافي** | محدود (منزل، مكتب) | واسع (مدن، دول) |
| **السرعة** | عالية جداً | متوسطة إلى عالية |
| **التكلفة** | منخفضة | عالية |
| **عدد الأجهزة** | قليل إلى متوسط | آلاف إلى ملايين |
| **الإدارة** | بسيطة | معقدة |
| **الأمان** | عالي | يحتاج إجراءات إضافية |
| **الملكية** | فردية أو شركة | عدة جهات |

### مقارنة بين Wired و Wireless

| الخاصية | سلكي (Wired) | لاسلكي (Wireless) |
|---------|-------------|------------------|
| **السرعة** | أعلى وأكثر استقراراً | جيدة لكن قد تتأثر بالمسافة |
| **الأمان** | أعلى أماناً | يحتاج تشفير قوي |
| **سهولة التركيب** | تحتاج سحب أسلاك | سهل جداً |
| **التنقل** | مقيد بطول السلك | حرية كاملة في الحركة |
| **التكلفة** | أعلى في التركيب | أقل في التركيب |
| **الصيانة** | قد تحتاج استبدال أسلاك | صيانة أقل |

---

## أمثلة عملية من الحياة

### مثال 1: شبكة المنزل
```
منزلك = LAN واحدة تشمل:
├── هاتفك المحمول (Wi-Fi)
├── كمبيوتر الألعاب (Ethernet)  
├── التلفزيون الذكي (Wi-Fi)
├── طابعة العائلة (Wi-Fi)
└── جهاز التحكم في التكييف (Wi-Fi)

الاتصال: جميعها عبر Router واحد
```

### مثال 2: الجامعة
```
الجامعة = عدة LANs مترابطة:
├── شبكة كلية الهندسة
├── شبكة كلية الطب  
├── شبكة الإدارة
└── شبكة المكتبة

إذا كانت كلها متصلة ببعض = WAN الجامعة
```

### مثال 3: شركة متعددة الجنسيات  
```
الشركة العالمية = WAN كبيرة:
├── مكتب الرياض (LAN)
├── مكتب دبي (LAN)
├── مكتب القاهرة (LAN)  
└── مكتب لندن (LAN)

جميع المكاتب متصلة = WAN الشركة
```

---

## الأجهزة المهمة في الشبكات

### Switch (المفتاح)
```
وظيفته: يربط عدة أجهزة في الشبكة المحلية

[PC1] ──┐
         ├── [Switch] ──── [Server]
[PC2] ──┘

يستخدم في: الشبكات السلكية فقط
```

### Router (الموجه)  
```
وظيفته: يربط شبكات مختلفة ببعضها

[LAN المنزل] ──── [Router] ──── [Internet]
                     │
                  [Wi-Fi Devices]

يستخدم في: الشبكات السلكية واللاسلكية
```

---

## الخلاصة

```
📝 الشبكة = أجهزة متصلة لتبادل البيانات
🏠 LAN = شبكة محلية (منزل، مكتب)  
🌍 WAN = شبكة واسعة (مدن، دول)
🔌 سلكي = Ethernet (بأسلاك)
📡 لاسلكي = Wi-Fi (بموجات الراديو)
📋 البروتوكول = قواعد التواصل بين الأجهزة
```

هذه المفاهيم الأساسية في الشبكات ضرورية لكل مبرمج، وستساعدك في فهم كيفية عمل الإنترنت والتطبيقات المتصلة بالشبكة.

> **تذكر**: الهدف هو الفهم وليس الحفظ. عندما تفهم المبدأ، ستتمكن من شرحه بكلماتك الخاصة!

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Lesson 10: Networks

## Introduction

Networks are the foundation of the digital world we live in today. From the Wi-Fi network in your home to the Internet connecting the world, understanding networks is essential for every programmer. In this lesson, we'll cover the important networking fundamentals in a simple and clear way.

---

## What are Networks?

### Basic Definition
**A Network** is a group of computers and other devices connected together to share data and resources.

### Devices That Form a Network
```
Examples of devices in a network:
📱 Smartphones
💻 Laptops
🖥️ Desktop computers
📟 Tablets
🖨️ Printers
📺 Smart TVs
🏠 Smart home devices
```

### Real-World Example: Your Home Network
```
In your home right now:
├── Smartphones (you and your siblings)
├── Laptops
├── Smart TV
├── Printer
└── Other devices
    ↓
All connected to Wi-Fi = One home network
```

---

## Why Do We Need Networks?

### Primary Goals of Networks

1. **Data Exchange**
   - Send photos and files quickly
   - Share documents between devices

2. **Resource Sharing**
   - Use one printer from multiple devices
   - Access files stored on another device

3. **Remote Control**
   - Control TV from your phone
   - Manage smart home devices

4. **Communication**
   - Instant messaging
   - Voice and video calls

---

## Types of Networks

### Local Area Network - LAN

#### Definition
**Local Area Network** is a network that connects devices that are geographically close to each other in one location.

#### Characteristics
```
✓ Devices close to each other
✓ High-speed data transfer
✓ Relatively low cost
✓ High security (local control)
✓ Simple management
```

#### Examples of Local Area Networks
- **Home Network**: All your devices at home
- **Office Network**: Company devices in one building
- **University Network**: College or single building devices
- **Café Network**: Customer and management devices
- **Hospital Network**: Single department devices

### Wide Area Network - WAN

#### Definition
**Wide Area Network** is a network that connects multiple local area networks across large geographical distances.

#### Characteristics
```
✓ Covers wide distances (cities, countries, continents)
✓ Connects multiple LANs together
✓ Usually slower than LAN
✓ Higher operational costs
✓ More complex management
```

#### Example: Global Banking Network
```
🏢 Jordan Branch (LAN) ←→ Global Banking Network
🏢 UAE Branch (LAN) ←→         (WAN)
🏢 Morocco Branch (LAN) ←→
🏢 India Branch (LAN) ←→

All branches connected = One WAN
```

---

## How Do Devices Communicate in Networks?

### Connection Methods

There are two primary ways to connect:

#### 1. Wired Connection

**Characteristics:**
- Uses physical cables to connect devices
- High speed and better stability
- Higher security (harder to hack)
- Higher installation cost

**Common Example: Ethernet**
```
Computer 1 ----┐
               ├── Switch ──── Server
Computer 2 ----┘

Symbol: ---- represents Ethernet cable
```

#### 2. Wireless Connection

**Characteristics:**
- No physical cables
- Easy mobility and connection
- Easier installation and more flexibility
- May be less stable or slower

**Common Example: Wi-Fi**
```
📱 Smartphone    )))
💻 Laptop        ))) ──── 📡 Router
🖨️ Printer       )))

Symbol: ))) represents wireless signals
```

---

## Important Terminology

### Ethernet
**Definition:** A set of rules and standards that determine how devices communicate over a wired network.

**Simply put:** The rules that devices connected by cables follow to understand each other.

### Wi-Fi
**Full Definition:** Wireless Fidelity

**Truth:** This is a marketing term! The real name is complex, so they invented "Wi-Fi" to be easy to remember.

**Simply put:** The technology that allows devices to connect to networks without cables using radio waves.

### Protocol
**Definition:** A standardized set of rules that determine how devices communicate over a network.

**Simple Example:**
```
Like traffic rules:
🚦 Red light = Stop
🚦 Green light = Go
🚦 Yellow light = Prepare to stop

Protocols are like these rules, but for devices!
```

---

## Comprehensive Comparison

### LAN vs WAN Comparison Table

| Feature | LAN | WAN |
|---------|-----|-----|
| **Geographic Range** | Limited (home, office) | Wide (cities, countries) |
| **Speed** | Very high | Medium to high |
| **Cost** | Low | High |
| **Number of Devices** | Few to medium | Thousands to millions |
| **Management** | Simple | Complex |
| **Security** | High | Needs additional measures |
| **Ownership** | Individual or company | Multiple entities |

### Wired vs Wireless Comparison

| Feature | Wired | Wireless |
|---------|-------|----------|
| **Speed** | Higher and more stable | Good but may vary with distance |
| **Security** | More secure | Needs strong encryption |
| **Installation Ease** | Requires cable routing | Very easy |
| **Mobility** | Limited by cable length | Complete freedom of movement |
| **Cost** | Higher installation cost | Lower installation cost |
| **Maintenance** | May need cable replacement | Less maintenance |

---

## Practical Real-Life Examples

### Example 1: Home Network
```
Your home = One LAN including:
├── Your mobile phone (Wi-Fi)
├── Gaming computer (Ethernet)
├── Smart TV (Wi-Fi)
├── Family printer (Wi-Fi)
└── AC control device (Wi-Fi)

Connection: All through one Router
```

### Example 2: University
```
University = Multiple interconnected LANs:
├── Engineering College network
├── Medical College network
├── Administration network
└── Library network

If all connected together = University WAN
```

### Example 3: Multinational Company
```
Global Company = Large WAN:
├── Riyadh Office (LAN)
├── Dubai Office (LAN)
├── Cairo Office (LAN)
└── London Office (LAN)

All offices connected = Company WAN
```

---

## Important Network Devices

### Switch
```
Function: Connects multiple devices in a local network

[PC1] ──┐
         ├── [Switch] ──── [Server]
[PC2] ──┘

Used in: Wired networks only
```

### Router
```
Function: Connects different networks together

[Home LAN] ──── [Router] ──── [Internet]
                   │
                [Wi-Fi Devices]

Used in: Both wired and wireless networks
```

---

## Summary

```
📝 Network = Connected devices to share data
🏠 LAN = Local network (home, office)
🌍 WAN = Wide network (cities, countries)
🔌 Wired = Ethernet (with cables)
📡 Wireless = Wi-Fi (with radio waves)
📋 Protocol = Communication rules between devices
```

These fundamental networking concepts are essential for every programmer and will help you understand how the Internet and network-connected applications work.

> **Remember**: The goal is understanding, not memorization. When you understand the principle, you'll be able to explain it in your own words!

---

*Anas Chetoui* - `@anaschetoui`