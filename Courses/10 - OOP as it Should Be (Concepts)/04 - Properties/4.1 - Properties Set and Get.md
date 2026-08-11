<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# Properties: Set and Get

---

## 📝 مقدمة

في البرمجة كائنية التوجه، من الأفضل عدم تعديل المتغيّرات `public` داخل الـ `Class` بشكل مباشر.

بدلًا من ذلك، نضع البيانات في متغيّرات `private`، ثم نستخدم دوالًا للوصول إليها وتعديلها. تُسمى هذه الدوال `Properties`، وتتكوّن من دالة `Set` لتغيير القيمة ودالة `Get` لإرجاع القيمة.

---

## 🎯 تعريف: Properties

> **Properties (الخصائص)**
>
> طريقة للتعامل مع المتغيّرات `private` من خارج الـ `Class` من خلال دوال مخصصة.
>
> تتكوّن الخاصية في هذا الدرس من دالتين:
> `Set` لتعديل القيمة، و `Get` لإرجاع القيمة.

---

## ⚙️ كيف تعمل Properties

عندما نحتاج إلى تخزين قيمة مثل `FirstName`، لا يتم تعديل المتغيّر مباشرة من خارج الـ `Class`.

بدلًا من ذلك:

1. يكون المتغيّر `private` داخل الـ `Class`.
2. تُستخدم دالة `Set` لإعطائه قيمة جديدة.
3. تُستخدم دالة `Get` للحصول على قيمته.
4. تبقى عملية الوصول إلى المتغيّر تحت تحكم الـ `Class`.

مثلًا، يتم استخدام أسماء مثل `setFirstName` و `getFirstName` للتعامل مع `FirstName`.

---

## 📌 المتغيّرات `private`

من الأفضل عدم استخدام `public variables` داخل الـ `Class` عند بناء الكود بهذه الطريقة.

يمكن تعريف البيانات كأعضاء `private`. ومن العادات التي تُستخدم لتسهيل قراءة الكود وضع `_` في بداية اسم المتغيّر الخاص، مثل `_firstName` و `_lastName`.

استخدام `_` هنا ليس جزءًا من صياغة C++. إنها عادة تسمية تساعد على تمييز المتغيّرات `private` بسرعة.

---

## 📌 دالة `Set`

تُستخدم دالة `Set` لتغيير قيمة المتغيّر `private`.

تستقبل الدالة قيمة جديدة، ثم تُخزّنها في المتغيّر الموجود داخل الـ `Class`.

مثلًا، عند استدعاء `setFirstName` بقيمة جديدة، تنتقل هذه القيمة إلى المتغيّر الخاص بـ `FirstName`.

---

## 📌 دالة `Get`

تُستخدم دالة `Get` للحصول على قيمة المتغيّر `private`.

تُرجع الدالة القيمة الموجودة داخل المتغيّر، وبعد ذلك يمكن استخدام القيمة خارج الـ `Class`.

بهذه الطريقة، لا يتم الوصول إلى المتغيّر `private` مباشرة من الخارج.

---

## 💡 لماذا نستخدم Properties؟

استخدام `Set` و `Get` لا يقتصر على منع التعديل المباشر. فهو يسمح بوضع منطق إضافي داخل الدالة نفسها.

من الأمثلة التي يمكن تطبيقها مستقبلًا `Audit Trail`، حيث يمكن حفظ القيمة القديمة قبل تغييرها. فإذا كانت القيمة `Mohammed` ثم أصبحت `Ali`، يمكن تسجيل أن القيمة تغيّرت من `Mohammed` إلى `Ali`.

إذا كان المتغيّر `public` ويتم تعديله مباشرة، فلن تكون هناك نقطة واحدة نضع فيها هذا النوع من المعالجة.

---

## 📌 التحكم في الوصول

عند جعل البيانات `private`، لا يستطيع الكود الموجود خارج الـ `Class` تعديلها مباشرة.

بدلًا من ذلك، يجب أن يتم التعديل من خلال دالة `Set`، والحصول على القيمة من خلال دالة `Get`.

هذا يعطي الـ `Class` تحكمًا أكبر في طريقة التعامل مع بياناتها.

---

## 📌 إبقاء الدوال داخل الـ Class

عند استخدام هذا الأسلوب في البرمجة كائنية التوجه، يكون التعامل مع البيانات من خلال الـ `Class` والـ `Object` بدل كتابة منطق التعامل معها بشكل منفصل خارج الـ `Class`.

وجود منطق التعامل داخل الـ `Class` يجعل استخدام الفئة نفسها ممكنًا في أكثر من نوع من التطبيقات، مثل تطبيقات سطح المكتب وتطبيقات الويب، دون الحاجة إلى إعادة كتابة المنطق نفسه في كل مكان.

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---|---|
| Property | خاصية تُستخدم للوصول إلى بيانات `private` وتعديلها من خلال دوال |
| Set | دالة تُستخدم لتغيير قيمة عضو `private` |
| Get | دالة تُستخدم لإرجاع قيمة عضو `private` |
| private | محدد وصول يسمح بالوصول من داخل الـ `Class` |
| Audit Trail | سجل يتتبع تغييرات القيم |

---

## ⚠️ ملاحظات

