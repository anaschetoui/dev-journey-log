<div dir="rtl">

<a id="arabic-structures-arrays"></a>
[English ↙](#english-structures-arrays)

# 🏗️ مصفوفات الهياكل | Arrays of Structures

## 🎯 المقدمة

في هذا الدرس، سنتعلم كيفية تعريف والتعامل مع مصفوفات الهياكل (Arrays of Structures). هذا الموضوع يجمع بين قوة الهياكل والمرونة التي تقدمها المصفوفات.

## 💡 المفاهيم الأساسية

### ما هي مصفوفات الهياكل؟

**مصفوفات الهياكل**:
- هياكل بيانات تجمع بين تنظيم الهياكل وكفاءة المصفوفات
- كل عنصر في المصفوفة هو هيكل كامل
- تسمح بتخزين ومعالجة مجموعات من البيانات المرتبطة

### لماذا نستخدم مصفوفات الهياكل؟

1. **تنظيم البيانات**: تخزين بيانات متعددة من نفس النوع
2. **كفاءة الذاكرة**: تخزين مترابط للبيانات ذات الصلة
3. **سهولة المعالجة**: معالجة مجموعات البيانات باستخدام الحلقات

## 🛠️ أمثلة عملية

### 📝 مثال أساسي: مصفوفة من الأشخاص

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

// تعريف الهيكل
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

int main() {
    // تعريف مصفوفة من الهياكل
    str_info persons[2];
    
    // تعبئة البيانات للشخص الأول
    persons[0].firstName = "Mohammed";
    persons[0].lastName = "Abu Haddoud";
    persons[0].age = 44;
    persons[0].phone = "123-4567";
    
    // تعبئة البيانات للشخص الثاني
    persons[1].firstName = "Ali";
    persons[1].lastName = "Maher";
    persons[1].age = 22;
    persons[1].phone = "765-4321";
    
    // طباعة البيانات
    cout << persons[1].firstName << endl;  // يطبع "Ali"
    cout << persons[1].lastName << endl;   // يطبع "Maher"
    
    return 0;
}
```

</div>

### 📝 مثال متقدم: نظام إدارة الطلاب

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

// هيكل العنوان
struct Address {
    string street;
    string city;
    string zipCode;
};

// هيكل الطالب
struct Student {
    string studentId;
    string firstName;
    string lastName;
    int age;
    float gpa;
    Address address;  // هيكل فرعي
};

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS];
    
    // تعبئة بيانات الطلاب
    students[0] = {"S001", "Ahmed", "Khalil", 20, 3.8, {"Main St", "Riyadh", "11564"}};
    students[1] = {"S002", "Fatima", "Ali", 19, 3.9, {"King St", "Jeddah", "21488"}};
    students[2] = {"S003", "Omar", "Hassan", 21, 3.5, {"University Rd", "Dammam", "31451"}};
    
    // طباعة بيانات جميع الطلاب باستخدام حلقة
    for(int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i+1 << ":" << endl;
        cout << "ID: " << students[i].studentId << endl;
        cout << "Name: " << students[i].firstName << " " << students[i].lastName << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "GPA: " << students[i].gpa << endl;
        cout << "Address: " << students[i].address.street << ", " 
             << students[i].address.city << ", " << students[i].address.zipCode << endl;
        cout << "------------------------" << endl;
    }
    
    return 0;
}
```

</div>

### 📝 مثال مع الدوال: معالجة مصفوفات الهياكل

<div dir="ltr" align="left">

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string empId;
    string name;
    string department;
    double salary;
};

// دالة لقراءة بيانات الموظفين
void readEmployees(Employee employees[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Enter details for employee " << i+1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> employees[i].empId;
        cout << "Name: ";
        cin.ignore();
        getline(cin, employees[i].name);
        cout << "Department: ";
        getline(cin, employees[i].department);
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << endl;
    }
}

