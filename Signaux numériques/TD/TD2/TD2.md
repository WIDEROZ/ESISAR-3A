# Exercice 1
00000000000 01001 000 00110 0010011
0x00048313
# Exercice 2
00000000 1000 0001 0000 0011 1000 0011
000000001000 00010 000 00111 0000011
```asm
lb t2, (8)sp
```

# Exercice 3
```asm
addi t0, zero, 1
addi t1, zero, 8
WHILE:
addi t0, t0, 1
bgne t1, t0, WHILE
```
Comme l'instruction fait $32$ bits WHILE $=4$ (en octet)

Version qui marche tout le temps : 
```asm
addi t0, zero, 1
addi t1, zero, 8

DEBUT:

bgeq t1, t0, FIN
addi t0, t0, 1
j DEBUT

FIN:
```

Correction officielle : 
```asm
addi t0, zero, 1
addi t1, zero, 8

DEBUT:

addi t0, t0, 1
bgeq t1, t0, FIN
j DEBUT

FIN:
```
(Comme on sait que l'on doit aller à $8$ et que l'on sait que l'on ne commence pas à $8$ on gagne une instruction dans le premier passage de la boucle)

# Exercice 4
```asm
addi t0, zero, 0 
addi t1, zero, 0
addi t2, zero, 9

WHILE:
addi t1, t1, 1
add t0, t0, t1
bgne t1, t2, WHILE

```

# Exercice 5
$n=t_{0}$
print_char $= f_{p}$
$a_{0} = 42$

```asm
la t1, mydata
la t0, 0(t1)
```

Carré : 
```C
int g = 3; // t0
int n = g; // t1
int k = g; // t2

char c = '*'; // a0
char r = 13; // a0 a changer

while(n != 0){
	while(k != 0){
		print_char(c);
		k--;
	}
	print_char(r);
	k = g;
	n--;
}
```

Traduction assembleur : 
```asm
la t1, mydata
la t0, 0(t1)

mv t1, t0
mv t2, t0

WHILE1:
beq t1, zero, END1

WHILE2:

beq t2, zero, END2
li a0, 42 // Etoile
call print_char
addi t2, t2, -1
j WHILE2

END2:

li a0, 13 // Carriage return
call print_char
mv t2, t0
addi t1, t1, -1

j WHILE1


END1:
```

# Exercice 7
```C
long tab[a1];
int i = a1-1;
while(i >= 0){
	tab[i] += 1;
	i--;
}

```


```asm
mv t0, a0
mv t1, a1

li t2, 0



LOOP: 
	beq t2, t1, END
	

END:

```
