<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# الأصناف (Classes) والكائنات (Objects)

---

## 📝 مقدمة

في الدرس السابق، تم التعرّف على أهمية **Object-Oriented Programming**، وكيف أنها تجعل المبرمج ينظر إلى البرنامج من الأعلى إلى الأسفل، من خلال التفكير بالأشياء (Objects) بدلًا من التفكير المباشر بالدوال. في هذا الدرس، سيتم التعمّق أكثر في مفهومي **Class** و**Object**، ومعرفة من أين جاءت تسمية "Class"، والفرق بينها وبين الـ **Structure**.

---

## 🧠 مراجعة سريعة: التفكير بالأشياء

في المثال السابق عن نظام الجامعة، تم تحديد الأشياء (Objects) الموجودة في النظام، مثل: **Student**، **Course**، **Doctor**، **Employee**، **Major**. وبنفس الطريقة، لو كان البرنامج عبارة عن نظام مستشفى، فإن الأشياء ستكون: **Doctor**، **Patient**، **Clinic**، **Pharmacy**، **Department**. فلكل نظام أشياؤه الخاصة التي يتعامل معها.

بدلًا من ترك آلاف الدوال (Functions) غير منظمة كما في البرمجة الوظيفية، يتم توزيع كل الدوال والمتغيرات المرتبطة بشيء معيّن تحت مظلته:

- كل ما له علاقة بـ **Student** يوضع تحت مظلة Student.
- كل ما له علاقة بـ **Doctor** يوضع تحت مظلة Doctor.
- كل ما له علاقة بـ **Course** يوضع تحت مظلة Course.
- وهكذا مع Employee وMajor وCollege.

فلا يُعقل أن توجد دالة خاصة بالدكتور تحت مظلة الطالب، إلا إذا كان الطالب فعلًا بحاجة إلى تلك الدالة. هذا التنظيم يُنشئ ما يشبه "بوابة" واحدة يدخل المبرمج من خلالها إلى كل الدوال والمتغيرات المرتبطة بشيء معيّن.

---

## 🎯 من أين جاءت تسمية Class؟

في نظام الجامعة، تم توزيع آلاف الدوال على الأشياء (Objects) المرتبطة بها: كل دالة خاصة بالطالب وُضعت تحت Student، وكل دالة خاصة بالمقرر وُضعت تحت Course، وكل دالة خاصة بالموظف وُضعت تحت Employee، وكل دالة خاصة بالدكتور وُضعت تحت Doctor. هذا التوزيع نفسه هو في جوهره عملية **تصنيف (Classification)** للكود — أي فرزه إلى مجموعات بحسب الشيء الذي يخصه.

> **Class (فئة)**
>
> الكلمة مشتقة من **Classification**، أي **التصنيف**. فكل "شيء" (Object) قبل أن يصبح كائنًا فعليًا في البرنامج، لا بد أن يكون له تصنيف (Class) يحدد ما ينتمي إليه من كود.

هذا يشبه تمامًا تقسيم مقاعد الطائرة إلى "Class A" و"Class B" و"Class C" — وهو استخدام شائع لكلمة Class بمعنى "فئة" أو "درجة". ولهذا السبب، يوجد في البرنامج مسميات مثل `class Student` و`class Course` و`class Employee` — كل واحدة منها تصنيف مستقل للكود المرتبط بشيء معيّن.

---

## ⚙️ من Structure إلى Class

في وقت سابق، تم التعرّف على **Structure**، حيث كان يمكن تعريف struct باسم `person`، ووضع بداخلها متغيرات (Variables) مرتبطة ببعضها، مثل `firstName` و`lastName`:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
struct stPerson
{
    string firstName;
    string lastName;
};
```

</div>

الـ Structure هنا هي عبارة عن **Data Type**، تمامًا مثل `int` أو `bool` أو `string`. ولاستخدامها، كان يتم تعريف متغيّر من نوعها:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
stPerson person1;

person1.firstName;
person1.lastName;
```

</div>

الآن، بدلًا من كتابة `struct`، سيتم استخدام كلمة **Class** بدلًا منها. ومن العادات الجيدة في البرمجة أن يبدأ اسم كل Class بالبادئة `cls`، مثل `clsPerson` أو `clsStudent` أو `clsEmployee`، حتى يسهل الرجوع إليها بسرعة داخل الكود.

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
class clsPerson
{
    string firstName;
    string lastName;
};
```

</div>

كما هو الحال في الـ Structure، تم تعريف الأعضاء (Members) بنفس الطريقة: `firstName` و`lastName`. لكن الفرق الأساسي أن الـ Class تسمح أيضًا بإضافة **Function** بداخلها — وهذا ما لم تكن الـ Structure تسمح به سابقًا:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
class clsPerson
{
    string firstName;
    string lastName;

    string fullName()
    {
        return firstName + " " + lastName;
    }
};
```

