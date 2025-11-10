	.text
	.globl main
main: 	                                                           
	addi	sp,sp,-16
	sd	ra,8(sp)
## Your assembly code there
	
	la 	t3, mydata # load reading address
	

	ld 	t4,  0(t3) # first op of minmax
	ld 	t5,  8(t3) # second op of minmax
	la 	t6, min # load writing adress
	la  t0, max # load writing adress

	blt 	t4, t5, fst_is_min

	mv 	a0, t5
	mv a1, t4
	j 	end

fst_is_min:
	mv 	a0, t4
	mv  a1, t5
end:
	sd 	a0, 0(t6) # write result 
	call 	print_int
	call	newline

	mv a0, a1
	sd 	a0, 0(t0) # write result
	call 	print_int
	call	newline

## End of user assembly code
	ld	ra,8(sp)
	addi	sp,sp,16
	ret

# Data comes here
	.section	.data
mydata:
	.dword 7
	.dword 42
min:
	.dword 0
max:
	.dword 0
