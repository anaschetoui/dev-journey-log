<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# Read Only Property

---

## 📝 مقدمة

بعد استخدام `Properties` مع `Set` و`Get`، نحتاج أحيانًا إلى منع تعديل بعض البيانات نهائيًا.

مثال ذلك `ID`. يمكن السماح بقراءة الـ `ID`، لكن لا نسمح بتغييره من خلال الـ `Object`.

---

## 🧠 مراجعة سريعة

الـ `Property` يمكن أن تحتوي على دالتين:

- `Set` لتغيير القيمة.
- `Get` للحصول على القيمة.

وعند وجود الدالتين معًا، يمكن قراءة القيمة وتعديلها.

---

## 🎯 تعريف: Read Only Property

> **Read Only Property**
>
> خاصية يمكن قراءة قيمتها، لكن لا يمكن تعديلها من خلال الـ `Object`.
>
> يتم ذلك بجعلها تحتوي على `Get` فقط، من دون `Set`.

---

## ⚙️ كيف تعمل Read Only Property

لنفترض أن لدينا `ID` داخل `Class`:

- يكون `ID_` متغيّرًا `private`.
- يمكن أن تأخذ قيمة ابتدائية مثل `10`.
- نستخدم `Get` لإرجاع قيمة `ID_`.
- لا نضع `Set` للـ `ID`.

بهذه الطريقة، يستطيع الـ `Developer` الذي يستخدم الـ `Class` الحصول على قيمة `ID`، لكنه لا يجد `SetID` لاستدعائها وتغيير القيمة.

---

## 📌 أنواع الـ Properties

| النوع | Set | Get | النتيجة |
|---|---|---|---|
| Read Only | ❌ | ✅ | يمكن القراءة فقط |
| Write Only | ✅ | ❌ | يمكن التعديل فقط |
| Read and Write | ✅ | ✅ | يمكن القراءة والتعديل |

الـ `Write Only` ليست كثيرة الاستخدام، بينما `Read Only` مهمة عندما توجد بيانات لا نريد السماح بتعديلها من الخارج.

---

## 📌 مثال `ID`

يمكن أن يكون لدى `Person` متغيّر `private` اسمه `ID_`.

تُعطى قيمة `ID` من قيمة ابتدائية أو من مصدر مثل ملف أو قاعدة بيانات، ثم تبقى هذه القيمة غير قابلة للتعديل من الخارج.

يمكن للمستخدم الوصول إلى `ID` عن طريق `Get` فقط.

أما `FirstName` و`LastName`، فيمكن أن تكون لهما `Set` و`Get` إذا أردنا السماح بالقراءة والتعديل.

---

## ⚙️ نطاق متغيّرات الـ Class

المتغيّرات التي تُعرّف على مستوى الـ `Class` يمكن الوصول إليها مباشرة من الدوال الأعضاء الموجودة داخل الـ `Class`.

لذلك يمكن لـ `Get` استخدام `FirstName_` أو `ID_` دون تمريرها كـ parameters، لأنها أعضاء في نفس الـ `Class`.

لكن الكود الموجود خارج الـ `Class` لا يصل إليها مباشرة عندما تكون `private`.

---

## 📌 الفائدة من Read Only Property

استخدام `Read Only Property` يعطي تحكمًا أكبر في البيانات.

يمكن منع الـ `Developer` الذي يستخدم الـ `Class` من تعديل قيم لا يجب تعديلها، مع السماح له بقراءة هذه القيم عند الحاجة.

هذا يزيد التحكم في الكود ويقلل الأخطاء الناتجة عن التعديل غير المطلوب.

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---|---|
| Property | طريقة للوصول إلى بيانات الـ `Class` من خلال `Set` و`Get` |
| Read Only Property | خاصية يمكن قراءتها ولا يمكن تعديلها من خلال الـ `Object` |
| Write Only Property | خاصية يمكن تعديلها دون إرجاع قيمتها من خلال `Get` |
| Read and Write Property | خاصية يمكن قراءتها وتعديلها |
| Get | دالة تُرجع قيمة عضو |
| Set | دالة تغيّر قيمة عضو |

---

## ⚠️ ملاحظات

- وجود `Get` فقط يجعل الـ `Property` `Read Only`.
- وجود `Set` فقط يجعلها `Write Only`.
- وجود `Set` و`Get` يجعلها `Read and Write`.
- يمكن الاحتفاظ بالبيانات في متغيّرات `private`.
- لا يستطيع الكود الخارجي الوصول مباشرة إلى عضو `private`.
- في حالة `ID`، يمكن السماح بالقراءة دون السماح بالتعديل.
- `Write Only` ليست كثيرة الاستخدام مقارنةً بـ `Read Only`.

