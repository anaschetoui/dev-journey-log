<a id="arabic"></a>
[English ↙](#english)
# Update Record In File
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## تحديث سجل في ملف

---

## مقدمة

### 🔍 **الفكرة الأساسية:**

نفس فكرة حذف سجل، لكن بدلاً من جعل السجل فارغاً (`""`)، نقوم بتغيير قيمته إلى القيمة الجديدة.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
الملف → [Load] → Vector → [تحديث السجل] → Vector → [Save] → الملف
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## خطوات تحديث سجل في ملف

### 📝 **الخطوات بالتفصيل:**

1. **Load** ← تحميل كل بيانات الملف إلى Vector
2. **Search** ← البحث عن السجل المطلوب تحديثه
3. **Update** ← تغيير قيمته إلى القيمة الجديدة
4. **Save** ← حفظ الـ Vector في الملف (كتابة فوق القديم)

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

// دالة تحديث سجل في ملف
void updateRecordInFile(string fileName, string record, string newRecord) {
    // 1. تحميل البيانات من الملف إلى Vector
    vector<string> vFileContent;
    loadDataFromFileToVector(fileName, vFileContent);
    
    // 2. البحث عن السجل المطلوب وتحديثه
    for (string &line : vFileContent) {
        if (line == record) {
            line = newRecord;  // تغيير القيمة إلى القيمة الجديدة
        }
    }
    
    // 3. حفظ الـ Vector في الملف (كتابة فوق القديم)
    saveVectorToFile(fileName, vFileContent);
}

int main() {
    cout << "File content before update:\n";
    printFileContent("MyFile.txt");
    
    // تحديث كل "Ali" إلى "Omar"
    updateRecordInFile("MyFile.txt", "Ali", "Omar");
    
    cout << "\nFile content after update:\n";
    printFileContent("MyFile.txt");
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## شرح الدالة الجديدة: updateRecordInFile

### 📝 **التعريف:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void updateRecordInFile(string fileName, string record, string newRecord)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح المعاملات:**
- `fileName` ← اسم الملف المراد التحديث فيه
- `record` ← النص المراد البحث عنه (مثل "Ali")
- `newRecord` ← النص الجديد (مثل "Omar")

#### 📝 **الخطوة 1: تحميل البيانات**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
vector<string> vFileContent;
loadDataFromFileToVector(fileName, vFileContent);
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 📝 **الخطوة 2: البحث عن السجل وتحديثه**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
for (string &line : vFileContent) {
    if (line == record) {
        line = newRecord;  // تغيير القيمة
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

### 🏃 **بعد تنفيذ `updateRecordInFile("MyFile.txt", "Ali", "Omar")`:**

#### 📝 **الـ Vector بعد التحديث:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
["Omar", "Maher", "Fadi", "Shadi", "Lama", "Omar", "Mohamed"]
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 📝 **الملف بعد الحفظ:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Omar
Maher
Fadi
Shadi
Lama
Omar
Mohamed
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### ✅ **تم تحديث كل "Ali" إلى "Omar" بنجاح!**

---

## مقارنة بين Delete و Update

### 📊 **الفرق بين الدالتين:**

| الخاصية | Delete Record | Update Record |
|---------|---------------|---------------|
| **الهدف** | حذف السجل | تغيير قيمة السجل |
| **الإجراء** | `line = "";` | `line = newRecord;` |
| **النتيجة** | السجل يختفي | السجل يتغير |
| **الأسطر الفارغة** | تُتجاهل عند الحفظ | لا توجد أسطر فارغة |

---

## لماذا هذه الطريقة فعالة؟

### 🎯 **مميزات استخدام Vector كوسيط:**

1. **سهولة البحث** ← يمكن استخدام أي خوارزمية بحث
2. **سهولة التحديث** ← يمكن تغيير أي عنصر ببساطة
3. **التحكم الكامل** ← نتحكم في كل سطر على حدة
4. **إمكانية التحديث المتعدد** ← يمكن تحديث كل السجلات المطابقة

### 💡 **تذكير بالدروس السابقة:**

| الدرس | الوظيفة |
|-------|---------|
| Load Data From File to Vector | تحميل الملف → Vector |
| Save Vector to File | حفظ Vector → ملف |
| Update Record In File | الجمع بينهما للتحديث |

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **استخدم Reference (`&`)** ← عند التعديل على الـ Vector
2. **تحقق من وجود السجل** ← قد ترغب في إظهار رسالة إذا لم يوجد
3. **Case Sensitive** ← البحث يفرق بين الأحرف الكبيرة والصغيرة
4. **الفرق بين Delete و Update** ← Delete يجعل السطر فارغاً، Update يغير القيمة

### ✅ **تطويرات ممكنة:**
- تحديث أول سجل فقط
- إضافة تأكيد قبل التحديث
- إظهار عدد السجلات المحدثة
- البحث باستخدام جزء من النص (وليس التطابق الكامل)

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **تحديث سجل في ملف** ← باستخدام Vector كوسيط
2. **الخطوات** ← Load → Search & Update → Save
3. **نفس فكرة Delete لكن مع تغيير القيمة** ← ليس جعلها فارغة
4. **الاستفادة من الدروس السابقة** ← جمعنا Load و Save لتحقيق التحديث

### 🎯 **الآن تستطيع:**
- ✅ حذف سجل من ملف
- ✅ تحديث سجل في ملف
- ✅ إضافة سجلات جديدة
- ✅ قراءة وعرض محتويات الملف

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Update Record In File

---

## Introduction

### 🔍 **Basic Idea:**

Same idea as deleting a record, but instead of making the record empty (`""`), we change its value to the new value.

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
File → [Load] → Vector → [Update Record] → Vector → [Save] → File
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Steps to Update a Record in a File

### 📝 **Detailed Steps:**

1. **Load** ← Load all file data into Vector
2. **Search** ← Find the record to update
3. **Update** ← Change its value to the new value
4. **Save** ← Save Vector to file (overwrite old)

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

// Function to update a record in file
void updateRecordInFile(string fileName, string record, string newRecord) {
    // 1. Load data from file to Vector
    vector<string> vFileContent;
    loadDataFromFileToVector(fileName, vFileContent);
    
    // 2. Search for the record and update it
    for (string &line : vFileContent) {
        if (line == record) {
            line = newRecord;  // Change to new value
        }
    }
    
    // 3. Save Vector to file (overwrite old)
    saveVectorToFile(fileName, vFileContent);
}

int main() {
    cout << "File content before update:\n";
    printFileContent("MyFile.txt");
    
    // Update all "Ali" to "Omar"
    updateRecordInFile("MyFile.txt", "Ali", "Omar");
    
    cout << "\nFile content after update:\n";
    printFileContent("MyFile.txt");
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Comparison Between Delete and Update

### 📊 **Difference Between the Two Functions:**

| Property | Delete Record | Update Record |
|---------|---------------|---------------|
| **Purpose** | Delete the record | Change record value |
| **Action** | `line = "";` | `line = newRecord;` |
| **Result** | Record disappears | Record changes |
| **Empty lines** | Ignored when saving | No empty lines |

---

## Why This Method Works?

### 🎯 **Advantages of Using Vector as Intermediate:**

1. **Easy search** ← Can use any search algorithm
2. **Easy update** ← Can change any element simply
3. **Full control** ← Control each line individually
4. **Multiple updates** ← Can update all matching records

### 💡 **Recap of Previous Lessons:**

| Lesson | Function |
|-------|---------|
| Load Data From File to Vector | File → Vector |
| Save Vector to File | Vector → File |
| Update Record In File | Combining both for update |

---

## Summary

### 🔑 **What We Learned Today:**

1. **Update a record in file** ← Using Vector as intermediate
2. **Steps** ← Load → Search & Update → Save
3. **Same idea as Delete but with value change** ← Not making it empty
4. **Using previous lessons** ← Combined Load and Save to achieve update

### 🎯 **Now You Can:**
- ✅ Delete a record from file
- ✅ Update a record in file
- ✅ Add new records
- ✅ Read and display file content

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>