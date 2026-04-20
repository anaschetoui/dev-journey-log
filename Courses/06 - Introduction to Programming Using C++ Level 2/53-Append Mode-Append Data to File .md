<a id="arabic"></a>
[English ↙](#english)
# Append Mode: Append Data to File
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## وضع الإلحاق: إضافة بيانات إلى ملف

---

## مقدمة

### 🔍 **الفرق بين Write Mode و Append Mode:**

| الوضع | السلوك |
|-------|--------|
| **Write Mode (`ios::out`)** | يمسح كل البيانات القديمة ويكتب البيانات الجديدة |
| **Append Mode (`ios::app`)** | يحافظ على البيانات القديمة ويضيف البيانات الجديدة في نهاية الملف |

---

## المشكلة مع Write Mode

### ⚠️ **ماذا يحدث عند استخدام `ios::out`؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// الملف كان يحتوي على:
// Mohamed
// Fadi
// Lama

fstream MyFile;
MyFile.open("MyFile.txt", ios::out);
MyFile << "This is a new line" << endl;
MyFile << "This is another new line" << endl;
MyFile.close();

// الملف أصبح يحتوي على:
// This is a new line
// This is another new line
// (البيانات القديمة اختفت!)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الحل: Append Mode

### 📝 **كيف نحافظ على البيانات القديمة ونضيف جديدة؟**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;
MyFile.open("MyFile.txt", ios::app);  // Append Mode فقط
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ماذا يفعل Append Mode؟**
- يفتح الملف للكتابة
- يحافظ على كل البيانات الموجودة
- يضيف البيانات الجديدة في **نهاية** الملف

---

## الطريقة المفضلة: الجمع بين Append و Out

### 📝 **لضمان إنشاء الملف إذا لم يكن موجوداً:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;
MyFile.open("MyFile.txt", ios::app | ios::out);
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **شرح:**
- `ios::app` ← يضيف البيانات في نهاية الملف (بدون مسح)
- `ios::out` ← يسمح بالكتابة (ويضمن إنشاء الملف إذا لم يكن موجوداً)
- `|` ← علامة OR للجمع بين الوضعين

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // إنشاء كائن fstream
    fstream MyFile;
    
    // فتح الملف في وضع Append + Out
    MyFile.open("MyFile.txt", ios::app | ios::out);
    
    // التحقق من نجاح الفتح
    if (MyFile.is_open()) {
        // إضافة أسطر جديدة في نهاية الملف
        MyFile << "This is a new line" << endl;
        MyFile << "This is another new line" << endl;
        
        // إغلاق الملف
        MyFile.close();
        
        cout << "تمت إضافة البيانات بنجاح في نهاية الملف" << endl;
    }
    else {
        cout << "فشل في فتح الملف" << endl;
    }
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## تجربة عملية

### 📝 **لنفترض أن الملف يحتوي على:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Fadi
Lama
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🏃 **تشغيل البرنامج مرة واحدة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Fadi
Lama
This is a new line
This is another new line
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🏃🏃 **تشغيل البرنامج مرة ثانية:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Fadi
Lama
This is a new line
This is another new line
This is a new line
This is another new line
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **ملاحظة:**
كل مرة تشغل البرنامج، يتم إضافة السطرين في نهاية الملف مع الاحتفاظ بكل البيانات السابقة.

---

## مقارنة بين الوضعين

### 📊 **Write Mode vs Append Mode:**

| الخاصية | Write Mode (`ios::out`) | Append Mode (`ios::app`) |
|---------|------------------------|--------------------------|
| **البيانات القديمة** | تُمسح | تبقى كما هي |
| **البيانات الجديدة** | تكتب من البداية | تضاف في النهاية |
| **إنشاء ملف جديد** | نعم (إذا لم يكن موجوداً) | يحتاج `ios::out` أيضاً |
| **الاستخدام** | عندما تريد استبدال المحتوى | عندما تريد إضافة محتوى |

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **استخدم `ios::app | ios::out`** ← أفضل طريقة للإلحاق مع ضمان إنشاء الملف
2. **لا تنسى `endl`** ← لإضافة سطر جديد بعد كل جملة
3. **أغلق الملف دائماً** ← باستخدام `close()`
4. **تحقق من الفتح** ← باستخدام `is_open()`

### ✅ **متى تستخدم Append Mode؟**
- عندما تريد إضافة سجلات جديدة لملف سجلات (Log File)
- عندما تريد حفظ تاريخ العمليات
- عندما تريد إضافة بيانات جديدة دون فقدان القديمة

### ✅ **متى تستخدم Write Mode؟**
- عندما تريد استبدال محتوى الملف بالكامل
- عندما تنشئ ملف جديد لأول مرة
- عندما تريد إعادة تعيين (Reset) الملف

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **Append Mode (`ios::app`)** ← يضيف البيانات في نهاية الملف دون مسح القديم
2. **الجمع بين الوضعين** ← `ios::app | ios::out` للكتابة مع ضمان إنشاء الملف
3. **الفرق عن Write Mode** ← Write Mode يمسح، Append Mode يحافظ على البيانات
4. **كل عملية Append** ← تضيف أسطراً جديدة مع الاحتفاظ بكل الأسطر السابقة

### 🎯 **القاعدة الذهبية:**
> استخدم `ios::app | ios::out` عندما تريد إضافة بيانات لملف موجود دون فقدان البيانات القديمة، واستخدم `ios::out` فقط عندما تريد استبدال المحتوى بالكامل.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Append Mode: Append Data to File

---

## Introduction

### 🔍 **Difference Between Write Mode and Append Mode:**

| Mode | Behavior |
|------|----------|
| **Write Mode (`ios::out`)** | Deletes all old data and writes new data |
| **Append Mode (`ios::app`)** | Keeps old data and adds new data at the end of file |

---

## Problem with Write Mode

### ⚠️ **What Happens with `ios::out`?**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// File contained:
// Mohamed
// Fadi
// Lama

fstream MyFile;
MyFile.open("MyFile.txt", ios::out);
MyFile << "This is a new line" << endl;
MyFile << "This is another new line" << endl;
MyFile.close();

// File now contains:
// This is a new line
// This is another new line
// (Old data is gone!)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Solution: Append Mode

### 📝 **How to Keep Old Data and Add New?**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;
MyFile.open("MyFile.txt", ios::app);  // Append Mode only
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **What Does Append Mode Do?**
- Opens file for writing
- Keeps all existing data
- Adds new data at the **end** of file

---

## Preferred Method: Combining Append and Out

### 📝 **To Ensure File Creation if Not Exists:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;
MyFile.open("MyFile.txt", ios::app | ios::out);
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Explanation:**
- `ios::app` ← Appends data at end of file (without deleting)
- `ios::out` ← Allows writing (and creates file if doesn't exist)
- `|` ← OR operator to combine modes

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create fstream object
    fstream MyFile;
    
    // Open file in Append + Out mode
    MyFile.open("MyFile.txt", ios::app | ios::out);
    
    // Check if opened successfully
    if (MyFile.is_open()) {
        // Add new lines at the end of file
        MyFile << "This is a new line" << endl;
        MyFile << "This is another new line" << endl;
        
        // Close the file
        MyFile.close();
        
        cout << "Data appended to file successfully" << endl;
    }
    else {
        cout << "Failed to open file" << endl;
    }
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Practical Experiment

### 📝 **Assume File Contains:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Fadi
Lama
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🏃 **Run Program Once:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Fadi
Lama
This is a new line
This is another new line
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🏃🏃 **Run Program Second Time:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
Mohamed
Fadi
Lama
This is a new line
This is another new line
This is a new line
This is another new line
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Note:**
Each time you run the program, the new lines are added at the end of the file while keeping all previous data.

---

## Comparison Between Modes

### 📊 **Write Mode vs Append Mode:**

| Feature | Write Mode (`ios::out`) | Append Mode (`ios::app`) |
|---------|------------------------|--------------------------|
| **Old Data** | Deleted | Kept as is |
| **New Data** | Written from beginning | Added at the end |
| **Create New File** | Yes (if not exists) | Needs `ios::out` also |
| **Use Case** | When you want to replace content | When you want to add content |

---

## Important Tips

### 💡 **Always Remember:**

1. **Use `ios::app | ios::out`** ← Best way to append with file creation guarantee
2. **Don't forget `endl`** ← To add new line after each sentence
3. **Always close file** ← Using `close()`
4. **Check opening** ← Using `is_open()`

### ✅ **When to Use Append Mode?**
- When adding new records to a log file
- When saving operation history
- When adding new data without losing old data

### ✅ **When to Use Write Mode?**
- When you want to completely replace file content
- When creating a new file for the first time
- When you want to reset the file

---

## Summary

### 🔑 **What We Learned Today:**

1. **Append Mode (`ios::app`)** ← Adds data at end of file without deleting old data
2. **Combining modes** ← `ios::app | ios::out` for writing with file creation guarantee
3. **Difference from Write Mode** ← Write Mode deletes, Append Mode preserves data
4. **Each Append operation** ← Adds new lines while keeping all previous lines

### 🎯 **Golden Rule:**
> Use `ios::app | ios::out` when you want to add data to an existing file without losing old data, and use `ios::out` only when you want to completely replace the content.

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>