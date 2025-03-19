<a id="arabic"></a>
[English ↙](#english)
## Float Format (printf)
<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">



---

## مثال أساسي: تنسيق الأرقام العشرية

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    float b = 3.14159;
    
    printf("precision specification of %.1f\n", b);
    printf("precision specification of %.2f\n", b);
    printf("precision specification of %.3f\n", b);
    printf("precision specification of %.4f\n", b);
    
    return 0;
}
```

**الإخراج:**
```
precision specification of 3.1
precision specification of 3.14
precision specification of 3.142
precision specification of 3.1416
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

---

## كيف يعمل `%.*f`؟

### 1. `.1f` - خانة عشرية واحدة
```cpp
printf("%.1f", 3.14159);  // النتيجة: 3.1
```
- يعرض **خانة واحدة** بعد الفاصلة العشرية
- `3.14159` → `3.1`

### 2. `.2f` - خانتان عشريتان
```cpp
printf("%.2f", 3.14159);  // النتيجة: 3.14
```
- يعرض **خانتين** بعد الفاصلة العشرية
- `3.14159` → `3.14`

### 3. `.3f` - ثلاث خانات عشرية
```cpp
printf("%.3f", 3.14159);  // النتيجة: 3.142
```
- يعرض **ثلاث خانات** بعد الفاصلة العشرية
- `3.14159` → `3.142` (التقريب: الخانة الرابعة 5 فتُقرب الثالثة من 1 إلى 2)

### 4. `.4f` - أربع خانات عشرية
```cpp
printf("%.4f", 3.14159);  // النتيجة: 3.1416
```
- يعرض **أربع خانات** بعد الفاصلة العشرية
- `3.14159` → `3.1416` (التقريب: الخانة الخامسة 9 فتُقرب الرابعة من 5 إلى 6)

---

## قاعدة التقريب (Rounding)

### كيف يعمل التقريب؟
- إذا كان الرقم **5 أو أكبر** → يُقرب الرقم السابق للأعلى
- إذا كان الرقم **أقل من 5** → يبقى الرقم السابق كما هو

### أمثلة:
```
3.14159 → .3f → 3.142  (الخانة الرابعة 5 → تُقرب الثالثة)
3.14159 → .4f → 3.1416 (الخانة الخامسة 9 → تُقرب الرابعة)
```

---

## عرض مع أصفار على اليسار

### مثال: `%0*f` للأعداد الصحيحة

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int x = 7;
    int y = 9;
    
    printf("the floor division is %0.3f / %0.3f = %.3f\n", 
           (float)x, (float)y, (float)x/y);
    
    return 0;
}
```

**الإخراج:**
```
the floor division is 007.000 / 009.000 = 0.778
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### كيف يعمل `%0.3f`:
- `%0.3f` → يعرض الرقم مع **3 خانات عشرية** ويضيف **أصفار على اليسار** إذا لزم الأمر
- `7` → `007.000`
- `9` → `009.000`
- `0.777...` → `0.778` (التقريب)

---

## مثال مع `double`

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    double d = 12.45;
    
    printf("the double value is %.3f\n", d);
    printf("the double value is %.4f\n", d);
    
    return 0;
}
```

**الإخراج:**
```
the double value is 12.450
the double value is 12.4500
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### كيف يعمل:
- `%.3f` لـ `12.45` → `12.450` (يضيف صفراً لأننا طلبنا 3 خانات عشرية)
- `%.4f` لـ `12.45` → `12.4500` (يضيف صفرين لأننا طلبنا 4 خانات عشرية)

---

## ملخص صيغ تنسيق الأرقام العشرية

| الصيغة | الوصف | مثال (لـ `num = 3.14159`) | النتيجة |
|--------|-------|---------------------------|---------|
| `%f` | عرض الرقم كما هو | `printf("%f", num)` | `3.141590` |
| `%.1f` | خانة عشرية واحدة | `printf("%.1f", num)` | `3.1` |
| `%.2f` | خانتان عشريتان | `printf("%.2f", num)` | `3.14` |
| `%.3f` | ثلاث خانات عشرية | `printf("%.3f", num)` | `3.142` |
| `%.4f` | أربع خانات عشرية | `printf("%.4f", num)` | `3.1416` |
| `%0.3f` | ثلاث خانات عشرية مع أصفار | `printf("%0.3f", 7)` | `007.000` |

---

## ملاحظات مهمة

### 1. القيمة الأصلية لا تتغير
```cpp
float b = 3.14159;
printf("%.1f", b);  // يعرض: 3.1
// لكن b تبقى: 3.14159 (لا تتغير)
```

### 2. الفرق بين `float` و `double` في `printf`
- `%f` تعمل مع كل من `float` و `double`
- لا تحتاج لتغيير الصيغة حسب نوع المتغير

### 3. `printf` للتنسيق فقط
- تستخدم `printf` فقط **لعرض** الأرقام بشكل منسق
- **لا تغير** القيم المخزنة في المتغيرات
- **للاستخدام** في الطباعة على الشاشة فقط

---

## الخلاصة

### المفاهيم الأساسية:

1. **`%.nf`** لعرض `n` خانات عشرية
2. **التقريب التلقائي** يحدث عند الحاجة
3. **`%0.nf`** لإضافة أصفار على اليسار

### فوائد تنسيق الأرقام العشرية:

1. **التحكم في الدقة** المعروضة
2. **جعل الأرقام متناسقة** في الطول
3. **تحسين قراءة** المخرجات

