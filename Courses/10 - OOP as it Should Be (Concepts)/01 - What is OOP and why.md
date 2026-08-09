<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align:right;font-family:'Arial',sans-serif;">

# ما هي البرمجة الشيئية ولماذا نستخدمها؟

---

## 📝 مقدمة

قبل الخوض في تفاصيل Object-Oriented Programming (OOP)، لا بد من فهم أصل هذه الفكرة، والفرق بينها وبين Functional Programming (FP) التي استُخدمت في الدورات الثماني السابقة.

---

## 🎯 تعريف

> **Functional Programming (البرمجة الوظيفية)**
>
> مجموعة من الـ`Functions` والـ`Procedures` مكتوبة الواحدة تلو الأخرى، تُكوّن معًا برنامجًا متكاملًا. يتم استدعاء كل منها عند الحاجة إليها، وتُبنى فوق بعضها البعض كقطع الليغو (Lego) حتى يكتمل النظام.

---

## 🧠 مثال: نظام جامعة (University System) باستخدام Functional Programming

عند بناء **University System** (نظام جامعة) باستخدام البرمجة الوظيفية، يستلزم الأمر كتابة عدد هائل جدًا من الـ`Functions`، لأن هذا مشروع كبير لا يمكن التعامل معه إلا بتقسيمه إلى دوال أصغر (Smaller Functions) وبنائها فوق بعضها البعض.

ومن أمثلة الدوال التي قد توجد في مشروع كهذا:

- `AddStudent`, `UpdateStudent`, `DeleteStudent`
- `CalculateAverage`
- `AddCourse`, `UpdateCourse`, `DeleteCourse`
- `EnrollStudentInCourse` (تسجيل الطالب في مقرر معيّن)
- `UnenrollStudentFromCourse` (سحب تسجيل الطالب من مقرر معيّن)
- `HowManyStudentsInCourse` (عدد الطلاب المسجّلين في مقرر معيّن)
- `AddDoctor`, `UpdateDoctor`, `DeleteDoctor`
- `AssignCourseToDoctor` (ربط مقرر معيّن بدكتور معيّن يدرّسه)
- `SendEmailToStudent`, `SendTextMessageToStudent`
- `SendEmailToDoctor`, `SendTextMessageToDoctor`
- `CallStudent` / `CallDoctor` (دالة أو إجراء يجعل البرنامج يجري اتصالًا هاتفيًا)
- `AddEmployee`, `UpdateEmployee`, `DeleteEmployee` (الجامعة تضم موظفين أيضًا)
- `CalculateSalary`, `PaySalary`

وبكل بساطة، من غير مبالغة، قد يتجاوز عدد الدوال في نظام كبير كهذا الألف أو الألفي Function. وستُكتب جميعها الواحدة تلو الأخرى إذا اتُّبع أسلوب البرمجة الوظيفية.

---

## ❌ مشكلة Functional Programming في الأنظمة الكبيرة

الفكرة الجوهرية هنا: **المشكلة ليست في وجود ألف أو ألفي Function**. بل من الطبيعي جدًا أن يصل العدد إلى عشرة آلاف دالة. المشكلة الحقيقية تكمن فيما يلي:

> هذه الآلاف من الدوال **غير منظمة**. لا يمكن الوصول إليها بسهولة، ولا يمكن تذكرها بسهولة، ولا يمكن التعامل معها بسهولة باستخدام أسلوب البرمجة الوظيفية.

ونتيجة لذلك:

- بعد مرور شهر أو أكثر، قد يعود المبرمج إلى مشروعه وقد نسي ما كتبه.
- قد يُعيد كتابة دالة موجودة أصلًا دون قصد.
- الأمر أشبه بألف دالة ملقاة في الشارع، بحيث يستطيع أي مطوّر (Developer) استدعاء أيٍّ منها في أي وقت، دون أي **تحكم (Control)** في هذا الاستدعاء.
- يصبح التعامل مع الأنظمة الكبيرة بأسلوب البرمجة الوظيفية **شبه مستحيل**.

---

## 🧠 كيف تفكر Object-Oriented Programming؟

