<div dir="rtl">

<a id="arabic-conversion"></a>
[English ↙](#english-conversion)

# 📝 حل مشكلة getline() في C++

## 🎯 المقدمة
أحيانًا عند استخدام `getline()` لقراءة نص يحتوي على فراغات بعد إدخال قيمة عددية بـ`cin`، تظهر مشكلة أن getline يتجاهل قراءة السطر ويأخذ فقط السطر الفارغ (أو كبسة Enter) المدخلة السابقة. في هذا الدرس ستتعلم لماذا تظهر هذه المشكلة وطريقة حلها.

## 🛠️ شرح المشكلة
لنفترض أن لديك برنامج يطلب من المستخدم إدخال رقم، ثم اسم الشخص (قد يحتوي على فراغات)، ثم اسم الدولة:

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    string name;
    string country;
    
    cout << "Please enter employee number: ";
    cin >> number;
    
    cout << "Please enter name: ";
    getline(cin, name); // هنا تحدث المشكلة أحياناً!
    
    cout << "Please enter country: ";
    cin >> country;
    
    cout << "Number: " << number << endl;
    cout << "Name: " << name << endl;
    cout << "Country: " << country << endl;
    return 0;
}
```
</div>

ما يحدث: عندما تدخل رقماً (مثلاً 10) وتضغط Enter، تبقى "كبسة Enter" في الـbuffer. عند استدعاء getline مباشرة بعد cin، يقوم getline بأخذ السطر الفارغ (لأن الـEnter لم تُزال من المدخلات)، وبذلك يتجاهل قراءة الإسم.

## ❌ النتيجة الخاطئة (ما يحدث فعلاً)
- تدخل 10 ثم Enter ← يتم إدخال الرقم بشكل طبيعي.
- عند مطالبتك بكتابة الاسم (name)، مباشرةً يتم تجاوز الخطوة دون أن تتمكن من إدخال الاسم.
- باقي المدخلات تتخربط.

## ✅ الحل: استخدام cin.ignore
لحل هذه المشكلة، يجب عليك أن تتجاهل الـnewline المتبقية في الـbuffer بعد استخدام cin. 
قبل استدعاء getline، أضف السطر التالي:

<div dir="ltr" align="left">

```cpp
cin.ignore(); // يتجاهل \n المتبقي
getline(cin, name); // الآن ستقرأ الاسم بشكل صحيح
```
</div>

## 💡 برنامج بعد الحل:
<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    string name;
    string country;
    
    cout << "Please enter employee number: ";
    cin >> number;
    
    cin.ignore(); // الحل هنا!
    cout << "Please enter name: ";
    getline(cin, name);
    
    cout << "Please enter country: ";
    cin >> country;
    
    cout << "Number: " << number << endl;
    cout << "Name: " << name << endl;
    cout << "Country: " << country << endl;
    return 0;
}
```
</div>

## ✨ ملخص القاعدة
- كلما استخدمت `cin` لقراءة رقم/حرف ثم تحتاج لاستعمال `getline` بعده لقراءة نص (فيه فراغات)، استعمل `cin.ignore();` قبل `getline`.
- هذا السطر يجعل getline يعمل بشكل طبيعي دون مشاكل في تخزين السطر المطلوب.
- هكذا تتجنب اختفاء السطر الأول في البيانات من المستخدم وتكون مدخلاتك مرتبة.

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

# 📝 Solving the getline() Problem in C++

## 🎯 Introduction
Sometimes, when using `getline()` in C++ after inputting a number with `cin`, you find that getline skips the input (or just reads an empty line). This lesson walks you through why that happens, and how to solve it.

## 🛠️ Problem Overview
Suppose you have a program asking the user for a number, then a name (may have spaces), then a country:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    string name;
    string country;
    
    cout << "Please enter employee number: ";
    cin >> number;
    
    cout << "Please enter name: ";
    getline(cin, name); // Here is the problem!
    
    cout << "Please enter country: ";
    cin >> country;
    
    cout << "Number: " << number << endl;
    cout << "Name: " << name << endl;
    cout << "Country: " << country << endl;
    return 0;
}
```

The issue: After entering a number (e.g., 10), pressing Enter leaves the Enter/newline in the input buffer. When getline is called right after cin, getline sees this leftover newline and reads it as an empty string—so your name gets skipped!

## ❌ Wrong result (what happens)
- You input 10, press Enter — number is OK
- For the name, you get skipped and can't type anything
- The rest of the inputs get misaligned

## ✅ Solution: Use cin.ignore
To fix this, you must clear the leftover newline from the input buffer before `getline`:

```cpp
cin.ignore(); // Ignore the leftover newline
getline(cin, name); // Now it reads the name correctly
```

## 💡 Full correct program:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    string name;
    string country;
    
    cout << "Please enter employee number: ";
    cin >> number;
    
    cin.ignore(); // the fix!
    cout << "Please enter name: ";
    getline(cin, name);
    
    cout << "Please enter country: ";
    cin >> country;
    
    cout << "Number: " << number << endl;
    cout << "Name: " << name << endl;
    cout << "Country: " << country << endl;
    return 0;
}
```

## ✨ Key rule
- Whenever you use `cin` to read a number/char then want to use `getline` next, always use `cin.ignore();` before `getline`.
- This keeps your string input (with spaces) working!<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`
