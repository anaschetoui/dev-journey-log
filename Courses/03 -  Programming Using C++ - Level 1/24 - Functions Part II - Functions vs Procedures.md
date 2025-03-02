<div dir="rtl">

<a id="arabic-conversion"></a>
    
[English ↙](#english-conversion)

# 🧩 الفانكشنز (الدوال) والبروسيجرز في C++ – الجزء الثاني

## 🎯 المقدمة
في هذا الجزء من الدرس تتعلم الفرق العملي بين البروسيجر (دالة لا ترجع قيمة) والفانكشن (دالة تُرجع قيمة) عبر أمثلة برمجية توضح الفكرة بدقة كما وضّحها الشرح في الفيديو.

## ⚡ الفرق الجوهري بين البروسيجر والفانكشن
- **البروسيجر (Procedure):** دالة يتم تعريفها باستخدام الكلمة void، لا ترجع قيمة إطلاقًا. فقط تنفذ أوامر عند استدعائها.
- **الفانكشن (Function):** دالة تستطيع تحديد نوع القيمة التي تُرجعها (string, int, float, ...)، وتستخدم جملة return لإرجاع القيمة المطلوب للبرنامج عند الاستدعاء.

## 📝 أمثلة عملية من المحاضرة

### 1. بروسيجر (void function)
<div dir="ltr" align="left">

```cpp
void myFunction() {
    cout << "This is my first procedure, it got executed :-)" << endl;
}
```
</div>
- عند استدعاء `myFunction();` من الدالة الرئيسية **main**، سيتم تنفيذ الجملة داخلها، ولن تُرجع أي قيمة.

### 2. فانكشن تُرجع قيمة (Returning Value Function)
<div dir="ltr" align="left">

```cpp
string myFunction2() {
    return "This is my first returning value function, this is the value.";
}
```
</div>
- لاحظ أن نوع الدالة هنا `string`، ويجب استخدام جملة `return` تليها القيمة التي تريد إرجاعها.
- عند الاستدعاء في **main** يمكنك طباعة نتيجة الفانكشن أو التعامل معها كيفما تريد:

<div dir="ltr" align="left">

```cpp
myFunction(); // يطبع الرسالة الأولى
cout << myFunction2() << endl; // يطبع الناتج المُعاد من الفانكشن الثانية
```
</div>

### 3. أمثلة إضافية من الشرح:
- يمكنك جعل الفانكشن تُعيد أي نوع بيانات (int, float...)
- استخدام جملة return يوقف تنفيذ الدالة مباشرة ويُعيد القيمة.

## 🟢 ملاحظات 
- كل دالة عليك أن تعطيها اسماً واضحاً.
- استخدام void لمن لا يُرجع قيمة، واستخدم النوع المناسب للفانكشن التي ترجع قيمة.
- يمكنك استدعاء الدالة أكثر من مرة، في أي مكان بالحاجة.
- الفرق العملي الأساسي: البروسيجر فقط ينفذ أوامر بلا قيمة مُعادة، الفانكشن يسمح لك بكتابة جمل برمجية ثم return القيمة التي تريد استغلالها بعد ذلك.
- تستطيع تمرير نتيجة الفانكشن مباشرة لدوال أخرى مثلما كنت تفعل مع الدوال الرياضية `floor(myFunction3())`.

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

</div><a id="english-conversion"></a>

[العربية ↗](#arabic-conversion)

# 🧩 Functions vs Procedures in C++ – Part II

## 🎯 Introduction
In this lesson, you learn the practical difference between procedures (functions that do not return a value) and functions (that DO return a value), using real C++ code just like in the video explanation.

## ⚡ Core Difference: Procedure vs Function
- **Procedure:** Defined with `void`; never returns a value. Just runs its code when you call it.
- **Function:** You set the return type (string, int, float, ...), and use `return` to send a value back when called.

## 📝 Practical Examples (from the lesson)

### 1. Procedure (void function)
```cpp
void myFunction() {
    cout << "This is my first procedure, it got executed :-)" << endl;
}
```
Call `myFunction();` in `main` and it will run the printed statement but return nothing.

### 2. Value-returning Function
```cpp
string myFunction2() {
    return "This is my first returning value function, this is the value.";
}
```
- Note the type is `string`; use `return` with the value you want to pass back.
- In `main`, you can print its result or use it as a value:
```cpp
myFunction(); // prints first message
cout << myFunction2() << endl; // prints the returned value from the second function
```

### 3. Further illustrations from the lecture:
- You can make functions return other types like int, float, etc.
- `return` exits the function immediately and sends the value back.

## 🟢 Key Notes 
- Always give functions meaningful names.
- Use `void` for procedures (no value returned); use the appropriate type for value functions.
- You can call functions as many times as needed.
- The core difference: procedure only executes code, function returns a value you can further use.
- You can even send your function's result to other functions (such as `floor(myFunction3())`).

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