- لا يتم تعديل المتغيّرات `private` مباشرة من خارج الـ `Class`.
- `Set` تُستخدم لتعديل القيمة.
- `Get` تُستخدم لإرجاع القيمة.
- يمكن وضع منطق إضافي داخل `Set`، مثل تسجيل القيمة القديمة قبل تغييرها.
- استخدام `_` في بداية اسم المتغيّر `private` عادة تسمية، وليس قاعدة في لغة C++.
- لا يعني استخدام `Get` أن المتغيّر أصبح `public`. المتغيّر يبقى `private`.
- يمكن أن تحتوي الـ `Class` على `public methods` دون أن تحتوي على `public variables`.
- يمكن استخدام Properties للتحكم في الوصول وتقليل الأخطاء وتجنب التعديل غير المطلوب على البيانات.
- يوجد مفهوم `Read Only Property` لبيانات مثل `ID` عندما نريد السماح بقراءة القيمة دون السماح بتعديلها من خلال الـ `Object`. تفاصيل تطبيقها ليست ضمن هذا الدرس.

---

## 🔑 ملخص

- الـ `Property` في هذا الدرس تعتمد على دالتين: `Set` و `Get`.
- `Set` تغيّر قيمة العضو `private`.
- `Get` تُرجع قيمة العضو `private`.
- من الأفضل جعل البيانات `private` بدل جعلها `public` وتعديلها مباشرة.
- يمكن استخدام `_` في بداية أسماء المتغيّرات `private` كعادة تسمية.
- استخدام `Set` و `Get` يعطي تحكمًا أكبر في الوصول إلى البيانات.
- يمكن إضافة منطق داخل `Set`، مثل تسجيل التغييرات باستخدام `Audit Trail`.

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

In Object-Oriented Programming, it is better not to change `public` variables inside a `Class` directly.

Instead, we keep the data in `private` variables and use functions to access and change it. These functions are called `Properties` in this lesson. They use a `Set` function to change the value and a `Get` function to return the value.

---

## 🎯 Definition: Properties

> **Properties**
>
> A way to work with `private` variables from outside the `Class` through special functions.
>
> In this lesson, a property has two functions:
> `Set` changes the value, and `Get` returns the value.

---

## ⚙️ How Properties Work

When we need to store a value such as `FirstName`, we do not change the variable directly from outside the `Class`.

Instead:

1. The variable is `private` inside the `Class`.
2. A `Set` function gives it a new value.
3. A `Get` function returns its value.
4. The `Class` keeps control over access to the variable.

For example, names such as `setFirstName` and `getFirstName` can be used to work with `FirstName`.

---

## 📌 `private` Variables

It is better not to use `public variables` inside the `Class` when using this approach.

The data can be defined as `private` members. A common naming habit is to put `_` at the start of a private variable name, such as `_firstName` and `_lastName`.

Using `_` here is not C++ syntax. It is a naming habit that helps us quickly identify `private` variables.

---

## 📌 The `Set` Function

A `Set` function is used to change the value of a `private` variable.

The function receives a new value and stores it in the variable inside the `Class`.

For example, when `setFirstName` is called with a new value, that value is stored in the private variable for `FirstName`.

---

## 📌 The `Get` Function

A `Get` function is used to get the value of a `private` variable.

The function returns the value stored in the variable. The value can then be used outside the `Class`.

This means that the `private` variable is not accessed directly from outside.

---

## 💡 Why Use Properties?

Using `Set` and `Get` is not only about stopping direct changes. It also lets us put extra logic inside the function.

One example that can be used later is an `Audit Trail`. We can save the old value before changing it. If a value was `Mohammed` and then became `Ali`, we can record that it changed from `Mohammed` to `Ali`.

If the variable is `public` and is changed directly, there is no single function where we can place this type of processing.

---

## 📌 Access Control

When data is `private`, code outside the `Class` cannot change it directly.

Instead, the change must be made through a `Set` function, and the value must be read through a `Get` function.

This gives the `Class` more control over how its data is used.

---

## 📌 Keeping Functions Inside the Class

With this Object-Oriented approach, data is handled through the `Class` and its `Object`, instead of writing the handling logic separately outside the `Class`.

Keeping the logic inside the `Class` makes it possible to use the same class in different types of applications, such as desktop and web applications, without rewriting the same logic in each place.

---

## 📚 Terminology

| Term | Meaning |
|---|---|
| Property | A way to access and change `private` data through functions |
| Set | A function used to change a `private` member value |
| Get | A function used to return a `private` member value |
| Audit Trail | A record that tracks changes to values |

---

## ⚠️ Notes

- `private` variables are not changed directly from outside the `Class`.
- `Set` is used to change the value.
- `Get` is used to return the value.
- Extra logic can be placed inside `Set`, such as saving the old value before changing it.
- Using `_` at the start of a `private` variable name is a naming habit, not a C++ rule.
- Using `Get` does not make the variable `public`. The variable stays `private`.
- A `Class` can have `public methods` without having `public variables`.
- `Set` and `Get` can give more control over access, reduce errors, and stop unwanted changes to data.
- There is a concept called a `Read Only Property` for data such as an `ID` when we want to allow reading but not changing it through the `Object`. Its implementation is not covered here.

---

## 🔑 Summary

- A `Property` in this lesson uses two functions: `Set` and `Get`.
- `Set` changes the value of a `private` member.
- `Get` returns the value of a `private` member.
- It is better to keep data `private` instead of making it `public` and changing it directly.
- `_` can be used at the start of `private` variable names as a naming habit.
- `Set` and `Get` give more control over access to data.
- Logic can be added inside `Set`, such as tracking changes with an `Audit Trail`.

</div>

---

*Anas Chetoui* - `@anaschetoui`
