<div dir="rtl">

<a id="arabic-conversion"></a>
[English ↙](#english-conversion)

# 🧩 تمرير البرامتر للفانكشن: By-Value vs By-Reference في ++C

## 🎯 المقدمة
موضوع هذا الدرس هو الفرق العملي بين تمرير البرامتر للفانكشن أو البروسيجر "بالقيمة" (By-Value) أو "بالمرجع" (By-Reference) في ++C، وتأثير ذلك على تعديل القيم الأصلية.

## 💡 ما معنى By-Value وما معنى By-Reference؟
- **By Value (افتراضيًا):** عندما ترسل متغير للفانكشن، يتم إرسال "نسخة" منه. أي تعديل يحدث عليه داخل الفانكشن لن يغير قيمة المتغير الأصلي خارج الفانكشن.
- **By Reference:** إذا أرسلت المتغير بالمرجع، ستُرسل "العنوان" (address) الخاص بالمتغير الأصلي، وأي تعديل عليه داخل الفانكشن يؤثر مباشرة على المتغير في الخارج.

## 📝 مثال واقعي من الشرح

### تمرير متغير By Value
<div dir="ltr" align="left">

```cpp
void myFunction(int number1) {
    number1 = 7000;
    cout << "number inside function is: " << number1 << endl;
}

int main() {
    int number1 = 1000;
    myFunction(number1);
    cout << "number after calling the function is: " << number1 << endl;
    return 0;
}
```
</div>
- هنا عند استدعاء الدالة، يتم إرسال نسخة من `number1` ويُعدل بداخل الدالة (يصبح 7000)، ولكن بعد الخروج تعود القيمة الأصلية كما هي (1000).

### تمرير متغير By Reference
<div dir="ltr" align="left">

```cpp
void myFunction(int &number1) {
    number1 = 7000;
    cout << "number inside function is: " << number1 << endl;
}

int main() {
    int number1 = 1000;
    myFunction(number1);
    cout << "number after calling the function is: " << number1 << endl;
    return 0;
}
```
</div>
- اضافة إشارة & (المرجع) تجعل أي تعديل يُجرى داخل الفانكشن يظهر مباشرة في المتغير في main.

## 🧪 أهم نقاط الشرح
- البرامتر إذا كان **By Value**، الدالة ترى "نسخة" منه وتعدل عليها فقط.
- إذا كان **By Reference** (`&` بعد نوع المتغير)، ما تعدله داخل الفانكشن يتغير خارجها أيضاً.
- استخدام By Reference ضروري إذا أردت تعديل بيانات حقيقية عبر الدالة (مثل دالة swap).
- حساب العناوين يتم عبر ما يسمى بالـ address/reference في الـmemory.

## 📦 ملخص الجدول:
| الطريقة       | متى تتغير القيمة الأصلية؟ | التعديل يتأثر بالخارج؟ |
|---------------|--------------------------|---------------------|
| By Value      | لا                       | لا                  |
| By Reference  | نعم                      | نعم                 |

## 🔑 ملاحظة محورية:
- استخدم by value عندما تحتاج حماية القيم الأصلية من أي تعديل!
- استخدم by reference عندما تحتاج تحديث القيم (مثل الدوال التي تُرجع أكثر من نتيجة أو تعدل على متغيرات خارجية مثل swap).

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

</div><a id="english-conversion"></a>

[العربية ↗](#arabic-conversion)

# 🧩 Function Parameters: By-Value vs By-Ref in C++

## 🎯 Introduction
This lesson explains the crucial distinction between sending a parameter "by value" or "by reference" to a function or procedure in C++, and how this affects whether the original variable can be changed.

## 💡 What does By-Value mean? What about By-Reference?
- **By Value (default):** When you pass a variable to a function, a *copy* is sent. Changes inside the function do NOT affect the original variable.
- **By Reference:** When you pass by reference, the function receives the *address* of the variable itself—changes inside the function update the original variable in main.

## 📝 Practical Example from the Lesson

### Passing By Value
```cpp
void myFunction(int number1) {
    number1 = 7000;
    cout << "number inside function is: " << number1 << endl;
}

int main() {
    int number1 = 1000;
    myFunction(number1);
    cout << "number after calling the function is: " << number1 << endl;
    return 0;
}
```
- When you call the function, a *copy* of number1 is sent. Changing it inside the function has no effect on the variable in main (still 1000 after).

### Passing By Reference
```cpp
void myFunction(int &number1) {
    number1 = 7000;
    cout << "number inside function is: " << number1 << endl;
}

int main() {
    int number1 = 1000;
    myFunction(number1);
    cout << "number after calling the function is: " << number1 << endl;
    return 0;
}
```
- Adding `&` after the type lets the function directly alter the variable from main—it now updates both in and out of the function.

## 🧪 Key Takeaways
- **By Value:** The function gets a *copy,* safe from outside change.
- **By Reference (`&`):** The function gets the *actual variable* (its memory address)—changes inside the function also appear in main.
- By reference is essential when you need to modify originals (for example, a `swap` function).

## 📦 In Brief
| Method         | Does the original value change? | External effect? |
|----------------|-------------------------------|------------------|
| By Value       | No                            | No               |
| By Reference   | Yes                           | Yes              |

## 🔑 Key Point
- Use By Value to protect the original variable.
- Use By Reference if you want the function to update variables in main (classic case: swap).

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

*Anas Chetoui* - `@anaschetoui`