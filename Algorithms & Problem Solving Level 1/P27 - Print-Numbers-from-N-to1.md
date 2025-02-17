## Problem 26

>### Wirte a program to print numbers from N to 1
> Inputs <br>
> - 10 <br>
>
> Outputs -> <br>
>10  <br>
>9	<br>
>8	<br>
>7	<br>
>6	<br>
>5	<br>
>4	<br>
>3	<br>
>2	<br>
>1	<br>
><br>



### Steps

**Step 1:** Read N <br>
**Step 2:**	Counter=N + 1<br>
**Step 2:**	Counter=Counter - 1 <br>
**Step 3:**	Print Num <br>
**Step 4:**	Check if Counter = 0 is true then end Program otherwise  Counter= Counter-1 until it =1<br>

### Flowchart

```mermaid
flowchart TD

A([start])
E([end])
R[/Read N/]
C1[Counter = N + 1  ]
C2[Counter = Counter - 1  ]
D{Is <br> Counter = 1 <br>?}
P[/Print Counter/]


A-->R-->C1-->C2-->P-->D--YES-->E
D--NO-->C2


```
