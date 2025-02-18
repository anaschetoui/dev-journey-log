## Problem 30

>### Write a program to calculate factorial of N!
>Exemple: Factorial of 6 -> 6 x 5 x 4 x 3 x 2 x 1 =720 <br>
>#### Note : User should enter positive number otherwise reject it and ask to enter again.
><br> Input 
> <br>6
><br>
>Outputs -> <br>
>720



### Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read N/]
D{is <br> N<1 <br> ?}
P[/Print "Factorial Must be Positive"/]

CF[Counter = N + 1<br>Factorial = 1]
C[Counter = Counter - 1]
F[Factorial = Factorial * Counter ]
D2{is <br> Counter = 1 <br>?}
P2[/Print Factorial/]

S-->R-->D--YES-->P-->R
D--NO-->CF-->C-->F-->D2--YES-->P2-->E
D2--NO-->C




```