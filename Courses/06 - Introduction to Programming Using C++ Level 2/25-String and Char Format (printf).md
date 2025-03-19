<a id="arabic"></a>
[English ↙](#english)
## String and Char Format (printf)
<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">



---

## معالجة النصوص (Strings) باستخدام printf

### ⚠️ مهم: printf لا يدعم string object

**printf** لا يعمل مع `string object` ولكن يعمل مع **مصفوفة الأحرف (Character Array)**.

---

## مثال من المحاضرة: استخدام Character Array

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    char name[] = "Mohamed Abu Hadhood";
    char schoolName[] = "Programming Advices";
    
    printf("Dear %s, how are you?\n", name);
    printf("Welcome to %s school\n", schoolName);
    
    return 0;
}
```

**الإخراج:**
```
Dear Mohamed Abu Hadhood, how are you?
Welcome to Programming Advices school
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## الفرق بين String Object و Character Array

### ❌ لا يعمل مع printf
```cpp
#include <string>
string name = "Ali";
printf("%s", name);  // ❌ خطأ
```

### ✅ يعمل مع printf
```cpp
char name[] = "Ali";
printf("%s", name);  // ✅ صحيح
```

---

## معالجة الأحرف (Characters) باستخدام printf

### مثال من المحاضرة: تنسيق عرض الأحرف

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    char c = 'S';
    
    printf("Character: %c\n", c);
    printf("Character: %*c\n", 2, c);
    printf("Character: %*c\n", 3, c);
    printf("Character: %*c\n", 4, c);
    printf("Character: %*c\n", 5, c);
    
    return 0;
}
```

**الإخراج:**
```
Character: S
Character:  S
Character:   S
Character:    S
Character:     S
```

</div>

<div dir="rtl" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## كيف تعمل صيغ التنسيق؟

### 1. `%s` - للنصوص
```cpp
printf("%s", name);  // يعرض النص المخزن في name
```

### 2. `%c` - للأحرف
```cpp
printf("%c", c);  // يعرض الحرف المخزن في c
```

### 3. `%*c` - لعرض بعرض محدد
```cpp
printf("%*c", 3, c);  // يعرض الحرف مع عرض 3 خانات
```

---

## الخلاصة

### المفاهيم الأساسية:

1. **`printf` مع النصوص** → يستخدم `%s` مع **character array**
2. **`printf` مع الأحرف** → يستخدم `%c` أو `%*c`
3. **Character Array** → `char name[] = "text"`
4. **String Object** → `string name = "text"` (لا يعمل مع `printf`)

### النصيحة العملية:

> **"استخدم character array مع `printf` للنصوص."**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# String and Char Format (printf)

---

## Processing Text (Strings) Using printf

### ⚠️ Important: printf Doesn't Support string object

**printf** doesn't work with `string object` but works with **Character Array**.

---

## Example from Lecture: Using Character Array

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    char name[] = "Mohamed Abu Hadhood";
    char schoolName[] = "Programming Advices";
    
    printf("Dear %s, how are you?\n", name);
    printf("Welcome to %s school\n", schoolName);
    
    return 0;
}
```

**Output:**
```
Dear Mohamed Abu Hadhood, how are you?
Welcome to Programming Advices school
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Difference Between String Object and Character Array

### ❌ Doesn't Work with printf
```cpp
#include <string>
string name = "Ali";
printf("%s", name);  // ❌ Wrong
```

### ✅ Works with printf
```cpp
char name[] = "Ali";
printf("%s", name);  // ✅ Correct
```

---

## Processing Characters Using printf

### Example from Lecture: Character Display Formatting

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    char c = 'S';
    
    printf("Character: %c\n", c);
    printf("Character: %*c\n", 2, c);
    printf("Character: %*c\n", 3, c);
    printf("Character: %*c\n", 4, c);
    printf("Character: %*c\n", 5, c);
    
    return 0;
}
```

**Output:**
```
Character: S
Character:  S
Character:   S
Character:    S
Character:     S
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Do Format Specifiers Work?

### 1. `%s` - For Text
```cpp
printf("%s", name);  // Displays text stored in name
```

### 2. `%c` - For Characters
```cpp
printf("%c", c);  // Displays character stored in c
```

### 3. `%*c` - For Display with Specific Width
```cpp
printf("%*c", 3, c);  // Displays character with width of 3
```

---

## Summary

### Core Concepts:

1. **`printf` with Text** → uses `%s` with **character array**
2. **`printf` with Characters** → uses `%c` or `%*c`
3. **Character Array** → `char name[] = "text"`
4. **String Object** → `string name = "text"` (doesn't work with `printf`)

### Practical Advice:

> **"Use character array with `printf` for text."**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>