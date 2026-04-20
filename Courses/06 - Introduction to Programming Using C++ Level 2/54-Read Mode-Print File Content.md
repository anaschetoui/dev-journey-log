<a id="arabic"></a>
[English ↙](#english)
# Read Mode: Print File Content
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## وضع القراءة: طباعة محتوى الملف

---

## مقدمة

### 📝 **ما هو Read Mode؟**

Read Mode (`ios::in`) هو وضع يسمح لك بفتح الملف **للقراءة فقط**، ولا يمكنك التعديل على الملف في هذا الوضع.

---

## إنشاء دالة لقراءة الملف

### 📝 **سنقوم بإنشاء دالة تقوم بقراءة محتوى الملف وطباعته:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void printFileContent(string fileName) {
    // code here
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## خطوات قراءة الملف

### 1️⃣ فتح الملف في وضع القراءة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;
MyFile.open(fileName, ios::in);  // فتح الملف للقراءة فقط
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 2️⃣ التحقق من نجاح الفتح

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
if (MyFile.is_open()) {
    // الملف فتح بنجاح
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 3️⃣ قراءة الملف سطراً سطراً باستخدام getline

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
string line;
while (getline(MyFile, line)) {
    cout << line << endl;  // طباعة السطر
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- `getline(MyFile, line)` ← تقرأ سطراً كاملاً من الملف وتخزنه في `line`
- تستمر في القراءة حتى نهاية الملف
- كل سطر يُطبع على الشاشة باستخدام `cout`

### 4️⃣ إغلاق الملف

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
MyFile.close();
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الدالة كاملة

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printFileContent(string fileName) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);  // فتح الملف للقراءة
    
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            cout << line << endl;  // طباعة كل سطر
        }
        MyFile.close();
    }
    else {
        cout << "فشل في فتح الملف" << endl;
    }
}

int main() {
    // استدعاء الدالة لقراءة الملف
    printFileContent("MyFile.txt");
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مثال مع ملف حقيقي

### 📝 **لنفترض أن الملف `MyFile.txt` يحتوي على:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Ali
Lama
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🏃 **عند تشغيل البرنامج:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Ali
Lama
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **إذا قمنا بتعديل الملف وأضفنا أسماء جديدة:**

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

### 🏃 **عند تشغيل البرنامج مجدداً:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Ali
Lama
Fadi
Omar
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مقارنة أوضاع فتح الملف

### 📊 **الملخص:**

| الوضع | الغرض | السلوك |
|-------|-------|--------|
| `ios::out` | الكتابة | يمسح المحتوى القديم ويكتب الجديد |
| `ios::app` | الإلحاق | يضيف في النهاية مع الاحتفاظ بالقديم |
| `ios::in` | القراءة | يقرأ فقط، لا يمكن التعديل |

---

## شرح getline

### 🔍 **ما هي getline؟**

دالة `getline` تقرأ سطراً كاملاً من الملف (حتى تصادف علامة السطر الجديد `\n`).

### 📝 **الصيغة العامة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
getline(file_stream, string_variable);
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **مثال:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
string line;
getline(MyFile, line);  // يقرأ أول سطر
cout << line << endl;   // يطبع "Mohamed"

getline(MyFile, line);  // يقرأ ثاني سطر
cout << line << endl;   // يطبع "Ali"
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **استخدم `ios::in`** ← للقراءة فقط
2. **استخدم `getline` في while loop** ← لقراءة كل الأسطر
3. **لا تنسى إغلاق الملف** ← `close()`
4. **تحقق من فتح الملف** ← `is_open()`

### ✅ **متى تستخدم Read Mode؟**
- عندما تريد عرض محتوى ملف للمستخدم
- عندما تريد قراءة بيانات ومعالجتها
- عندما تحتاج بيانات من ملف دون تغييره

### ⚠️ **ملاحظة:**
في Read Mode، لا يمكنك الكتابة في الملف. إذا حاولت استخدام `<<`، فلن يعمل.

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **Read Mode (`ios::in`)** ← لفتح الملف للقراءة فقط
2. **دالة `getline`** ← لقراءة سطر كامل من الملف
3. **While loop مع getline** ← لقراءة كل أسطر الملف
4. **طباعة المحتوى** ← باستخدام `cout`

### 🎯 **تسلسل العمل:**
1. افتح الملف بـ `ios::in`
2. تأكد من نجاح الفتح
3. اقرأ سطراً باستخدام `getline`
4. استمر في القراءة حتى نهاية الملف
5. أغلق الملف

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Read Mode: Print File Content

---

## Introduction

### 📝 **What is Read Mode?**

Read Mode (`ios::in`) is a mode that allows you to open a file **for reading only**, and you cannot modify the file in this mode.

---

## Creating a Function to Read File

### 📝 **We'll create a function to read and print file content:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void printFileContent(string fileName) {
    // code here
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Steps to Read a File

### 1️⃣ Open File in Read Mode

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;
MyFile.open(fileName, ios::in);  // Open file for reading only
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 2️⃣ Check if File Opened Successfully

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
if (MyFile.is_open()) {
    // File opened successfully
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 3️⃣ Read File Line by Line Using getline

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
string line;
while (getline(MyFile, line)) {
    cout << line << endl;  // Print the line
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 🔍 **Explanation:**
- `getline(MyFile, line)` ← Reads a complete line from file and stores it in `line`
- Continues reading until end of file
- Each line is printed to screen using `cout`

### 4️⃣ Close the File

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
MyFile.close();
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Complete Function

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printFileContent(string fileName) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);  // Open file for reading
    
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            cout << line << endl;  // Print each line
        }
        MyFile.close();
    }
    else {
        cout << "Failed to open file" << endl;
    }
}

int main() {
    // Call function to read file
    printFileContent("MyFile.txt");
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Comparison of File Open Modes

### 📊 **Summary:**

| Mode | Purpose | Behavior |
|------|---------|----------|
| `ios::out` | Writing | Deletes old content and writes new |
| `ios::app` | Appending | Adds at the end while keeping old content |
| `ios::in` | Reading | Reads only, cannot modify |

---

## How getline Works

### 🔍 **What is getline?**

The `getline` function reads a complete line from a file (until it encounters a newline character `\n`).

### 📝 **Syntax:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
getline(file_stream, string_variable);
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📝 **Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
string line;
getline(MyFile, line);  // Reads first line
cout << line << endl;   // Prints "Mohamed"

getline(MyFile, line);  // Reads second line
cout << line << endl;   // Prints "Ali"
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Important Tips

### 💡 **Always Remember:**

1. **Use `ios::in`** ← For reading only
2. **Use `getline` in while loop** ← To read all lines
3. **Don't forget to close file** ← `close()`
4. **Check if file opened** ← `is_open()`

### ✅ **When to Use Read Mode?**
- When you want to display file content to user
- When you want to read and process data
- When you need data from a file without changing it

### ⚠️ **Note:**
In Read Mode, you cannot write to the file. If you try to use `<<`, it won't work.

---

## Summary

### 🔑 **What We Learned Today:**

1. **Read Mode (`ios::in`)** ← To open file for reading only
2. **`getline` function** ← To read a complete line from file
3. **While loop with getline** ← To read all file lines
4. **Print content** ← Using `cout`

### 🎯 **Workflow:**
1. Open file with `ios::in`
2. Check if opened successfully
3. Read a line using `getline`
4. Continue reading until end of file
5. Close the file

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>