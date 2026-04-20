## Problem 35

>#### Write a program to ask the user ro enter:
> - Pennies,Nickels,Dimes,Quarters,Dollars
>#### Ten calculate the total pennies, total dollars and print them on screen giving that:
> - Penny = 1 <br>
> - Nickel = 5 <br>
> - Dime = 10 <br>
> - Quarter = 25 <br>
> - Dollar = 100<br>
>##### Example Inputs:
> 5,5,5,5,5 <br>
>##### Outputs ->
>705 Pennies <br>
>7.05 Dollars

## Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read Penny,Nickel,Dime,Quarter,Dollar/]
TPD[TotalPennies = Pennies * 1 + Nickles * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100 <br> TotalDollars = Piennies / 100]
P[/Print TotalPennies <br> Print TotalDollars/]
S-->R-->TPD-->P-->E

```

