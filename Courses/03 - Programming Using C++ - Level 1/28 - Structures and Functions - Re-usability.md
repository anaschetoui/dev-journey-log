<div dir="rtl">

<a id="arabic-conversion"></a>
[English ↙](#english-conversion)

# 🧩 الستركتشرز والدوال – إعادة الاستخدام (Reusability) في ++C

## 🎯 المقدمة
هذا الدرس يبين أهمية دمج الستركتشرز (structures) مع الدوال، وكيفية تحقيق مفهوم إعادة استخدام الكود (reusability) لتقليل الأخطاء وتبسيط البرنامج.

***

## 1️⃣ تعريف الستركتشر Structure
- الستركتشر (struct) هو نوع بيانات مركب يجمع أكثر من متغير (عادةً من أنواع مختلفة) تحت اسم واحد.
- مثال: معلومات شخص (اسم أول، اسم أخير، العمر، رقم الهاتف).

<div dir="ltr" align="left">

```cpp
struct strinfo {
    string firstname, lastname; 
    int age; 
    string phone;
};
```
</div>

***

## 2️⃣ تعريف بروسيجرز متخصصة على الستركتشر

### 📥 بروسيجر القراءة (By Reference)
تعرّف بروسيجر لقراءة البيانات وتعبئتها داخل الستركتشر عبر تمرير الستركتشر By Reference ليتم تعديل القيم الأصلية.

<div dir="ltr" align="left">

```cpp
void readInfo(strinfo &info) {
    cout << "Please enter your first name: ";
    cin >> info.firstname;
    cout << "Please enter your last name: ";
    cin >> info.lastname;
    cout << "Please enter your age: ";
    cin >> info.age;
    cout << "Please enter your phone: ";
    cin >> info.phone;
}
```
</div>
> تم تمرير info بمرجع (&) لكي تعدل محتواه الأصلي في main مباشرة.

***

### 📤 بروسيجر الطباعة (By Value)
تعرّف بروسيجر لطباعة البيانات، ويمرر الستركتشر By Value (بدون &)، لأنه لن يعدل عليه بل فقط يقرأ ويطبع البيانات.

<div dir="ltr" align="left">

```cpp
void printInfo(strinfo info) {
    cout << "First name: " << info.firstname << endl;
    cout << "Last name: " << info.lastname << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone: " << info.phone << endl;
}
```
</div>

***

### استخدام الستركتشر مع الدوال في البرنامج الرئيسي
<div dir="ltr" align="left">

```cpp
int main() {
    strinfo person1;
    readInfo(person1);     // يقرأ ويملأ بيانات الشخص
    printInfo(person1);    // يطبع البيانات كما أُدخلت
    return 0;
}
```
</div>
- الآن استخدمت البروسيجرز مع الستركتشر، وجعلت الكود نظيف وقابل لإعادة الاستخدام وجاهز للتعديل السهل.
- إذا أردت التعامل مع أكثر من شخص، عرّف متغيرات جديدة من نوع الستركتشر ونادِ نفس البروسيجرز.

## ✨ ملخص النقاط الأساسية
- ستطيل عمر الكود ويصبح صيانته وتطويره أسهل بمراحل عندما تعتمد الستركتشر + الدوال بتمرير By Reference و By Value.
- إذا أردت التعديل استخدم (&)، إذا لم ترد التعديل أرسل By Value.
- ابقِ كل دالة مسؤولة عن مهمة واحدة فقط (مفهوم تقسيم المسؤوليات).

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

# 🧩 Structures and Functions – Reusability in C++

## 🎯 Introduction
This lesson teaches you how combining structures with functions maximizes code reusability and reduces errors by minimizing repetition.

***

## 1️⃣ What is a Structure?
- A structure (`struct`) is a composite data type that groups different variables under one umbrella.
- Example: A person’s information (first name, last name, age, phone).

```cpp
struct strinfo {
    string firstname, lastname;
    int age;
    string phone;
};
```

***

## 2️⃣ Specialized Procedures for Structures

### 📥 Read Procedure (By Reference)
A procedure reads data into a struct, passed By Reference so that changes affect the original:

```cpp
void readInfo(strinfo &info) {
    cout << "Please enter your first name: ";
    cin >> info.firstname;
    cout << "Please enter your last name: ";
    cin >> info.lastname;
    cout << "Please enter your age: ";
    cin >> info.age;
    cout << "Please enter your phone: ";
    cin >> info.phone;
}
```
> Passing info by reference (&) lets all changes persist in main.

***

### 📤 Print Procedure (By Value)
A procedure prints data from a struct and takes the struct By Value, since it doesn’t modify it:

```cpp
void printInfo(strinfo info) {
    cout << "First name: " << info.firstname << endl;
    cout << "Last name: " << info.lastname << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone: " << info.phone << endl;
}
```

***

### Using Structures and Functions in main
```cpp
int main() {
    strinfo person1;
    readInfo(person1);     // read in the person's data
    printInfo(person1);    // print it
    return 0;
}
```
- Now your code is cleaner, more maintainable, and easily reusable for many persons: just declare new structs and reuse your procedures.

## ✨ Key Points Recap
- Reusability and simplicity skyrocket with structures + functions, using By Reference for modification and By Value for read-only actions.
- Use (&) when you want to modify, By Value when you just need to read.
- Keep every function focused on ONE clearly defined job.

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
