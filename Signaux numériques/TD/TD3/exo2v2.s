    .text
    .globl main



calculate:
    addi sp, sp, -16
    sw ra, 0(sp)
    
    li t5, 42      # t5 : * : ascii
    addi t6, t5, 1 # t6 : + : ascii

    
    call empiler # On empile a0 dans sp

    call depiler # On dépile en faisant les opérations


    lw ra, 0(sp)
    addi sp, sp, 16
    ret

empiler:
    lb t0, 0(a0)
    while_empiler:
        addi sp, sp, -16
        sb t0, 0(sp)
        addi a0, a0, 1
        lb t0, 0(a0)
        bne t0, zero, while_empiler
    ret


depiler:
    lb t0, 0(sp)
    addi sp, sp, 16

    













    ret












main:  
    addi sp, sp, -16
    sw ra, 0(sp)


    la a0, expression
    la a1, res
    call calculate


    mv a0, a1
    call print_int




    lw ra, 0(sp)
    addi sp, sp, 16
    ret

    .section .data
expression:
    .string "*+2*34+56"
res:
    .space 4