</div>

الدالة `fullName()` هنا تُرجع ناتج جمع `firstName` مع `lastName`.

---

## 📌 لماذا لا تظهر الأعضاء تلقائيًا؟

عند تعريف كائن (Object) من نوع `clsPerson`، ومحاولة الوصول إلى `firstName` أو `lastName` أو `fullName()` عن طريق النقطة، لن تظهر هذه الأعضاء! والسبب هو قاعدة مهمة جدًا:

> **القاعدة**: كل شيء داخل الـ Class يكون بشكل افتراضي (By Default) **`private`** — أي خاص، ولا يمكن الوصول إليه إلا من داخل الـ Class نفسها.

فإذا لم تتم كتابة أي كلمة (`private` أو `public`) قبل عضو معيّن، فإنه يُعامَل تلقائيًا على أنه `private`.

---

## 🎯 تعريف: `private` و`public`

> **`private` (خاص)**
>
> عضو لا يمكن الوصول إليه أو استخدامه إلا من داخل الـ Class نفسها. لا يمكن لأي كود خارج الـ Class الوصول إليه.

> **`public` (عام)**
>
> عضو **مكشوف (Exposed)** للخارج، أي يمكن لأي جهة تستخدم الـ Object الوصول إليه مباشرة عن طريق النقطة.

لجعل `firstName` و`lastName` و`fullName()` قابلة للوصول من خارج الـ Class، يجب وضع كلمة `public` أمامها:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
class clsPerson
{
public:
    string firstName;
    string lastName;

    string fullName()
    {
        return firstName + " " + lastName;
    }
};
```

</div>

---

## 💻 مثال: استخدام الـ Class

بعد إضافة `public`، يمكن الآن تعريف Object من نوع `clsPerson` والوصول إلى أعضائه:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
clsPerson person1;

person1.firstName = "Mohammed";
person1.lastName  = "Abu Hudood";

cout << person1.fullName();
```

</div>

عند تنفيذ `person1.fullName()`، يتم استدعاء الدالة الموجودة داخل الـ Class، والتي تُرجع دمج `firstName` مع `lastName`.

> **Method (دالة عضو)**
>
> أي `Function` أو `Procedure` تكون موجودة داخل Class أو داخل Object، تُسمى **Method**.

---

## ⚠️ ملاحظة: `private` بشكل افتراضي

لتوضيح الفكرة أكثر: لو أُضيف متغيّر جديد داخل الـ Class دون كتابة `public` أمامه، مثل متغيّر من نوع `int`، فإن هذا المتغيّر **لن يظهر** عند كتابة النقطة على الـ Object، لأنه يُعامَل تلقائيًا كـ `private`. وهذا مفيد جدًا في البرمجة، إذ يحتاج المبرمج غالبًا إلى إبقاء بعض المتغيرات الداخلية مخفية تمامًا، بحيث لا يستطيع أحد من خارج الـ Class الوصول إليها.

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---------|--------|
| **Class (فئة)** | نوع بيانات (Data Type) يُصنَّف بداخله الكود المرتبط بشيء معيّن، مشتق من كلمة Classification |
| **Object (كائن)** | متغيّر (Variable) من نوع Class؛ يُسمى أيضًا Object Instance |
| **Method (دالة عضو)** | Function أو Procedure موجودة داخل Class |
| **`private`** | عضو لا يمكن الوصول إليه إلا من داخل الـ Class نفسها (وهذا هو الوضع الافتراضي) |
| **`public`** | عضو مكشوف يمكن الوصول إليه من خارج الـ Class عن طريق الـ Object |

---

## 💡 مثال حي: نوع `string`

من أفضل الأمثلة الواقعية على مفهوم الـ Class هو نوع `string` نفسه! فعندما يتم تعريف متغيّر مثل:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
string s1;
```

</div>

فإن ما يحدث فعليًا هو تعريف **Object** من **Class** اسمها `string`! فـ `string` أصلًا هي عبارة عن Class مبنية مسبقًا، تحتوي بداخلها على كل الدوال (Methods) والخصائص (Properties) المرتبطة بالتعامل مع النصوص، وقد تم تصنيف (Classification) كل هذا الكود تحت مسمى واحد هو `string`.

ولهذا السبب، عند كتابة `s1.` تظهر أمام المبرمج قائمة غنية جدًا من الـ Methods، مثل:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
s1.Length
s1.Replace(...)
s1.Substr(...)
```

</div>

فالتعامل مع النصوص لا يتم بشكل مباشر (Directly)؛ بل يجب أولًا تعريف Object من نوع `string`، وعندها فقط يمكن الوصول إلى كل الإمكانيات الغنية الموجودة بداخل هذا الـ Class.

