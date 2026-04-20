## Problem 33

>#### Write a  program to ask the user to enter: 
> - Grade  <br>
>##### Then Print the grade as follows: <br>
> - 90-100 Print A <br>
> - 80-89  Print B<br>
> - 70-79  Print C<br>
> - 60-69  Print D<br>
> - 50-59  Print E<br>
> - Otherwise Print F<br>
>###### Example Inputs:
> 95 <br>
>###### Outputs ->
> A

## Steps
**Step 1:** Ask the user to enter Grade.<br>
**Step 2:** Check the grade and print the Letter Grade.<br>


## Flowchart

```mermaid
flowchart TD

S([start])
EN([end])
R[/Read Grade/]
A{is <br> Grade >= 90 <br> ?}
B{is <br> Grade >= 80 <br> ?}
C{is <br> Grade >= 70 <br> ?}
D{is <br> Grade >= 60 <br> ?}
E{is <br> Grade >= 50 <br> ?}
PA[/Print "A"/]
PB[/Print "B"/]
PC[/Print "C"/]
PD[/Print "D"/]
PE[/Print "E"/]
PF[/Print "F"/]

S-->R-->A--YES-->PA-->EN
A--NO-->B--YES-->PB-->EN
B--NO-->C--YES-->PC-->EN
C--NO-->D--YES-->PD-->EN
D--NO-->E--YES-->PE-->EN
E--NO-->PF-->EN

```