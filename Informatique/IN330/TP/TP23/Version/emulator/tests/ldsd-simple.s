addi a0, zero, 1024
addi a1, zero, 10
addi a2, zero, 2
sd a1, 0(a0)
ld a2, 0(a0)


# EXPECTED
# sp: 16384
# a0: 1024
# a1: 10
# a2: 10