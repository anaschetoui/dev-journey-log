## Problem 16

>### Write a program to calculate rectangle area through diagonal and side area of rectangle and print it on the screen.
>Exemple Inputs:
>- 5 (a)
>- 40 (d)<br>
>
>Outputs ->
>- 198.431


### Steps

**Step 1:** Ask the user to enter a , d<br>
**Step 2:** Area= a * sqrt(d * d - a * a) <br>
**Step 3:** Print Area <br>

### Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read a,d/]
A[Area= a * sqrt&#40d * d - a * a&#41]
P[/Print Area/]

S-->R-->A-->P-->E

```