## Problem 32
>### Write a program to ask the user to enter:
> - Number
> - M
>#### Then Print the Number^M
>#### Example Inputs:
> - 2
> - 4
>#### Outputs ->
> - 16

## Steps
**Step 1:** Ask the user to enter Number and M	<br>
**Step 2:**	Counter = 1<br>
**Step 3:**	Power = 1<br>
**Step 4:**	Power = Power * N<br>
**Step 5:**	check Counter = M if yes Print Power and end Program otherwise continue <br>

## Flowchart 

```mermaid
flowchart TD

S([start])
E([End])
R[/Read N <br> Read M/]
CP[Counter = 0 <br> Power = 1]
PC[Power = Power * N <br> Counter = Counter + 1 ]
CM{is <br> Counter = M <br> ? }
P[/Print Power/]
M{is <br> M=0 <br>?}


S-->R-->CP-->M--NO-->PC-->CM--YES-->P-->E
M--YES-->P
CM--NO-->PC


```

