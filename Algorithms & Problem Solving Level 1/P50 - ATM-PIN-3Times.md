## Problem 50

>### Write a program to read the ATM PIN code from the user, then check id PIN code=1234, then show the balance user, otherwise Print "Wrong PIN" and ask the user to re-enter the PIN.
>### <span style="color:red">Only allow user to enter the 3 times, if fails Print "Card is lockeds!"</span>
> Assume User Balance is 7500.
> #### Input
> 1234 <br>
> <br>
> 5151 <br>
> #### Outputs ->
>Your balance is: 7500 <br>
> <br>
>Wrong PIN

## Flowchart
```mermaid 
flowchart TD

S([Start])
E([End])
C[Counter = 0]
R[/Read PINcode/]
D{Is PINcode = 1234?}
B[Balance = 7500]
P[/Print "Your Balance is: " + Balance/]
WR[/Print "Wrong PIN"/]
C1[Counter = Counter + 1]
DC{Is Counter >= 3?}
CL[/Print "Card is locked!"/]

S --> C --> R --> D
D -- YES --> B --> P --> E
D -- NO --> C1 --> DC
DC -- YES --> CL --> E
DC -- NO --> WR --> R


```

