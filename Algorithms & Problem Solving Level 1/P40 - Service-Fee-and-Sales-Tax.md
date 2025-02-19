## Problem 40

>#### A restaurant charges 10% services fee and 16% sales tax.
>#### Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the screen.
> ##### Input
> 100 
> ##### Outputs ->
>127.6

## Flowchart 

```mermaid 
flowchart TD

S([start])
E([end])
R[/Read BillValue/]
TB[TotalBill = Billvalue * 0.1+Billvalue <br> TotalBill  = TotalBill * 0.16 + TotalBill]
P[/Print TotalBill/]

S --> R --> TB --> P --> E



```