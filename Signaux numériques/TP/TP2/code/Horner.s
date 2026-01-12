.section .text
.globl main
main:
    addi sp,sp,-16
    sd ra,8(sp)
    la a0, .LC1
    call println_string
    # appel à la routine convert
    la a0 , .LC1


    call convert


    # affichage du résultat
    la a0, .res
    ld a0, 0(a0)
    call println_int
    ld ra,8(sp)
    addi sp,sp,16
    jr ra
    ret






## Partie à compléter
mul10 :
    addi sp,sp,-16
	sd   ra, 0(sp)

    slli t1,a0,1
    slli a0,a0,3
    add a0,a0,t1

    ld   ra, 0(sp)
	addi sp,sp,16

    ret

convert :
    addi sp,sp,-32
	sd   ra, 0(sp)
    sd   s1, 8(sp)
    sd   s2, 16(sp)   

    mv s1,a0
    li t2,0
    lb s2,0(s1)
    boucle : 
        addi s2,s2,-48
        mv a0,t2
        call mul10
        mv t2,a0
        add t2,t2,s2
        addi s1,s1,1
        lb s2,0(s1)
        bne s2,zero,boucle
    #mv a0,t2
    la t0,.res
    sd t2,0(t0)

    ld   s2, 16(sp)
    ld   s1, 8(sp)
    ld   ra, 0(sp)
	addi sp,sp,32
    ret

# Section données.
    .section .data
    .align 3
.LC1:
    .string "1025"

.res:
    .dword 0