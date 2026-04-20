<a id="arabic"></a>
[English ↙](#english)
# String Object Methods

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## دوال وكائن النص (String Object Methods)

---

## مقدمة عن String Object

### 📝 **ما هو String Object؟**

الـ String في لغة C++ ليس مجرد نص بسيط، بل هو **كائن (Object)** يحتوي على دوال (Methods) جاهزة للتعامل مع النصوص.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "My name is Mohamed Abu Haddod I love programming";
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **مقدمة عن البرمجة الكائنية (OOP):**
- الـ String هو مثال على **Object** (كائن)
- داخله دوال جاهزة تسمى **Methods**
- نستخدمها عن طريق النقطة: `s1.method()`

---

## 1. length() - طول النص

### 📝 **لحساب عدد أحرف النص:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << s1.length() << endl;
// الناتج: 52 (عدد الأحرف في النص)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 2. at() - الوصول لحرف محدد

### 📝 **للوصول إلى حرف في موقع معين:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << s1.at(3) << endl;
// الناتج: الحرف في الموقع 3 (العد يبدأ من 0)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 3. append() - إضافة نص في النهاية

### 📝 **لإضافة نص إلى نهاية النص الأصلي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
s1.append(" programming advices");
// يضيف " programming advices" في نهاية النص
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 4. insert() - إدراج نص في موقع محدد

### 📝 **لإدراج نص داخل النص الأصلي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
s1.insert(7, " Ali");
// يضيف " Ali" في الموقع 7
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 5. substr() - استخراج جزء من النص

### 📝 **لأخذ جزء محدد من النص:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
cout << s1.substr(16, 8) << endl;
// يبدأ من الموقع 16 ويأخذ 8 أحرف
// الناتج: "Mohamed"
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 6. push_back() - إضافة حرف في النهاية

### 📝 **لإضافة حرف واحد في نهاية النص:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
s1.push_back('X');
// يضيف الحرف X في نهاية النص
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 7. pop_back() - حذف آخر حرف

### 📝 **لحذف آخر حرف من النص:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
s1.pop_back();
// يحذف آخر حرف في النص
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 8. find() - البحث عن نص داخل النص

### 📝 **للبحث عن كلمة داخل النص:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// البحث عن كلمة (case sensitive)
cout << s1.find("Ali") << endl;
// يرجع موقع أول حرف من الكلمة إذا وجدها

// إذا لم يجد الكلمة
if (s1.find("ali") == string::npos) {
    cout << "الكلمة غير موجودة" << endl;
}
// npos تعني Not Found (غير موجود)
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## 9. clear() - مسح النص بالكامل

### 📝 **لحذف كل محتويات النص:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
s1.clear();
// يصبح النص فارغاً
cout << s1.length(); // 0
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // تعريف النص الأصلي
    string s1 = "My name is Mohamed Abu Haddod I love programming";
    
    // 1. طول النص
    cout << "Length: " << s1.length() << endl;
    
    // 2. الحرف في الموقع 3
    cout << "Character at 3: " << s1.at(3) << endl;
    
    // 3. إضافة نص في النهاية
    s1.append(" programming advices");
    
    // 4. إدراج نص في الموقع 7
    s1.insert(7, " Ali");
    
    // 5. استخراج جزء من النص
    cout << "Substring (16,8): " << s1.substr(16, 8) << endl;
    
    // 6. إضافة حرف X في النهاية
    s1.push_back('X');
    
    // 7. حذف آخر حرف
    s1.pop_back();
    
    // 8. البحث عن كلمة
    cout << "Find 'Ali': " << s1.find("Ali") << endl;
    
    // التحقق من وجود الكلمة
    if (s1.find("ali") == string::npos) {
        cout << "'ali' not found" << endl;
    }
    
    // 9. مسح النص
    s1.clear();
    cout << "After clear, length: " << s1.length() << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## نصائح مهمة

### 💡 **تذكر دائماً:**

1. **الـ String هو Object** ← يحتوي على دوال جاهزة (Methods)
2. **استخدام النقطة** ← `s1.method()` لاستدعاء الدوال
3. **العد يبدأ من 0** ← أول حرف في الموقع 0
4. **Case Sensitive** ← البحث يفرق بين الأحرف الكبيرة والصغيرة
5. **npos** ← تعني Not Found (لم يتم العثور على النص)

### 🎯 **للتطبيق:**
- جرب تغيير الأرقام في `substr()` و `insert()`
- جرب البحث بكلمات مختلفة
- جرب `push_back()` و `pop_back()` عدة مرات

---

## الخلاصة

### 🔑 **الدوال التي تعلمناها:**

| الدالة | الوظيفة |
|--------|---------|
| `length()` | طول النص |
| `at(index)` | الحرف في موقع معين |
| `append(text)` | إضافة نص في النهاية |
| `insert(index, text)` | إدراج نص في موقع محدد |
| `substr(start, count)` | استخراج جزء من النص |
| `push_back(char)` | إضافة حرف في النهاية |
| `pop_back()` | حذف آخر حرف |
| `find(text)` | البحث عن نص |
| `clear()` | مسح النص بالكامل |

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# String Object Methods

---

## Introduction to String Object

### 📝 **What is String Object?**

String in C++ is not just simple text, it's an **Object** that contains ready-made methods for text manipulation.

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "My name is Mohamed Abu Haddod I love programming";
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Introduction to OOP:**
- String is an example of an **Object**
- Inside it are ready-made functions called **Methods**
- We use them with dot notation: `s1.method()`

---

## Methods Summary

| Method | Function |
|--------|----------|
| `length()` | String length |
| `at(index)` | Character at specific position |
| `append(text)` | Add text at the end |
| `insert(index, text)` | Insert text at specific position |
| `substr(start, count)` | Extract part of string |
| `push_back(char)` | Add character at the end |
| `pop_back()` | Delete last character |
| `find(text)` | Search for text |
| `clear()` | Clear entire string |

---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define original string
    string s1 = "My name is Mohamed Abu Haddod I love programming";
    
    // 1. String length
    cout << "Length: " << s1.length() << endl;
    
    // 2. Character at position 3
    cout << "Character at 3: " << s1.at(3) << endl;
    
    // 3. Append text at the end
    s1.append(" programming advices");
    
    // 4. Insert text at position 7
    s1.insert(7, " Ali");
    
    // 5. Extract substring
    cout << "Substring (16,8): " << s1.substr(16, 8) << endl;
    
    // 6. Add character X at the end
    s1.push_back('X');
    
    // 7. Delete last character
    s1.pop_back();
    
    // 8. Search for word
    cout << "Find 'Ali': " << s1.find("Ali") << endl;
    
    // Check if word exists
    if (s1.find("ali") == string::npos) {
        cout << "'ali' not found" << endl;
    }
    
    // 9. Clear string
    s1.clear();
    cout << "After clear, length: " << s1.length() << endl;
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Important Tips

### 💡 **Always Remember:**

1. **String is an Object** ← Contains ready-made methods
2. **Dot notation** ← `s1.method()` to call methods
3. **Counting starts at 0** ← First character at position 0
4. **Case Sensitive** ← Search distinguishes uppercase/lowercase
5. **npos** ← Means Not Found

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>