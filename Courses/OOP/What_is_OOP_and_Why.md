<div style="text-align: left;">
<strong>Language:</strong>
<a href="#" onclick="switchLang('ar'); return false;" style="margin-right:10px;">العربية</a>
<a href="#" onclick="switchLang('en'); return false;">English</a>

<script>
  function switchLang(lang) {
    document.getElementById('arabic-content').style.display = lang === 'ar' ? 'block' : 'none';
    document.getElementById('english-content').style.display = lang === 'en' ? 'block' : 'none';
    // Optionally update the URL without reloading
    window.history.replaceState(null, '', '?lang=' + lang);
  }

  // Initial load
  const urlParams = new URLSearchParams(window.location.search);
  const lang = urlParams.get('lang') || 'ar';
  switchLang(lang);
</script>
</div>

<!-- بداية المحتوى العربي -->
<div id="arabic-content" dir="rtl" style="text-align: right;">

# مدخل إلى البرمجة الشيئية (OOP)

### مقدمة: لماذا نحتاج إلى أسلوب جديد في البرمجة؟

في أساليب البرمجة التقليدية، مثل البرمجة الوظيفية (Functional Programming)، كنا نقوم بكتابة الكود عبر تقسيمه إلى مجموعة كبيرة من الوظائف (Functions) المنفصلة. كل وظيفة تكون مسؤولة عن مهمة محددة، ويتم استدعاؤها بشكل متسلسل عند الحاجة. هذا الأسلوب يعمل بشكل جيد في المشاريع الصغيرة والبسيطة، ولكن تظهر مشاكله الحقيقية عند التعامل مع المشاريع الكبيرة والمعقدة.

### المشكلة: فوضى الوظائف في المشاريع الكبيرة

لنتخيل أننا نعمل على مشروع كبير مثل نظام إلكتروني لإدارة جامعة. باستخدام البرمجة الوظيفية، سنجد أنفسنا نكتب مئات أو حتى آلاف الوظائف المنفصلة للتعامل مع كل جزء من النظام، مثل:

* وظائف لإضافة الطلاب وحذفهم وتعديل بياناتهم.
* وظائف لإدارة الدكاترة والموظفين.
* وظائف لإرسال رسائل البريد الإلكتروني والرسائل النصية للطلاب والدكاترة.

<strong>أين تكمن المشكلة؟</strong>

المشكلة ليست في كثرة الوظائف بحد ذاتها، بل في أنها غير منظمة وموجودة كلها "تحت سقف واحد". هذا الوضع يؤدي إلى:
* <strong>صعوبة الإدارة:</strong> إدارة مئات الوظائف وتذكرها يصبح أمرًا صعبًا للغاية.
* <strong>صعوبة الوصول:</strong> إيجاد وظيفة معينة يصبح مهمة معقدة وسط هذا الكم الهائل من الكود.
* <strong>فوضى غير قابلة للتوسع:</strong> يصبح تطوير المشروع وإضافة مزايا جديدة شبه مستحيل مع هذا الأسلوب.

يمكن تشبيه الأمر بوجود آلاف من جهات الاتصال في هاتفك دون أي تنظيم أبجدي، مما يجعل العثور على اسم معين كابوسًا حقيقيًا.

### الحل: البرمجة الشيئية (OOP)

تقدم البرمجة الشيئية (Object-Oriented Programming) حلاً جذريًا لهذه المشكلة، فهي تغير طريقة تفكيرنا في كتابة الكود لتقترب أكثر من طريقة نظرنا إلى العالم الحقيقي. الفكرة المحورية هي:

<blockquote>تعامل مع كل شيء على أنه "كائن" (Object).</blockquote>

بالعودة إلى مثال نظام الجامعة، بدلًا من التفكير في قائمة طويلة من الوظائف، نبدأ بالتفكير في "الأشياء" أو "الكائنات" التي يتكون منها النظام:
* كائن <strong>الطالب</strong> (<code>Student</code>)
* كائن <strong>الدكتور</strong> (<code>Doctor</code>)
* كائن <strong>الموظف</strong> (<code>Employee</code>)
* كائن <strong>المساق</strong> (<code>Course</code>)

أصبح تفكيرنا الآن أقرب للواقع، حيث ننظر لكل مكون من مكونات البرنامج كشيء مستقل بذاته.

### كيف تنظم البرمجة الشيئية الكود؟

الميزة الأساسية هنا هي أن كل "كائن" يصبح بمثابة حاوية أو مظلة خاصة به، تضم كل ما يتعلق به من بيانات ووظائف.

* <strong>الكائن (Object):</strong> هو تمثيل لشيء معين، مثل "طالب" واحد.
* <strong>الخصائص (Properties):</strong> هي البيانات التي تصف الكائن، مثل اسم الطالب وبريده الإلكتروني (<code>Student1.Name</code>, <code>Student1.Email</code>).
* <strong>التوابع (Methods):</strong> هي الوظائف التي يمكن للكائن القيام بها، وفي البرمجة الشيئية يُطلق على الوظيفة اسم "Method". مثل حساب المعدل أو إرسال بريد إلكتروني (<code>Student1.CalcuateAverage()</code>, <code>Student1.SendEmail()</code>).

