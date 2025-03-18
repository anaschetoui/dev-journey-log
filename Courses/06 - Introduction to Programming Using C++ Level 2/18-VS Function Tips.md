<a id="arabic"></a>
[English ↙](#english)

<div dir="rtl" style="text-align: right; font-family: 'Arial', sans-serif;">

## VS Function Tips

في هذا الدرس، سنتعلم نصائح وحيل في Visual Studio لتسهيل التعامل مع الدوال وجعل عملية البرمجة أسرع وأكثر كفاءة.

---

## تنظيم عرض الكود

### 1. Collapse/Expand الدوال

يمكنك إظهار أو إخفاء محتوى الدوال لتقليل ازدحام الشاشة:

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
void function1() {
    // كود الدالة
}

void function2() {
    // كود الدالة
}

void function3() {
    // كود الدالة
}
```
</div>

**الاستخدام:**
- انقر على السهم بجانب اسم الدالة
- أو استخدم `Ctrl+M, Ctrl+M` للتبديل

---

## التنقل بين الدوال

### 2. الانتقال إلى التعريف (Go to Definition)

للانتقال إلى مكان تعريف الدالة:

**الطريقة:**
- انقر بزر الماوس الأيمن على اسم الدالة
- اختر **Go to Definition**
- أو استخدم المفتاح **F12**

### 3. الانتقال إلى الإعلان (Go to Declaration)

للانتقال إلى إعلان الدالة:

**الطريقة:**
- انقر بزر الماوس الأيمن على اسم الدالة
- اختر **Go to Declaration**
- أو استخدم **Ctrl+F12**

---

## تحليل استدعاءات الدوال

### 4. عرض Call Hierarchy

لمعرفة من يستدعي الدالة ومن تستدعي:

**الطريقة:**
- انقر بزر الماوس الأيمن على اسم الدالة
- اختر **View Call Hierarchy**
- سيعرض لك:
  - من يستدعي هذه الدالة (Calls To)
  - من تستدعيه هذه الدالة (Calls From)

### 5. البحث عن جميع المراجع (Find All References)

للعثور على جميع أماكن استخدام الدالة في الكود:

**الطريقة:**
- انقر بزر الماوس الأيمن على اسم الدالة
- اختر **Find All References**
- أو استخدم **Shift+F12**
- ستظهر نافذة بجميع الأماكن التي تم ذكر الدالة فيها

---

## معاينة الدوال

### 6. معاينة التعريف (Peek Definition)

لمعاينة تعريف الدالة دون الانتقال إليها:

**الطريقة:**
- انقر بزر الماوس الأيمن على اسم الدالة
- اختر **Peek Definition**
- أو استخدم **Alt+F12**
- ستظهر نافذة منبثقة بعرض تعريف الدالة

**المميزات:**
- تبقى في مكانك الحالي
- يمكنك التعديل مباشرة في النافذة المنبثقة
- تغلق بالنقر على X

---

## إعادة تسمية الدوال

### 7. إعادة التسمية (Rename)

لتغيير اسم دالة في جميع أنحاء المشروع:

**الطريقة:**
- انقر بزر الماوس الأيمن على اسم الدالة
- اختر **Rename**
- أو استخدم **Ctrl+R, Ctrl+R**
- أدخل الاسم الجديد
- اختر نطاق التغيير (المشروع الحالي أو الحل بأكمله)
- انقر على **Preview Changes** لمعاينة التغييرات
- انقر على **Apply** لتطبيق التغييرات

**مثال:**

<div dir="ltr" style="text-align: left; background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 10px 0;">

```cpp
// قبل التغيير
void function4() {
    // كود
}

// بعد التغيير
void coco() {
    // نفس الكود
}
```
</div>
---

## مفاتيح الاختصار الرئيسية

| المهمة | الاختصار | الوصف |
|--------|----------|-------|
| **Go to Definition** | F12 | الانتقال إلى تعريف الدالة |
| **Go to Declaration** | Ctrl+F12 | الانتقال إلى إعلان الدالة |
| **Find All References** | Shift+F12 | البحث عن جميع مراجع الدالة |
| **Peek Definition** | Alt+F12 | معاينة تعريف الدالة |
| **Rename** | Ctrl+R, Ctrl+R | إعادة تسمية الدالة |
| **Collapse/Expand** | Ctrl+M, Ctrl+M | طي/فتح الدالة الحالية |

---

## فوائد استخدام هذه الميزات

### 1. توفير الوقت
- لا حاجة للبحث يدوياً عن الدوال
- تغيير الأسماء تلقائياً في جميع الأماكن

### 2. تحسين الفهم
- رؤية علاقات الاستدعاء بين الدوال
- فهم بنية البرنامج بشكل أفضل

### 3. تقليل الأخطاء
- تجنب نسيان تغيير اسم في مكان ما
- التأكد من أن جميع المراجع صحيحة

### 4. زيادة الإنتاجية
- التركيز على كتابة الكود بدلاً من البحث
- الاستفادة القصوى من أدوات الـ IDE

---

## تطبيق الميزات على لغات أخرى

جميع الميزات المذكورة تعمل مع:
- **C++** (اللغة الحالية)
- **C#** 
- **Visual Basic**
- أي لغة برمجة تعمل ضمن Visual Studio 2022

### الفائدة:
ما تتعلمه اليوم في C++ ينطبق على لغات أخرى في نفس الـ IDE، مما يجعلك مبرمجاً أكثر كفاءة في جميع اللغات.

---

## نصائح عملية

### 1. تعلم الاختصارات
- ابدأ باستخدام القوائم المنسدلة
- تدرب على استخدام الاختصارات تدريجياً
- احفظ الاختصارات الأكثر استخداماً

### 2. استخدم Preview قبل التطبيق
- دائماً استخدم **Preview Changes** قبل **Apply**
- تحقق من التغييرات قبل تطبيقها
- تأكد من أن التغييرات في الأماكن الصحيحة فقط

### 3. نظم كودك
- استخدم Collapse للدوال التي لا تعمل عليها حالياً
- حافظ على شاشة نظيفة ومرتبة
- استخدم Call Hierarchy لفهم تدفق البرنامج

### 4. تدرب على مشاريع حقيقية
- طبق هذه الميزات على مشاريعك الخاصة
- جرب جميع الميزات في مشروع صغير أولاً
- اكتشف ميزات إضافية بنفسك

---

## الخلاصة

### الميزات الأساسية:
1. **Collapse/Expand** - تنظيم عرض الكود
2. **Go to Definition/Declaration** - التنقل السريع
3. **Call Hierarchy** - فهم علاقات الاستدعاء
4. **Find All References** - البحث الشامل
5. **Peek Definition** - المعاينة السريعة
6. **Rename** - التغيير الآمن

### الفكرة الرئيسية:
> **"Visual Studio ليس مجرد محرر نصوص، بل هو مجموعة أدوات ذكية تجعل البرمجة أسرع وأكثر كفاءة"**

### النصيحة الذهبية:
استثمر الوقت في تعلم أدوات الـ IDE، فهذا الاستثمار سيعود عليك بتوفير الوقت في كل مشروع تبرمجه.

</div>

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

<a id="english"></a>
[العربية ↗](#arabic)

<div dir="ltr" style="text-align: left; font-family: 'Arial', sans-serif;">

# VS Function Tips

In this lesson, we will learn tips and tricks in Visual Studio to make working with functions easier and programming faster and more efficient.

---

## Organizing Code Display

### 1. Collapse/Expand Functions

You can show or hide function content to reduce screen clutter:

```cpp
void function1() {
    // function code
}

void function2() {
    // function code
}

void function3() {
    // function code
}
```

**Usage:**
- Click the arrow next to the function name
- Or use `Ctrl+M, Ctrl+M` to toggle

---

## Navigating Between Functions

### 2. Go to Definition

To go to where a function is defined:

**Method:**
- Right-click on the function name
- Choose **Go to Definition**
- Or use the **F12** key

### 3. Go to Declaration

To go to where a function is declared:

**Method:**
- Right-click on the function name
- Choose **Go to Declaration**
- Or use **Ctrl+F12**

---

## Analyzing Function Calls

### 4. View Call Hierarchy

To see who calls the function and who it calls:

**Method:**
- Right-click on the function name
- Choose **View Call Hierarchy**
- Will show you:
  - Who calls this function (Calls To)
  - Who this function calls (Calls From)

### 5. Find All References

To find all places where the function is used in the code:

**Method:**
- Right-click on the function name
- Choose **Find All References**
- Or use **Shift+F12**
- A window will show all places where the function is mentioned

---

## Previewing Functions

### 6. Peek Definition

To preview a function definition without navigating to it:

**Method:**
- Right-click on the function name
- Choose **Peek Definition**
- Or use **Alt+F12**
- A popup window will show the function definition

**Features:**
- Stay in your current location
- Can edit directly in the popup window
- Close by clicking X

---

## Renaming Functions

### 7. Rename

To change a function name throughout the project:

**Method:**
- Right-click on the function name
- Choose **Rename**
- Or use **Ctrl+R, Ctrl+R**
- Enter the new name
- Choose change scope (current project or entire solution)
- Click **Preview Changes** to preview changes
- Click **Apply** to apply changes

**Example:**
```cpp
// Before change
void function4() {
    // code
}

// After change
void coco() {
    // same code
}
```

---

## Key Shortcuts

| Task | Shortcut | Description |
|------|----------|-------------|
| **Go to Definition** | F12 | Go to function definition |
| **Go to Declaration** | Ctrl+F12 | Go to function declaration |
| **Find All References** | Shift+F12 | Find all function references |
| **Peek Definition** | Alt+F12 | Preview function definition |
| **Rename** | Ctrl+R, Ctrl+R | Rename function |
| **Collapse/Expand** | Ctrl+M, Ctrl+M | Collapse/expand current function |

---

## Benefits of Using These Features

### 1. Time Saving
- No need to manually search for functions
- Automatic name changes everywhere

### 2. Better Understanding
- See call relationships between functions
- Better understand program structure

### 3. Error Reduction
- Avoid forgetting to change a name somewhere
- Ensure all references are correct

### 4. Increased Productivity
- Focus on writing code instead of searching
- Maximum utilization of IDE tools

---

## Applying Features to Other Languages

All mentioned features work with:
- **C++** (current language)
- **C#**
- **Visual Basic**
- Any programming language working within Visual Studio 2022

### Benefit:
What you learn today in C++ applies to other languages in the same IDE, making you a more efficient programmer in all languages.

---

## Practical Tips

### 1. Learn Shortcuts
- Start using dropdown menus
- Gradually practice using shortcuts
- Memorize most used shortcuts

### 2. Use Preview Before Applying
- Always use **Preview Changes** before **Apply**
- Check changes before applying them
- Ensure changes are only in the right places

### 3. Organize Your Code
- Use Collapse for functions you're not currently working on
- Maintain a clean and organized screen
- Use Call Hierarchy to understand program flow

### 4. Practice on Real Projects
- Apply these features to your own projects
- Try all features on a small project first
- Discover additional features on your own

---

## Summary

### Core Features:
1. **Collapse/Expand** - Organize code display
2. **Go to Definition/Declaration** - Quick navigation
3. **Call Hierarchy** - Understand call relationships
4. **Find All References** - Comprehensive search
5. **Peek Definition** - Quick preview
6. **Rename** - Safe changes

### Main Idea:
> **"Visual Studio is not just a text editor, but a set of smart tools that make programming faster and more efficient"**

### Golden Tip:
Invest time in learning IDE tools, this investment will save you time in every project you program.

<br>
<br>
<br>
<br>
<br>

---
*Anas Chetoui* - `@anaschetoui`

</div>