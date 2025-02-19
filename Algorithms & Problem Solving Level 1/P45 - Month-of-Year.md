## Problem 45

>#### Write  a program to ask the user to enter:
> - Month
>##### Then Print the day as follows:
> -  1 Print January <br>
> -  2 Print February<br>
> -  3 Print March<br>
> -  4 Print April<br>
> -  5 Print May<br>
> -  6 Print June<br>
> -  7 Print July<br>
> -  8 Print August<br>
> -  9 Print September<br>
> - 10 Print October<br>
> - 11 Print November<br>
> - 12 Print December<br>
> - Otherwise print "Wrong Month" and ask the user to enter again
>##### Inputs
>11
>##### Outputs ->
> November

## Flowchart
```mermaid
flowchart TD

S([start])
E([end])
R[/Read Month/]
WN{is <br> Month >=1 AND Month <=12 <br>?}
Jan{is <br> Month = 1 <br>?}
Feb{is <br> Month = 2 <br>?}
Mar{is <br> Month = 3 <br>?}
Apr{is <br> Month = 4 <br>?}
May{is <br> Month = 5 <br>?}
Jun{is <br> Month = 6 <br>?}
Jul{is <br> Month = 7 <br>?}
Aug{is <br> Month = 8 <br>?}
Sep{is <br> Month = 9 <br>?}
Oct{is <br> Month = 10 <br>?}
Nov{is <br> Month = 11 <br>?}

PJ[/Print "January"/]
PF[/Print "February"/]
PM[/Print "March"/]
PA[/Print "April"/]
PM[/Print "May"/]
PJU[/Print "June"/]
PJL[/Print "July"/]
PAU[/Print "August"/]
PS[/Print "September"/]
PO[/Print "October"/]
PN[/Print "November"/]
PD[/Print "December"/]

PWN[/Print "its wrong Month"/]

S --> R --> WN 
WN -- NO --> PWN --> R
WN -- YES --> Jan
Jan -- YES --> PJ --> E
Jan -- NO --> Feb
Feb -- YES --> PF --> E
Feb -- NO --> Mar
Mar -- YES --> PM --> E
Mar -- NO --> Apr
Apr -- YES --> PA --> E
Apr -- NO --> May
May -- YES --> PM --> E
May -- NO --> Jun
Jun -- YES --> PJU --> E
Jun -- NO --> Jul
Jul -- YES --> PJL --> E
Jul -- NO --> Aug
Aug -- YES --> PAU --> E
Aug -- NO --> Sep
Sep -- YES --> PS --> E
Sep -- NO --> Oct
Oct -- YES --> PO --> E
Oct -- NO --> Nov
Nov -- YES --> PN --> E
Nov -- NO --> PD --> E


```