## Problem 04

>### Write a program to ask the user to enter his/her:
>- Age
>- Driver License
>Then Print `Hired` if his/her age is grater than 21 & s/he has a driver license, otherwise Print `Rejected`.
	


### Steps: 
**Step 1:** Ask the user enter his age.<br>
**Step 2:** Ask the user if has license.<br>
**Step 3:** `Result = (Age > 21 and HasDriverLicense = True)`.<br>
**Step 4:** Check the result if true its `Hired` otherwise its `Rejected`. <br>
**Step 5:** Print `Hired` or `Rejected` acording the result.<br>


## Flowchart

```mermaid
flowchart TD

a(start)-->b[/Read Age <br> Has a Diver License?/]
b-->c["Result = (Age > 21 and HasDriverLicense = True)"]
c--> d{is true?}
d-- YES --> e[/Print &quot;Hired&quot;/] --> f(end)
d-- NO --> g[/Print &quot;Rejected&quot;/] -->f

```

