```s
# Définition des registres temporaires contenant les paramètres
add t0, zero, a0 
add t2, zero, a2

# On multiplie k par 4 pour pouvoir naviguer dans l'adres
# mul t2, t2, 4
add t2, t2, t2
add t2, t2, t2

addi t0, t0, t1 # t0 : Adresse de v[k]
lw t3, 0(t0) # t3 : Valeur de v[k] (tmp = v[k])

lw t4, 4(t0) # t4 : v[k+1]
sw t4, 0(t0) # v[k] = v[k+1]

sw t3, 4(t0) # v[k+1] = v[k]



```