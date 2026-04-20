<div dir="rtl">

<a id="arabic-switch-case"></a>
[English ↙](#english-switch-case)

# 🔀 جملة Switch Case Statement

## 🎯 المقدمة

في هذا الدرس، سنتعلم **جملة Switch Case** التي تُستخدم لإجراء مقارنات متعددة بطريقة منظمة وسهلة القراءة.

## 💡 المفاهيم الأساسية

### ما هي Switch Case Statement؟

**Switch Case** هي جملة شرطية تُستخدم لمقارنة قيمة متغيرة مع قيم متعددة، وتنفيذ كود مختلف لكل حالة.

### لماذا نستخدم Switch Case بدلاً من If Statements؟

- **تنظيم أفضل** للكود عند وجود حالات متعددة
- **سهولة القراءة** والصيانة
- **كفاءة أعلى** في التنفيذ

## 🛠️ أمثلة عملية

### 📝 المثال الأول: أيام الأسبوع

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 4;  // الأربعة تمثل Wednesday
    
    switch (day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Not a week day" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
Wednesday
```

</div>

### 📝 المثال الثاني: نظام الألوان (مقارنة مع If Statement)

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

enum enScreenColor { 
    Red = 1, 
    Blue = 2, 
    Green = 3, 
    Yellow = 4 
};

int main() {
    int colorChoice;
    cout << "Enter color choice (1-4): ";
    cin >> colorChoice;
    
    enScreenColor color = (enScreenColor)colorChoice;
    
    // باستخدام Switch Case (مفضل)
    switch (color) {
        case Red:
            system("color 4F");
            cout << "Screen color changed to Red" << endl;
            break;
        case Blue:
            system("color 1F");
            cout << "Screen color changed to Blue" << endl;
            break;
        case Green:
            system("color 2F");
            cout << "Screen color changed to Green" << endl;
            break;
        case Yellow:
            system("color 6F");
            cout << "Screen color changed to Yellow" << endl;
            break;
        default:
            system("color 4F");
            cout << "Invalid choice! Default color (Red) applied" << endl;
    }
    
    return 0;
}
```

</div>

### 📝 المثال الثالث: نظام الدول

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

enum enCountryChoice { 
    Jordan = 1, 
    Tunis = 2, 
    Algeria = 3, 
    Oman = 4, 
    Egypt = 5, 
    Iraq = 6, 
    Other = 7 
};

int main() {
    int countryChoice;
    cout << "Enter country number (1-7): ";
    cin >> countryChoice;
    
    enCountryChoice country = (enCountryChoice)countryChoice;
    
    switch (country) {
        case Jordan:
            cout << "Your country is Jordan" << endl;
            break;
        case Tunis:
            cout << "Your country is Tunis" << endl;
            break;
        case Algeria:
            cout << "Your country is Algeria" << endl;
            break;
        case Oman:
            cout << "Your country is Oman" << endl;
            break;
        case Egypt:
            cout << "Your country is Egypt" << endl;
            break;
        case Iraq:
            cout << "Your country is Iraq" << endl;
            break;
        case Other:
            cout << "Your country is Other" << endl;
            break;
        default:
            cout << "Invalid country choice!" << endl;
    }
    
    return 0;
}
```

</div>

## 🔧 بناء جملة Switch Case

### الهيكل الأساسي

<div dir="ltr" align="left">

```cpp
switch (expression) {
    case value1:
        // كود يتم تنفيذه إذا expression == value1
        break;
    case value2:
        // كود يتم تنفيذه إذا expression == value2
        break;
    case value3:
        // كود يتم تنفيذه إذا expression == value3
        break;
    default:
        // كود يتم تنفيذه إذا لم تطابق أي حالة
}
```

</div>

### شرح المكونات:

- **`switch (expression)`**: المتغير أو التعبير المراد مقارنته
- **`case value:`**: القيمة المراد المقارنة معها
- **`break;`**: يخرج من جملة switch بعد تنفيذ الحالة
- **`default:`**: الحالة الافتراضية التي تنفذ إذا لم تطابق أي case

## ⚠️ الأخطاء الشائعة

### 1. نسيان جملة Break

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - نسيان break
int day = 1;

switch (day) {
    case 1:
        cout << "Sunday" << endl;
        // نسيان break هنا
    case 2:
        cout << "Monday" << endl;
        break;
}

// النتيجة غير المرغوبة:
// Sunday
// Monday
```

</div>

<div dir="ltr" align="left">

```cpp
// ✅ صحيح - استخدام break
int day = 1;

switch (day) {
    case 1:
        cout << "Sunday" << endl;
        break;  // وجود break
    case 2:
        cout << "Monday" << endl;
        break;
}

// النتيجة المرغوبة:
// Sunday
```

</div>

### 2. ترتيب الحالات بشكل خاطئ

<div dir="ltr" align="left">

```cpp
// ❌ خطأ - ترتيب غير منطقي
switch (value) {
    case 10:
        // كود
        break;
    case 5:   // يجب أن يكون قبل 10
        // كود
        break;
}

// ✅ صحيح - ترتيب تصاعدي
switch (value) {
    case 1:
        // كود
        break;
    case 2:
        // كود
        break;
    case 3:
        // كود
        break;
}
```

</div>

## 🎯 آلية العمل

### كيف تعمل Switch Case خطوة بخطوة؟

1. **تقييم التعبير** داخل `switch()`
2. **المقارنة مع cases** بالترتيب من الأعلى للأسفل
3. **تنفيذ الكود** لأول case يطابق التعبير
4. **الخروج بbreak** أو متابعة التنفيذ لبقية cases إذا لم يكن هناك break
5. **تنفيذ default** إذا لم تطابق أي case

### مثال توضيحي للآلية:

<div dir="ltr" align="left">

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 3;
    
    cout << "الرقم المدخل: " << number << endl;
    
    switch (number) {
        case 1:
            cout << "الحالة 1 تحققت" << endl;
            break;
        case 2:
            cout << "الحالة 2 تحققت" << endl;
            break;
        case 3:
            cout << "الحالة 3 تحققت" << endl;
            break;
        default:
            cout << "لا توجد حالة مطابقة" << endl;
    }
    
    return 0;
}
```

**النتيجة:**
```
الرقم المدخل: 3
الحالة 3 تحققت
```

</div>

## 🆚 مقارنة بين Switch Case و If Statements

### استخدام Switch Case عندما:

<div dir="ltr" align="left">

```cpp
// ✅ مناسب لـ Switch Case
switch (color) {
    case Red:   // مقارنة بقيم محددة
        break;
    case Blue:
        break;
    case Green:
        break;
}
```

</div>

### استخدام If Statements عندما:

<div dir="ltr" align="left">

```cpp
// ✅ مناسب لـ If Statements
if (age > 18 && age < 65) {   // شروط مركبة
    // كود
} else if (score >= 90) {     // مقارنات معقدة
    // كود
} else if (name == "Admin") { // مقارنة نصوص
    // كود
}
```

</div>

## 🏆 أفضل الممارسات

### 1. دائماً استخدم Default Case

<div dir="ltr" align="left">

```cpp
// ✅ صحيح - وجود default
switch (choice) {
    case 1:
        // كود
        break;
    case 2:
        // كود
        break;
    default:
        cout << "اختيار غير صحيح" << endl;
}
```

</div>

### 2. استخدم Enums مع Switch Case

<div dir="ltr" align="left">

```cpp
// ✅ صحيح - استخدام Enums
enum enStatus { Active = 1, Inactive = 2, Pending = 3 };

enStatus status = Active;

switch (status) {
    case Active:
        cout << "الحالة: نشط" << endl;
        break;
    case Inactive:
        cout << "الحالة: غير نشط" << endl;
        break;
    case Pending:
        cout << "الحالة: قيد الانتظار" << endl;
        break;
}
```

</div>

### 3. تنظيم الكود بشكل واضح

<div dir="ltr" align="left">

```cpp
// ✅ صحيح - تنسيق واضح
switch (userType) {
    case Admin:
        displayAdminMenu();
        processAdminCommands();
        break;
        
    case User:
        displayUserMenu();
        processUserRequests();
        break;
        
    case Guest:
        displayGuestInfo();
        limitGuestAccess();
        break;
        
    default:
        showErrorMessage();
        redirectToLogin();
}
```

</div>

## 📝 الملخص

### المفاهيم الأساسية:

- **Switch Case** تستخدم للمقارنات المتعددة مع قيم محددة
- **Break** ضروري للخروج من switch بعد كل case
- **Default** اختيارية ولكن يفضل استخدامها

### بناء الجملة:

```cpp
switch (variable) {
    case value1:
        // كود
        break;
    case value2:
        // كود
        break;
    default:
        // كود
}
```

### قواعد مهمة:

1. **لا تنسى break** بعد كل case
2. **رتب cases** بشكل منطقي
3. **استخدم default** للتعامل مع القيم غير المتوقعة
4. **Switch Case** مناسبة للمقارنات البسيطة، If Statements للمعقدة

### فوائد Switch Case:

1. **كود أكثر تنظيماً** وقراءة
2. **كفاءة في التنفيذ** لمقارنات متعددة
3. **سهولة الصيانة** والتعديل
4. **مناسبة مع Enums** لتحسين قابلية القراءة

</div>

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

<a id="english-switch-case"></a>
[العربية ↗](#arabic-switch-case)

# 🔀 Switch Case Statement

## 🎯 Introduction

In this lesson, we'll learn about the **Switch Case Statement** which is used for multiple comparisons in an organized and readable way.

## 💡 Core Concepts

### What is Switch Case Statement?

**Switch Case** is a conditional statement used to compare a variable's value with multiple values and execute different code for each case.

### Why Use Switch Case Instead of If Statements?

- **Better organization** for code with multiple cases
- **Easier to read** and maintain
- **Higher efficiency** in execution

## 🛠️ Practical Examples

### 📝 Example 1: Days of the Week

```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 4;  // 4 represents Wednesday
    
    switch (day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Not a week day" << endl;
    }
    
    return 0;
}
```

**Result:**
```
Wednesday
```

### 📝 Example 2: Color System (Comparison with If Statement)

```cpp
#include <iostream>
using namespace std;

