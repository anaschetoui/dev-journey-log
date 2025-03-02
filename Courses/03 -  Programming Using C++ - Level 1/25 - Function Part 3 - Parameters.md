<div dir="rtl">

<a id="arabic-conversion"></a>
  
[English ↙](#english-conversion)

# 🧩 الدوال (Functions) – البرامتر (Parameters) في ++C - الجزء الثالث

## 🎯 المقدمة
اليوم سنتعلم مفهوم البرامترز (المعاملات/الوسائط) وكيف نجعل الدوال والفانكشنز أكثر مرونة وواقعية عبر استقبال بيانات من خارجها ومعالجتها. ستتعرف لماذا نستخدم البرامترز ومتى يجب القراءة والطباعة خارج الفانكشن.

## 💡 ملخص الفكرة
- البروسيجر (procedure): دالة لا تُرجع قيمة. يمكنك إدراج أوامر إدخال وإخراج (cin/cout) داخلها.
- الفانكشن (function): يُفضل أن يكون عمله حسابي فقط، ويُرجع قيمة واحدة؛ عليك تمرير البيانات (البرامترز) من خارج الدالة وعدم القراءة من المستخدم داخلها.

## 📝 تحويل الحسابات السابقة لفانكشن ببرامترز
- إذا كنت سابقًا تكتب عملية جمع داخل الفانكشن دون وسائط (variables ثابتة)، فإن الأفضل هو تعريف المعاملات (parameters) بين القوسين أعلى الدالة:

<div dir="ltr" align="left">

```cpp
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    cout << sum(10, 20) << endl; // يطبع 30
    cout << sum(5, 7) << endl;   // يطبع 12
    cout << sum(3, 4) << endl;   // يطبع 7
    cout << sum(150, 20) << endl; // يطبع 170
    return 0;
}
```
</div>
- لاحظ كيف يمكنك استخدام نفس الدالة عدة مرات بإرسال بيانات مختلفة.

### ⚡ مثال: قراءة القيم خارج الفانكشن وإرسالها كبرامترز
- من المهم في الفانكشنز أن تكون القراءة والطباعة خارج الدالة نفسها:
<div dir="ltr" align="left">

```cpp
int sum(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    return 0;
}
```
</div>

## 🚩 نقاط عملية 
- الفانكشنز مثل الدوال الرياضية في اللغة: round، floor، وغيرها؛ ترسل لها رقم وترجع لك نتيجة.
- الدالة تأخذ أي عدد من البرامترز، وعليك عند الاستدعاء إرسال القيم المطلوبة بنفس الترتيب.
- كل حساب/وظيفة تحتاجها كثيرًا، ضعها في دالة تأخذ برامترز حسب الحاجة، لتوفر كتابة الكود وتحقق التنظيم.
- الفانكشن يجب أن يؤدي مهمة واحدة فقط.
- الفانكشنز تزيد كفاءة الكود وسرعة التطوير وتصحيح الأخطاء.

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

<br><a id="english-conversion"></a>
    
[العربية ↗](#arabic-conversion)

# 🧩 C++ Functions Part 3 – Parameters 

## 🎯 Introduction
Today you’ll learn about parameters – how to make your functions more flexible by letting them accept data from the outside and process it. You’ll discover why parameters matter and why you should avoid cin/cout inside functions (for value-returning functions).

## 💡 Key Ideas
- **Procedure**: A function that does not return a value (uses `void`). You may use cin/cout inside.
- **Function**: Should do a calculation only and return one value; get inputs (parameters) from outside, do not read from user inside the function.

## 📝 Example – Upgrading a calculation to accept parameters
- If you previously wrote a simple addition function without parameters, the improved way is to declare them in the parentheses:
```cpp
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    cout << sum(10, 20) << endl; // prints 30
    cout << sum(5, 7) << endl;   // prints 12
    cout << sum(3, 4) << endl;   // prints 7
    cout << sum(150, 20) << endl; // prints 170
    return 0;
}
```
- Notice how you can call the same function many times with different arguments.

### ⚡ Example: Read values outside the function and pass as parameters
- Function input and output should (for functions returning values) happen outside the function itself:
```cpp
int sum(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    return 0;
}
```

## 🚩 Practical Points
- Functions behave like math library functions (e.g., round, floor): you pass in a parameter(s), you get a result out.
- Functions can accept any number of parameters; use the order you declare when calling the function.
- For every repeated operation, move it to a parameterized function for tidier and more reusable code.
- Each function should do just one job.
- Functions boost code efficiency, development speed, and debugging.

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