
<a id="arabic"></a>
[English ↙](#english)
<div dir="rtl" style="text-align: right">

# الخصائص (Properties): Set و Get

> ملخص سريع
> - تجنّب الحقول `public` داخل الكلاس.
> - اجعل البيانات `private` وقدّم دوال `set...()` و`get...()` للوصول.
> - استخدم البادئة `_` في أسماء المتغيّرات الخاصة مثل `_firstName`.
> - تفاعل مع البيانات عبر الدوال فقط، وليس مباشرةً من الكائن.

## المفهوم
-  Properties أسلوب منظّم للوصول إلى بيانات الكائن عبر دوال بدلًا من التعامل المباشر مع الحقول.
- الهدف: حماية البيانات وتسهيل تغيير الكود لاحقًا عبر نقطة واضحة للقراءة والكتابة.

## المشكلة في الوصول المباشر
- نمط غير مرغوب: `person.firstName = "Ali"` (تعديل مباشر).
- السلبيات:
  - فقدان القيمة القديمة فورًا.
  - لا مكان لإضافة منطق مثل التحقق أو التسجيل وقت التعديل.

</div>
<div dir="ltr">

```cpp
// قبل (غير موصى به): وصول مباشر إلى حقول عامة
#include <iostream>
#include <string>
using namespace std;

class clsPerson {
public:
    string firstName;  // public ❌
    string lastName;   // public ❌
};

int main() {
    clsPerson person;
    cout << person.firstName << endl;  // قراءة مباشرة
    person.firstName = "Ali";          // كتابة مباشرة
    return 0;
}
```
</div>
<div dir="rtl" style="text-align: right">

## النمط الصحيح: Private + Set/Get
- اجعل الحقول `private` وقدّم واجهة بسيطة:
  - `setFirstName(string)` و`getFirstName()`
  - `setLastName(string)` و`getLastName()`
  - `getFullName()` قيمة مشتقة للقراءة فقط

</div>
<div dir="ltr">

```cpp
// بعد (موصى به): تغليف بسيط + خصائص Get/Set
#include <iostream>
#include <string>
using namespace std;

class clsPerson {
private:
    string _firstName;
    string _lastName;

public:
    // Setters
    void setFirstName(string firstName) { _firstName = firstName; }
    void setLastName(string lastName)   { _lastName  = lastName;  }

    // Getters
    string getFirstName() { return _firstName; }
    string getLastName()  { return _lastName;  }

    // قيمة مشتقة للقراءة فقط
    string getFullName() { return getFirstName() + string(" ") + getLastName(); }
};

int main() {
    clsPerson person;
    person.setFirstName("Ali");
    person.setLastName("Hamada");
    cout << person.getFullName() << endl;  // Ali Hamada
    return 0;
}
```
</div>
<div dir="rtl" style="text-align: right">

## لماذا هذا النمط مهم؟
- يمنع العبث المباشر بالبيانات ويجعل طريقة الاستخدام واضحة.
- يسمح بإضافة منطق داخل دوال `set...()` و`get...()` عند الحاجة دون تغيير الكود الخارجي.
- يُسهّل الصيانة ويحسّن ترتيب الكود.

## خلاصة عامة
> اجعل الحقول `private` مع بادئة `_`، وقدّم دوال `set...()` و`get...()` لكل حقل. ابنِ القيم المشتقة مثل `getFullName()` عبر الدوال، وتجنّب الوصول المباشر من خارج الكلاس. بهذه الطريقة تحافظ على تنظيم البيانات وسهولة التطوير لاحقًا.

</div>

---
<br><br><br><br><br><br>
<a id="english"></a>

[العربية ↗](#arabic)
# Properties: Set and Get

> Short summary
> - Do not use `public` fields in a class.
> - Keep data `private` and use `set...()` and `get...()` methods.
> - Use `_` before private names, like `_firstName`.
> - Read and write data only through methods, not directly.

## Idea
- Properties help us read and write object data through methods.
- This protects the data and gives one clear place to change how we read or write values.

## Problem with direct access
- Not recommended: `person.firstName = "Ali"` (direct change).
- Problems:
  - The old value is lost at once.
  - We cannot add simple checks or logs at the moment of change.

```cpp
// Before (not recommended): direct access to public fields
#include <iostream>
#include <string>
using namespace std;

class clsPerson {
public:
    string firstName;  // public ❌
    string lastName;   // public ❌
};

int main() {
    clsPerson person;
    cout << person.firstName << endl;  // direct read
    person.firstName = "Ali";          // direct write
    return 0;
}
```

## Correct pattern: Private + Set/Get
- Make fields `private` and offer a simple public interface:
  - `setFirstName(string)` and `getFirstName()`
  - `setLastName(string)`  and `getLastName()`
  - `getFullName()` as a read-only value

```cpp
// After (recommended): simple encapsulation with getters/setters
#include <iostream>
#include <string>
using namespace std;

class clsPerson {
private:
    string _firstName;
    string _lastName;

public:
    // Setters
    void setFirstName(string firstName) { _firstName = firstName; }
    void setLastName(string lastName)   { _lastName  = lastName;  }

    // Getters
    string getFirstName() { return _firstName; }
    string getLastName()  { return _lastName;  }

    // Read-only derived value
    string getFullName() { return getFirstName() + string(" ") + getLastName(); }
};

int main() {
    clsPerson person;
    person.setFirstName("Ali");
    person.setLastName("Hamada");
    cout << person.getFullName() << endl;  // Ali Hamada
    return 0;
}
```

## Why this is useful
- Stops direct changes to data and keeps a clear way to use the class.
- You can add simple rules inside `set...()` and `get...()` later without breaking other code.
- Makes the code easier to read and maintain.

## General summary
> Keep fields `private` (with `_`), give matching `set...()`/`get...()` methods, and build derived values (like `getFullName()`) with methods. Do not access fields directly from outside the class. This keeps your code simple, clear, and easier to change.