// دالة لعرض بيانات الموظفين
void displayEmployees(Employee employees[], int size) {
    cout << "Employee List:" << endl;
    cout << "==============" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Employee " << i+1 << ":" << endl;
        cout << "ID: " << employees[i].empId << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Department: " << employees[i].department << endl;
        cout << "Salary: $" << employees[i].salary << endl;
        cout << "------------------------" << endl;
    }
}

int main() {
    const int NUM_EMPLOYEES = 2;
    Employee employees[NUM_EMPLOYEES];
    
    readEmployees(employees, NUM_EMPLOYEES);
    displayEmployees(employees, NUM_EMPLOYEES);
    
    return 0;
}
```

</div>

## 🔄 التعامل مع مصفوفات الهياكل

### كيفية الوصول للبيانات

<div dir="ltr" align="left">

```cpp
// تعريف الهيكل والمصفوفة
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

str_info persons[5];

// الوصول للحقول
persons[0].firstName = "John";        // ✅ صحيح
persons[1].age = 25;                  // ✅ صحيح

// استخدام الحلقات للوصول لجميع العناصر
for(int i = 0; i < 5; i++) {
    cout << persons[i].firstName << endl;
}
```

</div>

### تهيئة مصفوفات الهياكل

<div dir="ltr" align="left">

```cpp
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

// طريقة 1: التهيئة الفردية
str_info persons[3];
persons[0] = {"John", "Doe", 30, "123-4567"};
persons[1] = {"Jane", "Smith", 25, "765-4321"};
persons[2] = {"Bob", "Johnson", 35, "555-1234"};

// طريقة 2: التهيئة المباشرة
str_info persons[3] = {
    {"John", "Doe", 30, "123-4567"},
    {"Jane", "Smith", 25, "765-4321"},
    {"Bob", "Johnson", 35, "555-1234"}
};
```

</div>

## ❌ الأخطاء الشائعة

### 1. نسيان الفهرس

<div dir="ltr" align="left">

```cpp
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

str_info persons[3];

// ❌ خطأ - نسيان الفهرس
persons.firstName = "John";  // خطأ! يجب تحديد الفهرس

// ✅ صحيح - تحديد الفهرس
persons[0].firstName = "John";  // صحيح
```

</div>

### 2. تجاوز حدود المصفوفة

<div dir="ltr" align="left">

```cpp
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

str_info persons[3];

// ❌ خطأ - تجاوز الحدود
persons[3].firstName = "John";  // خطأ! الفهرس من 0 إلى 2 فقط

// ✅ صحيح - الفهرس ضمن الحدود
persons[2].firstName = "John";  // صحيح
```

</div>

## 🏆 أفضل الممارسات

### 1. استخدام ثوابت لأحجام المصفوفات

<div dir="ltr" align="left">

```cpp
// ✅ استخدام ثوابت
const int MAX_STUDENTS = 100;
const int MAX_EMPLOYEES = 50;

Student students[MAX_STUDENTS];
Employee employees[MAX_EMPLOYEES];
```

</div>

### 2. تسمية واضحة للمصفوفات والحقول

<div dir="ltr" align="left">

```cpp
// ✅ تسمية واضحة
struct Student {
    string studentId;
    string firstName;
    string lastName;
    float gpa;
};

