section .rodata
    msg:    db 'Hello, Holberton', 14
    msglen: equ $-msg

section .text
    main:
        ; write(1, msg, msglen)
        mov rdi, 1
        mov rsi, msg
        mov rdx, msglen
        mov rax, 1
        syscall