---

## 📌 الفرق بين Class وObject

- الـ **Class** هي المكان الذي يوضع بداخله الكود، وتُعتبر Data Type — تمامًا مثل `int` أو `bool` أو `string`.
- لا يمكن التعامل مع الـ Class مباشرة؛ بل يجب أولًا تعريف **Object** (متغيّر) من نوعها.
- عند تعريف `person1` من نوع `clsPerson`، يصبح `person1` يمثّل كائنًا واحدًا محددًا من هذا النوع.
- عند تعريف `s1` من نوع `string`، يصبح `s1` كائنًا (Object) من Class اسمها `string`، وله كل الخصائص والدوال المتاحة في هذا الـ Class.

يمكن اعتبار الـ Class أشبه بالـ Structure، لكن مع إضافة مهمة جدًا: القدرة على احتواء Methods بداخلها، بالإضافة إلى مفهومي `private` و`public`.

---

## 💡 الفكرة الأساسية

الـ Class هي عملية تصنيف (Classification) للكود المرتبط بشيء معيّن، وتُعتبر Data Type لا يمكن استخدامها مباشرة، بل يجب أولًا إنشاء Object منها؛ وكل عضو بداخلها يكون خاصًا (private) ما لم يُعلَن صراحة أنه عام (public).

---

## 🔑 ملخص

- الـ Object Oriented Programming تعتمد على تصنيف الكود إلى مجموعات (Classes) حسب الشيء الذي ينتمي إليه كل جزء منه.
- كلمة **Class** مشتقة من **Classification** (تصنيف).
- الـ Class تشبه الـ Structure، لكنها تسمح أيضًا بإضافة Methods بداخلها.
- كل عضو داخل الـ Class يكون `private` بشكل افتراضي، ولا يظهر للخارج إلا إذا كُتبت كلمة `public` أمامه.
- الـ `private` يعني أن العضو لا يمكن الوصول إليه إلا من داخل الـ Class نفسها.
- الـ `public` يعني أن العضو مكشوف ويمكن الوصول إليه من خارج الـ Class عن طريق الـ Object.
- المتغيّر (Variable) المعرَّف من نوع Class يُسمى **Object**.
- نوع `string` نفسه هو مثال حي على الـ Class: فهو Class جاهزة تحتوي على العديد من الـ Methods مثل `Length` و`Replace`.

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

In the last lesson, we learned why **Object-Oriented Programming** is useful, and how it makes a programmer look at a program from the top down, by thinking about Objects instead of thinking about functions directly. In this lesson, we will go deeper into **Class** and **Object**, and learn where the name "Class" comes from, and the difference between a Class and a Structure.

---

## 🧠 Quick Recap: Thinking in Things

In the earlier university system example, we found the things (Objects) in the system, like: **Student**, **Course**, **Doctor**, **Employee**, **Major**. In the same way, if the program was a hospital system, the things would be: **Doctor**, **Patient**, **Clinic**, **Pharmacy**, **Department**. Every system has its own things that it works with.

Instead of leaving thousands of unorganized functions like in Functional Programming, all the functions and variables related to one thing get grouped under that thing:

- Everything related to **Student** goes under Student.
- Everything related to **Doctor** goes under Doctor.
- Everything related to **Course** goes under Course.
- The same goes for Employee, Major, and College.

It doesn't make sense for a function related to a doctor to be placed under Student, unless the Student actually needs that function. This grouping creates something like a "gate" that lets the programmer reach all the functions and variables related to one specific thing.

---

## 🎯 Where Does the Name "Class" Come From?

Grouping code this way — putting each piece of code under the thing it belongs to — is really an act of **Classification**. The code gets classified into: code related to the student, code related to the course, code related to the employee, code related to the doctor, and so on.

> **Class**
>
> The word comes from **Classification**. Every "thing" (Object) must first belong to a Class — a category that decides which code belongs to it — before it can become an actual object in the program.

This is just like sorting airplane seats into "Class A", "Class B", and "Class C" — a common use of the word "class" to mean a category or group. That's why in code we see names like `class Student`, `class Course`, and `class Employee` — each one is its own classification of the code related to one thing.

---

## ⚙️ From Structure to Class

Earlier, we learned about **Structure**. We could define a struct called `person`, and put variables inside it that belong together, like `firstName` and `lastName`:

```cpp
struct stPerson
{
    string firstName;
    string lastName;
};
```

A Structure is a **Data Type**, just like `int`, `bool`, or `string`. To use it, we defined a variable of that type:

```cpp
stPerson person1;

person1.firstName;
person1.lastName;
```

Now, instead of writing `struct`, we will use the word **Class** instead. A good habit in programming is to start every class name with the prefix `cls`, like `clsPerson`, `clsStudent`, or `clsEmployee`, so it's easy to find them quickly in the code.

