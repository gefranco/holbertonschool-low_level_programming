section .data
    msg db "Hello, Holberton", 0x0a ; 0x0a = \n
    .size equ $ - msg

section .text
    global start
    start:
        mov rax, 0x2000004  ; syscall write
        mov rdi, 1          ; standard out
        mov rsi, msg        ; address of string
        mov rdx, msg.size   ; size to write
        syscall             ; invoke kernel
        
        mov eax, 0x2000001  ; syscall exit
        mov rdi, 0          ; return code
        syscall             ; invoke kernel
