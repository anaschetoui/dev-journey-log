## Problem 42

>### Write a program to calculate the task duration in seconds and print it on screen
> -> Given the time duration of a task in the number of days,hours,minutes and seconds.
> #### Input 
> 2<br>
> 5<br>
> 45<br>
> 35<br>
>#### Outputs ->
> 193,535 Seconds

## Flowchart 

```mermaid
flowchart TD

S([start])
E([end])
R[/Read <br> Days <br> Hours <br> Minutes <br> Seconds/]
DHMS[TaskDuration = <br> #40;Days * 24 * 60 * 60#41;<br> + <br> #40;Hours * 60 * 60#41; <br> + <br>#40;Minutes * 60#41;<br>+<br>Seconds]
P[/Print TasksDuration + "Seconds"/]

S --> R --> DHMS --> P --> E

```