<a id="arabic"></a>
[English ↙](#english)
# Write Mode: Write Data To File
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## وضع الكتابة: كتابة البيانات إلى ملف

---

## مقدمة

### 📝 **لماذا نستخدم الملفات؟**

لتخزين البيانات بشكل دائم يمكن استرجاعها لاحقاً، حتى بعد إغلاق البرنامج.

---

## الخطوات الأساسية للكتابة في ملف

### 1️⃣ إضافة مكتبة fstream

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <fstream>
using namespace std;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 2️⃣ إنشاء كائن من نوع fstream

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;  // يمكنك تسميته أي اسم (MyFile, File, etc.)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 3️⃣ فتح الملف في وضع الكتابة (Write Mode)

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
MyFile.open("MyFile.txt", ios::out);
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **شرح:**
- `"MyFile.txt"` ← اسم الملف (يمكنك اختيار أي اسم)
- `ios::out` ← وضع الكتابة (Write Mode)
- إذا كان الملف موجوداً → يتم مسح محتواه القديم
- إذا كان الملف غير موجود → يتم إنشاء ملف جديد

---

### 4️⃣ التحقق من نجاح فتح الملف

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
if (MyFile.is_open()) {
    // الملف فتح بنجاح
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 5️⃣ الكتابة في الملف

بدلاً من استخدام `cout` للكتابة على الشاشة، نستخدم اسم الكائن `MyFile`:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
MyFile << "This is the first line" << endl;
MyFile << "This is the second line" << endl;
MyFile << "This is the third line" << endl;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### 🔍 **ملاحظة:**
- استخدم `endl` أو `"\n"` لإضافة سطر جديد
- بدون `endl` ستكتب كل الجمل متصلة ببعضها

---

### 6️⃣ إغلاق الملف

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
MyFile.close();
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

#### ⚠️ **مهم جداً:**
- دائماً أغلق الملف بعد الانتهاء من الكتابة
- إذا نسيت الإغلاق، قد يبقى الملف محجوزاً ولا يستطيع برنامج آخر استخدامه

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // 1. إنشاء كائن fstream
    fstream MyFile;
    
    // 2. فتح الملف في وضع الكتابة
    MyFile.open("MyFile.txt", ios::out);
    
    // 3. التحقق من نجاح الفتح
    if (MyFile.is_open()) {
        // 4. الكتابة في الملف
        MyFile << "This is the first line" << endl;
        MyFile << "This is the second line" << endl;
        MyFile << "This is the third line" << endl;
        
        // 5. إغلاق الملف
        MyFile.close();
        
        cout << "تم كتابة البيانات بنجاح في الملف" << endl;
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

## أين يتم إنشاء الملف؟

### 📂 **موقع الملف:**
يتم إنشاء الملف في نفس المجلد الذي يوجد به ملف المشروع (Current Directory).

### 🔍 **كيف تجد الملف؟**

1. اذهب إلى **Solution Explorer** في Visual Studio
2. اضغط **زر الفأرة الأيمن** على اسم المشروع
3. اختر **Open Folder in File Explorer**
4. ابحث عن ملف `MyFile.txt`

---

## خاصية مهمة عن ios::out

### ⚠️ **تحذير:**
عند فتح ملف في وضع `ios::out`:

✅ إذا كان الملف موجوداً ← يتم **مسح كل المحتوى القديم** ثم كتابة المحتوى الجديد  
✅ إذا كان الملف غير موجود ← يتم **إنشاء ملف جديد** ثم الكتابة فيه

### 📝 **مثال توضيحي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// التشغيل الأول
MyFile.open("MyFile.txt", ios::out);
MyFile << "Mohamed" << endl;
MyFile << "Fadi" << endl;
MyFile << "Lama" << endl;
MyFile.close();

// الملف سيحتوي على:
// Mohamed
// Fadi
// Lama

// التشغيل الثاني
MyFile.open("MyFile.txt", ios::out);
MyFile << "New Data" << endl;
MyFile.close();

// الملف سيحتوي على:
// New Data
// (المحتوى القديم تم مسحه)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **أضف المكتبة** ← `#include <fstream>`
2. **أنشئ كائن** ← `fstream MyFile;`
3. **افتح الملف** ← `MyFile.open("name.txt", ios::out);`
4. **تحقق من الفتح** ← `if (MyFile.is_open())`
5. **اكتب في الملف** ← `MyFile << data << endl;`
6. **أغلق الملف** ← `MyFile.close();`

### ⚠️ **أخطاء شائعة:**
- نسيان إضافة `endl` → ستكتب كل الجمل متصلة
- نسيان إغلاق الملف → قد يبقى الملف محجوزاً
- نسيان التحقق من الفتح → قد تكتب في ملف لم يفتح بنجاح

---

## الخلاصة

### 🔑 **ما تعلمناه اليوم:**

1. **كيفية فتح ملف** في وضع الكتابة
2. **الكتابة في الملف** باستخدام `<<` مثل `cout`
3. **التحقق من نجاح فتح الملف** باستخدام `is_open()`
4. **إغلاق الملف** باستخدام `close()`
5. **خاصية `ios::out`** ← مسح المحتوى القديم وكتابة الجديد

### 🎯 **الدرس القادم:**
كيف نفتح ملف بدون مسح البيانات الموجودة (وضع الإلحاق Append Mode)

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Write Mode: Write Data To File

---

## Introduction

### 📝 **Why Use Files?**

To store data permanently that can be retrieved later, even after the program closes.

---

## Basic Steps to Write to a File

### 1️⃣ Include fstream Library

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <fstream>
using namespace std;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 2️⃣ Create fstream Object

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
fstream MyFile;  // You can name it anything (MyFile, File, etc.)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 3️⃣ Open File in Write Mode

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
MyFile.open("MyFile.txt", ios::out);
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 🔍 **Explanation:**
- `"MyFile.txt"` ← File name (you can choose any name)
- `ios::out` ← Write Mode
- If file exists → Old content is deleted
- If file doesn't exist → New file is created

---

### 4️⃣ Check if File Opened Successfully

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
if (MyFile.is_open()) {
    // File opened successfully
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 5️⃣ Write to File

Instead of using `cout` to write to screen, use the object name `MyFile`:

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
MyFile << "This is the first line" << endl;
MyFile << "This is the second line" << endl;
MyFile << "This is the third line" << endl;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### 🔍 **Note:**
- Use `endl` or `"\n"` to add a new line
- Without `endl`, all sentences will be written together

---

### 6️⃣ Close the File

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
MyFile.close();
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

#### ⚠️ **Very Important:**
- Always close the file after writing
- If you forget to close, the file may remain locked and other programs can't use it

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // 1. Create fstream object
    fstream MyFile;
    
    // 2. Open file in write mode
    MyFile.open("MyFile.txt", ios::out);
    
    // 3. Check if opened successfully
    if (MyFile.is_open()) {
        // 4. Write to file
        MyFile << "This is the first line" << endl;
        MyFile << "This is the second line" << endl;
        MyFile << "This is the third line" << endl;
        
        // 5. Close the file
        MyFile.close();
        
        cout << "Data written to file successfully" << endl;
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

## Where is the File Created?

### 📂 **File Location:**
The file is created in the same folder as your project (Current Directory).

### 🔍 **How to Find the File?**

1. Go to **Solution Explorer** in Visual Studio
2. **Right-click** on your project name
3. Choose **Open Folder in File Explorer**
4. Look for `MyFile.txt`

---

## Important Property of ios::out

### ⚠️ **Warning:**
When opening a file in `ios::out` mode:

✅ If file exists → **All old content is deleted** then new content is written  
✅ If file doesn't exist → **New file is created** then content is written

### 📝 **Illustrative Example:**

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// First run
MyFile.open("MyFile.txt", ios::out);
MyFile << "Mohamed" << endl;
MyFile << "Fadi" << endl;
MyFile << "Lama" << endl;
MyFile.close();

// File will contain:
// Mohamed
// Fadi
// Lama

// Second run
MyFile.open("MyFile.txt", ios::out);
MyFile << "New Data" << endl;
MyFile.close();

// File will contain:
// New Data
// (Old content was deleted)
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Important Tips

### 💡 **Always Remember:**

1. **Include library** ← `#include <fstream>`
2. **Create object** ← `fstream MyFile;`
3. **Open file** ← `MyFile.open("name.txt", ios::out);`
4. **Check opening** ← `if (MyFile.is_open())`
5. **Write to file** ← `MyFile << data << endl;`
6. **Close file** ← `MyFile.close();`

### ⚠️ **Common Mistakes:**
- Forgetting `endl` → all sentences will be written together
- Forgetting to close file → file may remain locked
- Forgetting to check opening → may write to file that didn't open

---

## Summary

### 🔑 **What We Learned Today:**

1. **How to open a file** in write mode
2. **Writing to file** using `<<` like `cout`
3. **Checking successful opening** using `is_open()`
4. **Closing file** using `close()`
5. **`ios::out` property** ← delete old content and write new

### 🎯 **Next Lesson:**
How to open a file without deleting existing data (Append Mode)

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>