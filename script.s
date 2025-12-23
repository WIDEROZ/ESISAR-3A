    .text
    .globl main

main :
    addi sp, sp, -16
    sd ra, 8(sp)









    ld ra, 8(sp)
    addi sp, sp, 16
    ret
