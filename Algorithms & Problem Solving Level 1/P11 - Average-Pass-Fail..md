## Problem 11

>### Write a program to ask the user to enter:
> - Mark1,Mark2,Mark3
>### Then Print the Average of entered Marks,and print "PASS" if average>=50, otherwise print "FAIL"
>Exemple Inputs:
>- 90<br>
>- 80<br>
>- 70<br>
><br>
>Outputs ->
>- 80
>- PASS


### Steps

**Step 1** Ask user enter Mark1,Mark2,Mark3<br>
**Step 2** Average = (Mark1 + Mark2 + Mark3)/3 <br>
**Step 3** Print Average <br>
**Step 4** check if (Average >=50) = true <br>
**Step 5** Print PASS or FAIL based on the Result

### Flowchart

```mermaid
flowchart TD
A([start])-->B[/Read Mark1,Mark2,Mark3/]-->C[Avg=&#40Mark1+Mark2+Mark3&#41/3]
-->D[/Print Avg/]-->E{Avg>=50 ?}--YES-->F[/Print "PASS"/]-->G([end])
E--NO-->H[/Print "FAIL"/]-->G

```
