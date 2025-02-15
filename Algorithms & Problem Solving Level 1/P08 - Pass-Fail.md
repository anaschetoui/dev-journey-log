## Problem 08

>### Write a program to ask the user to enter:
> - Mark<br>
>#### Then Print the `PASS` if mark >=50, otherwise print `FAIL`
> Exemple `Inputs`
>>45 <br>
>
> `Outputs` ->
>>Fail
><br>
 




### Steps:

**Step 1:** Read Mark. <br>
**Step 2:** Result = (Mark >= 50)<br>
**Step 3:** check result if true print `PASS` otherwise `Fail`<br>
**Step 4:** Print Result  <br>

### Flowchart 

```mermaid
flowchart TD

A([start])-->B[/Read Mark/] -->C[Result = &#40Mark >= 50&#41] -->D{Result=True?}-- Yes -->E[/Print "PASS"/] -->F([end])
D-- NO -->G[/Print "FAIL"/]-->F


```