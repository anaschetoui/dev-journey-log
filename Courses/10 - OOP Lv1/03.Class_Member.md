 [English↙](#english)


<a id="arabic"></a>
<div dir="rtl" style="text-align: right">

# Class Member 

 الكلاس يحتوي نوعين من الأعضاء (Members):
- Data Members: متغيرات لكل Object على حدة.
- Function/Method Members: دوال مشتركة في التعريف، تعمل على بيانات الكائن الذي يستدعيها.

---

## 1) Class و Object باختصار
- Class: قالب/Template مثل المخطط؛ لا نستخدمه مباشرة.
- Object (Instance): نسخة فعلية من الـClass نعمل عليها.

## 2) ما هو Member؟
- كل ما بداخل الكلاس يُسمى Members (أعضاء الكلاس).

## 3) أنواع Members
- Data Members: مثل `FirstName`, `LastName`؛ نخزن فيها البيانات.
- Function/Method Members: مثل `FullName()`؛ تعالج بيانات الكلاس.

## 4) الوصول والخصوصية
- public: متاح من خارج الكلاس.
- private: محجوب عن الخارج.
- ملاحظة: دوال الكلاس ترى كل المتغيرات داخله سواء كانت public أو private.

## 5) نموذج الذاكرة
- لكل Object نسخته الخاصة من الـData Members.
- Member Functions لها تعريف واحد مشترك، لكنها تعمل على بيانات الكائن المستدعِي.

</div>

```cpp
// مثال C++
#include <iostream>
using namespace std;

class clsPerson {
public:
    string FirstName;
    string LastName;

    string FullName() {
        return FirstName + " " + LastName;
    }
};

int main() {
    clsPerson Person1, Person2;

    Person1.FirstName = "Mohammed";
    Person1.LastName  = "Abu-Hadhoud";

    Person2.FirstName = "Ali";
    Person2.LastName  = "Maher";

    cout << "Person1: " << Person1.FullName() << endl;
    cout << "Person2: " << Person2.FullName() << endl;

    return 0;
}
```

<div dir="rtl" style="text-align: right">

## 6) 
| المفهوم | النطاق | مكان الوجود | مثال |
|---|---|---|---|
| Member Functions | مشتركة بين كل الكائنات | تعريف واحد على مستوى الكلاس | `FullName()` |
| Data Members | خاصة بكل كائن | داخل كل Object | `FirstName`, `LastName` |

| Object | FirstName | LastName | FullName() |
|---|---|---|---|
| Person1 | Mohammed | Abu-Hadhoud | Mohammed Abu-Hadhoud |
| Person2 | Ali | Maher | Ali Maher |



</div>

<br><br><br><br><br><br>



[العربية ↗](#arabic)
<a id="english"></a>

# Class Member 

A class has two kinds of members:
- Data Members: variables stored per object (instance).
- Function/Method Members: shared definition, executed on the calling object’s data.

---

## 1) Class vs Object
- Class: a template/blueprint; not used directly.
- Object (Instance): a concrete copy created from the class.

## 2) What is a Member?
- Everything declared inside the class is a “member.”

## 3) Types of Members
- Data Members: e.g., `FirstName`, `LastName`; hold data.
- Function/Method Members: e.g., `FullName()`; operate on the class’s data.

## 4) Access
- public: accessible from outside the class.
- private: not accessible from outside.
- Note: Member functions can access all class variables, public or private.

## 5) Memory model
- Each object has its own copy of data members.
- Member functions are defined once and act on the data of the object that invokes them.

```cpp
// C++ example
#include <iostream>
using namespace std;

class clsPerson {
public:
    string FirstName;
    string LastName;

    string FullName() {
        return FirstName + " " + LastName;
    }
};

int main() {
    clsPerson Person1, Person2;

    Person1.FirstName = "Mohammed";
    Person1.LastName  = "Abu-Hadhoud";

    Person2.FirstName = "Ali";
    Person2.LastName  = "Maher";

    cout << "Person1: " << Person1.FullName() << endl;
    cout << "Person2: " << Person2.FullName() << endl;

    return 0;
}
```

## 6) 
| Concept | Scope | Where it lives | Example |
|---|---|---|---|
| Member Functions | Shared across objects | One definition per class | `FullName()` |
| Data Members | Per object | Inside each object | `FirstName`, `LastName` |

| Object | FirstName | LastName | FullName() |
|---|---|---|---|
| Person1 | Mohammed | Abu-Hadhoud | Mohammed Abu-Hadhoud |
| Person2 | Ali | Maher | Ali Maher |
