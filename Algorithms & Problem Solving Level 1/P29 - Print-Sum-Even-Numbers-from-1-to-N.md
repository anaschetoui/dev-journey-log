## Problem 29

>### Wirte a program to Sum Even numbers from 1 to N
> Inputs <br>
> 10<br>
> <br>
> Output -> <br>
> 25<br>

### Steps

**Step 1:** Read N <br>
**Step 2:**	Counter = 0<br>
**Step 3:**	Counter = Counter + 1<br>
**Step 4:**	Result = 0<br>
**Step 5:**	is Counter % 2 = 0 -> Result = Result + Counter -> is Counter = N <br>
**Step 6:**	Print Result If Counter = N <br>

### Flowchart

```mermaid
flowchart TD

S([start])
E([End])
R[/Read N/]
CR[Counter = 0 <br> Result = 0]
C[Counter = Counter + 1]
D{is <br> Counter % 2 = 0 <br>?}
D2{is <br> Counter = N <br>?}
RE[Result = Result + Counter]
P[/Print Results/]

S-->R-->CR-->C-->D--YES-->RE-->D2
D--NO-->D2--YES-->P-->E
D2--NO-->C

```