enum enScreenColor { 
    Red = 1, 
    Blue = 2, 
    Green = 3, 
    Yellow = 4 
};

int main() {
    int colorChoice;
    cout << "Enter color choice (1-4): ";
    cin >> colorChoice;
    
    enScreenColor color = (enScreenColor)colorChoice;
    
    // Using Switch Case (Preferred)
    switch (color) {
        case Red:
            system("color 4F");
            cout << "Screen color changed to Red" << endl;
            break;
        case Blue:
            system("color 1F");
            cout << "Screen color changed to Blue" << endl;
            break;
        case Green:
            system("color 2F");
            cout << "Screen color changed to Green" << endl;
            break;
        case Yellow:
            system("color 6F");
            cout << "Screen color changed to Yellow" << endl;
            break;
        default:
            system("color 4F");
            cout << "Invalid choice! Default color (Red) applied" << endl;
    }
    
    return 0;
}
```

### 📝 Example 3: Country System

```cpp
#include <iostream>
using namespace std;

enum enCountryChoice { 
    Jordan = 1, 
    Tunis = 2, 
    Algeria = 3, 
    Oman = 4, 
    Egypt = 5, 
    Iraq = 6, 
    Other = 7 
};

int main() {
    int countryChoice;
    cout << "Enter country number (1-7): ";
    cin >> countryChoice;
    
    enCountryChoice country = (enCountryChoice)countryChoice;
    
    switch (country) {
        case Jordan:
            cout << "Your country is Jordan" << endl;
            break;
        case Tunis:
            cout << "Your country is Tunis" << endl;
            break;
        case Algeria:
            cout << "Your country is Algeria" << endl;
            break;
        case Oman:
            cout << "Your country is Oman" << endl;
            break;
        case Egypt:
            cout << "Your country is Egypt" << endl;
            break;
        case Iraq:
            cout << "Your country is Iraq" << endl;
            break;
        case Other:
            cout << "Your country is Other" << endl;
            break;
        default:
            cout << "Invalid country choice!" << endl;
    }
    
    return 0;
}
```

## 🔧 Switch Case Syntax

### Basic Structure

```cpp
switch (expression) {
    case value1:
        // code executed if expression == value1
        break;
    case value2:
        // code executed if expression == value2
        break;
    case value3:
        // code executed if expression == value3
        break;
    default:
        // code executed if no case matches
}
```

### Component Explanation:

- **`switch (expression)`**: Variable or expression to compare
- **`case value:`**: Value to compare against
- **`break;`**: Exits the switch statement after executing the case
- **`default:`**: Default case that executes if no case matches

## ⚠️ Common Errors

### 1. Forgetting Break Statement

```cpp
// ❌ Error - forgetting break
int day = 1;