**Object-Oriented Programming** تُغيّر طريقة نظر المبرمج إلى الكود وتعامله معه، وتجعله أقرب إلى الواقع والحياة العملية. وهذا هو الفرق الجوهري بينها وبين البرمجة الوظيفية.

فبدلًا من التفكير بالكود من الأسفل إلى الأعلى (بالدوال أولًا)، يعتمد أسلوب OOP التفكير **من الأعلى إلى الأسفل (Top-Down)**: يبدأ المبرمج بالتفكير في النظام الكبير أولًا، تمامًا كما يفكر في الحياة العملية.

فإذا طُرح السؤال: **ما هي الأشياء (Objects) التي ينبغي برمجتها في نظام الجامعة؟** فسيكون الجواب:

- **Student (طالب)** — لا بد من برمجة الطلاب.
- **Course (مقرر دراسي)** — الجامعة تحتوي على مقررات.
- **Employee (موظف)** — الجامعة تضم موظفين.
- **Doctor (أستاذ/دكتور)** — يُعتبر كل أستاذ شيئًا قائمًا بذاته.
- **Major (تخصص)**.
- **College (كلية)** — الجامعة تضم عدة كليات.
- **Department (قسم)**.

يُطلق على كل شيء من هذه الأشياء اسم **Object**.

> **Object-Oriented Programming (البرمجة الشيئية)**
>
> تعني برمجة **الأشياء (Objects)** بدلًا من برمجة **الدوال (Functions)** مباشرة. يتحول التفكير إلى نمط من الأعلى إلى الأسفل: تُحدَّد الأشياء أولًا، ثم توضع كل دالة مرتبطة بشيء معيّن تحت مظلته.

---

## ⚙️ كيف تعمل: تجميع الدوال تحت الأشياء

تجدر الإشارة إلى أن الآلاف من الدوال ذاتها التي كانت موجودة في البرمجة الوظيفية **لا تختفي ولا يقل عددها**. لكن بدلًا من أن تبقى مبعثرة، تُوزَّع على الأشياء (Objects) المرتبطة بها:

- كل الدوال المرتبطة بـ **Student** توضع تحت مظلة Student.
- كل الدوال المرتبطة بـ **Doctor** توضع تحت مظلة Doctor.
- كل الدوال المرتبطة بـ **College** توضع تحت مظلة College.
- كل الدوال المرتبطة بـ **Employee** توضع تحت مظلة Employee.
- كل الدوال المرتبطة بـ **Course** توضع تحت مظلة Course.

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```text
University System
│
├── Student    → (كل الدوال المتعلقة بالطالب)
├── Doctor     → (كل الدوال المتعلقة بالدكتور)
├── Course     → (كل الدوال المتعلقة بالكورس)
├── Employee   → (كل الدوال المتعلقة بالموظف)
├── College    → (كل الدوال المتعلقة بالكلية)
└── Department → (كل الدوال المتعلقة بالقسم)
```

</div>

---

## 💻 مثال: من Structure إلى Class

في دورة C++، جرى التعرّف على **Structure**. وقبل استخدام الـ Structure، كانت المتغيرات مثل `firstname` و`lastname` و`age` و`average` تُعرَّف **بشكل منفصل ومبعثر** — دون ارتباط فيما بينها. ثم جُمعت لاحقًا تحت مظلة واحدة تُسمى Structure:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
struct stStudent
{
    string firstName;
    string lastName;
    string address;
    int    age;
    float  average;
};
```

</div>

وأصبح يُعرَّف متغيّر (Variable) من نوع هذا الـ struct، ويتم الوصول إلى أعضائه عن طريق النقطة:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
stStudent student1;

student1.age;
student1.average;
student1.firstName;
student1.lastName;
```

</div>

وبهذا نظّمت الـ Structure العمل، وأصبح التعامل يتم مع متغيّر واحد اسمه `student1` يُوصَل من خلاله إلى كل شيء. **لكن** الـ Structure لم تكن تسمح بوضع `Functions` بداخلها.

