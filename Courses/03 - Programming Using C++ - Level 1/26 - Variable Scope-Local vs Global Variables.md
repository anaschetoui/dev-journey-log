<div dir="rtl">

<a id="arabic-conversion"></a>
[English ↙](#english-conversion)

# 🗂️ نطاق المتغيرات (Variable Scope) – Local vs Global في ++C

## 🎯 المقدمة
في هذا الدرس تتعلم الفرق الجوهري بين المتغيرات المحلية (local variables) والمتغيرات العامة (global variables) وأهمية معرفة نطاق كل متغير في برنامجك، حيث يؤثر النطاق على عمر المتغير وكيف يتعامل معه البرنامج داخل الفانكشنز والبروسيجرز أو من الخارج.

***

## 1️⃣ المتغيرات المحلية Local Variables

- هي المتغيرات التي تُعرف **داخل دالة أو بروسيجر** (مثل main أو أي دالة أخرى).
- لا يمكن الوصول لها إلا **داخل نفس الدالة أو القوس { }** التي عُرفت بداخلها.
- بمجرد انتهاء تنفيذ الدالة، يُزال المتغير من الميموري (ذاكرة البرنامج).

<div dir="ltr" align="left">

```cpp
void myFunction1() {
    int x = 500;
    cout << "the value of x inside myFunction1: " << x << endl;
}

int main() {
    int x = 10;
    cout << "the value of x inside main: " << x << endl;
    myFunction1();
    return 0;
}
```
</div>

- هنا يوجد متغيران باسم x: الأول محلي داخل main والثاني محلي داخل myFunction1. لا يحدث أي تعارض لأن لكلٍ نطاقه (سكوب scope) الخاص.

***

## 2️⃣ المتغيرات العامة Global Variables

- يتم تعريفها **خارج كل الدوال** (قبل أي دالة، عادةً أعلى الكود).
- يمكن الوصول للمتغير العام من أي دالة في البرنامج وتعديله.
- يبقى موجودًا في الذاكرة طول فترة البرنامج كله.

<div dir="ltr" align="left">

```cpp
int x = 300; // متغير عام

void myFunction1() {
    cout << "the global value of x inside myFunction1: " << ::x << endl; // الوصول للـ global باستخدام ::
}

int main() {
    int x = 10;
    cout << "the local value of x inside main: " << x << endl;
    cout << "the global value of x inside main: " << ::x << endl;
    myFunction1();
    return 0;
}
```
</div>

- استخدم الرمز `::x` (colon colon) للدلالة أنك تريد "تخطي" السكوب الحالي والوصول للمتغير العام الخارجي.

***

## ⏳ عمر المتغير (Lifetime)
- المتغير المحلي يعيش فقط مدة تنفيذ الفانكشن/البروسيجر الذي عُرف فيه (يختفي بعد انتهاء الفانكشن).
- المتغير العام يعيش ما دام البرنامج نفسه قيد التشغيل.

***

## 📝 ملخص سريع
- **Local Variable:** داخل الفانكشن، ينتهي مع انتهاء الفانكشن.
- **Global Variable:** خارج كل الفانكشنات، متاح للجميع ويعيش طوال عمر البرنامج.
- نفس الاسم ممكن يتكرر داخل وخارج الدوال ولا يحدث تعارض لأن نطاق كل متغير مستقل (يميزهم الـreference/address في الذاكرة).
- لتعديل أو الوصول للمتغير العام من داخل الدالة، استخدم `::اسم_المتغير`.

***

## 🔰 ملاحظات هامة
- السكوب يحدد قدرة أي جزء من الكود على رؤية/تغيير المتغير.
- لا ينصح بالإفراط في استخدام المتغيرات العامة، الأفضل جعل المتغيرات محلية قدر الإمكان لسهولة الصيانة وتقليل الأخطاء.

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
</div>

<a id="english-conversion"></a>
    
[العربية ↗](#arabic-conversion)

# 🗂️ Variable Scope – Local vs Global in C++

## 🎯 Introduction
In this lesson, you’ll learn the core difference between local and global variables—how scope affects the variable’s lifetime and accessibility both inside and outside functions and procedures.

***

## 1️⃣ Local Variables

- Defined **inside a function or procedure** (such as main or any other).
- Accessible **only within the same function or block { }** where defined.
- Destroyed from memory as soon as that function ends.

```cpp
void myFunction1() {
    int x = 500;
    cout << "the value of x inside myFunction1: " << x << endl;
}

int main() {
    int x = 10;
    cout << "the value of x inside main: " << x << endl;
    myFunction1();
    return 0;
}
```
- Here, two variables named x exist: one local to main and the other local to myFunction1. No conflict—each has its independent scope.

***

## 2️⃣ Global Variables

- Defined **outside all functions** (at the top of your file).
- Accessible and modifiable by any function in the program.
- Lives in memory for the entire program run.

```cpp
int x = 300; // global variable

void myFunction1() {
    cout << "the global value of x inside myFunction1: " << ::x << endl; // access global via ::
}

int main() {
    int x = 10;
    cout << "the local value of x inside main: " << x << endl;
    cout << "the global value of x inside main: " << ::x << endl;
    myFunction1();
    return 0;
}
```
- Use `::x` (colon colon) to signal you want to "skip" the current scope and reach the outer global variable.

***

## ⏳ Variable Lifetime
- Local variables exist only for the duration of the function/procedure they're in (destroyed when that ends).
- Global variables exist for the lifetime of the program.

***

## 📝 Quick Recap
- **Local Variable:** Defined inside function, ends with function.
- **Global Variable:** Defined outside functions, exists for whole program.
- Same name can exist inside and outside functions; no problem as scope (and memory address) differ.
- To access/modify a global variable from inside a function, use `::variable_name`.

***

## 🔰 Key Notes
- Scope controls which part of your code can view or change a variable.
- It’s best to avoid global variables where possible—prefer local variables for easier maintenance and to reduce errors.

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

*Anas Chetoui* - `@anaschetoui`
