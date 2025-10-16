#### Exercice 1
Demande à l'utilisateur un nombre entier $n$ et a la fin dit si le chiffre est pair ou impair 

#### Exercice 2
Demande à l'utilisateur un nombre entier $n$ et afficher le résultat de l'addition : 
$$1+2+3+\dots + n \left( = \sum_{k = 1}^{n}k \right)$$


x = 0
Pour : 
i = 1
x = 1
Fin du premier tour de boucle
i = 2
x = 1 + 2
Fin du 2eme tour de boucle
i = 3
x = 1 + 2 + 3
Fin du 3eme tour de boucle
i = 4
x = 1 + 2 + 3 + 4


Debut :
	Demander n
	x <- 0
	Pour i allant de 1 à n : 
		x = x+i
	Fin du pour
	Renvoyer x
Fin
x = x + i