<a id="arabic"></a>

[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# أعضاء الـ Class (Class Members)

---

## 📝 مقدمة

في الدرس السابق، تم التعرّف على مفهوم الـ **Class**، وقيل إن كلمة Class مشتقة من **Classification** (التصنيف)، لأن الكود يُصنَّف فعليًا إلى مجموعات: الكود الخاص بالـ Student يوضع لوحده، والكود الخاص بالـ Person يوضع لوحده، والكود الخاص بالـ Employee يوضع لوحده. في هذا الدرس، سيتم التعمّق أكثر في محتويات الـ Class، والتعرّف على مصطلح **Member (عضو)**، وأنواعه المختلفة.

---

## 🧠 مراجعة سريعة

الـ Class أشبه ما يكون بالـ **Structure**. فقد سبق التعرّف على الـ Structure، وقيل إنها عبارة عن مظلة يُجمع تحتها كل ما له علاقة ببعضه. اليوم، أصبح الهدف هو جمع الأشياء المرتبطة ببعضها تحت صنف (Class) واحد.

الـ Class تحتوي على **Variables**، كما تحتوي أيضًا على **Functions** أو **Procedures**. وبعض هذه الـ Variables يمكن أن تكون **Public**، بحيث يستطيع من هو خارج الـ Class رؤيتها والوصول إليها، بينما البعض الآخر يكون **Private**، بحيث لا يستطيع من هو خارج الـ Class رؤيتها إطلاقًا. سيأتي التفصيل الكامل لموضوع `public` و`private` في درس لاحق.

كما سبق التعرّف على أن الـ Class هي عبارة عن **Data Type**، تمامًا مثل `int` أو `bool` أو الـ `struct`. والـ Class هي بمثابة **Template** أو **Form** فارغ؛ لا يمكن استخدامها مباشرة، بل لا بد أولًا من تعريف شيء منها — تمامًا مثلما كان يتم تعريف `struct person` ثم تعريف متغيّر من نوعها.

---

## 🎯 تعريف: Object

عند تعريف متغيّر من نوع Class معيّنة، فإن هذا المتغيّر يُسمى **Object**.

> **Object (كائن)**
>
> نسخة (Instance) من الـ Class، يتم إنشاؤها للتعامل معها فعليًا في البرنامج. التعامل يتم دائمًا عن طريق الـ Object، ولا يمكن أن يظهر Object من دون أن يكون مبنيًا على Class.

تمامًا كما يتم تعريف `int x` فيصبح `x` من نوع `int`، فعند تعريف:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
clsPerson person1;
```

</div>

يصبح `person1` عبارة عن **Object** من نوع `clsPerson`.

---

## 🎯 تعريف: Member

كل Object غني بمحتويات معيّنة، وهذه المحتويات تُسمى **Members**.

> **Member (عضو)**
>
> أي محتوى موجود داخل الـ Class أو داخل الـ Object، سواء كان Variable أو Function أو Procedure.

كلمة Member تعني "عضو"، مثال: مجموعة من المطورين المصنَّفين معًا في فئة معيّنة داخل شركة، مثل "Class A"، هم أعضاء (Members) في هذه الفئة. وبنفس المنطق، فإن كل محتوى داخل الـ Class يُعتبر عضوًا فيها.

---

## 💻 مثال: أعضاء الـ Class

بالعودة إلى المثال السابق، توجد Class باسم `clsPerson`، وبداخلها:

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

هنا، `firstName` و`lastName` هما **Variables** موجودتان داخل الـ Class، والدالة `fullName()` تُرجع دمج `firstName` مع `lastName`.

---

## ⚙️ الوصول إلى المتغيرات من داخل الـ Class

نقطة مهمة جدًا: المتغيرات الموجودة داخل الـ Class تكون قابلة للوصول (Accessible) من أي مكان داخل الـ Class نفسها. فعند تنفيذ الدالة `fullName()`، فإنها تصل إلى `firstName` و`lastName` مباشرة، وكأنهما متغيّران معرّفان بشكل عام (Global) داخل نطاق الـ Class.

فأي دالة (Function) أو إجراء (Procedure) موجود داخل الـ Class يستطيع رؤية جميع المتغيرات المعرَّفة داخل تلك الـ Class، سواء كانت هذه المتغيرات `public` أو `private`. أي أن تحديد العضو كـ `public` أو `private` يحدد فقط من يستطيع الوصول إليه **من خارج** الـ Class، أما من الداخل، فكل عضو يرى بقية الأعضاء بحرية تامة.

---

## 📌 نوعا الـ Member

تنقسم أعضاء الـ Class إلى قسمين رئيسيين:

### 1️⃣ Data Members

> **Data Member (عضو بيانات)**
>
> أي Variable معرَّف داخل الـ Class، ويُستخدم لتخزين بيانات (Data).

فمثلًا، `firstName` و`lastName` هما **Data Members**، لأنه يمكن تخزين قيمة بداخلهما، مثل الاسم الأول والاسم الأخير لشخص معيّن. أي متغيّر داخل الـ Class يُخزَّن بداخله قيمة يُعتبر Data Member.

### 2️⃣ Function Members (أو Method Members)

> **Function Member (عضو دالة)**، ويُسمى أيضًا **Method Member**
>
> أي Function أو Procedure موجودة داخل الـ Class. لا يمكن تخزين بيانات بداخلها كما هو الحال مع الـ Variables، وإنما تُنفِّذ عملًا معيّنًا.

فمثلًا، `fullName()` هي **Function Member**، لأنها دالة تنفّذ عملية معيّنة (دمج الاسمين)، وليست مكانًا لتخزين قيمة.

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---------|--------|
| **Object (كائن)** | نسخة (Instance) من الـ Class، يتم إنشاؤها والتعامل معها في البرنامج |
| **Member (عضو)** | أي محتوى داخل الـ Class أو الـ Object، سواء كان Variable أو Function |
| **Data Member** | Variable داخل الـ Class يُستخدم لتخزين بيانات |
| **Function Member / Method Member** | Function أو Procedure داخل الـ Class تنفّذ عملًا معيّنًا |

---

## ⚠️ ملاحظات

- الـ Class لا يمكن استخدامها مباشرة؛ لا بد أولًا من تعريف Object منها.
- كل عضو داخل الـ Class يستطيع الوصول إلى بقية الأعضاء الموجودة داخل الـ Class نفسها، بغضّ النظر عن كونها `public` أو `private`.
- التمييز بين `public` و`private` يحدد فقط من يستطيع الوصول إلى العضو من **خارج** الـ Class.

---

## 💡 الفكرة الأساسية

كل محتوى داخل الـ Class يُسمى Member (عضو)، وينقسم هذا العضو دائمًا إلى أحد نوعين: إما Data Member يخزّن بيانات، أو Function Member ينفّذ عملًا معيّنًا.

---

## 🔑 ملخص

- الـ Class تشبه الـ Structure، وهي عبارة عن Data Type وTemplate لا يمكن استخدامه مباشرة.
- المتغيّر المعرَّف من نوع Class يُسمى **Object**، وهو نسخة (Instance) من تلك الـ Class.
- كل محتوى داخل الـ Class أو الـ Object يُسمى **Member**.
- الأعضاء (Members) تنقسم إلى نوعين: **Data Members** (متغيرات تخزّن بيانات) و**Function Members / Method Members** (دوال أو إجراءات تنفّذ عملًا).
- أي عضو داخل الـ Class يستطيع الوصول إلى جميع الأعضاء الأخرى داخل نفس الـ Class، سواء كانت `public` أو `private`.

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

In the last lesson, we learned about the **Class**, and we said the word Class comes from **Classification**, because we really classify our code into groups: the code for Student goes by itself, the code for Person goes by itself, and the code for Employee goes by itself. In this lesson, we will go deeper into what is inside a Class, and learn the word **Member**, and its different types.

---

## 🧠 Quick Recap

A Class is a lot like a **Structure**. We already learned about Structure, and we said it is like an umbrella that groups things that belong together. Today, the goal is still the same: group related things together, but now under a Class.

A Class holds **Variables**, and it also holds **Functions** or **Procedures**. Some of these Variables can be **Public**, so code outside the Class can see and reach them. Other Variables can be **Private**, so code outside the Class cannot see them at all. We will cover `public` and `private` in full detail in a later lesson.

We also learned that a Class is a **Data Type**, just like `int`, `bool`, or `struct`. A Class is like an empty **Template** or **Form**; we can't use it directly. We first need to define something from it — just like we used to define `struct person`, and then define a variable of that type.

---

## 🎯 Definition: Object

When we define a variable of a certain Class type, that variable is called an **Object**.

> **Object**
>
> An instance of a Class, created so we can actually work with it in the program. We always work through the Object, and an Object can never exist without being built from a Class.

Just like defining `int x;` makes `x` a type of `int`, when we write:

```cpp
clsPerson person1;
```

`person1` becomes an **Object** of type `clsPerson`.

---

## 🎯 Definition: Member

Every Object is full of certain content, and this content is called **Members**.

> **Member**
>
> Any content that exists inside a Class or inside an Object, whether it's a Variable, a Function, or a Procedure.

The word Member means someone who belongs to a group. In the same way that a group of developers classified together in a company, like "Class A", are called members of that group, every piece of content inside a Class is considered a member of it.

---

## 💻 Example: Members of a Class

Going back to the earlier example, we have a Class called `clsPerson`, and inside it:

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

Here, `firstName` and `lastName` are **Variables** inside the Class, and the function `fullName()` returns `firstName` joined with `lastName`.

---

## ⚙️ Reaching Variables from Inside the Class

This is an important point: the variables inside a Class can be reached from anywhere inside that same Class. When `fullName()` runs, it reaches `firstName` and `lastName` directly, almost like they were defined as global variables inside the scope of the Class.

Any Function or Procedure inside the Class can see all the variables defined in that Class, whether they are `public` or `private`. This means `public` and `private` only control who can reach a member **from outside** the Class. From the inside, every member can freely see every other member.

---

## 📌 The Two Types of Members

The members of a Class fall into two main groups:

### 1️⃣ Data Members

> **Data Member**
>
> Any Variable defined inside a Class, used to store data.

For example, `firstName` and `lastName` are **Data Members**, because we can store a value inside them, like a person's first and last name. Any variable inside a Class that stores a value is a Data Member.

### 2️⃣ Function Members (or Method Members)

> **Function Member**, also called a **Method Member**
>
> Any Function or Procedure inside a Class. We can't store data inside it like a Variable — instead, it performs a certain action.

For example, `fullName()` is a **Function Member**, because it performs an action (joining the two names together), not a place to store a value.

---

## 📚 Terminology

| Term | Meaning |
|------|---------|
| **Object** | An instance of a Class, created and used inside the program |
| **Member** | Any content inside a Class or Object, whether a Variable or a Function |
| **Data Member** | A Variable inside a Class, used to store data |
| **Function Member / Method Member** | A Function or Procedure inside a Class that performs an action |

---

## ⚠️ Notes

- A Class can't be used directly; we must first define an Object from it.
- Every member inside a Class can reach every other member inside that same Class, whether it's `public` or `private`.
- The difference between `public` and `private` only controls who can reach a member from **outside** the Class.

---

## 💡 Key Idea

Every piece of content inside a Class is called a Member, and it is always one of two types: a Data Member that stores data, or a Function Member that performs an action.

---

## 🔑 Summary

- A Class is similar to a Structure — it is a Data Type and a Template that can't be used directly.
- A variable defined with a Class type is called an **Object**, and it is an instance of that Class.
- Any content inside a Class or Object is called a **Member**.
- Members fall into two types: **Data Members** (variables that store data) and **Function Members / Method Members** (functions or procedures that perform an action).
- Any member inside a Class can reach every other member inside the same Class, whether it's `public` or `private`.

</div>

---

*Anas Chetoui* - `@anaschetoui`