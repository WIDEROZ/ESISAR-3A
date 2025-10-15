Push : 
addi sp, sp, -taille du truc qu'on veut stocker en octet
s\[b, h, w, d\] $x_{i}$, 0(sp)

Pop :
l\[b, h, w, d\] $x_{i}$ 0(sp)
addi sp, sp, taille du truc qu'on veut stocker en octet

Le "call" enregistre dans $RA$  l'adresse à laquelle il à été appelé et saute a l'adresse de la première instruction 