Student computerScienceStudents[50];  // تسمية معبرة
```

</div>

## 📊 فوائد مصفوفات الهياكل

### بدون مصفوفات هياكل
```cpp
// ❌ غير منظم
string student1Name, student2Name, student3Name;
int student1Age, student2Age, student3Age;
float student1GPA, student2GPA, student3GPA;
```

### مع مصفوفات هياكل
```cpp
// ✅ منظم
Student students[100];
// يمكن الوصول للبيانات بشكل منظم:
// students[i].name, students[i].age, students[i].gpa
```

## 📝 الملخص

### المفاهيم الأساسية:
- **مصفوفات الهياكل** تجمع بين تنظيم الهياكل وكفاءة المصفوفات
- **كل عنصر** في المصفوفة هو هيكل كامل
- **الوصول للبيانات** باستخدام: `array[index].fieldName`

### قواعد مهمة:
1. **التعريف**: `StructName arrayName[size]`
2. **الوصول**: `arrayName[index].fieldName`
3. **الهياكل الفرعية**: `arrayName[index].subStruct.fieldName`

### أفضل الممارسات:
1. **استخدام ثوابت** لأحجام المصفوفات
2. **تسمية معبرة** للمصفوفات والحقول
3. **استخدام دوال** للمعالجة بدلاً من الكود المباشر
4. **التحقق من الحدود** قبل الوصول للعناصر

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

<a id="english-structures-arrays"></a>
[العربية ↗](#arabic-structures-arrays)

# 🏗️ Arrays of Structures

## 🎯 Introduction

In this lesson, we'll learn how to define and work with Arrays of Structures. This topic combines the power of structures with the flexibility offered by arrays.

## 💡 Core Concepts

### What are Arrays of Structures?

**Arrays of Structures**:
- Data structures that combine the organization of structures with the efficiency of arrays
- Each element in the array is a complete structure
- Allow storing and processing collections of related data

### Why Use Arrays of Structures?

1. **Data Organization**: Store multiple data of the same type
2. **Memory Efficiency**: Related data stored together
3. **Easy Processing**: Process data collections using loops

## 🛠️ Practical Examples

### 📝 Basic Example: Array of Persons

```cpp
#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

int main() {
    // Define array of structures
    str_info persons[2];
    
    // Fill data for first person
    persons[0].firstName = "Mohammed";
    persons[0].lastName = "Abu Haddoud";
    persons[0].age = 44;
    persons[0].phone = "123-4567";
    
    // Fill data for second person
    persons[1].firstName = "Ali";
    persons[1].lastName = "Maher";
    persons[1].age = 22;
    persons[1].phone = "765-4321";
    
    // Print data
    cout << persons[1].firstName << endl;  // Prints "Ali"
    cout << persons[1].lastName << endl;   // Prints "Maher"
    
    return 0;
}
```

### 📝 Advanced Example: Student Management System

```cpp
#include <iostream>
#include <string>
using namespace std;

// Address structure
struct Address {
    string street;
    string city;
    string zipCode;
};

// Student structure
struct Student {
    string studentId;
    string firstName;
    string lastName;
    int age;
    float gpa;
    Address address;  // Nested structure
};

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS];
    
    // Fill student data
    students[0] = {"S001", "Ahmed", "Khalil", 20, 3.8, {"Main St", "Riyadh", "11564"}};
    students[1] = {"S002", "Fatima", "Ali", 19, 3.9, {"King St", "Jeddah", "21488"}};
    students[2] = {"S003", "Omar", "Hassan", 21, 3.5, {"University Rd", "Dammam", "31451"}};
    
    // Print all student data using loop
    for(int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i+1 << ":" << endl;
        cout << "ID: " << students[i].studentId << endl;
        cout << "Name: " << students[i].firstName << " " << students[i].lastName << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "GPA: " << students[i].gpa << endl;
        cout << "Address: " << students[i].address.street << ", " 
             << students[i].address.city << ", " << students[i].address.zipCode << endl;
        cout << "------------------------" << endl;
    }
    
    return 0;
}
```

### 📝 Example with Functions: Processing Arrays of Structures

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string empId;
    string name;
    string department;
    double salary;
};

// Function to read employee data
void readEmployees(Employee employees[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Enter details for employee " << i+1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> employees[i].empId;
        cout << "Name: ";
        cin.ignore();
        getline(cin, employees[i].name);
        cout << "Department: ";
        getline(cin, employees[i].department);
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << endl;
    }
}

// Function to display employees
void displayEmployees(Employee employees[], int size) {
    cout << "Employee List:" << endl;
    cout << "==============" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Employee " << i+1 << ":" << endl;
        cout << "ID: " << employees[i].empId << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Department: " << employees[i].department << endl;
        cout << "Salary: $" << employees[i].salary << endl;
        cout << "------------------------" << endl;
    }
}

int main() {
    const int NUM_EMPLOYEES = 2;
    Employee employees[NUM_EMPLOYEES];
    
    readEmployees(employees, NUM_EMPLOYEES);
    displayEmployees(employees, NUM_EMPLOYEES);
    
    return 0;
}
```

