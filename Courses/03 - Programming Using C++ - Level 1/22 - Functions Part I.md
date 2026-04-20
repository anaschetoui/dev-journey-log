<div dir="rtl">

<a id="arabic-conversion"></a>
[English ↙](#english-conversion)

# 🧩 الفانكشنز (الدوال)  في ++C

## 🎯 المقدمة
الدوال (Functions) والبروسيجرز من أهم مفاهيم البرمجة التي تجعل الكود منظم وقابل لإعادة الاستخدام. في هذا الدرس ستتعلم أن كل حياتك مع البرمجة ستعتمد على الفانكشنز – بداية من المشاريع الصغيرة وحتى البرامج الضخمة.

## 💡 المفاهيم الأساسية
- **الفانكشن/البروسيجر**: هو بلوك كود أو برنامج صغير باسم خاص. لا يتم تنفيذه إلا عند استدعائه بشكل صريح في الكود.
- يمكن للفانكشن/البروسيجر أن يعود بقيمة (return value) أو لا. إذا لم يعد بقيمة نستخدم `void`.
- مثال على دوال سبق واستخدمتها: دوال الرياضيات مثل `round()`, `floor()`, `sqrt()`, `ceil()` – كلها دوال جاهزة تنفذ مهامًا محددة بمجرد تمرير الباراميتر.
- حياتك البرمجية بعد هذه الدروس ستعتمد على الدوال: "أي مشروع، أي برنامج كبير أو صغير سيُقسَّم إلى دوال صغيرة".

## ⚡ أمثلة عملية من المحاضرة
### مثال توضيحي: دالة بسيطة من نوع void
<div dir="ltr" align="left">

```cpp
void myFunction() {
    cout << "this is my first function, it got executed :)" << endl;
}

int main() {
    myFunction(); // استدعاء الفانكشن
    return 0;
}
```
</div>
*لاحظ*: إذا لم تستدعِ الدالة (myFunction) في main لن يُنفذ الكود داخلها.

### مثال: استدعاء الفانكشن أكثر من مرة
<div dir="ltr" align="left">

```cpp
int main() {
    myFunction();
    myFunction();
    myFunction();
    return 0;
}
```
</div>
- كل استدعاء يعني تنفيذ الكود الموجود داخل الدالة من جديد.

### مثال على بروسيجرات متعددة وأهميتها
<div dir="ltr" align="left">

```cpp
void stars() {
    cout << "*****" << endl;
}

void printMessage() {
    cout << "I love programming!" << endl;
}

int main() {
    myFunction();
    stars();
    printMessage();
    return 0;
}
```
</div>
- بإمكانك تعريف أكثر من دالة (procedure) ولكل واحدة وظيفة صغيرة مستقلة.

## 🎯 أهم أفكار الجزء الأول من الدرس:
- الفانكشن هو وحدة كود (برنامج صغير) ضمن البرنامج الرئيسي.
- استدعاء الفانكشن يتم حسب الحاجة وليس تلقائيًا.
- الفانكشن الصغير المبسط = سهولة في قراءة الكود + سهولة في الفحص والصيانة.
- سمِّ كل فنكشن باسم واضح يدل على وظيفته.

## ❗ملاحظات وتحذيرات
- الدالة التي لا تُستدعى لن تنفذ مهما كان محتواها.
- وجود الأقواس عند الاستدعاء ضروري حتى لو لم تكن هناك معاملات.
- إذا أردت فقط تنفيذ إجراء دون استرجاع قيمة استخدم void.
- تابع بقية دروس الفانكشنز لتتعلم الدوال التي تُعيد قيمة (return value).

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

<br><a id="english-conversion"></a>
    
[العربية ↗](#arabic-conversion)

# 🧩 Functions & Procedures in C++

## 🎯 Introduction
Functions and procedures are fundamental concepts in C++ programming. After this lesson, almost all of your programming projects—large or small—will depend on using functions.

## 💡 Core Concepts
- **Function/Procedure**: A block of code with a dedicated name. It only runs when you explicitly call it in your code.
- A function/procedure may or may not return a value. If it doesn't, use the `void` type in C++.
- Examples you've already used: math functions like `round()`, `floor()`, `sqrt()`, `ceil()`—ready-made functions built to do specific jobs. You just pass a value (parameter) and instantly get the result.
- From now on, build every program as small clear functions—this is core to being a good programmer.

## ⚡ Practical Examples from the Lesson
### Simple void function
```cpp
void myFunction() {
    cout << "this is my first function, it got executed :)" << endl;
}

int main() {
    myFunction(); // calling the function
    return 0;
}
```
*Note*: If you don't call `myFunction()` inside main, its code will never run.

### Calling a function multiple times
```cpp
int main() {
    myFunction();
    myFunction();
    myFunction();
    return 0;
}
```
- Each call triggers all code inside the function again.

### Multiple procedures for different jobs
```cpp
void stars() {
    cout << "*****" << endl;
}

void printMessage() {
    cout << "I love programming!" << endl;
}

int main() {
    myFunction();
    stars();
    printMessage();
    return 0;
}
```
- Define more than one procedure: each should do one small job, called as needed.

## 🎯 Key Takeaways from Part 1
- A function is a small unit (mini-program) inside your main program.
- Only runs when you explicitly call it.
- Small, focused functions = easier-to-read code and maintenance.
- Always give clear, meaningful function names.

## ❗Important Reminders
- A function you never call will never run, no matter its content.
- Always use parentheses when calling, even with no parameters.
- For doing an action without returning a value use void.
- Later lessons will teach functions that return values.
- Use "void myFunction()" as your primary structural example for now.

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