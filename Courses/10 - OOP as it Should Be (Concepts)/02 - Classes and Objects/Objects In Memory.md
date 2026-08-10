<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# الكائنات في الذاكرة

---

## 📝 مقدمة

في هذا الدرس، يتم شرح كيف تُخزَّن الكائنات في الذاكرة عند إنشاء أكثر من `Object` من نفس `Class`.

الفكرة الأساسية هي أن كل كائن يمتلك مساحة خاصة به في الذاكرة لتخزين البيانات الخاصة به، بينما دوال الأعضاء تكون مشتركة بين جميع الكائنات من الفئة نفسها.

---

## 🎯 تعريف: Object

> **Object (كائن)**
>
> نسخة من `Class` تُنشأ في الذاكرة.  
> لكل `Object` بياناته الخاصة، لكن دوال الأعضاء نفسها تكون مشتركة إذا كانت لا تعتمد على بيانات منفصلة لكل كائن.

---

## ⚙️ كيف يعمل ذلك

عندما نعرّف `Class`، فإنها تمثّل نوعًا يمكن إنشاء أكثر من كائن منه.  
كل `Object` جديد يحصل على مساحة مستقلة في الذاكرة من أجل `Data Members`.

أما `Member Functions` فلا تُنسخ مرة جديدة لكل كائن.  
بل تبقى نسخة واحدة منها مشتركة بين جميع الكائنات من نفس `Class`.

هذا يعني أن:

- البيانات تختلف من كائن إلى آخر.
- الدوال نفسها يمكن أن تُستعمل مع أكثر من كائن.
- الذاكرة لا تحتاج إلى تكرار الدوال لكل `Object`.

---

## 💻 مثال

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
public:
    string FirstName;
    string LastName;

    string FullName()
    {
        return FirstName + " " + LastName;
    }
};

int main()
{
    clsPerson Person1, Person2;

    Person1.FirstName = "Mohammed";
    Person1.LastName = "Abu-Hadhoud";

    Person2.FirstName = "Ali";
    Person2.LastName = "Maher";

    cout << "Person1: " << Person1.FullName() << endl;
    cout << "Person2: " << Person2.FullName() << endl;
}
```

</div>

في هذا المثال، لدى `Person1` و `Person2` بيانات مختلفة.  
`FirstName` و `LastName` محفوظتان بشكل منفصل لكل كائن.

لكن `FullName()` هي دالة عضو واحدة، ويمكن استعمالها مع أي كائن من `clsPerson`.

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---|---|
| Object | كائن يُنشأ من `Class` |
| Class | فئة أو صنف يُستخدم لإنشاء الكائنات |
| Data Member | متغيّر داخل الفئة يخزّن البيانات |
| Member Function | دالة عضو داخل الفئة |

---

## ⚠️ ملاحظات

- كل `Object` له مساحة خاصة به في الذاكرة من أجل البيانات.
- `Member Functions` تكون مشتركة بين جميع `Object`s من نفس الفئة.
- الاختلاف بين الكائنات يكون في البيانات، لا في الدوال نفسها.
- مثال `clsPerson` يوضح أن `Person1` و `Person2` يملكان بيانات مختلفة، لكنهما يستخدمان الدالة نفسها `FullName()`.

---

## 💡 الفكرة الأساسية

الفئة الواحدة يمكن أن تُنشئ عدة كائنات.  
كل كائن يحتفظ ببياناته الخاصة.  
أما دوال الأعضاء فتبقى مشتركة، لأن تكرارها لكل كائن سيكون غير ضروري ويستهلك الذاكرة بلا فائدة.

---

## 🔑 ملخص

- كل `Object` يمتلك بياناته الخاصة في الذاكرة.
- `Data Members` تختلف من كائن إلى آخر.
- `Member Functions` مشتركة بين جميع الكائنات من نفس `Class`.
- مثال `clsPerson` يبيّن أن `FullName()` دالة مشتركة، بينما الأسماء مخزنة بشكل منفصل لكل كائن.

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

This lesson explains how objects are stored in memory when we create more than one `Object` from the same `Class`.

The key idea is simple. Each object has its own space in memory for its data, while member functions are shared by all objects of the same class.

---

## 🎯 Definition: Object

> **Object**
>
> An instance created from a `Class`.  
> Each `Object` has its own data, but the same member functions can be shared when they do not store separate data for each object.

---

## ⚙️ How it works

When we define a `Class`, we define a type that can create many objects.  
Each new `Object` gets its own memory space for `Data Members`.

`Member Functions` are not copied again for every object.  
One copy is shared by all objects of the same `Class`.

This means:

- Data can be different from one object to another.
- The same function can work with more than one object.
- Memory does not need to store the function again for every `Object`.

---

## 💻 Example

```cpp
#include <iostream>
using namespace std;

class clsPerson
{
public:
    string FirstName;
    string LastName;

    string FullName()
    {
        return FirstName + " " + LastName;
    }
};

int main()
{
    clsPerson Person1, Person2;

    Person1.FirstName = "Mohammed";
    Person1.LastName = "Abu-Hadhoud";

    Person2.FirstName = "Ali";
    Person2.LastName = "Maher";

    cout << "Person1: " << Person1.FullName() << endl;
    cout << "Person2: " << Person2.FullName() << endl;
}
```

In this example, `Person1` and `Person2` have different data.  
`FirstName` and `LastName` are stored separately for each object.

`FullName()` is one member function, and we can use it with any object of `clsPerson`.

---

## 📚 Terminology

| Term | Meaning |
|---|---|
| Object | An instance created from a `Class` |
| Class | A type used to create objects |
| Data Member | A variable inside the class that stores data |
| Member Function | A function inside the class |

---

## ⚠️ Notes

- Each `Object` has its own space in memory for data.
- `Member Functions` are shared by all `Object`s of the same class.
- The difference between objects is in the data, not in the function itself.
- The `clsPerson` example shows that `Person1` and `Person2` have different data, but they use the same `FullName()` function.

---

## 💡 Key Idea

One class can create many objects.  
Each object keeps its own data.  
Member functions stay shared, because repeating them for every object would waste memory.

---

## 🔑 Summary

- Each `Object` has its own data in memory.
- `Data Members` can be different from one object to another.
- `Member Functions` are shared by all objects of the same `Class`.
- The `clsPerson` example shows that `FullName()` is shared, while the names are stored separately for each object.

</div>

---

*Anas Chetoui* - `@anaschetoui`
