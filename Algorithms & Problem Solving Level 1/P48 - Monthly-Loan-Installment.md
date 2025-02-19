## Problem 48

>### Write a program to read a Loan Amount and ask you how many months you need to settle the loan, then calculate the monthly installment amount.
> #### Input
> 5000<br>
> 10<br>
> #### Outputs ->
> 500

## Flowchart 

```mermaid 
flowchart TD

S([start])
E([end])
R[/Read LoanAmount <br> Read Months/]
IA[MonthlyInstallment = LoanAmount / Months]
P[/Print MonthlyInstallment /]

S --> R --> IA --> P --> E

```
