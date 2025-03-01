<div dir="rtl">

<a id="arabic-nested"></a>
[English ↙](#english-nested)

# 🏗️ الهياكل المتداخلة والتعدادات - مثال عملي كامل

## 🎯 المقدمة

في هذا الدرس سنطبق مثال عملي متكامل يجمع بين **الهياكل المتداخلة (Nested Structures)** و**التعدادات (Enums)** لتنظيم البيانات في البرنامج بشكل احترافي.

## 💡 المفاهيم الأساسية

### الهدف من الهياكل المتداخلة
- تجميع البيانات ذات العلاقة في مجموعات منظمة
- تسهيل الوصول للبيانات عبر نقطة واحدة
- جعل الكود أكثر نظافة وسهولة في الصيانة

## 🛠️ مثال عملي متكامل

### 📝 تعريف التعدادات (Enums)

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

// تعداد الألوان
enum enColor {
    RED,
    GREEN, 
    YELLOW,
    BLUE
};

// تعداد الجنس
enum enGender {
    MALE,
    FEMALE
};

// تعداد الحالة الاجتماعية
enum enMaritalStatus {
    SINGLE,
    MARRIED
};
```

</div>

### 📝 تعريف الهياكل المتداخلة

<div dir="ltr" align="left">

```cpp
// هيكل العنوان
struct stAddress {
    string streetName;
    string buildingNumber;
    string poBox;
    string zipCode;
};

// هيكل معلومات الاتصال
struct stContactInfo {
    string phone;
    string email;
    stAddress address;  // هيكل داخل هيكل
};

// الهيكل الرئيسي للشخص
struct stPerson {
    string firstName;
    string lastName;
    stContactInfo contactInfo;  // هيكل داخل هيكل
    enGender gender;           // تعداد
    enMaritalStatus maritalStatus; // تعداد
    enColor favoriteColor;     // تعداد
};
```

</div>

### 📝 الاستخدام في البرنامج الرئيسي

<div dir="ltr" align="left">

```cpp
int main() {
    // إنشاء متغير واحد فقط من نوع الهيكل الرئيسي
    stPerson person1;
    
    // تعيين البيانات الأساسية
    person1.firstName = "محمد";
    person1.lastName = "أبو هدهود";
    
    // تعيين بيانات الاتصال
    person1.contactInfo.email = "example@email.com";
    person1.contactInfo.phone = "123456789";
    
    // تعيين بيانات العنوان (هيكل داخل هيكل داخل هيكل)
    person1.contactInfo.address.streetName = "xxxx";
    person1.contactInfo.address.buildingNumber = "123";
    person1.contactInfo.address.poBox = "7777";
    person1.contactInfo.address.zipCode = "12345";
    
    // تعيين التعدادات
    person1.gender = MALE;
    person1.maritalStatus = MARRIED;
    person1.favoriteColor = GREEN;
    
    // طباعة البيانات
    cout << "الاسم: " << person1.firstName << " " << person1.lastName << endl;
    cout << "البريد الإلكتروني: " << person1.contactInfo.email << endl;
    cout << "الهاتف: " << person1.contactInfo.phone << endl;
    cout << "صندوق البريد: " << person1.contactInfo.address.poBox << endl;
    cout << "اسم الشارع: " << person1.contactInfo.address.streetName << endl;
    
    return 0;
}
```

</div>

## ❌ الأخطاء الشائعة

### 1. عدم استخدام البادئات المناسبة

<div dir="ltr" align="left">

```cpp
// ❌ غير منظم
enum Color { RED, GREEN };
struct Address { string street; };

// ✅ منظم مع بادئات
enum enColor { RED, GREEN };
struct stAddress { string street; };
```

</div>

### 2. إنشاء متغيرات منفصلة بدلاً من الهيكل الموحد

<div dir="ltr" align="left">

```cpp
// ❌ متغيرات منفصلة (غير منظمة)
string firstName, lastName, email, phone, street;
int gender, status, color;

// ✅ هيكل موحد (منظم)
stPerson person1;  // كل البيانات مجمعة في مكان واحد
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام بادئات للتعدادات والهياكل

<div dir="ltr" align="left">

```cpp
// ✅ بادئة "en" للتعدادات
enum enColor { RED, GREEN, BLUE };
enum enGender { MALE, FEMALE };

// ✅ بادئة "st" للهياكل
struct stAddress { /* ... */ };
struct stPerson { /* ... */ };
```

</div>

### 2. تجميع البيانات ذات العلاقة

<div dir="ltr" align="left">

```cpp
// ✅ تجميع منطقي
struct stAddress {
    string streetName;
    string buildingNumber;
    string poBox;
    string zipCode;
    // كلها متعلقة بالعنوان
};

struct stContactInfo {
    string phone;
    string email;
    stAddress address;  // العنوان جزء من معلومات الاتصال
};
```

</div>

### 3. استخدام نقطة وصول واحدة

<div dir="ltr" align="left">

```cpp
// ✅ نقطة وصول واحدة لجميع البيانات
stPerson person1;

// جميع البيانات متاحة عبر person1
person1.firstName;
person1.contactInfo.email;
person1.contactInfo.address.streetName;
person1.gender;
```

</div>

## 📊 فوائد التنظيم بالهياكل المتداخلة

### بدون هياكل متداخلة
- عشرات المتغيرات المنفصلة
- صعوبة تذكر أسماء المتغيرات
- كود معقد وصعب الصيانة

### مع هياكل متداخلة
- متغير رئيسي واحد
- وصول منظم للبيانات
- كود نظيف وسهل التطوير

## 📝 الملخص

### المميزات الرئيسية:
- **التنظيم**: تجميع جميع البيانات المتعلقة في مكان واحد
- **السهولة**: الوصول للبيانات عبر مسار واضح
- **الكفاءة**: تقليل عدد المتغيرات المنفصلة
- **الصيانة**: سهولة تعديل وإضافة بيانات جديدة

### قواعد التسمية الموصى بها:
- **التعدادات**: `en` + اسم التعداد (`enColor`, `enGender`)
- **الهياكل**: `st` + اسم الهيكل (`stAddress`, `stPerson`)
- **المتغيرات**: أسماء توضيحية (`firstName`, `streetName`)

### الفكرة الأساسية:
الهياكل المتداخلة والتعدادات تحول البرمجة من التعامل مع متغيرات منفصلة إلى التعامل مع كيانات منظمة، مما يجعل البرمجة أسرع وأقل عرضة للأخطاء.

</div>

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

<a id="english-nested"></a>
[العربية ↗](#arabic-nested)

# 🏗️ Nested Structures and Enums - Full Practical Example

## 🎯 Introduction

In this lesson, we'll apply a complete practical example that combines **Nested Structures** and **Enums** to organize data in programs professionally.

## 💡 Core Concepts

### Purpose of Nested Structures
- Group related data into organized sets
- Simplify data access through a single point
- Make code cleaner and easier to maintain

## 🛠️ Complete Practical Example

### 📝 Enum Definitions

```cpp
#include <iostream>
using namespace std;

// Color enum
enum enColor {
    RED,
    GREEN, 
    YELLOW,
    BLUE
};

// Gender enum
enum enGender {
    MALE,
    FEMALE
};

// Marital status enum
enum enMaritalStatus {
    SINGLE,
    MARRIED
};
```

### 📝 Nested Structure Definitions

```cpp
// Address structure
struct stAddress {
    string streetName;
    string buildingNumber;
    string poBox;
    string zipCode;
};

// Contact information structure
struct stContactInfo {
    string phone;
    string email;
    stAddress address;  // Structure within structure
};

// Main person structure
struct stPerson {
    string firstName;
    string lastName;
    stContactInfo contactInfo;  // Structure within structure
    enGender gender;           // Enum
    enMaritalStatus maritalStatus; // Enum
    enColor favoriteColor;     // Enum
};
```

### 📝 Usage in Main Program

```cpp
int main() {
    // Create only one variable of the main structure type
    stPerson person1;
    
    // Assign basic data
    person1.firstName = "Mohammad";
    person1.lastName = "Abu Haddoud";
    
    // Assign contact information
    person1.contactInfo.email = "example@email.com";
    person1.contactInfo.phone = "123456789";
    
    // Assign address data (structure within structure within structure)
    person1.contactInfo.address.streetName = "xxx";
    person1.contactInfo.address.buildingNumber = "123";
    person1.contactInfo.address.poBox = "7777";
    person1.contactInfo.address.zipCode = "12345";
    
    // Assign enums
    person1.gender = MALE;
    person1.maritalStatus = MARRIED;
    person1.favoriteColor = GREEN;
    
    // Print data
    cout << "Name: " << person1.firstName << " " << person1.lastName << endl;
    cout << "Email: " << person1.contactInfo.email << endl;
    cout << "Phone: " << person1.contactInfo.phone << endl;
    cout << "PO Box: " << person1.contactInfo.address.poBox << endl;
    cout << "Street Name: " << person1.contactInfo.address.streetName << endl;
    
    return 0;
}
```

## ❌ Common Errors

### 1. Not Using Proper Prefixes

```cpp
// ❌ Unorganized
enum Color { RED, GREEN };
struct Address { string street; };

// ✅ Organized with prefixes
enum enColor { RED, GREEN };
struct stAddress { string street; };
```

### 2. Creating Separate Variables Instead of Unified Structure

```cpp
// ❌ Separate variables (unorganized)
string firstName, lastName, email, phone, street;
int gender, status, color;

// ✅ Unified structure (organized)
stPerson person1;  // All data grouped in one place
```

## 🏆 Best Practices

### 1. Use Prefixes for Enums and Structures

```cpp
// ✅ "en" prefix for enums
enum enColor { RED, GREEN, BLUE };
enum enGender { MALE, FEMALE };

// ✅ "st" prefix for structures
struct stAddress { /* ... */ };
struct stPerson { /* ... */ };
```

### 2. Group Related Data

```cpp
// ✅ Logical grouping
struct stAddress {
    string streetName;
    string buildingNumber;
    string poBox;
    string zipCode;
    // All related to address
};

struct stContactInfo {
    string phone;
    string email;
    stAddress address;  // Address is part of contact info
};
```

### 3. Use Single Access Point

```cpp
// ✅ Single access point for all data
stPerson person1;

// All data accessible through person1
person1.firstName;
person1.contactInfo.email;
person1.contactInfo.address.streetName;
person1.gender;
```

## 📊 Benefits of Organization with Nested Structures

### Without Nested Structures
- Dozens of separate variables
- Difficulty remembering variable names
- Complex and hard-to-maintain code

### With Nested Structures
- Single main variable
- Organized data access
- Clean and easy-to-develop code

## 📝 Summary

### Key Features:
- **Organization**: Group all related data in one place
- **Ease**: Access data through clear paths
- **Efficiency**: Reduce number of separate variables
- **Maintenance**: Easy to modify and add new data

### Recommended Naming Rules:
- **Enums**: `en` + enum name (`enColor`, `enGender`)
- **Structures**: `st` + structure name (`stAddress`, `stPerson`)
- **Variables**: Descriptive names (`firstName`, `streetName`)

### Core Concept:
Nested structures and enums transform programming from dealing with separate variables to dealing with organized entities, making programming faster and less error-prone.


<br> <br> <br> <br>
---
*Anas Chetoui* - `@anaschetoui`

</div>