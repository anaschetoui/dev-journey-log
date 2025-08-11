[English ↙](#english)
<a id="arabic"></a>
<div dir="rtl" style="text-align: right">

# Access Specifiers/Modifiers 

- نستخدم محددات الوصول للتحكّم بمن يستطيع رؤية أعضاء الكلاس (Members) والتعامل معهم.
- المستفيدون المحتملون:
  1) من هم خارج الكلاس عبر كائنات.
  2) من هم داخل الكلاس (الدوال الداخلية).
  3) الكلاسات التي قد تورّث هذا الكلاس لاحقًا.
- الأنواع: private، protected، public.

## لماذا نحتاجها؟
- لإخفاء التفاصيل الداخلية ورفع أمان الكود.
- لعدم إزعاج مستخدم الكلاس بأعضاء لا يحتاجها عند استخدام dot.

## من هم الـMembers؟
- كل ما بداخل الكلاس:
  - Data Members (متغيرات/بيانات).
  - Function/Method Members (دوال تعمل على بيانات الكلاس).

## أنواع محددات الوصول
- private:
  - مرئي داخل الكلاس فقط.
  - غير مرئي لمن هم خارج الكلاس، ولا للكلاسات التي ترث.
  - ملاحظة: إن لم تُكتب private في الكلاس ، فال Members هناك تُعامل كـ private.
- protected:
  - مرئي داخل الكلاس.
  - مرئي ل الكلاس الوارث
- public:
  - مرئي داخل الكلاس وخارجه.
  - استخدمه لما تريد تعريضه للمستخدم مباشرة.

## ماذا يرى مستخدم الكلاس عبر الـobject؟
- يرى فقط أعضاء public 
- لا يرى private/protected 

## شرح
| محدد الوصول | داخل الكلاس | من خارج الكلاس (عبر object) | ملاحظة  |
|---|---|---|---|
| private | مسموح | غير مسموح | Accessible inside the class only |
| protected | مسموح | غير مسموح | Accessible inside the class and all classes that inherit this class |
| public | مسموح | مسموح | Accessible to everyone |

مثال مطابق لسياق الشرح:
- private: variable1, function1
- protected: variable2, function2
- public: firstName, lastName, FullName, function3

| العضو | نوعه | private (داخل فقط) | protected (داخل فقط للخارج) | public (للجميع) |
|---|---|---|---|---|
| variable1 | Data Member | نعم | لا | لا |
| function1 | Function Member | نعم | لا | لا |
| variable2 | Data Member | لا | نعم | لا |
| function2 | Function Member | لا | نعم | لا |
| firstName | Data Member | لا | لا | نعم |
| lastName | Data Member | لا | لا | نعم |
| FullName | Function Member | لا | لا | نعم |
| function3 | Function Member | لا | لا | نعم |

</div>

```cpp
// LTR code block

#include <iostream>
#include <string>
using namespace std;

class clsPerson {
private:
    int variable1 = 5;          // داخلي فقط
    int function1() {           // داخلي فقط
        return 40;
    }

protected:
    int variable2 = 7;          // غير متاح من الخارج
    int function2() {           // غير متاح من الخارج
        // الدوال الداخلية يمكنها الوصول إلى private و protected
        return variable1 + variable2;
    }

public:
    string firstName;           // متاح للجميع
    string lastName;            // متاح للجميع

    string FullName() {         // متاح للجميع
        return firstName + " " + lastName;
    }

    int function3() {           // متاح للجميع ويستخدم الأعضاء المخفية داخليًا
        int sum = function1() + function2() + variable1 + variable2;
        return sum;
    }
};

int main() {
    clsPerson person1;

    // الوصول إلى public فقط من الخارج:
    person1.firstName = "Anas";
    person1.lastName  = "Chetoui";
    cout << person1.FullName() << endl; // Anas Chetoui
    cout << person1.function3() << endl;

    // أمثلة وصول ممنوع من خارج الكلاس:
    // person1.variable1 = 10;  // private
    // person1.function1();     // private
    // person1.variable2 = 3;   // protected
    // person1.function2();     // protected

    return 0;
}
```

<div dir="rtl" style="text-align: right">

## خلاصة الدرس
- ثلاثة محددات وصول: private، protected، public.
- افصل ما هو داخلي (private)، وما لا تريد تعريضه للخارج (protected)، وما هو للجميع (public).


</div>

<br><br><br><br><br><br>
[العربية ↗](#arabic)
<a id="english"></a>

# Access Specifiers/Modifiers 

- Access specifiers control who can see and use class members (data and functions).
- Potential consumers:
  1) outsiders via objects,
  2) the class itself (internal functions),
  3) classes that may inherit this class later .
- Types: private, protected, public.

## Why?
- Hide internal details and increase code security.
- Avoid overwhelming object users with members they don’t need when using dot.

## What are Members?
- Everything inside the class:
  - Data Members (state/variables).
  - Function/Method Members (methods/procedures that operate on the class data).

## Access types (aligned with the Arabic section)
- private:
  - Visible inside the class only.
  - Not visible from outside the class.
  - Note: if private isn’t written in that class section, members there are treated as private.
- protected:
  - Visible inside the class.
  - Visible to a deriving class . Not visible to outsiders.
- public:
  - Visible inside and outside the class.
  - Use it for what you want to expose to users directly.

## What does an object user see?
- Only public members.
- private/protected are not visible.

## Explanation 
| Access | Inside class | Outside (via object) | Note |
|---|---|---|---|
| private | Allowed | Not allowed | Accessible inside the class only |
| protected | Allowed | Not allowed | Accessible inside the class and all classes that inherit this class (hint only) |
| public | Allowed | Allowed | Accessible to everyone |

Example matching the lecture narrative:
- private: variable1, function1
- protected: variable2, function2
- public: firstName, lastName, FullName, function3

| Member | Kind | private (inside only) | protected (hidden from outside) | public (everyone) |
|---|---|---|---|---|
| variable1 | Data Member | Yes | No | No |
| function1 | Function Member | Yes | No | No |
| variable2 | Data Member | No | Yes | No |
| function2 | Function Member | No | Yes | No |
| firstName | Data Member | No | No | Yes |
| lastName | Data Member | No | No | Yes |
| FullName | Function Member | No | No | Yes |
| function3 | Function Member | No | No | Yes |

## Code sample 
```cpp
#include <iostream>
#include <string>
using namespace std;

class clsPerson {
private:
    int variable1 = 5;
    int function1() { return 40; }

protected:
    int variable2 = 7;
    int function2() { return variable1 + variable2; }

public:
    string firstName;
    string lastName;

    string FullName() { return firstName + " " + lastName; }

    int function3() {
        int sum = function1() + function2() + variable1 + variable2;
        return sum;
    }
};

int main() {
    clsPerson person1;

    // Outside access: public only
    person1.firstName = "Anas";
    person1.lastName  = "Chetoui";
    cout << person1.FullName() << endl; // Anas Chetoui
    cout << person1.function3() << endl;

    // Disallowed from outside:
    // person1.variable1 = 10;  // private
    // person1.function1();     // private
    // person1.variable2 = 3;   // protected
    // person1.function2();     // protected

    return 0;
}
```

## Takeaway
- Three access specifiers: private, protected, public.
- Keep internals private, hide non-exposed details via protected, and expose what’s necessary as public.


[العربية ↗](#arabic)
