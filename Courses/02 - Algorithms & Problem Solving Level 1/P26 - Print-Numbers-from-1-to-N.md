## Problem 26

>### Wirte a program to print numbers from 1 to N
> Inputs <br>
> - 10 <br>
>
> Outputs -> <br>
>1  <br>
>2	<br>
>3	<br>
>4	<br>
>5	<br>
>6	<br>
>7	<br>
>8	<br>
>9	<br>
>10	<br>
><br>



### Steps

**Step 1:** Read N <br>
**Step 2:**	Num=0 <br>
**Step 3:**	Num=Num +1 <br>
**Step 4:**	Print Num <br>
**Step 5:**	Check if Num = N true  then end program otherwise  Num= Num+1 until = N<br>

### Flowchart

```mermaid
flowchart TD

A([start])
E([end])
R[/Read N/]
NU[Num=0 <br> Num=Num+1 ]
D{Is <br> Num = N <br>?}
P[/Print Num/]


A-->R-->NU-->P-->D--YES-->E
D--NO-->NU


```