### قاعدة التقريب:

> **"إذا كان الرقم 5 أو أكبر → قرب للأعلى، إذا كان أقل من 5 → اتركه كما هو"**

### مثال شامل:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    float price = 99.995;
    
    printf("Original: %f\n", price);
    printf("One decimal: %.1f\n", price);    // 100.0
    printf("Two decimals: %.2f\n", price);   // 100.00
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

### النصيحة العملية:

> **"استخدم `%.2f` للأسعار (خانتان عشريتان)، و`%.3f` للقياسات الدقيقة (ثلاث خانات عشرية)."**

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# Float Format (printf)

---

## Basic Example: Decimal Number Formatting

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    float b = 3.14159;
    
    printf("precision specification of %.1f\n", b);
    printf("precision specification of %.2f\n", b);
    printf("precision specification of %.3f\n", b);
    printf("precision specification of %.4f\n", b);
    
    return 0;
}
```

**Output:**
```
precision specification of 3.1
precision specification of 3.14
precision specification of 3.142
precision specification of 3.1416
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

---

## How Does `%.*f` Work?

### 1. `.1f` - One Decimal Place
```cpp
printf("%.1f", 3.14159);  // Result: 3.1
```
- Shows **one digit** after decimal point
- `3.14159` → `3.1`

### 2. `.2f` - Two Decimal Places
```cpp
printf("%.2f", 3.14159);  // Result: 3.14
```
- Shows **two digits** after decimal point
- `3.14159` → `3.14`

### 3. `.3f` - Three Decimal Places
```cpp
printf("%.3f", 3.14159);  // Result: 3.142
```
- Shows **three digits** after decimal point
- `3.14159` → `3.142` (Rounding: 4th digit 5 rounds 3rd from 1 to 2)

### 4. `.4f` - Four Decimal Places
```cpp
printf("%.4f", 3.14159);  // Result: 3.1416
```
- Shows **four digits** after decimal point
- `3.14159` → `3.1416` (Rounding: 5th digit 9 rounds 4th from 5 to 6)

---

## Rounding Rule

### How Does Rounding Work?
- If digit is **5 or greater** → round previous digit up
- If digit is **less than 5** → keep previous digit as is

### Examples:
```
3.14159 → .3f → 3.142  (4th digit 5 → rounds 3rd)
3.14159 → .4f → 3.1416 (5th digit 9 → rounds 4th)
```

---

## Display with Zeros on Left

### Example: `%0*f` for Integers

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    int x = 7;
    int y = 9;
    
    printf("the floor division is %0.3f / %0.3f = %.3f\n", 
           (float)x, (float)y, (float)x/y);
    
    return 0;
}
```

**Output:**
```
the floor division is 007.000 / 009.000 = 0.778
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### How `%0.3f` Works:
- `%0.3f` → shows number with **3 decimal places** and adds **zeros on left** if needed
- `7` → `007.000`
- `9` → `009.000`
- `0.777...` → `0.778` (rounding)

---

## Example with `double`

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    double d = 12.45;
    
    printf("the double value is %.3f\n", d);
    printf("the double value is %.4f\n", d);
    
    return 0;
}
```

**Output:**
```
the double value is 12.450
the double value is 12.4500
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### How It Works:
- `%.3f` for `12.45` → `12.450` (adds zero because we requested 3 decimal places)
- `%.4f` for `12.45` → `12.4500` (adds two zeros because we requested 4 decimal places)

---

## Summary of Decimal Number Format Specifiers

| Format | Description | Example (for `num = 3.14159`) | Result |
|--------|-------------|-------------------------------|---------|
| `%f` | Show number as is | `printf("%f", num)` | `3.141590` |
| `%.1f` | One decimal place | `printf("%.1f", num)` | `3.1` |
| `%.2f` | Two decimal places | `printf("%.2f", num)` | `3.14` |
| `%.3f` | Three decimal places | `printf("%.3f", num)` | `3.142` |
| `%.4f` | Four decimal places | `printf("%.4f", num)` | `3.1416` |
| `%0.3f` | Three decimals with zeros | `printf("%0.3f", 7)` | `007.000` |

---

## Important Notes

### 1. Original Value Doesn't Change
```cpp
float b = 3.14159;
printf("%.1f", b);  // Shows: 3.1
// but b remains: 3.14159 (doesn't change)
```

### 2. Difference Between `float` and `double` in `printf`
- `%f` works with both `float` and `double`
- Don't need to change format based on variable type

### 3. `printf` is for Formatting Only
- Use `printf` only to **display** numbers in formatted way
- **Doesn't change** values stored in variables
- **For use** in screen printing only

---

## Summary

### Core Concepts:

1. **`%.nf`** to show `n` decimal places
2. **Automatic rounding** occurs when needed
3. **`%0.nf`** to add zeros on left

### Benefits of Decimal Number Formatting:

1. **Control displayed precision**
2. **Make numbers consistent** in length
3. **Improve readability** of outputs

### Rounding Rule:

> **"If digit is 5 or greater → round up, if less than 5 → leave as is"**

### Comprehensive Example:

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <cstdio>

int main() {
    float price = 99.995;
    
    printf("Original: %f\n", price);
    printf("One decimal: %.1f\n", price);    // 100.0
    printf("Two decimals: %.2f\n", price);   // 100.00
    
    return 0;
}
```

</div>

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

### Practical Advice:

> **"Use `%.2f` for prices (two decimals), and `%.3f` for precise measurements (three decimals)."**

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>