بهذه الطريقة، تكون جميع الوظائف المتعلقة بالطلاب موجودة تحت مظلة "الطالب"، ولا يمكن أن تتداخل مع وظائف "الموظف" مثلًا. هذا يمنحنا:

1. <strong>تنظيمًا فائقًا للكود.</strong>
2. <strong>سهولة في الوصول للوظائف وتذكرها.</strong>
3. <strong>قدرة على التعامل مع الكائن وكل وظائفه من مكان واحد.</strong>

### مزايا إضافية: الحماية والأمان

من أكبر عيوب البرمجة التنفيذية (الإجرائية) هو أن أي جزء من الكود يمكنه استدعاء أي وظيفة والتلاعب بالبيانات مباشرة، مما يضعف أمان الكود. في المقابل، تمنحك البرمجة الشيئية القدرة على حماية الكود عن طريق منع استدعاء بعض الوظائف (Methods) من خارج الكائن (Class)، مما يوفر طبقة حماية قوية ومميزات أخرى عديدة.

</div>

<!-- بداية المحتوى الإنجليزي -->
<div id="english-content" dir="ltr" style="text-align: left; display:none;">

# Introduction to Object-Oriented Programming (OOP)

### Introduction: Why do we need a new programming paradigm?

In traditional programming paradigms, such as Functional Programming, code is written by dividing it into a large number of separate functions. Each function is responsible for a specific task and is called sequentially when needed. This approach works well for small and simple projects, but its real problems appear when dealing with large and complex projects.

### The problem: Function chaos in large projects

Imagine working on a large project like an electronic university management system. Using functional programming, you would end up writing hundreds or even thousands of separate functions to handle every part of the system, such as:

* Functions to add, delete, and edit student data.
* Functions to manage professors and employees.
* Functions to send emails and text messages to students and professors.

<strong>Where is the problem?</strong>

The problem is not the number of functions itself, but that they are unorganized and all exist "under one roof". This leads to:
* <strong>Difficult management:</strong> Managing hundreds of functions and remembering them becomes extremely difficult.
* <strong>Difficult access:</strong> Finding a specific function becomes a complex task amid this huge amount of code.
* <strong>Unscalable chaos:</strong> Developing the project and adding new features becomes nearly impossible with this approach.

It's like having thousands of contacts in your phone without any alphabetical organization, making finding a specific name a real nightmare.

### The solution: Object-Oriented Programming (OOP)

Object-Oriented Programming (OOP) offers a radical solution to this problem, changing the way we think about writing code to be closer to how we view the real world. The central idea is:

<blockquote>Treat everything as an "Object".</blockquote>

Returning to the university system example, instead of thinking of a long list of functions, we start thinking about the "things" or "objects" that make up the system:
* <strong>Student</strong> object (<code>Student</code>)
* <strong>Professor</strong> object (<code>Doctor</code>)
* <strong>Employee</strong> object (<code>Employee</code>)
* <strong>Course</strong> object (<code>Course</code>)

Now our thinking is closer to reality, as we see each component of the program as an independent entity.

### How does OOP organize code?

The main advantage here is that each "object" becomes a container or umbrella for everything related to it, including data and functions.

* <strong>Object:</strong> Represents a specific thing, like a single student.
* <strong>Properties:</strong> The data that describes the object, such as the student's name and email (<code>Student1.Name</code>, <code>Student1.Email</code>).
* <strong>Methods:</strong> The functions the object can perform. In OOP, a function is called a "Method", such as calculating the average or sending an email (<code>Student1.CalcuateAverage()</code>, <code>Student1.SendEmail()</code>).

This way, all functions related to students are under the "Student" umbrella and cannot interfere with "Employee" functions, for example. This gives us:

1. <strong>Superior code organization.</strong>
2. <strong>Ease of accessing and remembering functions.</strong>
3. <strong>Ability to handle the object and all its functions from one place.</strong>

### Additional advantages: Protection and security

One of the biggest drawbacks of procedural programming is that any part of the code can call any function and manipulate data directly, weakening code security. In contrast, OOP gives you the ability to protect code by preventing some methods from being called from outside the class, providing a strong protection layer and many other advantages.

</div>

<script>
  function switchLang(lang) {
    document.getElementById('arabic-content').style.display = lang === 'ar' ? 'block' : 'none';
    document.getElementById('english-content').style.display = lang === 'en' ? 'block' : 'none';
    // Optionally update the URL without reloading
    window.history.replaceState(null, '', '?lang=' + lang);
  }

  // Initial load
  const urlParams = new URLSearchParams(window.location.search);
  const lang = urlParams.get('lang') || 'ar';
  switchLang(lang);
</script>