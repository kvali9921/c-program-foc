include irvine32.inc

Cube MACRO Num  
    push ecx    
    push edx
    ;call readint   
    mov Num,al  
    mov eax,3   
    mov ebx,Num     
    mul ebx     
    call writedec   
    call crlf   
    pop edx     
    pop ecx 
ENDM

.data 
    var1 BYTE 3

.code 
main PROC   
    mov eax,Cube(var1)   
    exit 
main ENDP

END main
