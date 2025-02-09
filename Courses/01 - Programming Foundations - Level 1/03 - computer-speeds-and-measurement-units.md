<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right;">

# الدرس الرابع: السرعات ووحدات القياس في الكمبيوتر

## مقدمة

يتناول هذا الدرس السرعات ووحدات القياس في الكمبيوتر، وهو موضوع أساسي لكل مبرمج. سنتعرف على وحدات قياس الذاكرة، وسرعة المعالج، والفرق بين أنظمة 32 بت و64 بت.

## وحدات قياس الذاكرة

### البت (Bit) والبايت (Byte)

- **البت**: أصغر وحدة تخزين في الكمبيوتر، يمكنها تخزين إما 0 أو 1 فقط.
- **البايت**: مجموعة من 8 بت، وهي أصغر وحدة يمكن تمثيل معلومات مفيدة بها.

### وحدات قياس الذاكرة الأكبر

| الوحدة | الاختصار | ما يعادلها | تقريباً |
|--------|----------|------------|----------|
| بايت (Byte) | B | 8 بت | وحدة أساسية |
| كيلوبايت (Kilobyte) | KB | 1024 بايت | ألف بايت |
| ميجابايت (Megabyte) | MB | 1024 كيلوبايت | مليون بايت |
| جيجابايت (Gigabyte) | GB | 1024 ميجابايت | مليار بايت |
| تيرابايت (Terabyte) | TB | 1024 جيجابايت | تريليون بايت |

> **ملاحظة مهمة**: في عالم الكمبيوتر، الكيلو = 1024 وليس 1000 كما هو متعارف عليه في النظام المتري، وذلك بسبب اعتماد الكمبيوتر على النظام الثنائي (2¹⁰ = 1024).

### وحدات ذاكرة أكبر (أقل استخداماً)

| الوحدة | الاختصار | ما يعادلها |
|--------|----------|------------|
| بيتابايت (Petabyte) | PB | 1024 تيرابايت |
| إكسابايت (Exabyte) | EB | 1024 بيتابايت |
| زيتابايت (Zettabyte) | ZB | 1024 إكسابايت |
| يوتابايت (Yottabyte) | YB | 1024 زيتابايت |

### أمثلة على استخدامات وحدات الذاكرة

- **كيلوبايت (KB)**: ملف نصي بسيط (وورد) - بضع كيلوبايت
- **ميجابايت (MB)**: صورة عالية الدقة (3-10 ميجابايت)، ملف صوتي قصير
- **جيجابايت (GB)**: فيلم، برنامج كبير، مساحة تخزين هاتف ذكي
- **تيرابايت (TB)**: القرص الصلب الحديث، مكتبة وسائط كاملة
- **بيتابايت (PB)**: خوادم فيسبوك (10+ بيتابايت)

---

## هرمية الذاكرة في الكمبيوتر (مراجعة)

من الأسرع إلى الأبطأ:

1. **المسجلات (Registers)**: ذاكرة فائقة السرعة داخل المعالج
2. **الذاكرة المخبأة (Cache)**: ذاكرة سريعة جداً قريبة من المعالج
3. **ذاكرة الوصول العشوائي (RAM)**: ذاكرة مؤقتة وسريعة
4. **القرص الصلب (Hard Disk)**: ذاكرة دائمة ولكنها أبطأ

> كلما اقتربنا من المعالج، كانت الذاكرة أسرع وأصغر حجماً

---

## سرعة المعالج (CPU Speed)

### الهرتز (Hertz - Hz)

- **الهرتز**: هو وحدة قياس سرعة المعالج، وتعني عدد الدورات في الثانية (Cycles per second)
- **ما معنى الدورة؟** خلال دورة واحدة، تفتح وتغلق مليارات الترانزستورات في المعالج
- **معنى 2.3 جيجاهرتز**: المعالج يستطيع تنفيذ 2.3 مليار دورة في الثانية الواحدة

### العوامل التي تحدد سرعة المعالج

1. **التردد (الهرتز)**: كلما زادت قيمة الجيجاهرتز، زادت سرعة المعالج
2. **الجيل**: Core i3, Core i5, Core i7, Core i9 (كلما زاد الرقم، زادت الكفاءة)

> مثال: معالج بسرعة 2.3 جيجاهرتز من نوع Core i9 قد يكون أسرع من معالج بسرعة 3.2 جيجاهرتز من نوع Core i7

---

## الفرق بين أنظمة 32 بت و64 بت

### المقارنة الأساسية

| الخاصية | 32 بت (x86) | 64 بت (x64) |
|---------|------------|------------|
| قوة المعالجة | أقل | أكثر |
| الحداثة | قديم نسبياً | حديث |
| السرعة | أبطأ | أسرع |
| الأمان | أقل أماناً | أكثر أماناً |
| الحد الأقصى للرام | 4 جيجابايت فقط | تيرابايتات |
| المساحة العنونية | 2^32 (4 مليار) عنوان | 2^64 (18 كوينتليون) عنوان |

### التوافق بين الأنظمة

- **النظام 32 بت**: لا يمكنه تشغيل برامج 64 بت
- **النظام 64 بت**: يمكنه تشغيل برامج 32 بت و64 بت
- **تنبيه**: عند تثبيت نظام تشغيل 32 بت على جهاز يدعم 64 بت، لن يستفيد من الرام أكثر من 4 جيجابايت

