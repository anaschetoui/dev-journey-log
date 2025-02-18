## Problem 25

>### Write a program to ask the user to enter:
> - Age <br>
> If age is between 18 and 45 print "Valid Age" otherwise Print "Invalid Age" and re-ask the user to enter a valid one <br>
>Note: You should keep asking user to enter a valid age until h/she enters a valid one
>#### Exemple Inputs:
> 17

>#### Outputs ->
> Invalid Age <br>
> Read Age

## Steps
**Step 1:**	Read the Age  <br>
**Step 2:**	Result = (Age >= 18 and Age <=45)  <br>
**Step 3:**	Check if Result = true Print "Valid Age"<br>
**Step 4:**	Check if Result = False Print "Invalid Age" -> Goback to Step1

### Flowchart

```mermaid
flowchart TD

A([start])
E([End])
R[/Read Age/]
RE[Reasult = &#40Age >= 18 and Age&#41 <=45]
CA{Is <br> Result <br>true ?}
PT[/Print &quotValid Age&quot/]
PF[/Print &quotInvalid Age&quot/]

A-->R-->RE-->CA--YES-->PT-->E
CA--NO-->PF-->R


```