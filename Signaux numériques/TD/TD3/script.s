    .text
    .globl main

rev:
    addi sp, sp, -16
    sw ra, 0(sp)

    lw t0, 0(a0) # char chaine a retrouner
    addi sp, sp, -4
    sb zero, 0(sp)
    while1:
        addi sp, sp, -1 # faire de la place pour la pile
        addi a0, a0, 1  # char suivant
        lb t0, 0(a0)    # char chaine a retrouner
        sb t0, 0(sp)    # store dans la stack

        bne t0, zero, while1
    
    while2:
        sw




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