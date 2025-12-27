    .text
    .globl main

calculate:
    addi sp, sp, -16
    sw ra, 0(sp)

    li t5, 42      # t5 : * : ascii
    addi t6, t5, 1 # t6 : + : ascii

    addi sp, sp, -16
    sb zero, 0(sp) # '\0' dans la sp

    push:
        lb t0, 0(a0)          # t0 : char
        beq t5, t0, operation # t0 = *
        beq t6, t0, operation # t0 = +

        # Si t0 = Chiffre : on effectue l'opération
        addi t0, t0, -48 # t0 devient un entier

        # On load l'opération dans t2
        lb t2, 0(sp)
        addi sp, sp, 16

        chiffre:
            # On prend le prochain chiffre
            addi a0, a0, 1
            lb t1, 0(a0)
            addi t1, t1, -48 # t1 devient un entier

            # On vérifie si l'opération est une multiplication ou une addition
            beq t2, t5, multiplication

            # addition:
                add t0, t0, t1
                j fin_operation

            multiplication:
                mul t0, t0, t1
            
            fin_operation:

            # On load l'opération suivante dans t2
            lb t2, 0(sp)
            addi sp, sp, 16

            beq t2, zero, END # Si t2 = '\0' c'est fini
            j chiffre         # Sinon on boucle

        operation:
            addi sp, sp, -16
            sb t0, 0(sp)
            addi a0, a0, 1
            j push


    END:


    sw t0, 0(a1)

    lw ra, 0(sp)
    addi sp, sp, 16
    ret



main:
    addi sp, sp, -16
    lw ra, 0(sp)


    la a0, expression
    la a1, res
    call calculate


    mv a0, a1
    call print_int




    sw ra, 0(sp)
    addi sp, sp, 16
    ret





    .section .data
expression:
    .string "*+124"
res:
    .space 4