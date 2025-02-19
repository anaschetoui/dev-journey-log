## Problem 36
>#### Write a program to ask the user to enter:
> - Number1
> - Number2
> - Operation Type
>#### Then perform the calculation according to the operation type as follows:
> "+" : add the two numbers. <br>
> "-" : subtract the two numbers.<br>
> "*" : multiply the two numbers.<br>
> "/" : Devide the two numbers.<br>

>#### Example Inputs:
> 10 <br>
> 20 <br>
> &#42; <br>
>#### Outputs ->
>200

## Flowchart 

```mermaid
flowchart TD

S([start])
E([end])
R[/Read Num1 <br>Read Num2<br> Read Operation type/]
OP{OperationType = &quot;+&quot;?}
OS{OperationType = &quot;-&quot;?}
OM{OperationType = &quot; * &quot; ?}
OD{OperationType = &quot;/&quot;?}
Plus[Sum= Num1 + Num 2]
Sub[Sum= Num1 - Num 2]
Mul[Sum= Num1 #42; Num 2]
Dev[Sum= Num1 / Num 2]
P[/Print Sum/]
P1[/Print "Invalid Operation Type"/]

S-->R-->OP--YES-->Plus-->P
OP--NO-->OS--YES-->Sub-->P
OS--NO-->OM--YES-->Mul-->P
OM--NO-->OD--YES-->Dev-->P-->E
OD--NO-->P1-->E
```