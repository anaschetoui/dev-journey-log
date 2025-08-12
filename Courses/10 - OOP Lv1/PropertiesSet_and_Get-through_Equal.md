<a id="arabic"></a>
[English ↙](#english)
<div dir="rtl" style="text-align: right">

# Properties Set and Get through "="


بدلاً من كتابة:
- `person.setFirstName("Anas");`
- `cout << person.getFirstName();`

نريد أن نكتب:
- `person.FirstName = "Anas";`
- `cout << person.FirstName;`

## كيف نحقق ذلك؟
نضيف سطراً واحداً يربط اسم الخاصية بدوال get و set:
<div dir="ltr">
 
  `__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;`
 
</div>

<div dir="rtl" style="text-align: right">


هذا السطر يخبر المترجم:
- عندما يرى `FirstName =` ينادي `setFirstName`
- عندما يرى قراءة لـ `FirstName` ينادي `getFirstName`

## ملاحظة
هذه الطريقة تعمل فقط مع كومبايلر مايكروسوفت (MSVC) على ويندوز.
لا تعمل مع GCC أو Clang على لينكس أو ماك.

## مثال كامل
</div>
<div dir="ltr">

```cpp
#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:
    string _firstName;
    string _lastName;

public:
    // دوال set عادية
    void setFirstName(string value)
    {
        _firstName = value;
    }
    
    void setLastName(string value)
    {
        _lastName = value;
    }

    // دوال get عادية
    string getFirstName()
    {
        return _firstName;
    }
    
    string getLastName()
    {
        return _lastName;
    }
    
    string getFullName()
    {
        return _firstName + " " + _lastName;
    }

    // ربط الخصائص (MSVC فقط)
    __declspec(property(get = getFirstName, put = setFirstName)) string FirstName;
    __declspec(property(get = getLastName, put = setLastName)) string LastName;
    __declspec(property(get = getFullName)) string FullName; // قراءة فقط
};

int main()
{
    clsPerson person;

    // استخدام الخصائص الجديدة
    person.FirstName = "Anas";
    person.LastName = "Chetoui";

    cout << person.FirstName << endl;  // Anas
    cout << person.LastName << endl;   // Chetoui
    cout << person.FullName << endl;   // Anas Chetoui 

    return 0;
}
```
</div>

<div dir="rtl" style="text-align: right">

## الخلاصة
- هذه طريقة لتبسيط الوصول إلى دوال get و set
- تعمل فقط مع MSVC على ويندوز
- مفيدة لجعل الكود أكثر وضوحاً وسهولة في القراءة

</div>

---



<br><br><br><br><br><br><br><br><br>
<div dir="ltr">
  <a id="english"></a>
  
[العربية ↗](#arabic)
# Properties Set and Get through "="

Instead of writing:
- `person.setFirstName("Anas");`
- `cout << person.getFirstName();`

We want to write:
- `person.FirstName = "Anas";`
- `cout << person.FirstName;`

## How?
Add one line that maps the property name to get/set functions:

`__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;`

This tells the compiler:
- When it sees `FirstName =` call `setFirstName`
- When it sees reading `FirstName` call `getFirstName`

## Important Note
This only works with Microsoft Visual C++ (MSVC) on Windows.
Does not work with GCC or Clang on Linux/macOS.

## Complete Example



```cpp
#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:
    string _firstName;
    string _lastName;

public:
    void setFirstName(string value) { _firstName = value; }
    void setLastName(string value) { _lastName = value; }

    string getFirstName()
     {
        return _firstName;
     }
    string getLastName()
    {
     return _lastName;
     }
    string getFullName()
    {
        return _firstName + " " + _lastName;
     }

    // Property mapping (MSVC only)
    __declspec(property(get = getFirstName, put = setFirstName)) string FirstName;
    __declspec(property(get = getLastName, put = setLastName)) string LastName;
    __declspec(property(get = getFullName)) string FullName; // read-only
};

int main()
{
    clsPerson person;

    person.FirstName = "Anas";
    person.LastName = "Chetoui";

    cout << person.FirstName << endl;  // Anas
    cout << person.LastName << endl;   // Chetoui
    cout << person.FullName << endl;   // Anas Chetoui

    return 0;
}
```

## Summary
- Simplifies access to get/set functions
- MSVC on Windows only
- Makes code cleaner and more readable
