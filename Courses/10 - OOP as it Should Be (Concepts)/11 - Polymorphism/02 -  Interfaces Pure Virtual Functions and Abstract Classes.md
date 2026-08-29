<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# Abstract Classes, Interfaces and Pure Virtual Functions

---

## 📝 مقدمة

يمكننا إنشاء `Class` تعمل كعقد يحدد الدوال التي يجب أن تنفذها الكلاسات التي ترث منها.

يتم ذلك باستخدام `Pure Virtual Functions`.

---

## 🧠 مراجعة سريعة

تعرفنا سابقًا على `Virtual Functions`.

يمكن عمل `Override` للدالة `virtual` داخل الـ `Derived Class`.

أما `Pure Virtual Function` فلا تحتوي على `Implementation` داخل الـ `Base Class`.

---

## 🎯 تعريف: Pure Virtual Function

> **Pure Virtual Function**
>
> دالة `virtual` لا تحتوي على `Implementation`، وتُكتب باستخدام `0 =`.

الصيغة المستخدمة:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
virtual void Dial(string PhoneNumber) = 0;
```

</div>

وجود ` 0 =` هو ما يجعل الدالة `Pure Virtual Function`.

---

## 🎯 تعريف: Abstract Class

> **Abstract Class**
>
> كلاس تحتوي على `Pure Virtual Function` واحدة على الأقل، ولا يمكن إنشاء `Object` منها مباشرة.

عندما تحتوي الكلاس على `Pure Virtual Function`، تصبح `Abstract Class`.

لذلك لا يمكن إنشاء `Object` منها مباشرة.

---

## 🎯 تعريف: Interface / Contract

> **Interface / Contract**
>
> مجموعة من الدوال التي تحدد ما يجب على الـ `Derived Class` تنفيذه.

يمكن التعامل معها كعقد يجب الالتزام بشروطه.

الـ `Base Class` تحدد الدوال المطلوبة، والـ `Derived Class` تقدم الـ `Implementation`.

---

## ⚙️ كيف تعمل الفكرة؟

لدينا `clsMobile` تحتوي على ثلاث `Pure Virtual Functions`:

`()Dial`

`()SendSMS`

`()TakePicture`

لذلك تصبح `clsMobile` `Abstract Class`.

أي كلاس ترث منها يجب أن تنفذ هذه الدوال حتى يمكن إنشاء `Object` منها.

---

## 💻 مثال: `clsMobile`

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
//Abstract Class / Interface / Contract.
class clsMobile
{
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string PhoneNumber, string Text) = 0;
    virtual void TakePicture() = 0;
};
```

</div>

لا يوجد `Implementation` لهذه الدوال داخل `clsMobile`.

يوجد فقط ما يجب على الكلاس الوارثة تنفيذه.

---

## 📌 لماذا لا يمكن إنشاء Object من `clsMobile`؟

لا يمكن إنشاء `Object` من `clsMobile` لأنها تحتوي على `Pure Virtual Functions`.

هي تحدد ما يجب أن يكون موجودًا، لكنها لا تقدم `Implementation` لهذه الدوال.

---

## 🎯 `clsiPhone` وتنفيذ العقد

> **clsiPhone**
>
> كلاس ترث من `clsMobile`، ولذلك يجب أن تنفذ الدوال المطلوبة في العقد.

عند كتابة:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
class clsiPhone : public clsMobile
```

</div>

يجب تنفيذ:

`()Dial`

`()SendSMS`

`()TakePicture`

---

## 💻 مثال: `clsiPhone`

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
class clsiPhone : public clsMobile
{
    //This class signed a contract with clsMobile abstract class
    //therefore it should implement everything in the abstract class

public:

    void Dial(string PhoneNumber)
    {
    }

    void SendSMS(string PhoneNumber, string Text)
    {
    }

    void TakePicture()
    {
    }

    void MyOwnMethod()
    {
    }
};
```

</div>

بعد تنفيذ الدوال الثلاث، يمكن إنشاء:

`;clsiPhone iPhone1`

ويمكن أيضًا إضافة دوال خاصة بالكلاس مثل:

