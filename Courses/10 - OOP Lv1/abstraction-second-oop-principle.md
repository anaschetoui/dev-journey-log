<a id="arabic"></a>
[English ↙](#english)
<div dir="rtl" style="text-align: right">
  
# Second Principle/Concept of OOP: Abstraction

## ما هو الـ Abstraction؟

هو المبدأ الثاني من مبادئ البرمجة الكائنية (OOP).
معناه: إخفاء التعقيد عن المستخدم وإظهار ما يحتاجه فقط.

## التشبيه البسيط: تطبيق الكاميرا

عندما تريد التقاط صورة بهاتفك:
- تفتح تطبيق الكاميرا
- تجد دائرة واحدة للتصوير
- تضغط عليها فتُلتقط الصورة

هذا بسيط جداً بالنسبة لك كمستخدم، لكن ماذا يحدث خلف الكواليس؟

## ما يحدث داخلياً (مخفي عنك)

دالة `TakePicture()` تستدعي 10 دوال أخرى:
- ضبط الإضاءة
- تشغيل الفلاش
- ضبط التركيز
- معالجة الصورة
- حفظ الملف
- وغيرها...

## لماذا يُخفى هذا التعقيد؟

لو ظهرت لك 11 دائرة بدلاً من واحدة:
- ستشعر بالإرباك والتعقيد
- ستضيع وقتك في أشياء لا تحتاجها
- ستصبح التجربة صعبة ومعقدة

## التطبيق في البرمجة

كمطور، أنت تخدم مطورين آخرين (أو نفسك لاحقاً):
- هدفك: تسهيل حياتهم
- إخفاء التعقيد غير المفيد
- إظهار ما يحتاجونه فقط
</div>


<div dir="rtl" style="text-align: right">

## مثال: String Object

عندما تستخدم `string s1;` وتكتب `s1.` ترى:
- `length()`
- `substring()`
- `find()`
- وغيرها من الدوال المفيدة

لكن هناك ضعف هذا العدد من الدوال مخفية داخلياً:
- دوال معالجة الذاكرة
- دوال الحسابات الداخلية
- دوال التحسين
- لا تحتاجها كمستخدم، لذلك مخفية عنك

## مبدأ Abstraction vs Abstract Class

**تنبيه مهم:**
- **Abstraction** (التجريد): المفهوم الذي نتعلمه اليوم
- **Abstract Class** (الكلاس المجرد): موضوع مختلف تماماً سنتعلمه لاحقاً

لا تخلط بين المفهومين!

## فوائد الـ Abstraction

1. **البساطة**: واجهة سهلة للمستخدم
2. **تقليل الأخطاء**: إخفاء التعقيد يقلل احتمالية الخطأ
3. **سهولة الاستخدام**: التركيز على ما يهم فقط
4. **المرونة**: تغيير التنفيذ الداخلي دون تأثير على المستخدم

## الخلاصة

الـ Abstraction هو:
- إخفاء التعقيد غير المفيد عن المستخدم
- إظهار ما يحتاجه المطور فقط
- تبسيط التفاعل مع الكود
- تحسين تجربة المطور

هدفك كمطور: اجعل كودك سهل الاستخدام للآخرين.

</div>

<br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

# Second Principle/Concept of OOP: Abstraction

## What is Abstraction?

The second principle of Object-Oriented Programming (OOP).
Meaning: Hiding complexity from the user and showing only what they need.

## Simple Analogy: Camera App

When you want to take a photo with your phone:
- You open the camera app
- You see one circle for taking photos
- You press it and the photo is taken

This is very simple for you as a user, but what happens behind the scenes?

## What Happens Internally (Hidden from You)

The `TakePicture()` function calls 10 other functions:
- Adjust lighting
- Enable flash
- Set focus
- Process image
- Save file
- And more...

## Why Hide This Complexity?

If you saw 11 circles instead of one:
- You'd feel confused and overwhelmed
- You'd waste time on things you don't need
- The experience would become difficult and complex

## Application in Programming

As a developer, you serve other developers (or yourself later):
- Your goal: make their life easier
- Hide unnecessary complexity
- Show only what they need


## Example: String Object

When you use `string s1;` and type `s1.` you see:
- `length()`
- `substring()`
- `find()`
- And other useful functions

But there are twice as many functions hidden internally:
- Memory management functions
- Internal calculation functions
- Optimization functions
- You don't need them as a user, so they're hidden

## Abstraction Principle vs Abstract Class

**Important Note:**
- **Abstraction** (the concept): What we're learning today
- **Abstract Class**: A completely different topic we'll learn later

Don't confuse the two concepts!

## Benefits of Abstraction

1. **Simplicity**: Easy interface for the user
2. **Error Reduction**: Hiding complexity reduces chances of errors
3. **Ease of Use**: Focus on what matters only
4. **Flexibility**: Change internal implementation without affecting the user

## Summary

Abstraction is:
- Hiding unnecessary complexity from the user
- Showing only what the developer needs
- Simplifying interaction with code
- Improving developer experience

Your goal as a developer: make your code easy to use for others.


---
*Anas Chetoui* `@anaschetoui`
