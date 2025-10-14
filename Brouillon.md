Demande $x$ et renvoie $Abs(x)$ : 

Début :
	Demande $x$
	Si $x \geq 0$ alors renvoyer $x$
	Sinon : renvoyer $-x$
	Fin du si
Fin.

Début : 
	Demander $x$
	Si $x \% 3 = 0$ alors : renvoyer vrai
	Sinon : renvoyer faux
	Fin du si
Fin.

Début : 
	Lire $x, y, z$
	Si $(x > y) \text{ et } (x>z)$ :
		Afficher $x$
	Sinon :
		Si $(y > x) \text{ et } (y>z)$ : Afficher $y$
		Sinon : Afficher $z$
		Fin du Si
	Fin du Si
Fin. 

$$25! = 25 \times 24 \times 23\times \dots \times 1$$
....

Pour i de 45 à 100 : 
....
....
....
Fin du pour. 


$x=25!$
$n=25$

$x= 25$

$n=24$
$x= 25 \times 24$

$n=23$
$x = 25 \times 24 \times 23$

Début :
	Lire $n$ : $25$
	x <- 1
	Tant que (n != 1) : 
		x <- x * n
		n <- n - 1
	Fin du tant que.
