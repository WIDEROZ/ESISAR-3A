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
    addi sp, sp, -16
    sb zero, 0(sp)
    while_empiler:
        lb t0, 0(a0)
        addi sp, sp, -16
        sb t0, 0(sp)
        addi a0, a0, 1
        bne t0, zero, while_empiler
    ret


depiler:
    # t0 : char
    lb t0, 0(sp)

    beq t0, zero, return
    beq t0, t5, do_mul # t0 : *
    beq t0, t6, do_add # t0 : +
    
    addi sp, sp, 16
    j depiler

    return:
        addi sp, sp, 16
        ret



do_mul: 
    lb t1, -16(sp) # t1 : premier opérande
    lb t2, -32(sp) # t2 : deuxième opérande
    addi t1, t1, -48
    addi t2, t2, -48
    mul t0, t1, t2
    
    sb t0, 0(sp) # On met le résultat à la place de la multiplication
    j realigner_pile




do_add: 
    lb t1, -16(sp) # t1 : premier opérande
    lb t2, -32(sp) # t2 : deuxième opérande
    addi t1, t1, -48
    addi t2, t2, -48
    add t0, t1, t2
    
    sb t0, 0(sp) # On met le résultat à la place de l'addition
    j realigner_pile


    
realigner_pile:
    addi t0, sp, -16 # Adresse Position réelle
    addi t1, sp, -48 # Adresse Offset
    while_aligner:
        lb t2, 0(t1) # Valeur a l'offset

        sb t2, 0(t0) # On décale
        addi t0, t0, -16 # Prochain élément
        addi t1, t1, -16 # Prochain élément
        bne t2, zero, while_aligner

    addi sp, sp, 16
    j depiler






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