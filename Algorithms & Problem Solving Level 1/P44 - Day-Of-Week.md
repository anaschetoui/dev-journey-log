## Problem 44 

>#### Write  a program to ask the user to enter:
> - Day
>##### Then Print the day as follows:
> - 1 Print Sunday<br>
> - 2 Print Monday<br>
> - 3 Print Tuesday<br>
> - 4 Print Wednesday<br>
> - 5 Print Thursday<br>
> - 6 Print Friday<br>
> - 7 Print Saturday<br>
> - Otherwise print "Wrong Day" and ask the user to enter again
>##### Inputs
>6
>##### Outputs ->
> its Friday

## Flowchart
```mermaid
flowchart TD

S([start])
E([end])
R[/Read Day/]
WN{is <br> Day >=1 AND Day <=7 <br>?}
Sun{is <br> Day = 1 <br>?}
Mon{is <br> Day = 2 <br>?}
Tue{is <br> Day = 3 <br>?}
Wed{is <br> Day = 4 <br>?}
Thu{is <br> Day = 5 <br>?}
Fri{is <br> Day = 6 <br>?}
PS[/Print "its Sunday"/]
PM[/Print "its Monday"/]
PT[/Print "its Tuesday"/]
PW[/Print "its Wednesday"/]
PTH[/Print "its Thursday"/]
PF[/Print "its Friday"/]
PSU[/Print "its Sunday"/]
PWN[/Print "its wrong day"/]


S --> R --> WN
WN -- NO --> PWN --> R
WN -- YES --> Sun
Sun -- YES --> PS --> E
Sun -- NO --> Mon 
Mon -- YES --> PM --> E
Mon -- NO --> Tue 
Tue -- YES --> PT --> E
Tue -- NO --> Wed
Wed -- YES --> PW --> E
Wed -- NO --> Thu
Thu -- YES --> PTH --> E
Thu -- NO --> Fri 
Fri -- YES --> PF -->E
Fri -- NO --> PSU --> E




```