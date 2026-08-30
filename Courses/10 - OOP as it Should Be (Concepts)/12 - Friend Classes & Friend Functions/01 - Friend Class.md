<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# Friend Classes

---

## 📝 مقدمة

في OOP، يمكن أن تكون أعضاء الكلاس `private` أو `protected` ولا يمكن الوصول إليها مباشرة من خارج الكلاس.

لكن يمكن لكلاس معيّنة أن تحصل على صلاحية خاصة للوصول إلى أعضاء كلاس أخرى باستخدام `Friend Class`.

---

## 🧠 مراجعة سريعة

لدينا ثلاثة مستويات أساسية للوصول:

- `private`
- `protected`
- `public`

عادةً لا يستطيع الكود الخارجي الوصول مباشرة إلى `private` و`protected`.

مع `Friend Class` يمكن منح كلاس محددة صلاحية الوصول إلى هذه الأعضاء.

---

## 🎯 تعريف: Friend Class

> **Friend Class**
>
> كلاس تحصل على صلاحية الوصول إلى أعضاء كلاس أخرى، بما فيها الأعضاء `private` و`protected`.

يتم ذلك من خلال كتابة:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
friend class clsB;
```

</div>

إذا كتبت هذه الجملة داخل `clsA`، فإن `clsB` تحصل على صلاحية الوصول إلى أعضاء `clsA`.

---

## ⚙️ كيف تعمل Friend Class؟

لدينا `clsA` تحتوي على:

`Var1_` وهي `private`.

`Var3_` وهي `protected`.

`Var2` وهي `public`.

ثم داخل `clsA` نكتب:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
friend class clsB;
```

</div>

هذا يمنح `clsB` صلاحية الوصول إلى أعضاء `clsA`.

---

## 💻 مثال: Friend Class

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

    //this will grant access for everything to class B
    friend class clsB;    //friend class
};

class clsB
{
public:
    void display(clsA A1)
    {
        cout << endl << "The value of Var1=" << A1._Var1;
        cout << endl << "The value of Var2=" << A1.Var2;
        cout << endl << "The value of Var3=" << A1._Var3;
    }
};

int main()
{
    clsA A1;
    clsB B1;

    B1.display(A1);

    system("pause>0");

    return 0;
}
```

</div>

---

## 📌 الوصول إلى `private`

في `clsA` لدينا:

`Var1_`

وهو `private`.

عادةً لا تستطيع `clsB` الوصول إليه مباشرة.

لكن بعد كتابة:

`;friend class clsB`

أصبحت `clsB` قادرة على الوصول إليه:

`A1._Var1`

---

## 📌 الوصول إلى `protected`

لدينا:

`Var3_`

وهو `protected`.

بعد منح `clsB` صفة `friend`، تستطيع `clsB` أيضًا الوصول إليه:

`A1._Var3`

---

## 📌 الوصول إلى `public`

لدينا:

`Var2`

وهو `public`.

ويمكن لـ `clsB` الوصول إليه أيضًا:

`A1.Var2`

إذن `clsB` تستطيع الوصول إلى الأعضاء الثلاثة الموجودة في `clsA`.

---

## 📌 ماذا تفعل `()display`؟

داخل `clsB` توجد:

`display(clsA A1)`

تستقبل `Object` من نوع `clsA`.

ثم تطبع القيم الموجودة في:

`Var1_`

`Var2`

`Var3_`

والسبب في إمكانية الوصول إلى `Var1_` و`Var3_` هو أن `clsB` أصبحت `Friend Class` لـ `clsA`.

---

## ⚙️ منح الصلاحية لكلاس محددة

الصلاحية لا تُعطى لكل الكلاسات.

عندما نكتب:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
friend class clsB;
```

</div>

فإن الصلاحية تُمنح لـ `clsB` تحديدًا.

أي كلاس أخرى لا تحصل تلقائيًا على هذه الصلاحية.

---

## 📌 Friend Class ليست Inheritance

`Friend Class` لا تعني أن `clsB` ترث من `clsA`.

العلاقة هنا هي منح صلاحية وصول، وليست `Inheritance`.

`clsB` تستطيع الوصول إلى أعضاء `clsA` بسبب:

`friend class clsB`

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---|---|
| Friend Class | كلاس تحصل على صلاحية الوصول إلى أعضاء كلاس أخرى |
| `friend` | كلمة تستخدم لمنح صلاحية خاصة للوصول |
| private | أعضاء خاصة بالكلاس |
| protected | أعضاء يمكن الوصول إليها داخل الكلاس والكلاسات الوارثة |
| public | أعضاء يمكن الوصول إليها من الخارج ومن داخل الكلاس |
| Access | الوصول إلى أعضاء الكلاس |

---

## ⚠️ ملاحظات

- `Friend Class` تسمح لكلاس محددة بالوصول إلى أعضاء كلاس أخرى.
- في المثال، `clsB` هي `Friend Class` لـ `clsA`.
- `clsB` تستطيع الوصول إلى `Var1_` رغم أنه `private`.
- `clsB` تستطيع الوصول إلى `Var3_` رغم أنه `protected`.
- `Var2` متاحة أصلًا لأنها `public`.
- يتم منح الصلاحية باستخدام: `;friend class clsB`
- `Friend Class` ليست `Inheritance`.

