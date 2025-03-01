<div dir="rtl">

<a id="arabic-struct"></a>
[English ↙](#english-struct)

# 🏗️ الهياكل | Structures

## 🎯 المقدمة

الهياكل (Structures) في لغة C++ هي نوع من أنواع البيانات التي نعرفها بأنفسنا (User Defined Data Types). تعتبر الهياكل أساس البرمجة كائنية التوجه وسهلة الفهم إذا طبقناها بشكل صحيح.

## 💡 المفاهيم الأساسية

### أنواع البيانات في C++

1. **الأنواع الأساسية (Fundamental)**: `int`, `float`, `double`, `bool`
2. **الأنواع المشتقة (Derived)**: المصفوفات، المؤشرات
3. **الأنواع المعرفة من المستخدم (User Defined)**: **الهياكل**، الاتحادات

### ما هي الهياكل؟

الهياكل هي **مجموعة من المتغيرات** ذات العلاقة مع بعضها، مجمعة تحت مظلة واحدة. تمكننا من إنشاء نوع بيانات مخصص يناسب احتياجاتنا.

## 🛠️ أمثلة عملية

### 📝 مثال أساسي للهيكل

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

// تعريف الهيكل
struct Car {
    string brand;
    string model;
    int year;
};

int main() {
    // إنشاء متغيرات من نوع الهيكل
    Car myCar1;
    Car myCar2;
    
    // تعيين القيم
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2000;
    
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 2022;
    
    // طباعة القيم
    cout << "Car 1: " << myCar1.brand << " " 
         << myCar1.model << " " << myCar1.year << endl;
    
    cout << "Car 2: " << myCar2.brand << " " 
         << myCar2.model << " " << myCar2.year << endl;
    
    return 0;
}
```

</div>

### 🔍 هيكل داخل هيكل

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

// هيكل العنوان
struct Address {
    string street;
    string poBox;
};

// هيكل المالك
struct Owner {
    string fullName;
    string phone;
    Address address;  // هيكل داخل هيكل
};

// هيكل السيارة
struct Car {
    string brand;
    string model;
    int year;
    Owner owner;  // هيكل داخل هيكل
};

int main() {
    Car myCar1;
    
    // تعيين القيم الأساسية
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2000;
    
    // تعيين قيم الهياكل الداخلية
    myCar1.owner.fullName = "محمد أبو هدهود";
    myCar1.owner.phone = "123456789";
    myCar1.owner.address.street = "شارع الرئيسي";
    myCar1.owner.address.poBox = "12345";
    
    // طباعة جميع المعلومات
    cout << "السيارة: " << myCar1.brand << " " 
         << myCar1.model << " " << myCar1.year << endl;
    
    cout << "المالك: " << myCar1.owner.fullName << endl;
    cout << "الهاتف: " << myCar1.owner.phone << endl;
    cout << "العنوان: " << myCar1.owner.address.street << endl;
    cout << "صندوق البريد: " << myCar1.owner.address.poBox << endl;
    
    return 0;
}
```

</div>

## ❌ الأخطاء الشائعة

### 1. نسيان نقطة الوصول

<div dir="ltr" align="left">

```cpp
// ❌ خطأ
Car myCar1;
myCar1 = "BMW";  // خطأ! يجب الوصول عبر النقطة

// ✅ صحيح
Car myCar1;
myCar1.brand = "BMW";
```

</div>

### 2. الخلط بين تعريف الهيكل وإنشاء المتغير

<div dir="ltr" align="left">

```cpp
// ❌ خطأ
struct Car {
    string brand;
} = "BMW";  // خطأ في التعريف

// ✅ صحيح
struct Car {
    string brand;
};

Car myCar;
myCar.brand = "BMW";
```

</div>

### 3. عدم استخدام المكتبة المطلوبة

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - نسيان مكتبة string
#include <iostream>
using namespace std;

struct Car {
    string brand;  // خطأ! لم يتم تضمين string
};

// ✅ صحيح
#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;  // يعمل بشكل صحيح
};
```

</div>

## 🏆 أفضل الممارسات

### 1. تسمية واضحة للهياكل

<div dir="ltr" align="left">

```cpp
// ✅ تسمية واضحة
struct StudentRecord {
    string name;
    int id;
    double gpa;
};

