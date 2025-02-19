## Problem 41

>#### Write a program to rad a NumberOfHours and calculates the number of weeks, and days included in that number.
>##### Input
> 365
>##### Outputs ->
> 2.17 Weeks<br>
> 15.20 Days<br>

## Flowchart

```mermaid 
flowchart TD

S([start])
E([end])
R[/Read NumberOfHours/]
DW[Days = 365 / 24 <br> Weeks = Days / 7]
P[/Print Weeks + &quot;Weeks&quot; <br> Print Days + &quot;Days&quot;/]

S --> R --> DW --> P --> E

```