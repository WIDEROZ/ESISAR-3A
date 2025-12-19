addi a2, zero, 22
addi a1, zero, 24
addi a2, a2, 2
beq a1, a2, -4
addi a1, a1, 12
addi a2, a2, 10
beq a1, a2, 8
addi a1, a1, 100


# EXPECTED
# sp: 16384
# a1: 36
# a2: 36