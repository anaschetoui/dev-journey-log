<a id="arabic-conversion"></a>
[English ↙](#english-conversion)

<div dir="rtl">    

# 🧵 التعامل مع النصوص (Strings) في C++

## 🎯 المقدمة
النصوص أو الـStrings هي نوع بيانات أساسي يُستخدم لتخزين سلسلة من الأحرف في البرمجة. في هذا الدرس، سنتعرف على ماهية الـstring، كيف يتم التعامل معه، وبعض المشاكل الشائعة وطرق حلها في لغة ++C.

## 💡 ما هو الـString؟
- الـString متغير يُخزن مجموعة متسلسلة من الأحرف (characters).
- يختلف عن الـchar الذي يُخزن حرفًا واحدًا فقط.
- عملياً: الـstring هو **مصوفة (Array) من الأحرف** أو كما يُقال بالإنجليزية: `array of characters`.
- العَدّ في المصوفة يبدأ من الصفر (index starts at 0).

## ⚡ أهم الخواص والاستخدامات

### 1. تعريف وإعطاء قيمة لسلسلة نصية
<div dir="ltr" align="left">

```cpp
#include <string>
#include <iostream>
using namespace std;
int main() {
    string mystring = "abcdefghijklmnopqrstuvwxyz";
    cout << mystring << endl;
    return 0;
}
```
</div>
- هنا المتغير `mystring` يحتوي على الأحرف الأبجدية الإنجليزية كلها.

### 2. معرفة طول السلسلة (length)
خاصية `length()` تعطي عدد الأحرف:
<div dir="ltr" align="left">

```cpp
cout << mystring.length() << endl; // النتيجة: 26
```
</div>

### 3. الوصول إلى حرف حسب موقعه (index)
<div dir="ltr" align="left">

```cpp
cout << mystring[2] << endl; // 'c'
cout << mystring[0] << endl; // 'a'
```
</div>
- الترقيم يبدأ من الصفر.

### 4. جمع النصوص (Concatenation)
<div dir="ltr" align="left">

```cpp
string s1 = "10";
string s2 = "20";
string result = s1 + s2;
cout << result << endl; // "1020"
```
</div>
- هنا يتم لصق النصوص وليس جمعها رياضيًا.

### 5. تحويل النص إلى عدد لجمع حقيقي
<div dir="ltr" align="left">

```cpp
string s1 = "10";
string s2 = "20";
int sum = stoi(s1) + stoi(s2);
cout << sum << endl; // 30
```
</div>
- استخدم الدوال مثل `stoi()` لتحويل النصوص إلى أرقام.

## ⚠️ مشكلة القراءة بـ cin مع الفراغات
عند استخدام cin لقراءة نص يحتوي على فراغات، سيتم حفظ الكلمة الأولى فقط!
<div dir="ltr" align="left">

```cpp
string fullname;
cin >> fullname;
cout << fullname << endl;
// إدخال: محمد أبو هدهود
// إخراج: محمد
```
</div>

### 🟢 الحل: استخدم getline لقراءة السطر كاملًا
<div dir="ltr" align="left">

```cpp
string fullname;
getline(cin, fullname);
cout << fullname << endl;
// إدخال: محمد أبو هدهود
// إخراج: محمد أبو هدهود
```
</div>

## 🧑‍💻 تذكيرات هامة
- استخدم `length()` لمعرفة عدد الأحرف.
- اجمع النصوص بـ `+`، وليس للعمليات العددية.
- ابدأ العد من صفر عند استخدام الفهارس.
- استخدم دوال التحويل المناسبة لتحويل النصوص لأرقام.
- استخدم getline لقراءة النصوص التي تحتوي على فراغات.

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

# 🔄 Working with Strings in C++

## 🎯 Introduction
Strings are vital in C++. This lesson will help you understand what a string is, how to work with them, and how to solve common issues in C++.

## 💡 What is a String?
- A string stores a sequence of characters.
- `char` stores a single character, but a string is an *array of characters*.
- Indexing (position in array) starts from 0.

## ⚡ Key Usage and Features

### 1. Declaring and Assigning a String
```cpp
#include <string>
#include <iostream>
using namespace std;
int main() {
    string mystring = "abcdefghijklmnopqrstuvwxyz";
    cout << mystring << endl;
    return 0;
}
```
- Here, `mystring` contains all the letters of the English alphabet.

### 2. Get String Length
Use the `length()` function:
```cpp
cout << mystring.length() << endl; // Output: 26
```

### 3. Access a Character by Index
```cpp
cout << mystring[2] << endl; // prints 'c'
cout << mystring[0] << endl; // prints 'a'
```
- Indexing starts from zero.

### 4. Concatenation (Joining Strings)
```cpp
string s1 = "10";
string s2 = "20";
string result = s1 + s2;
cout << result << endl; // "1020"
```
- This is not adding numbers, it's string joining.

### 5. Convert String to Integer for Numeric Addition
```cpp
string s1 = "10";
string s2 = "20";
int sum = stoi(s1) + stoi(s2);
cout << sum << endl; // 30
```
- Use conversion functions like `stoi()` if you want numeric calculation.

## ⚠️ Problem: cin with Spaces Reads Only the First Word
```cpp
string fullname;
cin >> fullname;
cout << fullname << endl;
// Input: Mohamed Abuhaddoud
// Output: Mohamed
```

### 🟢 Solution: Use getline to Read the Full Line
```cpp
string fullname;
getline(cin, fullname);
cout << fullname << endl;
// Input: Mohamed Abuhaddoud
// Output: Mohamed Abuhaddoud
```

## 🧑‍💻 Key Reminders
- Use `length()` to get length.
- `+` joins strings (not numbers).
- Use conversion functions such as `stoi()` for string-to-number.
- Always index from 0.
- Use getline if you expect spaces in the input.

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