### كيف تعرف نوع نظام التشغيل لديك

1. اضغط على زر Windows في لوحة المفاتيح
2. اكتب "About" واضغط Enter
3. ستظهر معلومات النظام، بما فيها:
   - نوع المعالج
   - نوع نظام التشغيل (32 بت أو 64 بت)
   - حجم ذاكرة الرام

---

## خلاصة

1. **وحدات الذاكرة**: تبدأ من البايت وتتضاعف بمقدار 1024 (كيلوبايت، ميجابايت، جيجابايت، تيرابايت...)
2. **سرعة المعالج**: تقاس بالهرتز، وتتأثر بالجيل والتقنيات المستخدمة
3. **أنظمة 32 بت و64 بت**: تختلف في القدرة على معالجة البيانات واستغلال الرام

**تذكر دائماً**: عند شراء جهاز كمبيوتر، انتبه للمواصفات التالية:
- سرعة المعالج ونوعه (GHz وCore i#)
- حجم ذاكرة الرام (GB)
- نظام التشغيل والأجهزة (32 بت أو 64 بت)

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Lesson 4: Speeds and Measurement Units in Computers

## Introduction

This lesson covers computer speeds and measurement units, a fundamental topic for every programmer. We will learn about memory units, processor speed, and the difference between 32-bit and 64-bit systems.

## Memory Measurement Units

### Bit and Byte

- **Bit**: The smallest storage unit in computers, can store either 0 or 1 only.
- **Byte**: A group of 8 bits, the smallest unit that can represent useful information.

### Larger Memory Units

| Unit | Abbreviation | Equivalent | Approximately |
|------|-------------|------------|---------------|
| Byte | B | 8 bits | Basic unit |
| Kilobyte | KB | 1024 bytes | Thousand bytes |
| Megabyte | MB | 1024 kilobytes | Million bytes |
| Gigabyte | GB | 1024 megabytes | Billion bytes |
| Terabyte | TB | 1024 gigabytes | Trillion bytes |

> **Important note**: In computing, Kilo = 1024, not 1000 as in the metric system, because computers use binary (2¹⁰ = 1024).

### Larger Memory Units (Less Commonly Used)

| Unit | Abbreviation | Equivalent |
|------|-------------|------------|
| Petabyte | PB | 1024 terabytes |
| Exabyte | EB | 1024 petabytes |
| Zettabyte | ZB | 1024 exabytes |
| Yottabyte | YB | 1024 zettabytes |

### Examples of Memory Unit Usage

- **Kilobyte (KB)**: Simple text document (Word) - a few kilobytes
- **Megabyte (MB)**: High-resolution image (3-10 megabytes), short audio file
- **Gigabyte (GB)**: Movie, large program, smartphone storage
- **Terabyte (TB)**: Modern hard drive, complete media library
- **Petabyte (PB)**: Facebook servers (10+ petabytes)

---

## Memory Hierarchy in Computers (Review)

From fastest to slowest:

1. **Registers**: Ultra-fast memory inside the processor
2. **Cache Memory**: Very fast memory close to the processor
3. **Random Access Memory (RAM)**: Temporary, fast memory
4. **Hard Disk**: Permanent but slower memory

> The closer to the processor, the faster but smaller the memory

---

## Processor Speed (CPU Speed)

### Hertz (Hz)

- **Hertz**: The unit of measurement for processor speed, meaning cycles per second
- **What is a cycle?** During one cycle, billions of transistors in the processor open and close
- **What does 2.3 GHz mean?** The processor can execute 2.3 billion cycles per second

### Factors Determining Processor Speed

1. **Frequency (Hertz)**: The higher the GHz value, the faster the processor
2. **Generation**: Core i3, Core i5, Core i7, Core i9 (higher number means better efficiency)

> Example: A 2.3 GHz Core i9 processor might be faster than a 3.2 GHz Core i7 processor

---

## Difference Between 32-bit and 64-bit Systems

### Basic Comparison

| Feature | 32-bit (x86) | 64-bit (x64) |
|---------|-------------|-------------|
| Processing Power | Lower | Higher |
| Modernity | Relatively old | Modern |
| Speed | Slower | Faster |
| Security | Less secure | More secure |
| Maximum RAM | Only 4 GB | Terabytes |
| Addressable Space | 2^32 (4 billion) addresses | 2^64 (18 quintillion) addresses |

### Compatibility Between Systems

- **32-bit system**: Cannot run 64-bit programs
- **64-bit system**: Can run both 32-bit and 64-bit programs
- **Warning**: When installing a 32-bit operating system on a 64-bit capable machine, you cannot utilize more than 4 GB of RAM

### How to Check Your Operating System Type

1. Press the Windows key on your keyboard
2. Type "About" and press Enter
3. System information will display, including:
   - Processor type
   - Operating system type (32-bit or 64-bit)
   - RAM size

---

## Summary

1. **Memory units**: Start with byte and multiply by 1024 (kilobyte, megabyte, gigabyte, terabyte...)
2. **Processor speed**: Measured in Hertz, affected by generation and technology used
3. **32-bit vs 64-bit systems**: Differ in data processing capability and RAM utilization

**Always remember**: When buying a computer, pay attention to these specifications:
- Processor speed and type (GHz and Core i#)
- RAM size (GB)
- Operating system and hardware architecture (32-bit or 64-bit)



---
*Anas Chetoui* - `@anaschetoui`