وهنا بالضبط يأتي دور الـ **Class**. فالـ Class تشبه الـ Structure تمامًا من حيث المبدأ الأولي، لكن بالإضافة إلى الـ Variables، يمكن إضافة **Functions** بداخلها بالعدد المطلوب. ستأتي طريقة إنشاء الـ Class بالتفصيل الكامل في الدروس القادمة.

> **Class (فئة)**
>
> قالب (Blueprint) يحتوي على جميع **Members** الخاصة به، وهي الـ `Variables` بالإضافة إلى الـ `Functions`/`Procedures` (التي تُسمى **Methods**). ومن الـ Class يمكن إنشاء **Object**، وعن طريق هذا الـ Object يمكن الوصول إلى كل ما يتعلق به.

---

## 📚 المصطلحات

| المصطلح | المعنى |
|---------|--------|
| **Class (فئة)** | قالب/تصميم يحتوي على Variables وMethods مرتبطة بشيء معيّن |
| **Object (كائن)** | نسخة فعلية (Instance) مبنية من Class، يتم التعامل معها فعليًا داخل البرنامج |
| **Member (عضو)** | أي Variable أو Method موجودة داخل Class |
| **Method (دالة عضو)** | Function أو Procedure موجودة داخل Class |

---

## 💻 مثال: التعامل مع Object الخاص بالطالب

عند وجود `Student Object`، يمكن الوصول إلى كل شيء عن طريق النقطة:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
Student1.Name
Student1.Email

Student1.GetEnrolledCourses()
Student1.CalculateAverage()

Student1.SendEmail(Subject, Body)

Student1.EnrollInCourse(10)
Student1.UnEnrolFromCourse(10)

