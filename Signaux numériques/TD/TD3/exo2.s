    .text
    .globl main

calculate:
    addi sp, sp, -16
    lw ra, 0(sp)

    li t5, 42 # t5 : * : ascii
    addi t6, t5, 1 # t6 : + : ascii

    

    push:
        lb t0, 0(a0)          # t0 : char
        beq t5, t0, operation # t0 = *
        beq t6, t0, operation # t0 = +

        # Si t0 = Chiffre : on effectue l'opération
        addi t0, t0, -48 # t0 devient un entier

        # On vérifie si l'opération est une multiplication ou une addition
        lb t1, 0(sp)
        addi sp, sp, 16

        beq t1, t6, addition
        beq t1, t5, multiplication

        addition: 
            

        multiplication: 
            

        operation:
            addi sp, sp, -16
            sb t0, 0(sp)









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