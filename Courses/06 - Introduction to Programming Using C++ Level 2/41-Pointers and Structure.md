<a id="arabic"></a>
[English ↙](#english)
# Pointers and Structure

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## المؤشرات والهياكل

---

## الكود الأساسي

### 📝 **تعريف الهيكل:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
struct Employee {
    string name;
    float salary;
};
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## استخدام الهيكل العادي

### 📝 **الطريقة المعتادة:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
Employee employee1;
employee1.name = "Mohamed Abu-Hadhdod";
employee1.salary = 5000;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 🔍 **الوصول للبيانات:**
- `employee1.name` → للاسم
- `employee1.salary` → للراتب

---

## استخدام المؤشر مع الهيكل

### 📝 **تعريف المؤشر:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
Employee *ptr;
ptr = &employee1;
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الفرق في الوصول

### 🔍 **الحقيقة:**

في برامج الكتابة (IDE) مثل Visual Studio Code، عندما تكتب:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
ptr.  // تكتب هذا
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

يتحول تلقائياً إلى:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
ptr->  // يصبح هذا
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### 📝 **في الكود النهائي:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
ptr->name = "Ali";    // هذا ما يظهر في الكود
ptr->salary = 6000;   // هذا ما يظهر في الكود
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;---

## مثال كامل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    float salary;
};

int main() {
    Employee employee1;
    employee1.name = "Mohamed Abu-Hadhdod";
    employee1.salary = 5000;
    
    Employee *ptr = &employee1;
    
    cout << employee1.name << endl;
    cout << employee1.salary << endl;
    
    cout << ptr->name << endl;
    cout << ptr->salary << endl;
    
    return 0;
}
```

**النتيجة:**
```
Mohamed Abu-Hadhdod
5000
Mohamed Abu-Hadhdod
5000
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## الخلاصة

### 🔑 **القواعد:**

1. **الهيكل العادي** → استخدم `.`
2. **المؤشر للهيكل** → استخدم `->`
3. **بعض IDEs** تحول `.` إلى `->` تلقائياً

### 💡 **تذكر:**

> **في الكتابة: تكتب `ptr.`، في الكود: يظهر `ptr->`**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Pointers and Structure

---

## Basic Code

### 📝 **Structure Definition:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
struct Employee {
    string name;
    float salary;
};
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Using Regular Structure

### 📝 **Usual Method:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
Employee employee1;
employee1.name = "Mohamed Abu-Hadhdod";
employee1.salary = 5000;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 🔍 **Accessing Data:**
- `employee1.name` → for name
- `employee1.salary` → for salary

---

## Using Pointer with Structure

### 📝 **Pointer Definition:**

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
Employee *ptr;
ptr = &employee1;
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Difference in Access

### 🔍 **The Truth:**

In writing programs (IDE) like Visual Studio Code, when you type:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
ptr.  // you type this
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

It automatically changes to:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
ptr->  // becomes this
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### 📝 **In Final Code:**

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
ptr->name = "Ali";    // this appears in code
ptr->salary = 6000;   // this appears in code
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;---

## Complete Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    float salary;
};

int main() {
    Employee employee1;
    employee1.name = "Mohamed Abu-Hadhdod";
    employee1.salary = 5000;
    
    Employee *ptr = &employee1;
    
    cout << employee1.name << endl;
    cout << employee1.salary << endl;
    
    cout << ptr->name << endl;
    cout << ptr->salary << endl;
    
    return 0;
}
```

**Result:**
```
Mohamed Abu-Hadhdod
5000
Mohamed Abu-Hadhdod
5000
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Summary

### 🔑 **Rules:**

1. **Regular structure** → use `.`
2. **Pointer to structure** → use `->`
3. **Some IDEs** automatically change `.` to `->`

### 💡 **Remember:**

> **When typing: you type `ptr.`, in code: appears `ptr->`**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>