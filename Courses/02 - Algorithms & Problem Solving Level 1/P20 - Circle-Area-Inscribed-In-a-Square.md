## Problem 20

>### Write a program to calculate circle area inscribed in a square, then print it on the screen.
> ### The user should enter:
>- A
>#### Exemple Inputs:
>- 10
>#### Outputs ->
>78.54

### Steps

**Step 1:** Ask the user to enter A <br>
**Step 2:** PI=3.14<br>
**Step 3:** Area=  (PI * A*A)/4<br>
**Step 4:** Print Area.<br>

## Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read A/]
A[PI=3.14 <br> Area=  &#40PI * A*A &#41/4]
P[/Print Area/]

S-->R-->A-->P-->E


```