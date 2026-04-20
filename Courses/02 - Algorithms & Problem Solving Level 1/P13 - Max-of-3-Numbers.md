## Problem 13

>### Write Program to ask user to enter 3 Numbers:
>- A <br>
>- B <br>
>- C <br>
>### Then Print Max Number.
>Exemple Inputs: <br>
> 30<br>
> 10<br>
> 20<br>
><br>
>Outputs -> <br>
> 30

### Steps

**Step 1:** Read A,B,C  <br>
**Step 2:** A>B>C -> A Max Number A < B > C -> Max Number is B otherwise is C.   <br>
**Step 3:** Print Max Number Accordingly <br>

### Flowchart

```mermaid
flowchart TD
S([start])
E([end])
R[/Read A,B,C/]
AB{A>B}
AC{A>C}
BC{B>C}
PA[/Print A/]
PB[/Print B/]
PC[/Print C/]

S-->R-->AB--YES-->AC--YES-->PA-->E
AC--NO-->PC-->E
AB--NO-->BC--YES-->PB-->E
BC--NO-->PC



```