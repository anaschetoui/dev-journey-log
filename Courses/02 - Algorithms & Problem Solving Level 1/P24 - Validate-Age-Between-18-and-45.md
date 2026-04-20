## Problem 24

>### Write a program to ask the user to enter:
> - Age <br>
> If age is between 18 and 45 print "Valid Age" otherwise Print "Invalid Age" <br>

>#### Exemple Inputs:
> 17

>#### Outputs ->
> Invalid Age

## Steps
**Step 1:**	Read the Age  <br>
**Step 2:**	Result = (Age >= 18 and Age <=45)  <br>
**Step 3:**	Check if result = true then its valid age otherwise its invalid  <br>
**Step 4:**	 Print "Valid Age" or "Invalid Age" accordingly <br>

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
CA--NO-->PF-->E


```