switch (day) {
    case 1:
        cout << "Sunday" << endl;
        // forgetting break here
    case 2:
        cout << "Monday" << endl;
        break;
}

// Unwanted result:
// Sunday
// Monday
```

```cpp
// ✅ Correct - using break
int day = 1;

switch (day) {
    case 1:
        cout << "Sunday" << endl;
        break;  // break exists
    case 2:
        cout << "Monday" << endl;
        break;
}

// Desired result:
// Sunday
```

### 2. Wrong Case Order

```cpp
// ❌ Error - illogical order
switch (value) {
    case 10:
        // code
        break;
    case 5:   // Should be before 10
        // code
        break;
}

// ✅ Correct - ascending order
switch (value) {
    case 1:
        // code
        break;
    case 2:
        // code
        break;
    case 3:
        // code
        break;
}
```

## 🎯 How It Works

### Switch Case Step-by-Step Execution:

1. **Evaluate expression** inside `switch()`
2. **Compare with cases** in order from top to bottom
3. **Execute code** for first matching case
4. **Exit with break** or continue executing remaining cases if no break
5. **Execute default** if no case matches

### Demonstration Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 3;
    
    cout << "Entered number: " << number << endl;
    
    switch (number) {
        case 1:
            cout << "Case 1 matched" << endl;
            break;
        case 2:
            cout << "Case 2 matched" << endl;
            break;
        case 3:
            cout << "Case 3 matched" << endl;
            break;
        default:
            cout << "No case matched" << endl;
    }
    
    return 0;
}
```

