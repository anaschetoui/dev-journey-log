<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# محددات الوصول (Access Specifiers)

---

## 📝 مقدمة

تُستخدم `Access Specifiers` أو `Access Modifiers` للتحكم في الوصول إلى أعضاء الـ `Class`.

يمكن أن يكون العضو `Data Member` أو `Member Function`. وباستخدام محددات الوصول، يمكن تحديد من يستطيع الوصول إلى العضو من خارج الـ `Class`، ومن داخلها، ومن الفئات التي ترث منها.

---

## 🎯 تعريف: Access Specifiers

> **Access Specifiers (محددات الوصول)**
>
> محددات تُستخدم للتحكم في الوصول إلى أعضاء الـ `Class`.
>
> توجد ثلاثة أنواع:
> `private` و `protected` و `public`.

---

## ⚙️ أنواع محددات الوصول

### `private`

عندما يكون العضو تحت `private`، يمكن لأعضاء الـ `Class` نفسها الوصول إليه.

لا يمكن الوصول إليه من خارج الـ `Class` باستخدام الـ `Object`، كما لا يمكن للفئات التي ترث من هذه الفئة الوصول إليه.

يمكن استخدام `private` للأعضاء الداخلية التي لا نريد إظهارها أو تعديلها من خارج الـ `Class`.

### `protected`

عندما يكون العضو تحت `protected`، يمكن الوصول إليه من داخل الـ `Class`، وكذلك من الفئات التي ترث منها.

لكن لا يمكن الوصول إليه من خارج الـ `Class` باستخدام الـ `Object`.

إذن `protected` يكون متاحًا للفئة نفسها وللفئات التي ترث منها، لكنه غير متاح للكود الخارجي.

### `public`

عندما يكون العضو تحت `public`، يمكن الوصول إليه من خارج الـ `Class`، ومن داخلها، ومن الفئات التي ترث منها.

لذلك، الأعضاء التي نريد استخدامها مباشرة من خلال الـ `Object` يمكن وضعها تحت `public`.

---

## 📌 الجهات التي يمكنها الوصول إلى الأعضاء

يمكن تقسيم الجهات التي تتعامل مع أعضاء الـ `Class` إلى ثلاث جهات:

1. الكود الموجود خارج الـ `Class`، مثل استخدام `Object` ثم `.` للوصول إلى عضو.
2. الكود الموجود داخل الـ `Class`.
3. الفئات التي ترث من الـ `Class`.

وتحدد `private` و `protected` و `public` أيًّا من هذه الجهات يمكنه الوصول إلى كل عضو.

---

## 💻 مثال: `clsPerson`

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
#include <iostream>
using namespace std;
class clsPerson
{
private:
//only accessable inside this calass
int Variabl1=5;
int Function1()
{
return 40;
}
protected:
//only accessable inside this calass and all classes inhirets
this calss
int Variabl2=100;
int Function2()
{
return 50;
}
public:
//accessable for everyone outside/inside/and classes inherits
this class
string FirstName;
string LastName;
string FullName()
{
return FirstName + " " + LastName;
}
float Function3()
{
return Function1() * Variabl1 * Variabl2;
}
};

