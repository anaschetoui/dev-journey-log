## Problem 14

>### Write a program to ask the user to enter:
>- Number1 <br>
>- Number2 <br>
>### Then Print the two numbers, then swap the two numbers and print them.
>Exeple Inputs: <br>
>- 10
>- 20
><br>
>Outputs->
>- 10
>- 20
> <br> <br>
>- 20
>- 10
	

### Steps

**Step 1:** Read Num1,Num2<br>
**Step 2:** Print Num1<br>
**Step 3:** Print Num2<br>
**Step 4:** Temp=Num1<br>
**Step 5:** Num1=Num2<br>
**Step 6:** Num2=Temp<br>
**Step 7:** Print Num1<br>
**Step 8:** Print Num2<br>

## Flowchart

```mermaid
flowchart TD

S([start])
E([end])
R[/Read Num1,Num2/]
PN[/Print Num1 Num2/]
T[A=Num1<br> B = Num2<br> Temp=A <br> A=B<br>B=Temp]
PAB[/Print A,B/]

S-->R-->PN-->T-->PAB-->E

```