Student1.PayFees
```

</div>

عن طريق هذا الـ Object، يمكن التعامل مع أي طالب محدد بكل ما يخصه. يقول المدرّب: **"يمكنك أن تفعل ما تشاء مع طالب معيّن عن طريق الـ Object الخاص به"**.

فمثلًا، لتسجيل هذا الطالب في المقرر رقم 10، تُكتب:

<div dir="ltr" style="text-align:left;font-family:'Arial',sans-serif;">

```cpp
Student1.EnrollInCourse(10)
```

</div>

هنا يذهب البرنامج إلى هذه الـ Method (وهي Function أو Procedure داخل الـ Class)، وينفّذها، ويسجّل هذا الطالب تحديدًا في المقرر رقم 10. وينطبق الأمر نفسه عند دفع الرسوم أو سحب التسجيل من مقرر معيّن — دائمًا عن طريق `Student1.`، ولا يؤثر ذلك على أي طالب آخر غير `Student1`.

فبدلًا من تذكّر آلاف الدوال المبعثرة، يقتصر الأمر على تذكّر **عدد الـ Objects** التي يجري التعامل معها، والوصول من خلالها إلى كل ما هو مطلوب.

---

## 📌 لماذا نستخدم Object-Oriented Programming

إن الآلاف من الدوال التي كانت موجودة في البرمجة الوظيفية **لا تختفي**، بل تبقى موجودة كما هي، لكن طريقة التعامل معها تتغير جذريًا. ويقدّم هذا الأسلوب:

- **تنظيم الكود (Organization)**: النظر إلى الكود من الأعلى إلى الأسفل (Top-Down) بدلًا من التعامل المباشر مع آلاف الدوال.
- **الوصول عن طريق بوابات (Objects)**: بدلًا من الوصول المباشر العشوائي إلى أي دالة.
- **اختصار الكود وإعادة الاستخدام (Reusability)** بشكل كبير جدًا.
- **التحكم (Control) في الكود**: في البرمجة الوظيفية، تكون آلاف الدوال ملقاة كما لو كانت في الشارع، ويستطيع أي مطوّر استدعاء أي منها في أي وقت — **دون أي تحكم**. أما في البرمجة الشيئية، فتوجد أساليب تتيح للمطوّر التحكم في من يستطيع الوصول إلى أي Method: فقد تكون الـ Method موجودة لكنها لا تظهر عند كتابة النقطة، لأنها تُستخدم داخليًا (Internally) ضمن الـ Class فقط.
- **الأمان (Security) على الكود**، كنتيجة مباشرة لهذا التحكم.
- **فرض الالتزام (Enforcement) على المطوّرين**: في البرمجة الوظيفية، يقوم الاتفاق بين المبرمجين على الثقة (اتفاقًا شفهيًا) — كأن يتفق مطوّر مع زميله على أن يحتوي الكود دوالًا معيّنة، بترتيب معيّن، وبمعاملات (Parameters) محددة، إلا أن هذا الاتفاق الشفهي قد لا يُلتزَم به فعليًا. أما في البرمجة الشيئية، فتوجد مفاهيم تفرض على المطوّر الالتزام بـ"العقد" المتفق عليه بينه وبين بقية الفريق، إلى درجة أن الكود **لن يُترجَم (Compile) أصلًا** ما لم يلتزم به.

---

## ⚠️ ملاحظات

- الفرق الجوهري بين البرمجة الوظيفية والبرمجة الشيئية ليس في عدد الدوال، وإنما في طريقة تنظيمها والوصول إليها والتحكم فيها.
- لا تُلغي البرمجة الشيئية الحاجة إلى الدوال، وإنما تعيد تنظيمها تحت مظلة الـ Objects المرتبطة بها.
- الـ Class تشبه الـ Structure، لكن بميزة إضافية أساسية: القدرة على احتواء دوال/Methods بداخلها.

---

## 💡 الفكرة الأساسية

لا تُقلّل البرمجة الشيئية عدد الدوال، وإنما تعيد تنظيمها تحت مظلة الأشياء (Objects) التي تمثّل عناصر الحياة العملية، وبذلك تُسهِّل الوصول إليها والتحكم فيها وإعادة استخدامها.

---

## 🔑 ملخص

- البرمجة الوظيفية (Functional Programming) عبارة عن مجموعة من الدوال والإجراءات (Procedures) مبنية فوق بعضها البعض، شأنها شأن قطع الليغو.
- في مشروع كبير كنظام الجامعة، قد يصل عدد الدوال إلى الآلاف.
- المشكلة الحقيقية ليست في عدد الدوال، وإنما في عدم تنظيمها وصعوبة تذكرها والوصول إليها.
- تُغيّر البرمجة الشيئية طريقة التفكير لتصبح من الأعلى إلى الأسفل: تُحدَّد الأشياء (Objects) أولًا، مثل Student وCourse وDoctor وEmployee وMajor وCollege وDepartment.
- توضع جميع الدوال المرتبطة بشيء معيّن تحت الـ Class الخاصة به.
- الـ Class تشبه الـ Structure، لكنها تسمح بإضافة الدوال (Methods) إلى جانب المتغيرات (Variables).
- يصبح التعامل مع البرنامج عن طريق الـ Objects (مثل `student1.enrollInCourse(10)`) بدلًا من استدعاء الدوال مباشرة.
- من أهم فوائد البرمجة الشيئية: التنظيم، وإعادة الاستخدام، والتحكم، والأمان، والوراثة، وفرض الالتزام بين أعضاء الفريق.

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

Before getting into the details of **Object-Oriented Programming (OOP)**, it's important to understand where this idea comes from, and how it differs from **Functional Programming (FP)**, the approach used throughout the previous eight courses.

---

## 🎯 Definition

> **Functional Programming (FP)**
>
> A collection of `Functions` and `Procedures` written one after another that together make up a program. They are called whenever needed and assembled on top of each other like Lego pieces to build the complete system.

---

## 🧠 Example: A University System Using Functional Programming

If we wanted to build a **University System** using Functional Programming, we would need to write a huge number of `Functions`, since this is a large project that can only be handled by breaking it down into smaller functions and building them on top of each other.

Examples of functions that might exist in such a project:

- `AddStudent`, `UpdateStudent`, `DeleteStudent`
- `CalculateAverage`
- `AddCourse`, `UpdateCourse`, `DeleteCourse`
- `EnrollStudentInCourse`
- `UnenrollStudentFromCourse`
- `HowManyStudentsInCourse`
- `AddDoctor`, `UpdateDoctor`, `DeleteDoctor`
- `AssignCourseToDoctor`
- `SendEmailToStudent`, `SendTextMessageToStudent`
- `SendEmailToDoctor`, `SendTextMessageToDoctor`
- `CallStudent` / `CallDoctor` (a function or procedure that has the program place a phone call)
- `AddEmployee`, `UpdateEmployee`, `DeleteEmployee` (the university has employees too)
- `CalculateSalary`, `PaySalary`

Without exaggeration, a large system like this could easily end up with more than a thousand or two thousand functions. All of these would be written out one after another using the Functional Programming approach.

---

## ❌ The Problem with Functional Programming in Large Systems

Here's the key idea: **the problem is not that you have a thousand or two thousand functions**. It's completely normal to even have ten thousand functions. The real problem is:

> Those thousand or two thousand functions are **not organized**. You can't reach them easily, you can't remember them easily, and you can't work with them easily using the Functional Programming approach.

As a result:

- A month later, you might come back to your project and forget what you wrote.
- You might accidentally rewrite a function that already exists.
- It's as if you have 1000 functions "thrown out in the street" — any developer can call any of them at any time, with **no control** over that access.
- Working with large systems using Functional Programming becomes **nearly impossible**.

---

## 🧠 How Object-Oriented Programming Thinks

**Object-Oriented Programming** changes the way you look at and work with code, bringing it closer to the real world and everyday life. This is the core difference between it and Functional Programming.

Instead of thinking bottom-up (functions first), in OOP you think **Top-Down**: you think about the big system first, exactly the way you'd think about real life.

So if you were asked: **what are the "Objects" you need to program in the university system?** you'd answer:

- **Student** — of course you'll program students.
- **Course** — the university has courses.
- **Employee** — the university has employees.
- **Doctor** — each doctor is considered a "thing" on its own.
- **Major**.
- **College** — the university has colleges.
- **Department** — not every university has departments, but you'll likely deal with them too.

Each one of these things is called an **Object**.

> **Object-Oriented Programming (OOP)**
>
> It means you're programming **Objects**, not directly programming **Functions**. Your thinking becomes top-down: you identify the "things" first, then every function related to a given thing is placed under its umbrella.

---

## ⚙️ How It Works: Grouping Functions Under Objects

Note carefully: the same thousand or two thousand functions that existed under Functional Programming **don't disappear and don't shrink in number**. Instead of staying scattered, they simply get distributed across the Objects they relate to:

- All functions related to **Student** go under the Student umbrella.
- All functions related to **Doctor** go under the Doctor umbrella.
- All functions related to **College** go under the College umbrella.
- All functions related to **Employee** go under the Employee umbrella.
- All functions related to **Course** go under the Course umbrella.

```text
University System
│
├── Student    → (all student-related functions)
├── Doctor     → (all doctor-related functions)
├── Course     → (all course-related functions)
├── Employee   → (all employee-related functions)
├── College    → (all college-related functions)
└── Department → (all department-related functions)
```

---

## 💻 Example: From Structure to Class

In Level 1 of the C++ course, **Structure** was introduced. Before using Structure, variables like `firstname`, `lastname`, `age`, and `average` were defined **separately, scattered "in the street"** — not connected to one another. Then, they were grouped under one umbrella called a Structure:

```cpp
struct stStudent
{
    string firstName;
    string lastName;
    string address;
    int    age;
    float  average;
};
```

A variable of this struct type was then declared, and its members accessed with the dot operator:

```cpp
stStudent student1;