int main()
{
clsPerson Person1;
Person1.FirstName = "Mohammed";
Person1.LastName = "Abu-Hadhoud";
cout <<"Person1: " << Person1.FullName() << endl;
cout << Person1.Function3();
}
```

</div>

في `clsPerson` توجد ثلاثة مستويات للوصول.

- `Variabl1` و `Function1()` تحت `private`.
- `Variabl2` و `Function2()` تحت `protected`.
- `FirstName` و `LastName` و `FullName()` و `Function3()` تحت `public`.

في `main()`، يمكن الوصول إلى `FirstName` و `LastName` و `FullName()` و `Function3()` من خلال `Person1` لأنها أعضاء `public`.

أما `Function1()` و `Variabl1` فلا يمكن الوصول إليهما من خارج الـ `Class`.

داخل `Function3()`، يمكن استخدام `Function1()` و `Variabl1` و `Variabl2` لأنها تُستخدم من داخل الـ `Class`.

---

## 📌 `private` بشكل افتراضي

في `class`، إذا لم نكتب `private` بشكل صريح في البداية، فإن الأعضاء تكون `private` افتراضيًا إلى أن نضع محدد وصول آخر.

لذلك يمكن أن تكون كلمة `private` مكتوبة بشكل صريح، أو يمكن تركها ويعاملها الـ compiler على أنها `private`.

---

## 📌 لماذا نستخدم محددات الوصول؟

قد تحتوي الـ `Class` على دوال ومتغيّرات داخلية كثيرة تُستخدم لتنفيذ عملها.

ليس من الضروري أن يرى مستخدم الـ `Class` جميع هذه الأعضاء أو يستخدمها مباشرة. يمكن إبقاء بعض الأعضاء داخلية باستخدام `private` أو `protected`، وإظهار الأعضاء التي يحتاج إليها المستخدم فقط باستخدام `public`.

هذا يساعد على:

- التحكم في الكود.
- تقليل الأخطاء.
- حماية بعض البيانات من التعديل الخارجي.
- منع المستخدم من التعامل مع أعضاء داخلية لا يحتاج إليها.
- جعل واجهة استخدام الـ `Class` أبسط.

مثال ذلك `string`. عند إنشاء متغيّر من نوع `string` واستخدام `.`، تظهر الأعضاء المتاحة للاستخدام من الخارج، وليس جميع التفاصيل الداخلية الموجودة داخل تنفيذ `string`.

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---|---|
| Access Modifier/Specifier | محدد الوصول |
| private | يسمح بالوصول من داخل الـ `Class` فقط |
| protected | يسمح بالوصول من داخل الـ `Class` ومن الفئات التي ترث منها |
| public | يسمح بالوصول من الخارج ومن داخل الـ `Class` ومن الفئات التي ترث منها |
| Data Member | متغيّر داخل الفئة يخزّن البيانات |
| Member Function | دالة عضو داخل الفئة |
| Inheritance | الوراثة |
| Object | كائن |
| Class | فئة أو صنف |

---

## ⚠️ ملاحظات

- يمكن أن يكون العضو `Data Member` أو `Member Function`.
- `private` يمنع الوصول من خارج الـ `Class` ومن الفئات التي ترث منها.
- `protected` يمنع الوصول من الخارج، لكنه يسمح بالوصول من الفئة نفسها ومن الفئات التي ترث منها.
- `public` يسمح بالوصول من الخارج ومن داخل الـ `Class` ومن الفئات التي ترث منها.
- العضو غير المتاح من الخارج لا يعني أنه غير موجود داخل الـ `Class`.
- استخدام `private` و `protected` يسمح بإخفاء التفاصيل الداخلية التي لا يحتاج المستخدم إلى التعامل معها مباشرة.
- في المثال، `FullName()` و `Function3()` متاحتان من خلال `Person1` لأنهما `public`.

---

## 💡 الفكرة الأساسية

هناك ثلاثة محددات للوصول:

- `private` → داخل الـ `Class` فقط.
- `protected` → داخل الـ `Class` وال`Class` التي ترث منها.
- `public` → من الخارج، ومن داخل الـ `Class`، ومن ال`Class` التي ترث منها.

تُستخدم هذه المحددات للتحكم في أجزاء الـ `Class` التي يمكن الوصول إليها، بدل جعل جميع الأعضاء متاحة للجميع.

---

## 🔑 ملخص

- `Access Specifiers` هي `private` و `protected` و `public`.
- `private` يسمح بالوصول من داخل الـ `Class` فقط.
- `protected` يسمح بالوصول من داخل الـ `Class` ومن الفئات التي ترث منها.
- `public` يسمح بالوصول من جميع الجهات المذكورة.
- يمكن تطبيق محددات الوصول على `Data Members` و `Member Functions`.
- أعضاء `class` تكون `private` افتراضيًا إذا لم نكتب محدد وصول آخر.
- يمكن استخدام محددات الوصول لإخفاء التفاصيل الداخلية وتقليل الوصول غير الضروري إلى أعضاء الـ `Class`.

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
<br>
<br>

<a id="english"></a>

[العربية ↗](#arabic)

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

## 📝 Introduction

`Access Specifiers`, also called `Access Modifiers`, are used to control access to members of a `Class`.

A member can be a `Data Member` or a `Member Function`. Access Specifiers decide who can access a member from outside the `Class`, inside the `Class`, or from classes that inherit from it.

---

## 🎯 Definition: Access Specifiers

> **Access Specifiers**
>
> Specifiers used to control access to members of a `Class`.
>
> There are three types:
> `private`, `protected`, and `public`.

---

## ⚙️ Types of Access Specifiers

### `private`

When a member is under `private`, members of the same `Class` can access it.

It cannot be accessed from outside the `Class` through an `Object`. Classes that inherit from this class also cannot access it.

`private` can be used for internal members that we do not want to expose or change from outside the `Class`.

### `protected`

When a member is under `protected`, it can be accessed from inside the `Class` and from classes that inherit from it.

It cannot be accessed from outside the `Class` through an `Object`.

So, `protected` is available to the class itself and its derived classes, but not to outside code.

### `public`

When a member is under `public`, it can be accessed from outside the `Class`, from inside the `Class`, and from classes that inherit from it.

Members that we want to use directly through an `Object` can be placed under `public`.

---

## 📌 The Three Access Groups

There are three groups that can work with members of a `Class`:

1. Code outside the `Class`, such as using an `Object` and `.` to access a member.
2. Code inside the `Class`.
3. Classes that inherit from the `Class`.

`private`, `protected`, and `public` decide which groups can access each member.

---

## 💻 Example: `clsPerson`

```cpp
#include <iostream>
using namespace std;
class clsPerson
{
private:
//only accessable inside this calass
int Variabl1=5;
int Function1()
{
return 40;
}
protected:
//only accessable inside this calass and all classes inhirets
this calss
int Variabl2=100;
int Function2()
{
return 50;
}
public:
//accessable for everyone outside/inside/and classes inherits
this class
string FirstName;
string LastName;
string FullName()
{
return FirstName + " " + LastName;
}
float Function3()
{
return Function1() * Variabl1 * Variabl2;
}
};