`()MyOwnMethod`

---

## ⚠️ ماذا يحدث إذا لم تنفذ كل الدوال؟

إذا تركت `clsiPhone` إحدى الـ `Pure Virtual Functions` بدون `Override`، تبقى `Abstract Class`.

وبالتالي لا يمكن إنشاء `Object` منها.

يجب تنفيذ جميع الدوال المطلوبة في العقد.

---

## 🎯 `clsSamsungNote10` وتنفيذ العقد

> **clsSamsungNote10**
>
> كلاس أخرى ترث من `clsMobile`، ولذلك يجب أن تنفذ الدوال الثلاث المطلوبة.

الدوال المطلوبة هي:

`()Dial`

`()SendSMS`

`()TakePicture`

---

## 💻 مثال: `clsSamsungNote10`

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
class clsSamsungNote10 : public clsMobile
{
    //This class signed a contract with clsMobile abstract class
    //therefore it should implement everything in the abstract class

public:

    void Dial(string PhoneNumber)
    {
    }

    void SendSMS(string PhoneNumber, string Text)
    {
    }

    void TakePicture()
    {
    }
};
```

</div>

بعد تنفيذ الدوال الثلاث يمكن إنشاء:

`;clsSamsungNote10 Note10`

أما إذا كانت إحدى الدوال المطلوبة غير منفذة، فتبقى الكلاس `Abstract`.

---

## 📌 يجب أن يكون الـ Signature مطابقًا

عند تنفيذ الدوال المطلوبة، يجب أن يكون الـ `Signature` مطابقًا للدالة الموجودة في الـ `Abstract Class`.

مثل:

`Dial(string PhoneNumber)`

و:

`SendSMS(string PhoneNumber, string Text)`

و:

`()TakePicture`

إذا اختلفت الـ `Parameters`، فلن يكون التنفيذ مطابقًا للدالة المطلوبة.

---

## 📌 يمكن إضافة دوال أخرى

العقد لا يمنع الـ `Derived Class` من إضافة دوال أخرى.

في `clsiPhone` توجد:

`()MyOwnMethod`

وهذه الدالة ليست جزءًا من الدوال المطلوبة في `clsMobile`.

---

## 📌 Abstract Class وInterface وContract

في هذا الاستخدام:

`Abstract Class`

و:

`Interface`

و:

`Contract`

ترتبط بفكرة تحديد الدوال المطلوبة من الكلاسات التي ترث منها.

أما مبدأ `Abstraction` فهو مفهوم مختلف، لذلك لا يجب الخلط بينه وبين `Abstract Class`.

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---|---|
| Pure Virtual Function | دالة `virtual` بدون `Implementation` وتُكتب باستخدام `0 = ` |
| Abstract Class | كلاس تحتوي على `Pure Virtual Function` ولا يمكن إنشاء `Object` منها مباشرة |
| Interface | واجهة تحدد الدوال المطلوبة |
| Contract | الشروط التي يجب على الـ `Derived Class` الالتزام بها |
| Implementation | الكود الفعلي للدالة |
| Override | إعادة تعريف دالة موروثة في الـ `Derived Class` |
| Signature | اسم الدالة ومعاملاتها |

---

## ⚠️ ملاحظات

- `Pure Virtual Function` تُكتب باستخدام `0 =`.
- وجود `Pure Virtual Function` يجعل الكلاس `Abstract`.
- لا يمكن إنشاء `Object` من `Abstract Class`.
- يجب على الـ `Derived Class` تنفيذ جميع الدوال المطلوبة حتى تصبح قابلة لإنشاء `Object`.
- `clsMobile` تحتوي على `()Dial` و`()SendSMS` و`()TakePicture`.
- `clsiPhone` تنفذ الدوال الثلاث وتضيف `()MyOwnMethod`.
- `clsSamsungNote10` تنفذ الدوال الثلاث.
- يجب أن يتطابق الـ `Signature` عند تنفيذ الدوال المطلوبة.
- `Abstract Class` و`Interface` و`Contract` مرتبطة هنا بفكرة فرض الدوال المطلوبة.
- لا يجب الخلط بين `Abstract Class` ومبدأ `Abstraction`.

---

## 💡 الفكرة الأساسية

يمكن إنشاء `Abstract Class` تحدد عقدًا واضحًا.

في المثال:

`clsMobile`

تطلب:

`()Dial`

`()SendSMS`

`()TakePicture`

كل كلاس ترث منها يجب أن تنفذ هذه الدوال حتى يمكن إنشاء `Object` منها.

---

## 🔑 ملخص

- `Pure Virtual Function` هي `virtual function` بدون `Implementation` وتستخدم `0 =`.
- الكلاس التي تحتوي على `Pure Virtual Function` تصبح `Abstract Class`.
- لا يمكن إنشاء `Object` من `Abstract Class`.
- الـ `Derived Class` يجب أن تنفذ جميع الدوال المطلوبة.
- `Abstract Class` يمكن استخدامها كـ `Interface` أو `Contract`.
- يمكن للـ `Derived Class` إضافة دوال خاصة بها مثل `()MyOwnMethod`.
- يجب أن يتطابق الـ `Signature` عند تنفيذ الدوال المطلوبة.
- `Abstract Class` ليست هي نفسها مبدأ `Abstraction`.

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

We can create a `Class` that works like a contract. It defines the functions that classes inheriting from it must implement.

We do this using `Pure Virtual Functions`.

---

## 🧠 Quick Recap

We already learned about `Virtual Functions`.

A `virtual` function can be overridden in a `Derived Class`.

A `Pure Virtual Function` has no `Implementation` in the `Base Class`.

---

## 🎯 Definition: Pure Virtual Function

> **Pure Virtual Function**
>
> A `virtual` function with no `Implementation`. It is written using `= 0`.

The syntax used is:

```cpp
virtual void Dial(string PhoneNumber) = 0;
```

The `= 0` makes it a `Pure Virtual Function`.

---

## 🎯 Definition: Abstract Class

> **Abstract Class**
>
> A class with at least one `Pure Virtual Function`. We cannot create an `Object` from it directly.

When a class has a `Pure Virtual Function`, it becomes an `Abstract Class`.

So we cannot create a direct `Object` from it.

---

## 🎯 Definition: Interface / Contract

> **Interface / Contract**
>
> A set of functions that defines what the `Derived Class` must implement.

It can be treated like a contract with rules that must be followed.

The `Base Class` defines the required functions, and the `Derived Class` provides the `Implementation`.

---

## ⚙️ How Does It Work?

`clsMobile` has three `Pure Virtual Functions`:

`Dial()`

`SendSMS()`

`TakePicture()`

So `clsMobile` becomes an `Abstract Class`.

Any class that inherits from it must implement these functions before we can create an `Object` from it.

---

## 💻 Example: `clsMobile`

```cpp
//Abstract Class / Interface / Contract.
class clsMobile
{
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string PhoneNumber, string Text) = 0;
    virtual void TakePicture() = 0;
};
```

There is no `Implementation` for these functions inside `clsMobile`.

Only the required functions are defined.

---

## 📌 Why Can We Not Create an Object from `clsMobile`?

We cannot create an `Object` from `clsMobile` because it has `Pure Virtual Functions`.

It defines what must exist, but it does not provide the `Implementation` for these functions.

---

## 🎯 `clsiPhone` and the Contract

> **clsiPhone**
>
> A class that inherits from `clsMobile`, so it must implement the required functions in the contract.

When we write:

```cpp
class clsiPhone : public clsMobile
```

it must implement:

`Dial()`

`SendSMS()`

`TakePicture()`

---

## 💻 Example: `clsiPhone`

```cpp
class clsiPhone : public clsMobile
{
    //This class signed a contract with clsMobile abstract class
    //therefore it should implement everything in the abstract class

public:

