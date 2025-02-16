## Problem 21

>### Write a program to calculate circle area along the circumference, then print it on the screen.
> ### The user should enter:
>- L
>#### Exemple Inputs:
>- 20
>#### Outputs ->
>31.831

### Steps

**Step 1:** Ask the user to enter L <br>
**Step 2:** PI=3.14<br>
**Step 3:** Area=  (L * L)/(4 * PI)<br>
**Step 4:** Print Area.<br>

## Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read L/]
A[PI=3.14 <br> Area= &#40L * L &#41 / &#40 4 * PI &#41]
P[/Print Area/]

S-->R-->A-->P-->E


```