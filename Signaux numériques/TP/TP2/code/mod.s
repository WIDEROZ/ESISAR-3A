.section .text
.global main
main:
    addi sp,sp,-16
	sd   ra, 0(sp)

    call routine

    ld   ra, 0(sp)
	addi sp,sp,16
	ret


routine : 
    addi sp,sp,-32
	sd   ra, 0(sp)
    sd   s0, 8(sp)
    sd   s1, 16(sp)


    la s0,source
    la s1,dest
    ld a0, 0(s0)
    
    loop :
        call mul6
        call mod16
        sd a0, 0(s1)
        addi s0, s0, 8
        addi s1, s1, 8
        ld a0, 0(s0)
        bne a0, zero, loop



    ld   s1, 16(sp)
    ld   s0, 8(sp)
	ld   ra, 0(sp)
	addi sp,sp,32
	ret

mul6 :
    addi sp,sp,-16
	sd   ra, 0(sp)

    slli t1,a0,1
    slli a0,a0,2
    add a0,a0,t1

    ld   ra, 0(sp)
	addi sp,sp,16

    ret


mod16 :
    addi sp,sp,-16
	sd   ra, 0(sp)

    li t0,15
    and a0,a0,t0

    ld   ra, 0(sp)
	addi sp,sp,16
    ret


.data
source :
    .dword 3
    .dword 1
    .dword 4
    .dword 13
    .dword 5
    .dword 9
    .dword 0
dest :
    .dword 0
    .dword 0
    .dword 0
    .dword 0
    .dword 0
    .dword 0
    .dword 0
    .dword 0
    .dword 0
    .dword 0