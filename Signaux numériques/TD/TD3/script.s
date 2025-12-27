    .text
    .globl main

main:
    addi sp, sp, -48
    sw ra, 0(sp)


    la a0, .machine
    la a1, .chaineresu
    call rev












    lw ra, 0(sp)
    addi sp, sp, 48
    ret

    
    
    
    .section .data
machine: 
    .string "saper"
chaineresu:
    .space 64