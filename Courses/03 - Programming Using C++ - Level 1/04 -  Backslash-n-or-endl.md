<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

# الفرق بين \n و endl في لغة C++ 
## \n vs endl

## مقدمة

في هذا الدرس سنتعلم الفرق الجوهري بين استخدام `\n` و `endl` للأسطر الجديدة في لغة C++، وكيف يؤثر ذلك على أداء البرنامج.

---

## الفرق الأساسي

### المظهر المتشابه، الأداء المختلف 🎯

كلا الأمرين ينتجان نفس النتيجة ظاهرياً لكن الأداء مختلف تماماً:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abu-Hadhoud" << endl;  // الطريقة الأولى
    cout << "Mohammed Abu-Hadhoud\n";        // الطريقة الثانية
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### مفهوم buffer في البرمجة

- **buffer**: منطقة تخزين مؤقتة في الذاكرة
- **الوظيفة**: تجميع البيانات قبل إرسالها للإخراج
- **الأهمية**: تحسين كفاءة العمليات

---

## الفرق في الأداء

### كيف يعمل endl؟

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. إضافة سطر جديد
2. تفريغ buffer فوراً (flushing)
3. التأكد من ظهور الناتج مباشرة
```

</div>

<div dir="rtl" style="text-align: right;">

### كيف يعمل \n؟

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. إضافة سطر جديد فقط
2. لا يقوم بتفريغ buffer
3. buffer يفرغ عند امتلائه أو انتهاء البرنامج
```

</div>

<div dir="rtl" style="text-align: right;">

---

## التطبيقات العملية

### متى نستخدم كل منهما؟

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ استخدام \n عندما:
   - لدينا عدد كبير من عمليات الطباعة
   - لا نحتاج رؤية النتائج فوراً
   - نريد أقصى أداء

✅ استخدام endl عندما:
   - نحتاج رؤية الناتج فوراً
   - عدد عمليات الطباعة قليل
   - التصحيح debugging
```

</div>

<div dir="rtl" style="text-align: right;">

### مثال على الاستخدام الأمثل

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // استخدام \n للطباعات الكثيرة
    for(int i = 0; i < 1000; i++) {
        cout << "Line " << i << "\n";
    }
    
    // استخدام endl عندما نحتاج التأكد من الظهور
    cout << "Process completed!" << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

---

## التأثير على الأداء

### معالجة كبيرة من البيانات

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
❌ استخدام endl مع 1000 سطر:
   - 1000 عملية تفريغ buffer
   - أداء بطيء
   - استهلاك موارد أعلى

✅ استخدام \n مع 1000 سطر:
   - تفريغ buffer مرة واحدة
   - أداء أسرع
   - استهلاك موارد أقل
```

</div>

<div dir="rtl" style="text-align: right;">

### الاستراتيجية المثلى

- **دمج الاستخدام**: استخدام `\n` للطباعات المتعددة و `endl` للنهايات المهمة
- **التفريغ الذكي**: تفريغ buffer عند نقاط محددة وليس بعد كل عملية

---

## الخلاصة

### النقاط الأساسية:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 \n يضيف سطر جديد فقط
🔄 endl يضيف سطر جديد ويفرغ buffer
⚡ \n أسرع للبيانات الكثيرة
🔍 endl أفضل للتصحيح والنتائج الفورية
💡 buffer منطقة تخزين مؤقتة تحسن الكفاءة
```
</div>

<div dir="rtl" style="text-align: right;">

### القاعدة الذهبية:
> **"استخدم \n للأداء و endl عندما تحتاج إلى التأكد من ظهور الناتج فوراً"**

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Difference Between \n and endl in C++ 
## \n vs endl

## Introduction

In this lesson, we will learn the fundamental difference between using `\n` and `endl` for new lines in C++, and how this affects program performance.

---

## Basic Difference

### Similar Appearance, Different Performance 🎯

Both commands produce the same visible result but performance is completely different:

</div>

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Mohammed Abu-Hadhoud" << endl;  // First method
    cout << "Mohammed Abu-Hadhoud\n";        // Second method
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

### Buffer Concept in Programming

- **buffer**: Temporary storage area in memory
- **Function**: Collect data before sending to output
- **Importance**: Improve operation efficiency

---

## Performance Difference

### How endl Works?

</div>

<div dir="ltr" style="text-align: left; background-color: #e8f5e9; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Add new line
2. Immediately flush buffer
3. Ensure output appears directly
```

</div>

<div dir="rtl" style="text-align: right;">

### How \n Works?

</div>

<div dir="ltr" style="text-align: left; background-color: #fff3cd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
1. Add new line only
2. Does not flush buffer
3. Buffer flushes when full or program ends
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Practical Applications

### When to Use Each?

</div>

<div dir="ltr" style="text-align: left; background-color: #d4edda; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
✅ Use \n when:
   - We have large number of print operations
   - Don't need to see results immediately
   - Want maximum performance

✅ Use endl when:
   - Need to see output immediately
   - Few print operations
   - Debugging
```

</div>

<div dir="rtl" style="text-align: right;">

### Optimal Usage Example

</div>

<div dir="ltr" style="text-align: left; background-color: #e3f2fd; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
#include <iostream>
using namespace std;

int main() {
    // Use \n for multiple prints
    for(int i = 0; i < 1000; i++) {
        cout << "Line " << i << "\n";
    }
    
    // Use endl when we need to ensure appearance
    cout << "Process completed!" << endl;
    
    return 0;
}
```

</div>

<div dir="rtl" style="text-align: right;">

---

## Performance Impact

### Large Data Processing

</div>

<div dir="ltr" style="text-align: left; background-color: #f8d7da; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
❌ Using endl with 1000 lines:
   - 1000 buffer flush operations
   - Slow performance
   - Higher resource consumption

✅ Using \n with 1000 lines:
   - Single buffer flush
   - Faster performance
   - Lower resource consumption
```

</div>

<div dir="rtl" style="text-align: right;">

### Optimal Strategy

- **Combine Usage**: Use `\n` for multiple prints and `endl` for important endings
- **Smart Flushing**: Flush buffer at specific points not after every operation

---

## Summary

### Key Points:

</div>

<div dir="ltr" style="text-align: left; background-color: #f5f5f5; padding: 15px; border-radius: 5px; margin: 10px 0;">

```
🎯 \n adds new line only
🔄 endl adds new line and flushes buffer
⚡ \n faster for large data
🔍 endl better for debugging and immediate results
💡 buffer is temporary storage area that improves efficiency
```
</div>

<div dir="rtl" style="text-align: right;">

### Golden Rule:
> **"Use \n for performance and endl when you need to ensure immediate output appearance"**

</div>

---
*Anas Chetoui* - `@anaschetoui`