## Problem 19

>### Write a program to calculate circle area through diameter, then print it on the screen.
> ### The user should enter:
>- D
>#### Exemple Inputs:
>- 10
>#### Outputs ->
>78.54

### Steps

**Step 1:** Ask the user to enter D <br>
**Step 2:** PI=3.14<br>
**Step 3:** Area=  (PI * D*D )/4<br>
**Step 4:** Print Area.<br>

## Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read D/]
A[PI=3.14 <br> Area=  &#40PI * D*D &#41/4]
P[/Print Area/]

S-->R-->A-->P-->E


```