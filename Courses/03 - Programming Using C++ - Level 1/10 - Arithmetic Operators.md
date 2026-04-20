# مشغِّلات العمليات الحسابية (Arithmetic Operators)

<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## مشغِّلات العمليات الحسابية في لغة C++

### مقدمة

السلام عليكم ورحمة الله وبركاته. في هذا الدرس سنتعرف على **مشغِّلات العمليات الحسابية** في لغة C++.

---

## أنواع المشغِّلات الحسابية

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

| المشغِّل | الوصف | المثال | النتيجة |
|----------|--------|---------|----------|
| `+` | يجمع قيمتين | `A + B` | 30 |
| `-` | يطرح القيمة الثانية من الأولى | `A - B` | -10 |
| `*` | يضرب قيمتين | `A * B` | 200 |
| `/` | يقسم البسط على المقام | `B / A` | 2 |
| `%` | يعطي باقي القسمة الصحيحة | `B % A` | 0 |

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## مثال تطبيقي من الدرس

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    cout << "A + B = " << A + B << endl;
    cout << "A - B = " << A - B << endl;
    cout << "A * B = " << A * B << endl;
    cout << "A / B = " << A / B << endl;
    cout << "A % B = " << A % B << endl;
    
    return 0;
}
```

**Output:**
```
A + B = 30
A - B = -10
A * B = 200
A / B = 0
A % B = 10
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## شرح النتائج من المحاضرة

<div dir="rtl" style="text-align: right;```

- **`A + B = 30`**: لأن `10 + 20 = 30`
- **`A - B = -10`**: لأن `10 - 20 = -10`
- **`A * B = 200`**: لأن `10 * 20 = 200`
- **`A / B = 0`**: لأن `10 ÷ 20 = 0.5` ولكن مع الأعداد الصحيحة النتيجة `0`
- **`A % B = 10`**: لأن باقي قسمة `10` على `20` هو `10`

**ملاحظة مهمة من المحاضرة:** 
> "العشرة ما بتقسم على العشرين - النتيجة هي اقل من واحد - هو بيقربها لصفر"

</div>

</div>

<br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Arithmetic Operators in C++

## Introduction

In this lesson, we will learn about **arithmetic operators** in C++.

---

## Types of Arithmetic Operators

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

| Operator | Description | Example | Result |
|----------|-------------|---------|--------|
| `+` | Adds two operands | `A + B` | 30 |
| `-` | Subtracts second operand from the first | `A - B` | -10 |
| `*` | Multiplies both operands | `A * B` | 200 |
| `/` | Divides numerator by de-numerator | `B / A` | 2 |
| `%` | This gives remainder of an integer division | `B % A` | 0 |

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Practical Example from the Lesson

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 10;
    int B = 20;
    
    cout << "A + B = " << A + B << endl;
    cout << "A - B = " << A - B << endl;
    cout << "A * B = " << A * B << endl;
    cout << "A / B = " << A / B << endl;
    cout << "A % B = " << A % B << endl;
    
    return 0;
}
```

**Output:**
```
A + B = 30
A - B = -10
A * B = 200
A / B = 0
A % B = 10
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## Explanation of Results from the Lecture

- **`A + B = 30`**: Because `10 + 20 = 30`
- **`A - B = -10`**: Because `10 - 20 = -10`
- **`A * B = 200`**: Because `10 * 20 = 200`
- **`A / B = 0`**: Because `10 ÷ 20 = 0.5` but with integers result is `0`
- **`A % B = 10`**: Because remainder of `10` divided by `20` is `10`

**Important note from the lecture:**
> "10 doesn't divide by 20 - the result is less than one - it rounds to zero"

</div>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`
</div>
