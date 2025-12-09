```s
add t0, zero, a0
add t2, zero, a2
# mul t1, a2, 4
addi t1, zero, 4


addi t0, t0, t1
lw t3, 0(t0)

addi t4, t0, 4
sw t4, 0(t0)


```