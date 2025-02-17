## Problem 23

>### Write a program to calculate circle area circle described around an arbitrary triangle, then print it on the screen.
> ### The user should enter:
>- a
>- b
>- c
>#### Exemple Inputs:
>- 5
>- 6
>- 7
>#### Outputs ->
> 40.088

## Steps
**Step 1:** Ask user to enter a,b,c <br>
**Step 2:** PI=3.14 <br>
**Step 3:** p = (a+b+c)/2 <br>
**Step 4:** T=(a * b * c) / ( 4 * sqrt(p * (p-a) * (p-b) * (p-c))) <br>
**Step 5:** T= T * T <br>
**Step 6:** Area = PI * T <br>
**Step 7:**  Print Area<br>

### Flowchart

```mermaid
flowchart TD

A([start])
E([end])
R[/Read a,b,c/]
AR[PI=3.14<br>p=&#40a+b+c&#41/2<br>T=&#40a * b * c&#41 / &#40 4 * sqrt&#40p * &#40p-a&#41 * &#40p-b&#41 * &#40p-c&#41 &#41 &#41 <br> T=T * T <br> Area=PI * T]
P[/Print Area/]

A-->R-->AR-->P-->E

```