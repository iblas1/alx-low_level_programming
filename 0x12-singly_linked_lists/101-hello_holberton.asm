section .data
    hello db "Hello, Holberton",0
    fmt db "%s", 10, 0 ; Format string with '%s' for a string and newline character

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, fmt ; Format string
    mov rsi, hello ; Address of the string to print
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit (60)
    xor rdi, rdi        ; status = 0
    syscall

    pop rbp
    ret