student1.age;
student1.average;
student1.firstName;
student1.lastName;
```

This is how Structure organized things, letting us deal with one variable, `student1`, and reach everything through it. **However**, Structure did not allow placing `Functions` inside it.

This is exactly where the **Class** comes in. A Class is, as a starting concept, very similar to a Structure — but in addition to Variables, it lets you add as many **Functions** inside it as needed. The exact way to build a Class is covered in full detail in upcoming lessons.

> **Class**
>
> A blueprint containing all of its **Members** — the `Variables` plus the `Functions`/`Procedures` (called **Methods**). From a Class, you create an **Object**, and through that Object you reach everything related to it.

---

## 📚 Terminology

| Term | Meaning |
|------|---------|
| **Class** | A blueprint/template containing Variables and Methods related to a specific thing |
| **Object** | An actual instance built from a Class, which you work with directly in the program |
| **Member** | Any Variable or Method that exists inside a Class |
| **Method** | A Function or Procedure that exists inside a Class |

---

## 💻 Example: Working with the Student Object

Once I have a `Student Object`, I can reach everything through the dot operator:

```cpp
Student1.Name
Student1.Email

Student1.GetEnrolledCourses()
Student1.CalculateAverage()

Student1.SendEmail(Subject, Body)

Student1.EnrollInCourse(10)
Student1.UnEnrolFromCourse(10)