---

## 💡 الفكرة الأساسية

عادةً لا يمكن للكود الخارجي الوصول إلى `private` و`protected`.

لكن إذا منحت `clsA` الصلاحية إلى `clsB` باستخدام:

`;friend class clsB`

فإن `clsB` تستطيع الوصول إلى أعضاء `clsA` حتى لو كانت `private` أو `protected`.

---

## 🔑 ملخص

- `Friend Class` تمنح كلاس محددة صلاحية خاصة للوصول إلى أعضاء كلاس أخرى.
- يمكنها الوصول إلى `private` و`protected` و`public`.
- في المثال، `clsB` هي `friend` لـ `clsA`.
- لذلك تستطيع `clsB` الوصول إلى `Var1_` و`Var3_` و`Var2`.
- الصيغة هي: `;friend class clsB`
- `Friend Class` تمنح صلاحية وصول ولا تعني `Inheritance`.

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

In OOP, class members can be `private` or `protected`, so outside code cannot normally access them directly.

But one class can get special access to another class by using a `Friend Class`.

---

## 🧠 Quick Recap

We have three main access levels:

- `private`
- `protected`
- `public`

Normally, outside code cannot directly access `private` and `protected` members.

With a `Friend Class`, we can give one specific class access to them.

---

## 🎯 Definition: Friend Class

> **Friend Class**
>
> A class that gets access to the members of another class, including `private` and `protected` members.

We do this by writing:

```cpp
friend class clsB;
```

When this is written inside `clsA`, `clsB` gets access to the members of `clsA`.

---

## ⚙️ How Does Friend Class Work?

`clsA` has:

`_Var1` as `private`.

`_Var3` as `protected`.

`Var2` as `public`.

Then inside `clsA` we write:

```cpp
friend class clsB;
```

This gives `clsB` access to the members of `clsA`.

---

## 💻 Example: Friend Class

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

    //this will grant access for everything to class B
    friend class clsB;    //friend class
};

class clsB
{
public:
    void display(clsA A1)
    {
        cout << endl << "The value of Var1=" << A1._Var1;
        cout << endl << "The value of Var2=" << A1.Var2;
        cout << endl << "The value of Var3=" << A1._Var3;
    }
};

int main()
{
    clsA A1;
    clsB B1;

    B1.display(A1);

    system("pause>0");

    return 0;
}
```

---

## 📌 Access to `private`

In `clsA` we have:

`_Var1`

It is `private`.

Normally, `clsB` cannot access it directly.

But after:

`friend class clsB;`

`clsB` can access it:

`A1._Var1`

---

## 📌 Access to `protected`

We have:

`_Var3`

It is `protected`.

After making `clsB` a `friend`, `clsB` can also access it:

`A1._Var3`

---

## 📌 Access to `public`

We have:

`Var2`

It is `public`.

`clsB` can access it too:

`A1.Var2`

So `clsB` can access all three members of `clsA`.

---

## 📌 What Does `display()` Do?

Inside `clsB` we have:

`display(clsA A1)`

It receives an `Object` of type `clsA`.

Then it prints:

`_Var1`

`Var2`

`_Var3`

The reason `clsB` can access `_Var1` and `_Var3` is that it is a `Friend Class` of `clsA`.

---

## ⚙️ Giving Access to One Specific Class

The access is not given to every class.

When we write:

```cpp
friend class clsB;
```

the access is given specifically to `clsB`.

Other classes do not get this access automatically.

---

## 📌 Friend Class Is Not Inheritance

`Friend Class` does not mean that `clsB` inherits from `clsA`.

The relationship here is about access, not `Inheritance`.

`clsB` can access the members of `clsA` because of:

`friend class clsB`

---

## 📚 Terminology

| Term | Meaning |
|---|---|
| Friend Class | A class that gets special access to another class |
| `friend` | A keyword used to give special access |
| private | Members that are private to the class |
| protected | Members accessible inside the class and derived classes |
| public | Members accessible from outside and inside the class |
| Access | Using class members |

---

## ⚠️ Notes

- A `Friend Class` can access members of another class.
- In the example, `clsB` is a `Friend Class` of `clsA`.
- `clsB` can access `_Var1` even though it is `private`.
- `clsB` can access `_Var3` even though it is `protected`.
- `Var2` is already available because it is `public`.
- The access is given with: `friend class clsB;`
- `Friend Class` is not `Inheritance`.

---

## 💡 Key Idea

Normally, outside code cannot access `private` and `protected` members.

But if `clsA` gives access to `clsB` using:

`friend class clsB;`

then `clsB` can access the members of `clsA`, including `private` and `protected` members.

---

## 🔑 Summary

- A `Friend Class` gives one specific class special access to another class.
- It can access `private`, `protected`, and `public` members.
- In the example, `clsB` is a friend of `clsA`.
- So `clsB` can access `_Var1`, `_Var3`, and `Var2`.
- The syntax is: `friend class clsB;`
- `Friend Class` gives access; it does not mean `Inheritance`.

</div>

---

*Anas Chetoui* - `@anaschetoui`
