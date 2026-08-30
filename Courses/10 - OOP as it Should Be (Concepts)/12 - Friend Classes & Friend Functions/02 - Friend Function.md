<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# Friend Functions

---

## 📝 مقدمة

`Friend Function` هي دالة عادية يمكنها الوصول إلى أعضاء كلاس محددة حتى لو كانت `private` أو `protected`.

الفرق عن `Friend Class` هو أن الصلاحية هنا تُمنح إلى دالة واحدة، وليس إلى كلاس كاملة.

---

## 🧠 مراجعة سريعة

لدينا `clsA` تحتوي على:

- `Var1_` وهي `private`.
- `Var3_` وهي `protected`.
- `Var2` وهي `public`.

عادةً لا تستطيع دالة عادية خارج `clsA` الوصول إلى `Var1_` و`Var3_`.

---

## 🎯 تعريف: Friend Function

> **Friend Function**
>
> دالة ليست `Member` من الكلاس، لكنها تحصل على صلاحية الوصول إلى أعضاء الكلاس عند تعريفها كـ `friend` داخل الكلاس.

في المثال:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
friend int MySum(clsA A1);
```

</div>

هذا يجعل `()MySum` دالة `Friend Function` لـ `clsA`.

---

## ⚙️ كيف تعمل Friend Function؟

لدينا دالة عادية خارج `clsA`:

`MySum(clsA A1)`

هذه الدالة ليست `Member` من `clsA`.

لكن داخل `clsA` كتبنا:

`;friend int MySum(clsA A1)`

وبذلك أصبحت `()MySum` قادرة على الوصول إلى أعضاء `clsA` التي لا يمكنها الوصول إليها كدالة عادية خارج الكلاس.

---

## 💻 مثال: Friend Function

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include<iostream>

using namespace std;

class clsA
{
private:
    int _Var1;

protected:
    int _Var3;

public:
    int Var2;

    clsA()
    {
        _Var1 = 10;
        Var2 = 20;
        _Var3 = 30;
    }

    friend int MySum(clsA A1);    //friend function
};

//this function is normal function and not a member of any class
int MySum(clsA A1)
{
    return A1._Var1 + A1.Var2 + A1._Var3;
}

//int Fun2(clsA A1)
//{
//    return A1._Var1 + A1.Var2 + A1._Var3;
//}

int main()
{
    clsA A1;

    cout << MySum(A1);

    system("pause>0");

    return 0;
}
```

</div>

---

## 📌 الوصول إلى `private` و`protected`

الدالة `()MySum` تستخدم:

`A1._Var1`

و:

`A1._Var3`

بالرغم من أن `Var1_` هي `private` و`Var3_` هي `protected`.

هذا ممكن لأن `()MySum` تم تعريفها كـ `Friend Function` داخل `clsA`.

---

## 📌 الوصول إلى `public`

الدالة `()MySum` تصل أيضًا إلى:

`A1.Var2`

وهو عضو `public`.

إذن `()MySum` تستطيع الوصول إلى الأعضاء الثلاثة:

`Var1_`

`Var2`

`Var3_`

---

## ⚙️ ما الفرق بين Friend Function والدالة العادية؟

الدالة العادية الخارجية، مثل `()Fun2` الموجودة في الكود بشكل معلّق، لا تحصل على صلاحية خاصة للوصول إلى أعضاء `clsA`.

لذلك لا تستطيع استخدام:

`A1._Var1`

أو:

`A1._Var3`

أما `()MySum` فقد حصلت على هذه الصلاحية لأنها `friend`.

---

## 📌 Friend Function ليست Member Function

رغم أن `()MySum` تم الإعلان عنها داخل `clsA` باستخدام:

`friend`

فهي ليست `Member Function` من `clsA`.

تم تعريفها خارج الكلاس:

`int MySum(clsA A1)`

ولهذا يمكن استدعاؤها مباشرةً:

`MySum(A1)`

وليس باستدعاء من نوع:

`()A1.MySum`

---

## 📌 يمكنها استخدام خصائص الدوال العادية

`Friend Function` تبقى دالة عادية.

يمكن أن ترجع قيمة، كما في:

`(...)int MySum`

ويمكنها استقبال `Parameters`.

الفكرة الخاصة بها هي صلاحية الوصول إلى أعضاء الكلاس، وليس تغيير طبيعة الدالة كدالة عادية.

---

## 📌 أكثر من Friend Function

يمكن أن توجد أكثر من `Friend Function` للكلاس.

الفكرة هي أن كل دالة يتم تعريفها كـ `friend` تحصل على الصلاحية التي منحتها لها الكلاس.

---

## 💻 النتيجة

في `()main`:

`;clsA A1`

ثم:

`;cout << MySum(A1)`

القيم التي تم وضعها في `clsA` هي:

`Var1 = 10_`

`Var2 = 20`

`Var3 = 30_`

لذلك ترجع `()MySum`:

`60`

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---|---|
| Friend Function | دالة عادية تحصل على صلاحية الوصول إلى أعضاء كلاس محددة |
| Friend | كلمة تمنح صلاحية خاصة للوصول |

---

## ⚠️ ملاحظات

- `Friend Function` ليست `Member Function`.
- يتم إعلانها باستخدام `friend` داخل الكلاس.
- يمكنها الوصول إلى `private`.
- يمكنها الوصول إلى `protected`.
- يمكنها الوصول إلى `public`.
- في المثال، `()MySum` هي `Friend Function` لـ `clsA`.
- `()MySum` تم تعريفها خارج `clsA`.
- يتم استدعاؤها مباشرة باستخدام:
  `MySum(A1)`.
- الدالة العادية التي لا تكون `friend` لا تحصل على هذه الصلاحية.

---

