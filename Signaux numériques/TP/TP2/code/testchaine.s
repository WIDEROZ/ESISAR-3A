.section .text
.globl main
main:
    addi sp,sp,-16
	sd   ra, 0(sp)

    la a0,.LC1
    add t0,zero,a0
    lb a0,0(t0)
	call println_int
    addi t0,t0,1
    lb a0,0(t0)
    call println_int

	ld   ra, 0(sp)
	addi sp,sp,16
	ret


.LC1:
    .string "1025"