    void Dial(string PhoneNumber)
    {
    }

    void SendSMS(string PhoneNumber, string Text)
    {
    }

    void TakePicture()
    {
    }

    void MyOwnMethod()
    {
    }
};
```

After implementing the three functions, we can create:

`clsiPhone iPhone1;`

The class can also add its own functions such as:

`MyOwnMethod()`

---

## ⚠️ What If It Does Not Implement All Functions?

If `clsiPhone` leaves one `Pure Virtual Function` without an `Override`, it remains an `Abstract Class`.

So we cannot create an `Object` from it.

All required functions in the contract must be implemented.

---

## 🎯 `clsSamsungNote10` and the Contract

> **clsSamsungNote10**
>
> Another class that inherits from `clsMobile`, so it must implement the three required functions.

The required functions are:

`Dial()`

`SendSMS()`

`TakePicture()`

---

## 💻 Example: `clsSamsungNote10`

```cpp
class clsSamsungNote10 : public clsMobile
{
    //This class signed a contract with clsMobile abstract class
    //therefore it should implement everything in the abstract class

public:

    void Dial(string PhoneNumber)
    {
    }

    void SendSMS(string PhoneNumber, string Text)
    {
    }

    void TakePicture()
    {
    }
};
```

After implementing all three functions, we can create:

`clsSamsungNote10 Note10;`

If one required function is not implemented, the class remains `Abstract`.

---

## 📌 The Signature Must Match

When we implement the required functions, the `Signature` must match the function in the `Abstract Class`.

For example:

`Dial(string PhoneNumber)`

`SendSMS(string PhoneNumber, string Text)`

`TakePicture()`

If the `Parameters` are different, the implementation does not match the required function.

---

## 📌 We Can Add Other Functions

The contract does not stop the `Derived Class` from adding other functions.

In `clsiPhone` we have:

`MyOwnMethod()`

This function is not part of the required functions in `clsMobile`.

---

## 📌 Abstract Class, Interface and Contract

In this use:

`Abstract Class`

`Interface`

and:

`Contract`

are connected to the idea of defining the required functions for the classes that inherit from them.

The OOP principle `Abstraction` is a different concept, so it should not be confused with `Abstract Class`.

---

## 📚 Terminology

| Term | Meaning |
|---|---|
| Pure Virtual Function | A `virtual` function with no `Implementation`, written using `= 0` |
| Abstract Class | A class with a `Pure Virtual Function`; no direct `Object` can be created from it |
| Interface | An interface that defines the required functions |
| Contract | The rules that the `Derived Class` must follow |
| Implementation | The actual code of a function |
| Override | Writing a new version of an inherited function in the `Derived Class` |
| Signature | The function name and its parameters |

---

## ⚠️ Notes

- A `Pure Virtual Function` uses `= 0`.
- A class with a `Pure Virtual Function` becomes `Abstract`.
- We cannot create an `Object` from an `Abstract Class`.
- The `Derived Class` must implement all required functions before we can create an `Object`.
- `clsMobile` has `Dial()`, `SendSMS()`, and `TakePicture()`.
- `clsiPhone` implements all three and adds `MyOwnMethod()`.
- `clsSamsungNote10` implements all three.
- The `Signature` must match when implementing the required functions.
- `Abstract Class`, `Interface`, and `Contract` are connected here to the idea of requiring specific functions.
- `Abstract Class` is not the same as the OOP principle of `Abstraction`.

---

## 💡 Key Idea

We can create an `Abstract Class` that defines a clear contract.

In the example:

`clsMobile`

requires:

`Dial()`

`SendSMS()`

`TakePicture()`

Every class that inherits from it must implement these functions before an `Object` can be created.

---

## 🔑 Summary

- A `Pure Virtual Function` is a `virtual function` with no `Implementation` and uses `= 0`.
- A class with a `Pure Virtual Function` becomes an `Abstract Class`.
- We cannot create an `Object` from an `Abstract Class`.
- A `Derived Class` must implement all required functions.
- An `Abstract Class` can be used as an `Interface` or `Contract`.
- A `Derived Class` can add its own functions such as `MyOwnMethod()`.
- The `Signature` must match when implementing the required functions.
- `Abstract Class` is not the same as the OOP principle of `Abstraction`.

</div>

---

*Anas Chetoui* - `@anaschetoui`
