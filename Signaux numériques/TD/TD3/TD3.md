Push : 
addi sp, sp, -taille du truc qu'on veut stocker en octet
s\[b, h, w, d\] $x_{i}$, 0(sp)

Pop :
l\[b, h, w, d\] $x_{i}$ 0(sp)
addi sp, sp, taille du truc qu'on veut stocker en octet

Le "call" enregistre dans $RA$  l'adresse à laquelle il à été appelé et saute a l'adresse de la première instruction de la fonction.

Dans chaque routine il faut un prologue (enregistrer l'adresse de $sp$ dans RA et décaler $sp$) et un épilogue (remettre $sp$ à sa place en mettant RA dans $sp$) qui va faire 

## 1.
#### 1.
addi sp, sp, -8
sd ra, 0(sp)


la a0, machaine
la a1, chaineresu

call rev

la a0, chaineresu
call println_string

ld ra, 0(sp)
addi sp, sp, 8

#### 2.
t2 <- a0
loop1 :
	t1 <- val\[t2\]
	Si $t_{1} == 0$ alors sauter à end1
	sp <- sp -1
	sp <- t1
	t2 <- t2 + 1
	saut loop1
end1 :


loop2 :
	t1 <- val\[t2\]
	Si t1 == 0 sauter a end2
	sp <- sp + 1
	sp 
	t2 <- t2 + 1



rev :
\# Prologue
addi sp, sp, -8
sd ra, 0(sp)

\# empiler \0
addi sp, sp, -1
sb zero, 0(sp)

\# empiler
addi t2, a0, 0
loop1 :
	lb t1, 0(t2)
	beq t1, zero, end1
	addi sp, sp, -1
	sb t1, 0(sp)
	addi t2, t2, 1
	j loop1
end1 :

\# dépiler
addi t2, a1, 0 \# on dit que a1 c'est l'adresse qui contient la chaîne de résultat

loop2 :
	lb t1, 0(sp)
	addi sp, sp, 1
	beq t1, zero, end2
	sb t1, 0(t2)
	addi t2, t2, 1
	j loop2
end2 :
	sb zero, 0(t2)

\# Epilogue
ld ra, 0(sp)
addi sp, sp, 8

## 3.
affn0 a0 : 
	si a0 == 0 alors :
		print_char
	sinon :
		print_char
		a0 <- a0-1
		affn0

aff0n a0 :
	Si a0 == 0 alors :
		print_char a1
	Sinon :
		t0 <- a0
		a0 <- a1 - a0
		print_char
		a0 <- t0-1
		aff0n

addi a1, a0, 0
affn0 :
	bne a0, zero, Sinon
		call print_char
	Sinon :
	