.section .text
.globl main
main:
    addi sp,sp,-16
	sd   ra, 0(sp)

    la a0,.LC1
    call convert
	call println_int

	ld   ra, 0(sp)
	addi sp,sp,16
	ret

mul10 :
    addi sp,sp,-16
	sd   ra, 0(sp)

    add t1,zero,a0
    slli t1,t1,1
    add a0,zero,t1
    slli t1,t1,2
    add a0,a0,t1

    ld   ra, 0(sp)
	addi sp,sp,16

    ret

convert :
    addi sp,sp,-16
	sd   ra, 0(sp)

    la a0,.LC1
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
    mv a0,t2

    ld   ra, 0(sp)
	addi sp,sp,16
    ret

.LC1:
    .string "1025"