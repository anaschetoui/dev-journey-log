## Problem 37

>#### Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print the sum on screen.
> #### Input
> - 10<br>
> - 20<br>
> - 30<br>
> - 40<br>
> - -99<br>
> #### Outputs ->
> 100<br>

## Flowcahrt 

```mermaid
flowchart TD

S([start])
E([end])
R[/Read Num/]
Sum[Sum=0<br> Sum = Sum + Num]
D{Num = -99 ?}
P[/Print Sum/]

S-->R-->D--NO-->Sum-->R
D--YES-->P-->E

```