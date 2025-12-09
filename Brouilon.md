```s
swap:
	addi sp, sp, -16
	sw ra, 12(sp)
	
	# Définition des registres temporaires contenant les paramètres
	add t0, zero, a0 
	add t2, zero, a2
	
	# On multiplie k par 4 pour pouvoir naviguer dans la mémoire et avoir le bon décalage d'adresse
	# mul t2, t2, 4
	add t2, t2, t2
	add t2, t2, t2
	
	add t0, t0, t2 # t0 : Adresse de v[k]
	lw t3, 0(t0) # t3 : Valeur de v[k] (tmp = v[k])
	
	lw t4, 4(t0) # t4 : v[k+1]
	sw t4, 0(t0) # v[k] = v[k+1]
	
	sw t3, 4(t0) # v[k+1] = tmp
	
	lw ra, 12(sp)
	addi sp, sp, 16
ret
```

```s
sort:
	addi sp, sp, -16
	sw ra, 12(sp)
	sw s1, 8(sp)
	
	mv t0, a0 # &v[0]
	
	addi t1, zero, 1 # i
	FORi :
		addi s1, t1, -1 # j
		FORj :
			
			
			swap
			
			
			addi s1, s1, -1 # j--
			# Si j < 0 on arrête de boucler j
			blt s1, zero, ENDj 
			# j*4 pour avoir l'offset
			# de l'élément à l'emplacement j
			mult t2, s1, 4
			# On cherche l'élément j dans le tab v
			# t0 : &v[j]
			add t0, a0, t2
			
			lw t3, 0(t0) # t3 : v[j]
			lw t4, 4(t0) # t4 : v[j+1]
			
			# Si v[j]>v[j+1] On boucle
			blt t4, t3, FORj
		ENDj :


	addi t1, t1, 1 # i++
	blt t1, a1, FORi
	
	lw s1, 8(sp)
	lw ra, 12(sp)
	addi sp, sp, 16
ret
```