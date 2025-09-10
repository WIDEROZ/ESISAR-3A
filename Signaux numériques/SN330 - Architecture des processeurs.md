# Introduction
#### Conception des circuits intégrés
![[Pasted image 20250910085801.png]]
Au minimum $100$ personnes par étape
#### Niveau de représentation des programmes
![[Pasted image 20250910092411.png]]

#### Loi de Moore
L'évolution du nombre de transistors depuis $1970$ est logarithmique. 

#### Hiérarchie mémoire
![[Pasted image 20250910100354.png]]

#### Adressage mémoire
###### Lecture
- Entrée : Adresse mémoire
- Sortie : Adresse de la valeur stockée + bus de donnée
###### Écriture
- Entrée : Adresse mémoire + Valeur
- Sortie : 

![[Pasted image 20250910104557.png]]
Les mots sont alignés en mémoire, si ils commencent à un multiple de $4$ et non pas à l'adresse : $0Eh$ par exemple :
![[Pasted image 20250910104908.png]]
Le mot ici n'est pas aligné. (N'existe pas sur tous les microcontrôleurs)

#### Extension de signe
Dans l'ISA RISC-V on a deux instructions différentes : 
- $lb$ : chargement d'un octet avec l’extension de signe.
- $lbu$ : Chargement de l'octet sans l’extension de signe.

# I. Principes de fonctionnements
#### Principe général
![[Pasted image 20250910110755.png]]
#### Architecture de Von Neumann
![[Pasted image 20250910111111.png]]
Le $PC$ (program counter) est un registre qui contient l'adresse mémoire du programme à exécuter. 
