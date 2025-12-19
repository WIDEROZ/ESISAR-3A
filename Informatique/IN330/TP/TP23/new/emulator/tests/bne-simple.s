addi a2, zero, 20
addi a1, zero, 24
addi a2, a2, 2
bne a1, a2, -4
addi a2, a2, 100
bne a1, a2, 8
addi a1, a1, 100



# EXPECTED
# sp: 16384
# a1: 24
# a2: 124