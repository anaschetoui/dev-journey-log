<a id="arabic"></a>
[English ↙](#english)
# Delete Record From File
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## حذف سجل من ملف

---

## مقدمة

### 🔍 **المشكلة:**
الـ fstream لا يوفر طريقة مباشرة لحذف أو تعديل سجل معين في الملف. يمكنه فقط:
- الكتابة (write) ← مسح كل شيء وكتابة جديد
- الإلحاق (append) ← إضافة في النهاية

### 💡 **الحل: استخدام Vector كوسيط**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الملف → [Load] → Vector → [حذف السجل] → Vector → [Save] → الملف
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## خطوات حذف سجل من ملف

### 📝 **الخطوات بالتفصيل:**

1. **Load** ← تحميل كل بيانات الملف إلى Vector
2. **Search** ← البحث عن السجل المطلوب حذفه
3. **Delete** ← جعل قيمة هذا السجل `""` (فارغ)
4. **Save** ← حفظ الـ Vector في الملف (مع تجاهل الأسطر الفارغة)

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

// دالة طباعة محتوى الملف (من درس سابق)
void printFileContent(string fileName) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);
    
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            cout << line << endl;
        }
        MyFile.close();
    }
}

// دالة تحميل البيانات من ملف إلى Vector (من درس سابق)
void loadDataFromFileToVector(string fileName, vector<string> &vFileContent) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);
    
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            vFileContent.push_back(line);
        }
        MyFile.close();
    }
}

// دالة حفظ Vector إلى ملف (من درس سابق)
void saveVectorToFile(string fileName, vector<string> vFileContent) {
    fstream MyFile;
    MyFile.open(fileName, ios::out);
    
    if (MyFile.is_open()) {
        for (string &line : vFileContent) {
            if (line != "") {
                MyFile << line << endl;
            }
        }
        MyFile.close();
    }
}

// دالة حذف سجل من ملف
void deleteRecordFromFile(string fileName, string record) {
    // 1. تحميل البيانات من الملف إلى Vector
    vector<string> vFileContent;
    loadDataFromFileToVector(fileName, vFileContent);
    
    // 2. البحث عن السجل المطلوب وجعله فارغاً
    for (string &line : vFileContent) {
        if (line == record) {
            line = "";  // جعل السطر فارغاً
        }
    }
    
    // 3. حفظ الـ Vector في الملف (مع تجاهل الأسطر الفارغة)
    saveVectorToFile(fileName, vFileContent);
}

int main() {
    cout << "File content before delete:\n";
    printFileContent("MyFile.txt");
    
    // حذف كل السجلات التي تحتوي على "Ali"
    deleteRecordFromFile("MyFile.txt", "Ali");
    
    cout << "\nFile content after delete:\n";
    printFileContent("MyFile.txt");
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## شرح الكود بالتفصيل

### 1️⃣ الدوال المساعدة (من الدروس السابقة)

#### 📝 **printFileContent**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void printFileContent(string fileName)  // طباعة محتوى الملف
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 📝 **loadDataFromFileToVector**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void loadDataFromFileToVector(string fileName, vector<string> &vFileContent)  // تحميل من ملف إلى Vector
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 📝 **saveVectorToFile**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void saveVectorToFile(string fileName, vector<string> vFileContent)  // حفظ Vector إلى ملف
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 2️⃣ الدالة الجديدة: deleteRecordFromFile

#### 📝 **التعريف:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void deleteRecordFromFile(string fileName, string record)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح المعاملات:**
- `fileName` ← اسم الملف المراد الحذف منه
- `record` ← النص المراد حذفه (مثل "Ali")

#### 📝 **الخطوة 1: تحميل البيانات**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<string> vFileContent;
loadDataFromFileToVector(fileName, vFileContent);
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 📝 **الخطوة 2: البحث عن السجل وجعله فارغاً**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
for (string &line : vFileContent) {
    if (line == record) {
        line = "";  // جعل السطر فارغاً
    }
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **ملاحظة:**
- استخدمنا Reference (`&`) لأننا نعدل على الـ Vector
- البحث Case Sensitive (يفرق بين Ali و ali)

#### 📝 **الخطوة 3: حفظ الـ Vector في الملف**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
saveVectorToFile(fileName, vFileContent);
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **لماذا تعمل هذه الطريقة؟**
- دالة `saveVectorToFile` تكتب فقط الأسطر غير الفارغة
- الأسطر التي جعلناها `""` (فارغة) لن تُكتب في الملف
- النتيجة: اختفاء السجلات المطلوبة من الملف

---

## مثال توضيحي

### 📝 **لنفترض أن الملف `MyFile.txt` يحتوي على:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Ali
Maher
Fadi
Shadi
Lama
Ali
Mohamed
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🏃 **بعد تنفيذ `deleteRecordFromFile("MyFile.txt", "Ali")`:**

#### 📝 **الـ Vector قبل الحفظ:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
["", "Maher", "Fadi", "Shadi", "Lama", "", "Mohamed"]
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 📝 **الملف بعد الحفظ:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Maher
Fadi
Shadi
Lama
Mohamed
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### ✅ **تم حذف كل "Ali" بنجاح!**

---

## لماذا هذه الطريقة فعالة؟

### 🎯 **مميزات استخدام Vector كوسيط:**

1. **سهولة البحث** ← يمكن استخدام أي خوارزمية بحث
2. **سهولة التعديل** ← يمكن تغيير أي عنصر ببساطة
3. **سهولة الحذف** ← فقط نجعل العنصر فارغاً
4. **التحكم الكامل** ← نتحكم في كل سطر على حدة

### 💡 **تذكير بالدروس السابقة:**

| الدرس | الوظيفة |
|-------|---------|
| Load Data From File to Vector | تحميل الملف → Vector |
| Save Vector to File | حفظ Vector → ملف |
| Delete Record From File | الجمع بينهما للحذف |

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **استخدم Reference (`&`)** ← عند التعديل على الـ Vector
2. **تحقق من وجود السجل** ← قد ترغب في إظهار رسالة إذا لم يوجد
3. **Case Sensitive** ← البحث يفرق بين الأحرف الكبيرة والصغيرة
4. **احذر من المسافات** ← "Ali" تختلف عن "Ali "

### ✅ **تطويرات ممكنة:**
- حذف جميع السجلات المطابقة
- حذف أول سجل فقط
- إضافة تأكيد قبل الحذف
- إظهار عدد السجلات المحذوفة

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **لا يمكن حذف سجل مباشرة من ملف** ← لكن يمكن باستخدام Vector
2. **الخطوات** ← Load → Search & Make Empty → Save
3. **الاستفادة من الدروس السابقة** ← جمعنا Load و Save لتحقيق الحذف
4. **الـ Vector وسيط قوي** ← يتيح لنا التحكم الكامل بالبيانات

### 🎯 **الدرس القادم:**
سنقوم بتعديل سجل (تغيير "Ali" إلى "Omar") بنفس الطريقة:
- Load → Vector
- تعديل القيمة
- Save → File

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Delete Record From File

---

## Introduction

### 🔍 **The Problem:**
fstream doesn't provide a direct way to delete or modify a specific record in a file. It can only:
- Write → Delete everything and write new
- Append → Add at the end

### 💡 **Solution: Use Vector as an Intermediate**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
File → [Load] → Vector → [Delete Record] → Vector → [Save] → File
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Steps to Delete a Record from a File

### 📝 **Detailed Steps:**

1. **Load** ← Load all file data into Vector
2. **Search** ← Find the record to delete
3. **Delete** ← Set this record to `""` (empty)
4. **Save** ← Save Vector to file (ignoring empty lines)

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

// Function to print file content (from previous lesson)
void printFileContent(string fileName) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);
    
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            cout << line << endl;
        }
        MyFile.close();
    }
}