## 🔄 Working with Arrays of Structures

### How to Access Data

```cpp
// Structure and array definition
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

str_info persons[5];

// Accessing fields
persons[0].firstName = "John";        // ✅ Correct
persons[1].age = 25;                  // ✅ Correct

// Using loops to access all elements
for(int i = 0; i < 5; i++) {
    cout << persons[i].firstName << endl;
}
```

### Initializing Arrays of Structures

```cpp
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

// Method 1: Individual initialization
str_info persons[3];
persons[0] = {"John", "Doe", 30, "123-4567"};
persons[1] = {"Jane", "Smith", 25, "765-4321"};
persons[2] = {"Bob", "Johnson", 35, "555-1234"};

// Method 2: Direct initialization
str_info persons[3] = {
    {"John", "Doe", 30, "123-4567"},
    {"Jane", "Smith", 25, "765-4321"},
    {"Bob", "Johnson", 35, "555-1234"}
};
```

## ❌ Common Errors

### 1. Forgetting the Index

```cpp
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

str_info persons[3];

// ❌ Error - Forgetting index
persons.firstName = "John";  // Error! Must specify index

// ✅ Correct - Specify index
persons[0].firstName = "John";  // Correct
```

### 2. Exceeding Array Bounds

```cpp
struct str_info {
    string firstName;
    string lastName;
    int age;
    string phone;
};

str_info persons[3];

// ❌ Error - Exceeding bounds
persons[3].firstName = "John";  // Error! Index from 0 to 2 only

// ✅ Correct - Index within bounds
persons[2].firstName = "John";  // Correct
```

## 🏆 Best Practices

### 1. Use Constants for Array Sizes

```cpp
// ✅ Using constants
const int MAX_STUDENTS = 100;
const int MAX_EMPLOYEES = 50;

Student students[MAX_STUDENTS];
Employee employees[MAX_EMPLOYEES];
```

### 2. Clear Naming for Arrays and Fields

```cpp
// ✅ Clear naming
struct Student {
    string studentId;
    string firstName;
    string lastName;
    float gpa;
};

Student computerScienceStudents[50];  // Descriptive name
```

## 📊 Benefits of Arrays of Structures

### Without Arrays of Structures
```cpp
// ❌ Unorganized
string student1Name, student2Name, student3Name;
int student1Age, student2Age, student3Age;
float student1GPA, student2GPA, student3GPA;
```

### With Arrays of Structures
```cpp
// ✅ Organized
Student students[100];
// Can access data in organized way:
// students[i].name, students[i].age, students[i].gpa
```

## 📝 Summary

### Basic Concepts:
- **Arrays of Structures** combine structure organization with array efficiency
- **Each element** in the array is a complete structure
- **Data access** using: `array[index].fieldName`

### Important Rules:
1. **Definition**: `StructName arrayName[size]`
2. **Access**: `arrayName[index].fieldName`
3. **Nested Structures**: `arrayName[index].subStruct.fieldName`

### Best Practices:
1. **Use constants** for array sizes
2. **Descriptive naming** for arrays and fields
3. **Use functions** for processing instead of direct code
4. **Check bounds** before accessing elements

<br>
<br>
<br>
<br>
<br>

*Anas Chetoui* - `@anaschetoui`

</div>