## Problem 05

>### Write a program to ask the user to enter his/her:
>- Age
>- Driver License
>- Has Recommendation
>Then Print `Hired` if his/her age is grater than 21 & s/he has a driver license, otherwise Print `Rejected` Or Hire him\her without condtions.
	


### Steps: 
**Step 1:** Ask the user if has Recommendation.<br>
**Step 2:** Ask the user enter his age.<br>
**Step 3:** Ask the user if has license.<br>
**Step 4:** `Result = (Age > 21 and HasDriverLicense = True)`.<br>
**Step 5:** Check the result if true or HasRecommendation its `Hired` otherwise its `Rejected`. <br>
**Step 6:** Print `Hired` or `Rejected` acording the result.<br>


## Flowchart

```mermaid

flowchart TD

a(start) --> b[/HasRecommendation <br> Read Age <br> HasDiverLicense?/]
b--> c{ HasRecommendation=true?}
c-- YES -->d[/Print &quot;Hired&quot;/]-->e(end)
c-- NO -->f{"Result = (Age > 21 and HasDriverLicense = True)"}
f-- YES -->d
f-- NO -->g[/Print &quot;Rejected&quot; /] -->e

```