## 💡 الفكرة الأساسية

عادةً لا تستطيع الدالة الخارجية الوصول إلى `private` و`protected`.

لكن `clsA` تستطيع منح دالة محددة هذه الصلاحية باستخدام:

`;friend int MySum(clsA A1)`

بعد ذلك تستطيع `()MySum` الوصول إلى أعضاء `clsA` حتى لو كانت `private` أو `protected`.

---

## 🔑 ملخص

- `Friend Function` هي دالة عادية خارج الكلاس.
- يمكن للكلاس منحها صلاحية خاصة باستخدام `friend`.
- تستطيع الوصول إلى `private` و`protected` و`public`.
- في المثال، `()MySum` تصل إلى `Var1_` و`Var2` و`Var3_`.
- `()MySum` ليست `Member Function`.
- يمكن استدعاؤها مباشرةً باستخدام `MySum(A1)`.
- الفرق الأساسي عن `Friend Class` هو أن الصلاحية هنا تُمنح إلى دالة محددة فقط.

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

A `Friend Function` is a normal function that can access members of a specific class, even when they are `private` or `protected`.

The difference from a `Friend Class` is that the access is given to one function, not to a whole class.

---

## 🧠 Quick Recap

`clsA` has:

- `_Var1` as `private`.
- `_Var3` as `protected`.
- `Var2` as `public`.

Normally, a normal function outside `clsA` cannot access `_Var1` and `_Var3`.

---

## 🎯 Definition: Friend Function

> **Friend Function**
>
> A function that is not a `Member` of the class, but gets access to the class members when it is declared as a `friend`.

In the example:

```cpp
friend int MySum(clsA A1);
```

This makes `MySum()` a `Friend Function` of `clsA`.

---

## ⚙️ How Does a Friend Function Work?

We have a normal function outside `clsA`:

`MySum(clsA A1)`

This function is not a `Member` of `clsA`.

But inside `clsA` we write:

`friend int MySum(clsA A1);`

Now `MySum()` can access members of `clsA` that a normal outside function cannot access.

---

## 💻 Example: Friend Function

```cpp
//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include<iostream>

using namespace std;

class clsA
{
private:
    int _Var1;

protected:
    int _Var3;

public:
    int Var2;

    clsA()
    {
        _Var1 = 10;
        Var2 = 20;
        _Var3 = 30;
    }

    friend int MySum(clsA A1);    //friend function
};

//this function is normal function and not a member of any class
int MySum(clsA A1)
{
    return A1._Var1 + A1.Var2 + A1._Var3;
}

//int Fun2(clsA A1)
//{
//    return A1._Var1 + A1.Var2 + A1._Var3;
//}

int main()
{
    clsA A1;

    cout << MySum(A1);

    system("pause>0");

    return 0;
}
```

---

## 📌 Access to `private` and `protected`

`MySum()` uses:

`A1._Var1`

and:

`A1._Var3`

although `_Var1` is `private` and `_Var3` is `protected`.

This works because `MySum()` is declared as a `Friend Function` inside `clsA`.

---

## 📌 Access to `public`

`MySum()` also accesses:

`A1.Var2`

which is `public`.

So `MySum()` can access all three members:

`_Var1`

`Var2`

`_Var3`

---

## ⚙️ Friend Function vs Normal Function

A normal outside function, such as the commented `Fun2()` in the code, does not get special access to `clsA`.

So it cannot use:

`A1._Var1`

or:

`A1._Var3`

But `MySum()` has this access because it is a `friend`.

---

## 📌 A Friend Function Is Not a Member Function

Although `MySum()` is declared inside `clsA` using:

`friend`

it is not a `Member Function` of `clsA`.

It is defined outside the class:

`int MySum(clsA A1)`

So it can be called directly:

`MySum(A1)`

not as:

`A1.MySum()`

---

## 📌 It Still Works Like a Normal Function

A `Friend Function` is still a normal function.

It can return a value, as in:

`int MySum(...)`

and it can receive `Parameters`.

The special part is its access to the class members.

---

## 📌 More Than One Friend Function

A class can have more than one `Friend Function`.

Each function declared as a `friend` gets the special access given by the class.

---

## 💻 Result

In `main()`:

`clsA A1;`

Then:

`cout << MySum(A1);`

The values set in `clsA` are:

`_Var1 = 10`

`Var2 = 20`

`_Var3 = 30`

So `MySum()` returns:

`60`

---

## 📚 Terminology

| Term | Meaning |
|---|---|
| Friend Function | A normal function with special access to a class |
| Friend | A keyword that gives special access |


---

## ⚠️ Notes

- A `Friend Function` is not a `Member Function`.
- It is declared using `friend` inside the class.
- It can access `private` members.
- It can access `protected` members.
- It can access `public` members.
- In the example, `MySum()` is a `Friend Function` of `clsA`.
- `MySum()` is defined outside `clsA`.
- It is called directly with:
  `MySum(A1)`.
- A normal function that is not a `friend` does not have this special access.

---

## 💡 Key Idea

Normally, an outside function cannot access `private` and `protected` members.

But `clsA` can give one specific function this access with:

`friend int MySum(clsA A1);`

After that, `MySum()` can access members of `clsA`, even when they are `private` or `protected`.

---

## 🔑 Summary

- A `Friend Function` is a normal function outside the class.
- The class can give it special access using `friend`.
- It can access `private`, `protected`, and `public` members.
- In the example, `MySum()` accesses `_Var1`, `Var2`, and `_Var3`.
- `MySum()` is not a `Member Function`.
- It can be called directly with `MySum(A1)`.
- The main difference from `Friend Class` is that the access is given to one specific function.

</div>

---

*Anas Chetoui* - `@anaschetoui`
