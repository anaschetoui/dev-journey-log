## Problem 38
>### Write a program to read number and check if it is a prime number or not.
> ##### Note: Prime number can only divide on one and on itself.
>### Input 
> 5 <br>
> 6 <br>
> 3 <br>
> ### Outputs ->
> Prime <br>
> Not Prime <br>
> Prime <br>

## Flowchart 

```mermaid 
flowchart TD

S([start])
E([end])
R[/Read Num/]
Z{is <br> Num > 0 <br>?}
WN[/Print "Invalid Number, Number should be greater than 0"/]
O{is <br> Num = 1 <br>?}
NP[/Print "Not Prime Number"/]
PP[/Print "Prime Number"/]

C[Counter = 2]
M{is <br> Num mod Counter = 0 <br>?}
EQ{is <br> Counter = Num <br>?}
INC[Counter = Counter + 1]

S --> R --> Z
Z -- NO --> WN --> R
Z -- YES --> O
O -- YES --> NP --> E
O -- NO --> C
C --> M
M -- YES --> NP --> E
M -- NO --> EQ
EQ -- YES --> PP --> E
EQ -- NO --> INC --> M

```