## Problem 47

>### Write a program to read a Loan Amount and Monthly Payement and calculate how many months you need to settle the loan.
> #### Input 
> 5000<br>
> 500<br>
> #### Outputs ->
> 10 Months 

## Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read LoanAmount <br> Read MonthlyPayement/]
TM[TotalMonths = LoanAmount / MonthlyPayement]
P[Print TotalMonths + #quot;Months#quot;]

S --> R --> TM --> P --> E

```