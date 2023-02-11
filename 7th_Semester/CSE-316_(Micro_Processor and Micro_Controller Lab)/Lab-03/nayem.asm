.MODEL SMALL
.STACK 100H
.DATA
A DB ?
B DB ?
MSG DB "Enter the value of A: $"     
MSG2 DB "Enter the value of B: $"
MS DB "SUM1=A+2: $"
MS2 DB "SUM2=B-1: $"
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    MOV BX, @DATA
    MOV DS, BX
    
    MOV AH, 9
    LEA DX, MSG
    INT 21H
    
    MOV AH, 1
    INT 21H
    MOV BL, AL

    MOV A, AL
   
    MOV AH, 2
    MOV DL, 0DH
    INT 21H
    MOV DL, 0AH
    INT 21H
           
    MOV AH, 9
    LEA DX, MSG2
    INT 21H
           
    MOV AH, 1
    INT 21H
    MOV BL, AL
    
    MOV B, AL
            
    MOV AH, 2
    MOV DL, 0DH
    INT 21H
    MOV DL, 0AH
    INT 21H      
           
    MOV AH, 9
    LEA DX, MS
    INT 21H
    
    ADD A, 2  
    MOV AH, 2
    MOV DL, A
    INT 21H
    
    MOV AH, 2
    MOV DL, 0DH
    INT 21H
    MOV DL, 0AH
    INT 21H      
           
    MOV AH, 9
    LEA DX, MS2
    INT 21H 
    
    SUB B, 1  
    MOV AH, 2
    MOV DL, B
    INT 21H
    
    MAIN ENDP
END MAIN