// ❌ تسمية غير واضحة
struct X {
    string n;
    int i;
    double g;
};
```

</div>

### 2. تجميع المتغيرات ذات العلاقة

<div dir="ltr" align="left">

```cpp
// ✅ تجميع منطقي
struct Person {
    string firstName;
    string lastName;
    int age;
    string email;
};

struct BankAccount {
    string accountNumber;
    double balance;
    string accountType;
};
```

</div>

### 3. استخدام الهياكل لتبسيط الكود

<div dir="ltr" align="left">

```cpp
// ✅ استخدام الهياكل يجعل الكود أنظف
struct Point {
    int x;
    int y;
};

struct Rectangle {
    Point topLeft;
    Point bottomRight;
};

Rectangle rect;
rect.topLeft.x = 10;
rect.topLeft.y = 20;
```

</div>

## 📊 مقارنة بين المتغيرات العادية والهياكل

### بدون هياكل

<div dir="ltr" align="left">

```cpp
// ❌ غير منظم
string car1Brand, car1Model, car1Owner;
int car1Year;
string car2Brand, car2Model, car2Owner;
int car2Year;
// ... والمزيد من المتغيرات المنفصلة
```

</div>

### مع هياكل

<div dir="ltr" align="left">

```cpp
// ✅ منظم وسهل الإدارة
struct Car {
    string brand;
    string model;
    int year;
    string owner;
};

Car car1, car2, car3;  // جميع الخصائص مجمعة
```

</div>

## 📝 الملخص

### المميزات الرئيسية:
- **تنظيم البيانات**: تجميع المتغيرات ذات العلاقة معاً
- **إعادة الاستخدام**: تعريف الهيكل مرة واستخدامه
- **المرونة**: إمكانية وضع هياكل داخل هياكل
- **الوضوح**: جعل الكود أكثر قابلية للقراءة

### قواعد مهمة:
1. **التعريف**: `struct اسم_الهيكل { ... };`
2. **إنشاء المتغير**: `اسم_الهيكل اسم_المتغير;`
3. **الوصول للخصائص**: `اسم_المتغير.اسم_الخاصية`
4. **الهياكل المتداخلة**: `هيكل1.هيكل2.خاصية`

### الفكرة الأساسية:
الهياكل هي مثل "سجلات" تجمع بين بيانات متعددة ذات علاقة، مما يجعل برامجنا أكثر تنظيماً وسهولة في الصيانة والتطوير.

</div>

<div dir="ltr">

<a id="english-struct"></a>
[العربية ↗](#arabic-struct)

# 🏗️ Structures

## 🎯 Introduction

Structures in C++ are a type of User Defined Data Types. They form the foundation of Object-Oriented Programming and are easy to understand when applied correctly.

## 💡 Core Concepts

### Data Types in C++

1. **Fundamental Types**: `int`, `float`, `double`, `bool`
2. **Derived Types**: Arrays, Pointers
3. **User Defined Types**: **Structures**, Unions

### What are Structures?

Structures are **groups of related variables** collected under one umbrella. They allow us to create custom data types that suit our needs.

## 🛠️ Practical Examples

### 📝 Basic Structure Example

```cpp
#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Car {
    string brand;
    string model;
    int year;
};

int main() {
    // Creating structure variables
    Car myCar1;
    Car myCar2;
    
    // Assigning values
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2000;
    
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 2022;
    
    // Printing values
    cout << "Car 1: " << myCar1.brand << " " 
         << myCar1.model << " " << myCar1.year << endl;
    
    cout << "Car 2: " << myCar2.brand << " " 
         << myCar2.model << " " << myCar2.year << endl;
    
    return 0;
}
```

### 🔍 Nested Structures

```cpp
#include <iostream>
#include <string>
using namespace std;

