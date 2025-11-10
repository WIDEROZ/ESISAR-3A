	.file	"ex1.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0_zmmul1p0_zaamo1p0_zalrsc1p0_zca1p0_zcd1p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
# GNU C23 (g1b306039a) version 15.1.0 (riscv64-unknown-elf)
#	compiled by GNU C version 11.4.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version none
# warning: GMP header version 6.2.1 differs from library version 6.3.0.
# warning: MPFR header version 4.1.0 differs from library version 4.2.1.
# warning: MPC header version 1.2.1 differs from library version 1.3.1.
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -mabi=lp64d -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei_zmmul_zaamo_zalrsc_zca_zcd
	.text
	.section	.rodata
	.align	3
.LC0:
	.string	"%d\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-32	#,,
	sd	ra,24(sp)	#,
	sd	s0,16(sp)	#,
	addi	s0,sp,32	#,,
# ex1.c:7:   int x = 41;
	li	a5,41		# tmp136,
	sw	a5,-20(s0)	# tmp136, x
# ex1.c:8:   x = x+1;
	lw	a5,-20(s0)		# tmp139, x
	addiw	a5,a5,1	#, tmp140, tmp138
	sw	a5,-20(s0)	# x_2, x
# ex1.c:9:   printf("%d\n",x);
	lw	a5,-20(s0)		# tmp141, x
	mv	a1,a5	#, tmp141
	lui	a5,%hi(.LC0)	# tmp142,
	addi	a0,a5,%lo(.LC0)	#, tmp142,
	call	printf		#
# ex1.c:11:   return 0;
	li	a5,0		# _5,
# ex1.c:12: }
	mv	a0,a5	#, <retval>
	ld	ra,24(sp)		#,
	ld	s0,16(sp)		#,
	addi	sp,sp,32	#,,
	jr	ra		#
	.size	main, .-main
	.ident	"GCC: (g1b306039a) 15.1.0"
	.section	.note.GNU-stack,"",@progbits
