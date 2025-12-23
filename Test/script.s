    .text
    .globl main

main:
    addi sp, sp, -16
    sd ra, 8(sp)


    addi t0, zero, 1



    ld ra, 8(sp)
    addi sp, sp, 16
    ret
    