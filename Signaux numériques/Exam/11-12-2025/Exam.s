.section .text
.global main

main :
    addi sp,sp,-32
	sd ra, 24(sp)       #registre donc 8 octets
    sd a0, 16(sp)       #adresse donc 8 octets
    sw a1, 12(sp)       #entier donc 4 octets
    sd s1, 4(sp)        #registre donc 8 octets


    # ------------------------------ TEST DE SWAP ------------------------------ #

    la a0,tableau4       #a0 : adresse du tableau
    li a1,3             #a1 : k
    mv s1,a0            #sauvgarde de a0 dans t0

    # ----- On affiche tout le tableau ----- #

    lw a0, 0(s1)
    call println_int
    lw a0, 4(s1)
    call println_int
    lw a0, 8(s1)
    call println_int
    lw a0, 12(s1)
    call println_int
    lw a0, 16(s1)
    call println_int
    lw a0, 20(s1)
    call println_int
    lw a0, 24(s1)
    call println_int

    # -------------------------------------- #

    call newline
    mv a0,s1            #a0 :s1        


    #call swap           #appel de swap

    

    # ----- On affiche tout le tableau ----- #

    lw a0, 0(s1)
    call println_int
    lw a0, 4(s1)
    call println_int
    lw a0, 8(s1)
    call println_int
    lw a0, 12(s1)
    call println_int
    lw a0, 16(s1)
    call println_int
    lw a0, 20(s1)
    call println_int
    lw a0, 24(s1)
    call println_int

    # -------------------------------------- #


    # ------------------------------ FIN DE TEST SWAP ------------------------------ #


    # ------------------------------ TEST DE SORT ------------------------------ #
    mv a0, s1 # Adresse tableau
    li a1, 7  # Taille tableau

    # ----- On affiche tout le tableau ----- #

    call newline
    call newline
    call newline

    lw a0, 0(s1)
    call println_int
    lw a0, 4(s1)
    call println_int
    lw a0, 8(s1)
    call println_int
    lw a0, 12(s1)
    call println_int
    lw a0, 16(s1)
    call println_int
    lw a0, 20(s1)
    call println_int
    lw a0, 24(s1)
    call println_int

    # -------------------------------------- #
    
    mv a0, s1 # Adresse du tableau
    call sort

    call newline

    # ----- On affiche tout le tableau ----- #

    lw a0, 0(s1)
    call println_int
    lw a0, 4(s1)
    call println_int
    lw a0, 8(s1)
    call println_int
    lw a0, 12(s1)
    call println_int
    lw a0, 16(s1)
    call println_int
    lw a0, 20(s1)
    call println_int
    lw a0, 24(s1)
    call println_int

    # -------------------------------------- #


    # ----------------------------- FIN TEST DE SORT ------------------------------ #

    ld s1, 4(sp)
    lw a1, 12(sp)
    ld a0, 16(sp)
    ld ra, 24(sp)
	addi sp,sp,32
    ret


swap:
    addi sp,sp,-16
	sd   ra, 8(sp)      #registre donc 8 octets

    # adresse du tableau dans a0
    # k dans a1
    mv t0,a0            #adresse du tableau dans t0
    slli t1,a1,2        #offset pour chercher k dans la mémoire
    add t0,t0,t1        #adresse de v[k]

    lw t2,0(t0)         #t2 : v[k]
    lw t3,4(t0)         #t3 : v[k+1]

    sw t3,0(t0)         #v[k] : t3
    sw t2,4(t0)         #v[k+1] : t2

    ld   ra, 8(sp)
	addi sp,sp,16
    ret

sort:
    addi sp,sp,-48
	sd ra, 40(sp)        #registre donc 8 octets
    sd s1, 32(sp)        #registre donc 8 octets
    sd s2, 24(sp)        #registre donc 8 octets

    li s2, 1        # s2 : i
    FORi:
        add s1, s2, -1          # s1 : j
        FORj:

            # --------- Vérifications de boucle --------- #
            blt s1, zero, ENDj  # j <0 On termine la boucle


            slli t2, s1, 2      # t2 : offset j
            add t3, a0, t2      # t3 : &v[j]

            lw t4, 0(t3)        # t4 : v[j]
            lw t5, 4(t3)        # t5 : v[j+1]

            bge t5, t4, ENDj    # v[j+1] >= v[j] On termine la boucle
            

            # ------ Fin de Vérifications de boucle ----- #



            sd a1, 16(sp)       #adresse donc 8 octets
            sd a0, 8(sp)        #adresse donc 8 octets

            mv a1, s1           # On passe le paramètre s1 : j dans a1
            call swap

            ld a0, 8(sp)
            ld a1, 16(sp)


            addi s1, s1, -1     # j--

            j FORj
            

        ENDj:

        addi s2, s2, 1          # i++
        blt s2, a1, FORi        # Si i < k On continue la boucle



        
    ld s2, 24(sp)
    ld s1, 32(sp)
    ld ra, 40(sp)
	addi sp,sp,48
    ret



.data
tableau1 :
    .word 1
    .word 2
    .word 3
    .word 4
    .word 5
    .word 6
    .word 7

tableau2 :
    .word 1
    .word 1
    .word 1
    .word 1
    .word 1
    .word 1
    .word 1

tableau3 :
    .word 7
    .word 6
    .word 5
    .word 4
    .word 3
    .word 2
    .word 1

tableau4 :
    .word 12
    .word 242516
    .word 32
    .word 411
    .word 5138
    .word 699
    .word 7

