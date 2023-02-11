MOV CX,0
L: 
MOV AH,2
MOV DL, '*'
INT 21H


INC CX
CMP CX,600
JLE L                                     