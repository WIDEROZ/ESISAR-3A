addi a2, zero, 24
addi a1, zero, 18
addi a1, a1, 2
blt a1,  a2, (.+  -4)
addi a1, a1, 1
blt a2,  a1, (.+  8)
addi a1, a1, 100
