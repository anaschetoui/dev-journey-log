## Problem 49

>### Write a program to read the ATM PIN code from the user, then check id PIN code=1234, then show the balance user, otherwise Print "Wrong PIN" and ask the user to re-enter the PIN.
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

S([start])
E([end])
R[/Read PINcode/]
B[Balance = 7500]
D{is <br> PINcode = 1234<br>?}
P[/Print &quot;Your Balance is: &quot; + Balance/]
WR[/Print &quot;Wrong PIN&quot;/]

S -->  R --> D
D -- NO --> WR --> R
D -- YES --> B --> P --> E



```
