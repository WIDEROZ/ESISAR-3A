addi x1, x0, 0
addi x2, x0, 0
jalr ra, x2, 0
addi x1, x0, 10
ret
addi x1, x1, 10

# EXPECTED
# sp: 16384
# x1: 10
# x2: 12
