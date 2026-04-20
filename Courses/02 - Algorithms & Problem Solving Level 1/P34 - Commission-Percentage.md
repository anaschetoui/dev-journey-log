## Problem 34

>#### Write a program to ask the user to enter:
> - TotalSales
>#### The commission is calculated as  one Percentage * the total sales amount, all you need is to decide which percentage to use of the following:
> - &#62;1M -> Percentage is 1%
> - &#62;500K to 1M -> Percentage is 2% 
> - &#62;100K to 500K -> Percentage is 3% 
> - &#62;50K to 100K -> Percentage is 5% 
> -  Otherwise -> Percentage is 0% 

## Steps

**Step 1:**	Ask the user to enter TotalSales<br>
**Step 2:**	Check and Print the commission<br>

## Flowchart 

```mermaid
flowchart TD

S([start])
E([end])
R[/Read TotalSales/]
Per1[Percentage = 0.01 ]
Per2[Percentage = 0.02 ]
Per3[Percentage = 0.03 ]
Per4[Percentage = 0.05 ]
Per5[Percentage = 0 ]
TSC[Commission = TotalSales * Percentage]
1M{is <br> TotalSales > 1M <br>?}
500K{is <br> TotalSales > 500K <br>?}
100K{is <br> TotalSales > 100K <br>?}
50K{is <br> TotalSales > 50K <br>?}
P[/Print Commission/]

S-->R-->1M--YES-->Per1-->TSC
1M--NO-->500K--YES-->Per2-->TSC
500K--NO-->100K--YES-->Per3-->TSC
100K--NO-->50K--YES-->Per4-->TSC
50K--NO-->Per5-->TSC-->P-->E
```
