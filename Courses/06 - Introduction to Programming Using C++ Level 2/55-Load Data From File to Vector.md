<a id="arabic"></a>
[English ↙](#english)
# Load Data From File to Vector
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## تحميل بيانات من ملف إلى Vector

---

## مقدمة

### 🔍 **لماذا نحتاج لتحميل البيانات إلى Vector؟**

عند التعامل مع الملفات مباشرة، لا يمكننا:
- تعديل سجل معين في الملف
- حذف سجل معين من الملف
- تحديث بيانات محددة

### 💡 **الحل: استخدام Vector كوسيط**

نقوم بتحميل كل البيانات من الملف إلى Vector، ثم نتعامل مع الـ Vector (تعديل، حذف، إضافة)، ثم نعيد كتابة كل البيانات إلى الملف.

---

## خطوات العمل

### 📝 **خطتنا في هذا الدرس:**

1. قراءة محتويات الملف
2. تخزين كل سطر في عنصر من عناصر الـ Vector
3. طباعة محتويات الـ Vector على الشاشة (للتأكد)

---

## الكود الكامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void loadDataFromFileToVector(string fileName, vector<string> &vFileContent) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);  // فتح الملف للقراءة
    
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            vFileContent.push_back(line);  // إضافة السطر إلى الـ Vector
        }
        MyFile.close();
    }
}

int main() {
    vector<string> vFileContent;
    
    // تحميل البيانات من الملف إلى الـ Vector
    loadDataFromFileToVector("MyFile.txt", vFileContent);
    
    // طباعة محتويات الـ Vector
    cout << "File Content:\n";
    for (string &line : vFileContent) {
        cout << line << endl;
    }
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## شرح الكود بالتفصيل

### 1️⃣ تضمين المكتبات اللازمة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>   // للطباعة على الشاشة
#include <fstream>    // للتعامل مع الملفات
#include <vector>     // للـ Vector
#include <string>     // للنصوص
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 2️⃣ تعريف الـ Vector

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<string> vFileContent;  // Vector من نوع string
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 3️⃣ دالة التحميل (loadDataFromFileToVector)

#### 📝 **توقيع الدالة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void loadDataFromFileToVector(string fileName, vector<string> &vFileContent)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح المعاملات:**
- `string fileName` ← اسم الملف المراد قراءته
- `vector<string> &vFileContent` ← الـ Vector الذي سنخزن فيه البيانات (بـ reference للتعديل المباشر)

#### 📝 **فتح الملف:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;
MyFile.open(fileName, ios::in);  // فتح للقراءة فقط
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 📝 **قراءة الأسطر وإضافتها للـ Vector:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
string line;
while (getline(MyFile, line)) {
    vFileContent.push_back(line);  // إضافة السطر إلى الـ Vector
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- `getline(MyFile, line)` ← تقرأ سطراً من الملف
- `push_back(line)` ← تضيف السطر إلى نهاية الـ Vector
- الحلقة تستمر حتى نهاية الملف

---

## مثال توضيحي

### 📝 **لنفترض أن الملف `MyFile.txt` يحتوي على:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Ali
Lama
Fadi
Omar
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🏃 **عند تشغيل البرنامج:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
File Content:
Mohamed
Ali
Lama
Fadi
Omar
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ماذا حدث؟**
- كل سطر من الملف أصبح عنصراً في الـ Vector
- الـ Vector الآن يحتوي على 5 عناصر
- يمكننا التعامل مع هذه العناصر بسهولة

---

## الفرق بين الطباعة المباشرة والتخزين في Vector

### 📊 **مقارنة:**

| الطباعة المباشرة (الدرس السابق) | التخزين في Vector (هذا الدرس) |
|--------------------------------|-------------------------------|
| `cout << line << endl;` | `vFileContent.push_back(line);` |
| يطبع السطر فقط | يخزن السطر للاستخدام لاحقاً |
| لا يمكن التعديل | يمكن التعديل والحذف والإضافة |
| استخدام لمرة واحدة | يمكن إعادة استخدام البيانات |

---

## لماذا استخدمنا Reference (&)؟

### 🔍 **شرح الـ Reference:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void loadDataFromFileToVector(string fileName, vector<string> &vFileContent)
//                                                    ^
//                                                    |
//                                              Reference (&)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### ✅ **بدون Reference:**
- الدالة تأخذ نسخة من الـ Vector
- أي تغييرات داخل الدالة لا تؤثر على الـ Vector الأصلي

### ✅ **مع Reference:**
- الدالة تتعامل مع الـ Vector الأصلي نفسه
- كل `push_back` يعدل الـ Vector الحقيقي في `main`

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **استخدم `ios::in`** ← للقراءة فقط
2. **استخدم `&`** ← لتعديل الـ Vector الأصلي
3. **كل سطر في الملف** ← يصبح عنصراً في الـ Vector
4. **الـ Vector وسيط** ← يسهل التعامل مع البيانات

### ✅ **فوائد هذه الطريقة:**
- يمكنك البحث في البيانات
- يمكنك تعديل أي عنصر
- يمكنك حذف أي عنصر
- يمكنك إضافة عناصر جديدة

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **تحميل بيانات الملف إلى Vector** ← باستخدام `getline` و `push_back`
2. **الـ Vector كوسيط** ← لتسهيل التعامل مع البيانات
3. **الـ Reference (`&`)** ← للتعديل المباشر على الـ Vector
4. **التحضير للدرس القادم** ← حيث سنقوم بتعديل البيانات وإعادة كتابتها

### 🎯 **الدرس القادم:**
سنستخدم هذا الـ Vector لتعديل البيانات (مثل تغيير اسم "Ali") ثم إعادة كتابة كل محتويات الـ Vector إلى الملف، مما يعطينا انطباعاً أننا عدلنا الملف مباشرة.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Load Data From File to Vector

---

## Introduction

### 🔍 **Why Do We Need to Load Data to Vector?**

When dealing directly with files, we cannot:
- Modify a specific record in the file
- Delete a specific record from the file
- Update specific data

### 💡 **Solution: Use Vector as an Intermediate**

We load all data from the file into a Vector, then work with the Vector (modify, delete, add), then rewrite all data back to the file.

---

## Steps

### 📝 **Our Plan in This Lesson:**

1. Read file contents
2. Store each line as an element in the Vector
3. Print Vector contents to screen (to verify)

---

## Complete Code

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void loadDataFromFileToVector(string fileName, vector<string> &vFileContent) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);  // Open file for reading
    
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            vFileContent.push_back(line);  // Add line to Vector
        }
        MyFile.close();
    }
}

