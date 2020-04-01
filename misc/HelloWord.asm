section .text

global  _start

_start:
        mov eax, 4
        xor ebx, ebx
        inc ebx
        mov ecx, h
        mov edx, len
        int 80h

        xor eax, eax
        inc eax
        xor ebx, ebx
        int 80h

section .data
       h db "Hello, World!", 0xA
       len equ $ - h