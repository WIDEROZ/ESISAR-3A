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
loop :
	t2 <- 