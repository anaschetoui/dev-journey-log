## Problem 31

>### Write a program to ask the user to enter:
> - Number
>#### then print the Number ^2,Number ^3, Number ^4
>#### Example Inputs:
>3
>#### Outputs ->
>9 <br>
>27 <br>
>81 <br>

## Steps

**Step 1:**  ask the user to enter Number<br>
**Step 2:** Power2 = N * N 	 <br>
**Step 3:**	Power3 = N * N * N <br>
**Step 4:**	Power4 = N * N * N * N <br>
**Step 5:**	Print Power1,Power2,Power3 <br>

## Flowchart 

```mermaid
flowchart TD

S([start])
E([end])
R[/Read N/]
PN[Power2 = N * N <br>Power3 = N * N * N <br>Power4 = N * N * N * N]

P[/Print Power2 <br> Print Power3 <br> Print Power4/]

S-->R-->PN-->P-->E



```