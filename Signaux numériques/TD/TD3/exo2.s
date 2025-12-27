    .text
    .globl main

calculate:
    addi sp, sp, -16
    lw ra, 0(sp)

    li t5, 42 # t5 : * : ascii
    addi t6, t5, 1 # t6 : + : ascii

    push:
        lb t0, 0(a0)
        beq t5, t0, operation # 

        operation:


        






    sw ra, 0(sp)
    addi sp, sp, 16
    ret



main:
    addi sp, sp, -16
    lw ra, 0(sp)


    la a0, expression
    la a1, res
    call calculate


    mv a0, a1
    call println_int




    sw ra, 0(sp)
    addi sp, sp, 16
    ret





    .section .data
expression:
    .string "*+124"
res:
    .space 4