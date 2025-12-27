    .text
    .globl main

rev:
    addi sp, sp, -16
    sw ra, 0(sp)

    # Ajout de 0 dans la pile
    addi sp, sp, -16
    sb zero, 0(sp)

    lb t0, 0(a0) # char chaine a retrouner

    while1:
        addi sp, sp, -16 # faire de la place pour la pile
        sb t0, 0(sp)     # store dans la stack
        addi a0, a0, 1   # char suivant
        lb t0, 0(a0)     # char chaine a retrouner

        bne t0, zero, while1

    mv t1, a1
    while2:
        lb t0, 0(sp) # char a mettre dans chaine a retrouner
        sb t0, 0(t1) # store dans la chaine a retourner
        addi t1, t1, 1
        addi sp, sp, 16

        bne t0, zero, while2




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