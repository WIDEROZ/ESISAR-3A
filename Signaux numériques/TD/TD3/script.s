    .text
    .globl main

main:
    addi sp, sp, -48
    sw ra, 0(sp)
















    lw ra, 0(sp)
    addi sp, sp, 48
    ret

    
    
    
    .section .data
machine: 
    .string "saper"
chaineresu:
    .space 64