// Function to load data from file to Vector (from previous lesson)
void loadDataFromFileToVector(string fileName, vector<string> &vFileContent) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);
    
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            vFileContent.push_back(line);
        }
        MyFile.close();
    }
}

// Function to save Vector to file (from previous lesson)
void saveVectorToFile(string fileName, vector<string> vFileContent) {
    fstream MyFile;
    MyFile.open(fileName, ios::out);
    
    if (MyFile.is_open()) {
        for (string &line : vFileContent) {
            if (line != "") {
                MyFile << line << endl;
            }
        }
        MyFile.close();
    }
}

// Function to delete a record from file
void deleteRecordFromFile(string fileName, string record) {
    // 1. Load data from file to Vector
    vector<string> vFileContent;
    loadDataFromFileToVector(fileName, vFileContent);
    
    // 2. Search for the record and make it empty
    for (string &line : vFileContent) {
        if (line == record) {
            line = "";  // Make the line empty
        }
    }
    
    // 3. Save Vector to file (ignoring empty lines)
    saveVectorToFile(fileName, vFileContent);
}

int main() {
    cout << "File content before delete:\n";
    printFileContent("MyFile.txt");
    
    // Delete all records containing "Ali"
    deleteRecordFromFile("MyFile.txt", "Ali");
    
    cout << "\nFile content after delete:\n";
    printFileContent("MyFile.txt");
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Why This Method Works?

### 🎯 **Advantages of Using Vector as Intermediate:**

1. **Easy search** ← Can use any search algorithm
2. **Easy modification** ← Can change any element simply
3. **Easy deletion** ← Just make element empty
4. **Full control** ← Control each line individually

### 💡 **Recap of Previous Lessons:**

| Lesson | Function |
|-------|---------|
| Load Data From File to Vector | File → Vector |
| Save Vector to File | Vector → File |
| Delete Record From File | Combining both for deletion |

---

## Important Tips

### 💡 **Always Remember:**

1. **Use Reference (`&`)** ← When modifying the Vector
2. **Check if record exists** ← You might want to show message if not found
3. **Case Sensitive** ← Search distinguishes uppercase/lowercase
4. **Beware of spaces** ← "Ali" is different from "Ali "

### ✅ **Possible Enhancements:**
- Delete all matching records
- Delete only first record
- Add confirmation before deletion
- Show number of deleted records

---

## Summary

### 🔑 **What We Learned Today:**

1. **Cannot delete record directly from file** ← But can using Vector
2. **Steps** ← Load → Search & Make Empty → Save
3. **Using previous lessons** ← Combined Load and Save to achieve deletion
4. **Vector as powerful intermediate** ← Gives full control over data

### 🎯 **Next Lesson:**
We'll modify a record (change "Ali" to "Omar") using the same method:
- Load → Vector
- Modify value
- Save → File

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>