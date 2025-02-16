## Problem 18

>### Write a program to calculate circle area then print it on the screen.
> ### The user should enter
>- **r**
>#### Exemple Inputs:
>5
>#### Outputs ->
>78.54

### Steps

**Step 1:** Ask the user to enter r<br>
**Step 2:** PI=3.14 <br>
**Step 3:** Area= 3.14 * (r*r)<br>
**Step 4:** Print Area <br>

### Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read r/]
PI[PI=3.14]
A[Area = PI * &#40r*r&#41]
P[/Print Area/]

S-->R-->PI-->A--->P-->E


```