int main()
{
clsPerson Person1;
Person1.FirstName = "Mohammed";
Person1.LastName = "Abu-Hadhoud";
cout <<"Person1: " << Person1.FullName() << endl;
cout << Person1.Function3();
}
```

`clsPerson` has three access levels.

- `Variabl1` and `Function1()` are under `private`.
- `Variabl2` and `Function2()` are under `protected`.
- `FirstName`, `LastName`, `FullName()`, and `Function3()` are under `public`.

In `main()`, we can access `FirstName`, `LastName`, `FullName()`, and `Function3()` through `Person1` because they are `public`.

`Function1()` and `Variabl1` cannot be accessed from outside the `Class`.

Inside `Function3()`, we can use `Function1()`, `Variabl1`, and `Variabl2` because they are being used from inside the `Class`.

---

## 📌 `private` by Default

In a `class`, if we do not write `private` explicitly at the beginning, the members are `private` by default until another access specifier is used.

So, we can write `private` explicitly, or leave it out and the compiler treats the members as `private`.

---

## 📌 Why Use Access Specifiers?

A `Class` can have many internal functions and variables that help it do its work.

The user of the `Class` does not need to see or use all of these members directly. Some members can stay internal with `private` or `protected`, while the members needed by the user can be made `public`.

This helps to:

- Control the code.
- Reduce errors.
- Protect some data from outside changes.
- Stop users from working with internal members they do not need.
- Keep the `Class` interface simpler.

For example, when we create a `string` variable and use `.`, we see the members that are available for outside use, not all the internal details inside the implementation of `string`.

---

## 📚 Terminology

| Term | Meaning |
|---|---|
| Access Modifier/Specifier | A specifier that controls access |
| private | Allows access from inside the `Class` only |
| protected | Allows access from inside the `Class` and from classes that inherit from it |
| public | Allows access from outside, inside the `Class`, and from classes that inherit from it |
| Data Member | A variable inside the class that stores data |
| Member Function | A function inside the class |
| Inheritance | A feature where one class inherits from another class |
| Object | An instance created from a `Class` |
| Class | A type used to create objects |

---

## ⚠️ Notes

- A member can be a `Data Member` or a `Member Function`.
- `private` blocks access from outside the `Class` and from classes that inherit from it.
- `protected` blocks outside access, but allows access from the class itself and its derived classes.
- `public` allows access from outside, inside the `Class`, and from classes that inherit from it.
- A member that cannot be accessed from outside still exists inside the `Class`.
- `private` and `protected` can hide internal details that the user does not need to use directly.
- In the example, `FullName()` and `Function3()` can be accessed through `Person1` because they are `public`.

---

## 💡 Key Idea

There are three Access Specifiers:

- `private` → inside the `Class` only.
- `protected` → inside the `Class` and classes that inherit from it.
- `public` → outside, inside the `Class`, and classes that inherit from it.

They control which parts of a `Class` can be accessed instead of making every member available to everyone.

---

## 🔑 Summary

- The three Access Specifiers are `private`, `protected`, and `public`.
- `private` allows access from inside the `Class` only.
- `protected` allows access from inside the `Class` and from classes that inherit from it.
- `public` allows access from all the groups listed above.
- Access Specifiers can be used with `Data Members` and `Member Functions`.
- Class members are `private` by default if no other access specifier is used.
- Access Specifiers can hide internal details and reduce unnecessary access to members of a `Class`.

</div>

---

*Anas Chetoui* - `@anaschetoui`