Student1.PayFees
```

You can do whatever you want with a certain student through its Object.

For example, to enroll this student in course number 10:

```cpp
Student1.EnrollInCourse(10)
```

The program goes to this Method (a Function or Procedure inside the Class), executes it, and enrolls that specific student in course 10. The same applies to paying fees or unenrolling from a course — always through `Student1.`, and none of it affects any other student besides `Student1`.

So instead of memorizing thousands of scattered functions, all I need to remember is the **number of Objects** I'm working with, and I reach everything I need through them.

---

## 📌 Why We Use Object-Oriented Programming

The same 2000 functions that existed under Functional Programming **don't disappear** — they're still there, but how I interact with them changes completely. This approach gives you:

- **Code organization**: You see the code Top-Down instead of dealing directly with thousands of scattered functions.
- **Access through gateways (Objects)**: instead of direct, unrestricted access to any function.
- **Significant code reduction and reusability**.
- **Control over the code**: under Functional Programming, the 1000 functions are "thrown in the street," and any developer can call any of them at any time — **there's no control**. Under Object-Oriented Programming, there are techniques that let me, as the developer, control who can reach which Method. Some methods can exist but stay hidden when you type `.`, because they're used only Internally within the Class.
- **Security** on the code, as a direct result of that control.
- **Inheritance**: a real example — a small project with 40-50 screens used the inheritance principle. When a change was needed, it was made in a single place, and it automatically applied across all 40-50 screens, without visiting each screen individually. The whole change took five minutes instead of the much longer time it would've taken to manually edit every single screen.
- **Enforcement among developers**: under Functional Programming, agreements between programmers happen "on trust" (verbally) — for example, agreeing with a colleague that the code should contain certain functions, in a certain order, taking certain parameters. But that agreement is verbal and may not actually be followed. Under Object-Oriented Programming, certain concepts force you as a developer to honor the "contract" between you and the rest of the team, to the point where the code **won't even compile** unless you comply.

---

## ⚠️ Notes

- The core difference between FP and OOP isn't the number of functions, but how they are organized, accessed, and controlled.
- Object-Oriented Programming doesn't eliminate the need for functions — it reorganizes them under the Objects they relate to.
- A Class is similar to a Structure, but with one key added capability: the ability to contain Functions/Methods inside it.

---

## 💡 Key Idea

Object-Oriented Programming doesn't reduce the number of functions — it reorganizes them under the Objects that represent real-life things, making them easier to access, control, and reuse.

---

## 🔑 Summary

- Functional Programming = a set of Functions and Procedures built on top of each other like Lego pieces.
- In a large project like a university system, the number of functions can reach into the thousands.
- The real problem isn't the number of functions — it's their lack of organization and the difficulty of remembering and accessing them.
- OOP shifts thinking to Top-Down: first identify the Objects, such as Student, Course, Doctor, Employee, Major, College, Department.
- All functions related to a given thing are placed under its own Class.
- A Class is similar to a Structure, but it allows adding Functions (Methods) alongside Variables.
- Working with the program happens through Objects (like `student1.enrollInCourse(10)`) instead of calling functions directly.
- Key benefits of OOP: organization, reusability, control, security, inheritance, and enforcing commitments between team members.

</div>

---

*Anas Chetoui* - `@anaschetoui`
