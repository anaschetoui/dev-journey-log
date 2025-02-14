## Problem 03

> ### Write a program to ask the user to enter a number then Print "ODD" if its odd, Or "Even" if its even.

### Steps: 
**Step 1:** Read Number.<br>
**Step 2:** Result = Number % 2 = 0.<br>
**Step 3:** check ,if Result = 0 its even otherwise its odd .<br>
**Step 4:** Print `ODD` or `Even`.<br>


## Flowchart

```mermaid
flowchart TD

A(start) --> B[/Read Number/]
B--> C[Result = Number % 2]
C--> D{is Result = 0 ?}
D-- yes --> F[/Print &quot;Even&quot;/]
F--> G(end)
D-- No  --> E[/Print &quot;Odd&quot;/]
E --> G

    
```