**Result:**
```
Entered number: 3
Case 3 matched
```

## 🆚 Comparison: Switch Case vs If Statements

### Use Switch Case When:

```cpp
// ✅ Suitable for Switch Case
switch (color) {
    case Red:   // Comparison with specific values
        break;
    case Blue:
        break;
    case Green:
        break;
}
```

### Use If Statements When:

```cpp
// ✅ Suitable for If Statements
if (age > 18 && age < 65) {   // Compound conditions
    // code
} else if (score >= 90) {     // Complex comparisons
    // code
} else if (name == "Admin") { // String comparisons
    // code
}
```

## 🏆 Best Practices

### 1. Always Use Default Case

```cpp
// ✅ Correct - default exists
switch (choice) {
    case 1:
        // code
        break;
    case 2:
        // code
        break;
    default:
        cout << "Invalid choice" << endl;
}
```

### 2. Use Enums with Switch Case

```cpp
// ✅ Correct - using Enums
enum enStatus { Active = 1, Inactive = 2, Pending = 3 };

enStatus status = Active;

switch (status) {
    case Active:
        cout << "Status: Active" << endl;
        break;
    case Inactive:
        cout << "Status: Inactive" << endl;
        break;
    case Pending:
        cout << "Status: Pending" << endl;
        break;
}
```

### 3. Organize Code Clearly

```cpp
// ✅ Correct - clear formatting
switch (userType) {
    case Admin:
        displayAdminMenu();
        processAdminCommands();
        break;
        
    case User:
        displayUserMenu();
        processUserRequests();
        break;
        
    case Guest:
        displayGuestInfo();
        limitGuestAccess();
        break;
        
    default:
        showErrorMessage();
        redirectToLogin();
}
```

## 📝 Summary

### Core Concepts:

- **Switch Case** used for multiple comparisons with specific values
- **Break** necessary to exit switch after each case
- **Default** is optional but recommended

### Syntax:

```cpp
switch (variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
```

### Important Rules:

1. **Don't forget break** after each case
2. **Order cases** logically
3. **Use default** to handle unexpected values
4. **Switch Case** suitable for simple comparisons, If Statements for complex ones

### Benefits of Switch Case:

1. **More organized** and readable code
2. **Execution efficiency** for multiple comparisons
3. **Easy maintenance** and modification
4. **Suitable with Enums** for improved readability

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>