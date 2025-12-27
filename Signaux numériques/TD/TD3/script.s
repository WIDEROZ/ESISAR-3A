    .text
    .globl main

rev:
    addi sp, sp, -16
    sw ra, 0(sp)

    lw t0, 0(a0) # char chaine a retrouner
    addi t1, zero, 4 # offset stack
    sub sp, sp, t1
    sw zero, 0(sp)
    while:

        

        bne t0, zero, while



    lw ra, 0(sp)
    addi sp, sp, 16
    ret


main:
    addi sp, sp, -16
    sw ra, 0(sp)
    sw a0, 4(sp)
    sw a1, 8(sp) 


    la a0, .machine
    la a1, .chaineresu
    call rev

    mv a0, a1
    call println_string


    lw a1, 8(sp)
    lw a0, 4(sp)
    lw ra, 0(sp)
    addi sp, sp, 16
    ret

    
    
    
    .section .data
machine: 
    .string "saper"
chaineresu:
    .space 64