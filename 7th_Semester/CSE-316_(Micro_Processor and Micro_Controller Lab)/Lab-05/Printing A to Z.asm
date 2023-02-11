.MODEL SMALL
.STACK 100H 
.DATA    
MSG DB "Printing Capital Alphabets A to Z: $"
SMS DB "Printing Capital alphabets a to z: $"

.CODE 
MAIN PROC   
    
      MOV AX, @DATA
      MOV DS, AX
      MOV BX, @DATA
      MOV DS, BX    
      
      MOV AH, 9
      LEA DX, MSG
      INT 21H
    
    
      MOV CX, 26    
      MOV BL, 65    
    
      MOV AH, 2
    
 CAPITALOUTPUT:
      MOV DL, BL    
      INT 21H 
    
      INC BL        
    
      LOOP CAPITALOUTPUT   
      
      
    ; NEW LINE PRINT
      MOV AH, 2
      MOV DL, 0DH
      INT 21H
      MOV DL, 0AH
      INT 21H      
  
      
      MOV AX, @DATA
      MOV DS, AX
      MOV BX, @DATA
      MOV DS, BX    
      
      MOV AH, 9
      LEA DX, SMS
      INT 21H
    
      
      MOV CX, 26    
      MOV BL, 97    
    
      MOV AH, 2
    
 SMALLOUTPUT:
      MOV DL, BL    
      INT 21H 
    
      INC BL        
    
      LOOP SMALLOUTPUT

      MAIN ENDP
END MAIN