// Address structure
struct Address {
    string street;
    string poBox;
};

// Owner structure
struct Owner {
    string fullName;
    string phone;
    Address address;  // Structure within structure
};

// Car structure
struct Car {
    string brand;
    string model;
    int year;
    Owner owner;  // Structure within structure
};

int main() {
    Car myCar1;
    
    // Assigning basic values
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2000;
    
    // Assigning nested structure values
    myCar1.owner.fullName = "Mohammad Abu Haddoud";
    myCar1.owner.phone = "123456789";
    myCar1.owner.address.street = "Main Street";
    myCar1.owner.address.poBox = "12345";
    
    // Printing all information
    cout << "Car: " << myCar1.brand << " " 
         << myCar1.model << " " << myCar1.year << endl;
    
    cout << "Owner: " << myCar1.owner.fullName << endl;
    cout << "Phone: " << myCar1.owner.phone << endl;
    cout << "Address: " << myCar1.owner.address.street << endl;
    cout << "PO Box: " << myCar1.owner.address.poBox << endl;
    
    return 0;
}
```

## ❌ Common Errors

### 1. Forgetting Dot Operator

```cpp
// ❌ Wrong
Car myCar1;
myCar1 = "BMW";  // Error! Must use dot operator

// ✅ Correct
Car myCar1;
myCar1.brand = "BMW";
```

### 2. Confusing Definition and Variable Creation

```cpp
// ❌ Wrong
struct Car {
    string brand;
} = "BMW";  // Definition error

// ✅ Correct
struct Car {
    string brand;
};

Car myCar;
myCar.brand = "BMW";
```

### 3. Missing Required Library

```cpp
// ❌ Error - missing string library
#include <iostream>
using namespace std;

struct Car {
    string brand;  // Error! string not included
};

// ✅ Correct
#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;  // Works correctly
};
```

## 🏆 Best Practices

### 1. Clear Structure Naming

```cpp
// ✅ Clear naming
struct StudentRecord {
    string name;
    int id;
    double gpa;
};

// ❌ Unclear naming
struct X {
    string n;
    int i;
    double g;
};
```

### 2. Grouping Related Variables

```cpp
// ✅ Logical grouping
struct Person {
    string firstName;
    string lastName;
    int age;
    string email;
};

struct BankAccount {
    string accountNumber;
    double balance;
    string accountType;
};
```

### 3. Using Structures to Simplify Code

```cpp
// ✅ Structures make code cleaner
struct Point {
    int x;
    int y;
};

struct Rectangle {
    Point topLeft;
    Point bottomRight;
};

Rectangle rect;
rect.topLeft.x = 10;
rect.topLeft.y = 20;
```

## 📊 Comparison: Normal Variables vs Structures

### Without Structures

```cpp
// ❌ Disorganized
string car1Brand, car1Model, car1Owner;
int car1Year;
string car2Brand, car2Model, car2Owner;
int car2Year;
// ... More separate variables
```

### With Structures

```cpp
// ✅ Organized and manageable
struct Car {
    string brand;
    string model;
    int year;
    string owner;
};

Car car1, car2, car3;  // All properties grouped
```

## 📝 Summary

### Key Features:
- **Data Organization**: Group related variables together
- **Reusability**: Define structure once, use multiple times
- **Flexibility**: Nest structures within structures
- **Clarity**: Make code more readable

### Important Rules:
1. **Definition**: `struct StructureName { ... };`
2. **Variable Creation**: `StructureName variableName;`
3. **Accessing Properties**: `variableName.propertyName`
4. **Nested Structures**: `structure1.structure2.property`

### Core Concept:
Structures are like "records" that combine multiple related data items, making our programs more organized and easier to maintain and develop.

---

*Anas Chetoui* - `@anaschetoui`

</div>