int main() {
    vector<string> vFileContent;
    
    // Load data from file to Vector
    loadDataFromFileToVector("MyFile.txt", vFileContent);
    
    // Print Vector contents
    cout << "File Content:\n";
    for (string &line : vFileContent) {
        cout << line << endl;
    }
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Detailed Explanation

### 1️⃣ Include Required Libraries

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>   // for screen output
#include <fstream>    // for file handling
#include <vector>     // for Vector
#include <string>     // for strings
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 2️⃣ Define the Vector

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<string> vFileContent;  // Vector of type string
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 3️⃣ Load Function (loadDataFromFileToVector)

#### 📝 **Function Signature:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void loadDataFromFileToVector(string fileName, vector<string> &vFileContent)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 🔍 **Parameters Explanation:**
- `string fileName` ← Name of file to read
- `vector<string> &vFileContent` ← Vector to store data (by reference for direct modification)

#### 📝 **Opening the File:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;
MyFile.open(fileName, ios::in);  // Open for reading only
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 📝 **Reading Lines and Adding to Vector:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
string line;
while (getline(MyFile, line)) {
    vFileContent.push_back(line);  // Add line to Vector
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 🔍 **Explanation:**
- `getline(MyFile, line)` ← Reads a line from file
- `push_back(line)` ← Adds the line to the end of Vector
- Loop continues until end of file

---

## Illustrative Example

### 📝 **Assume `MyFile.txt` Contains:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Ali
Lama
Fadi
Omar
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🏃 **When Running the Program:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
File Content:
Mohamed
Ali
Lama
Fadi
Omar
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **What Happened?**
- Each line from file became an element in the Vector
- Vector now contains 5 elements
- We can easily work with these elements

---

## Why Use Reference (&)?

### 🔍 **Reference Explanation:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void loadDataFromFileToVector(string fileName, vector<string> &vFileContent)
//                                                    ^
//                                                    |
//                                              Reference (&)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### ✅ **Without Reference:**
- Function takes a copy of the Vector
- Changes inside function don't affect original Vector

### ✅ **With Reference:**
- Function works with the original Vector
- Every `push_back` modifies the actual Vector in `main`

---

## Summary

### 🔑 **What We Learned Today:**

1. **Loading file data to Vector** ← Using `getline` and `push_back`
2. **Vector as intermediate** ← To simplify data manipulation
3. **Reference (`&`)** ← For direct modification of the Vector
4. **Preparation for next lesson** ← Where we'll modify data and rewrite to file

### 🎯 **Next Lesson:**
We'll use this Vector to modify data (like changing "Ali") then rewrite all Vector contents back to the file, giving us the impression that we directly modified the file.

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>