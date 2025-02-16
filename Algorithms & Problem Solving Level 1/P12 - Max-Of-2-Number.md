## Problem 12

>### Write a program to ask the user to enter:
>- Number1,Number2
>### Then Print the Max Number
>Exemple Inputs:
><br> 10
><br> 20
><br>
><br>
>Outputs -> <br>
>20

## Steps

**Step 1:** ask user to enter Num1,Num2. <br>
**Step 2:** Check Num1 > Num2If Yes Num1 is the max,otherwise Num2 is the max.  <br>
**Step 3:** Print Max Number based on result. <br>

## Flowchart 

```mermaid
flowchart TD
A([start])-->B[/Read Num1,Num2,Num3/]-->C{Num1 > Num2 ?}--YES-->D[/Print Num1/]
-->E([end])
C--NO-->F[/Print Num2/]-->E
```