---

## 💡 الفكرة الأساسية

اختيار وجود `Set` و`Get` يحدد طريقة استخدام الـ `Property`:

- `Get` فقط → `Read Only`.
- `Set` فقط → `Write Only`.
- `Set` + `Get` → `Read and Write`.

لذلك، إذا كانت قيمة مثل `ID` يجب أن تُقرأ فقط، نستخدم `Get` ولا نضع `Set`.

---

## 🔑 ملخص

- `Read Only Property` تسمح بقراءة القيمة فقط.
- نحقق ذلك باستخدام `Get` دون `Set`.
- `ID` مثال مناسب لبيانات قد لا نريد السماح بتعديلها من الخارج.
- `Set` + `Get` تسمحان بالقراءة والتعديل.
- `Set` فقط تعني `Write Only`.
- اختيار `Get` و`Set` يعطي تحكمًا أكبر في البيانات ويقلل التعديل غير المطلوب.

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

After using `Properties` with `Set` and `Get`, we sometimes need to stop some data from being changed.

For example, an `ID` can be readable, but we may not allow the user to change it through the `Object`.

---

## 🧠 Quick Recap

A `Property` can have two functions:

- `Set` changes the value.
- `Get` returns the value.

When both functions exist, the value can be read and changed.

---

## 🎯 Definition: Read Only Property

> **Read Only Property**
>
> A property whose value can be read, but cannot be changed through the `Object`.
>
> We do this by giving it a `Get` function only, without a `Set` function.

---

## ⚙️ How a Read Only Property Works

Suppose we have an `ID` inside a `Class`:

- `_ID` is a `private` variable.
- It can have an initial value such as `10`.
- We use `Get` to return `_ID`.
- We do not add a `Set` for `ID`.

This means the `Developer` using the `Class` can get the `ID`, but there is no `SetID` function to call and change it.

---

## 📌 Types of Properties

| Type | Set | Get | Result |
|---|---|---|---|
| Read Only | ❌ | ✅ | Read only |
| Write Only | ✅ | ❌ | Change only |
| Read and Write | ✅ | ✅ | Read and change |

`Write Only` is not commonly used, while `Read Only` is useful when we do not want outside code to change a value.

---

## 📌 The `ID` Example

A `Person` can have a `private` variable called `_ID`.

The `ID` can get its value from an initial value or from a source such as a file or database. Then the value cannot be changed from outside.

The user can get the `ID` through `Get` only.

`FirstName` and `LastName` can have both `Set` and `Get` when we want to allow reading and changing them.

---

## ⚙️ Class Member Scope

Variables defined at the `Class` level can be accessed directly by member functions inside the same `Class`.

So a `Get` function can use `_FirstName` or `_ID` without receiving them as parameters because they are members of the same `Class`.

Code outside the `Class` cannot access them directly when they are `private`.

---

## 📌 Why Use a Read Only Property?

A `Read Only Property` gives us more control over data.

We can stop the `Developer` using the `Class` from changing values that should not be changed, while still allowing the value to be read when needed.

This gives more control over the code and reduces unwanted changes.

---

## 📚 Terminology

| Term | Meaning |
|---|---|
| Property | A way to access class data through `Set` and `Get` |
| Read Only Property | A property that can be read but not changed through the `Object` |
| Write Only Property | A property that can be changed without a `Get` |
| Read and Write Property | A property that can be read and changed |
| Get | A function that returns a member value |
| Set | A function that changes a member value |

---

## ⚠️ Notes

- `Get` only makes a `Property` `Read Only`.
- `Set` only makes it `Write Only`.
- `Set` and `Get` together make it `Read and Write`.
- The data can stay in `private` variables.
- Outside code cannot directly access a `private` member.
- With an `ID`, we can allow reading without allowing changes.
- `Write Only` is not commonly used compared with `Read Only`.

---

## 💡 Key Idea

The presence of `Set` and `Get` decides how a `Property` can be used:

- `Get` only → `Read Only`.
- `Set` only → `Write Only`.
- `Set` + `Get` → `Read and Write`.

So, when a value such as `ID` should only be read, we use `Get` and do not add `Set`.

---

## 🔑 Summary

- A `Read Only Property` allows reading only.
- We make it `Read Only` by using `Get` without `Set`.
- `ID` is an example of data that may not be changed from outside.
- `Set` + `Get` allow reading and changing.
- `Set` only means `Write Only`.
- Choosing `Get` and `Set` gives more control over data and reduces unwanted changes.

</div>

---

*Anas Chetoui* - `@anaschetoui`
