addi a1, zero, 18
addi a2, zero, 24
addi a1, a1, 2
bge a2,  a1, (.+  -4)
bge a1,  a2, (.+  8)
addi a1, a1, 100
