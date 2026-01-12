.section .text
.global main

main :
    addi sp,sp,-48
	sd   ra, 0(sp)
    sd   s0, 8(sp)
    sd   s1, 16(sp)
    sd   s2, 24(sp)

    li s2, 0 # sum

    la s0,source
    la s1,dest
    ld a0, 0(s0)
    
    loop :
        call println_int
        call fun
        call println_int
        sd a0, 0(s1)
        add s2, a0, s2 # sum incr
        addi s0, s0, 8
        addi s1, s1, 8
        ld a0, 0(s0)
        bne a0, zero, loop

    mv a0, s2
    call println_int



    ld   s2, 24(sp)
    ld   s1, 16(sp)
    ld   s0, 8(sp)
	ld   ra, 0(sp)
	addi sp,sp,48
	ret

fun : 
    addi sp,sp,-16
	sd   ra, 0(sp)

    addi t0, a0, 1
    sub a0, zero, a0
    mul a0, a0, t0

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