```cpp
class clsPerson
{
    string firstName;
    string lastName;
};
```

Just like in Structure, the members are defined the same way: `firstName` and `lastName`. But the main difference is that a Class also lets us add a **Function** inside it — something Structure could not do before:

```cpp
class clsPerson
{
    string firstName;
    string lastName;

    string fullName()
    {
        return firstName + " " + lastName;
    }
};
```

The `fullName()` function here returns the result of joining `firstName` with `lastName`.

---

## 📌 Why Don't the Members Show Up Automatically?

If we define an Object of type `clsPerson`, and try to reach `firstName`, `lastName`, or `fullName()` using the dot, none of them will show up! The reason is an important rule:

> **The Rule**: everything inside a Class is **`private`** by default — meaning it can only be reached from inside the Class itself.

If no word (`private` or `public`) is written before a member, it is automatically treated as `private`.

---

## 🎯 Definition: `private` and `public`

> **`private`**
>
> A member that can only be reached or used from inside the Class itself. No code outside the Class can reach it.

> **`public`**
>
> A member that is **exposed** to the outside — meaning anyone using the Object can reach it directly with the dot.

To make `firstName`, `lastName`, and `fullName()` reachable from outside the Class, we need to write `public` in front of them:

```cpp
class clsPerson
{
public:
    string firstName;
    string lastName;

    string fullName()
    {
        return firstName + " " + lastName;
    }
};
```

---

## 💻 Example: Using the Class

After adding `public`, we can now define an Object of type `clsPerson` and reach its members:

```cpp
clsPerson person1;

person1.firstName = "Mohammed";
person1.lastName  = "Abu Hudood";

cout << person1.fullName();
```

When `person1.fullName()` runs, it calls the function inside the Class, which returns `firstName` joined with `lastName`.

> **Method**
>
> Any `Function` or `Procedure` that lives inside a Class or inside an Object is called a **Method**.

---

## ⚠️ Note: `private` by Default

To make this clearer: if we add a new variable inside the Class without writing `public` in front of it, like an `int` variable, that variable **will not show up** when we type the dot on the Object, because it is treated as `private` by default. This is very useful in programming, because a programmer often needs to keep some internal variables completely hidden, so that no one outside the Class can reach them.

---

## 📚 Terminology

| Term | Meaning |
|------|---------|
| **Class** | A data type that groups (classifies) the code related to one thing; the word comes from Classification |
| **Object** | A variable of type Class; also called an Object Instance |
| **Method** | A Function or Procedure that lives inside a Class |
| **`private`** | A member that can only be reached from inside the Class itself (this is the default) |
| **`public`** | A member that is exposed and can be reached from outside the Class through the Object |

---

## 💡 A Real-Life Example: The `string` Type

One of the best real examples of a Class is the `string` type itself! When we write:

```cpp
string s1;
```

what actually happens is that we are defining an **Object** of a **Class** called `string`! The `string` type is really a pre-built Class that contains many Methods and Properties for working with text, and all of that code has been classified under one name: `string`.

That's why, when we type `s1.`, we see a very rich list of Methods, like:

```cpp
s1.Length
s1.Replace(...)
s1.Substr(...)
```

We can't work with text directly. We first need to define an Object of type `string`, and only then can we reach all the rich features inside that Class.

---

## 📌 The Difference Between Class and Object

- A **Class** is where the code is placed, and it is a Data Type — just like `int`, `bool`, or `string`.
- We can't work with a Class directly; we first need to define an **Object** (a variable) of that type.
- When we define `person1` of type `clsPerson`, `person1` becomes one specific object of that type.
- When we define `s1` of type `string`, `s1` becomes an Object of the Class called `string`, with all the properties and methods available in that Class.

We can think of a Class as being like a Structure, but with one very important addition: the ability to hold Methods inside it, plus the ideas of `private` and `public`.

---

## 💡 Key Idea

A Class is a way of classifying the code related to one thing. It is a Data Type that can't be used directly — we must first create an Object from it. Every member inside it is private by default, unless it is clearly marked public.

---

## 🔑 Summary

- Object-Oriented Programming works by classifying code into groups (Classes), based on the thing each piece of code relates to.
- The word **Class** comes from **Classification**.
- A Class is similar to a Structure, but it also lets us add Methods inside it.
- Every member inside a Class is `private` by default, and won't show up outside unless the word `public` is written in front of it.
- `private` means the member can only be reached from inside the Class itself.
- `public` means the member is exposed and can be reached from outside the Class through the Object.
- A variable defined with a Class type is called an **Object**.
- The `string` type itself is a real example of a Class: it's a ready-made Class with many Methods, like `Length` and `Replace`.

</div>

---

*Anas Chetoui* - `@anaschetoui`
