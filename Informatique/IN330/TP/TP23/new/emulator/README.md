# Projet RISC-V IN330

Auteurs : Hugo Boitet et Elio Bec-clemente

Planifiez-vous de sauter l'étape 5 (oui/non) ? :

## Étape 2 (réponses aux exercices préliminaires)
#### 1.
0b0000 0000 1011 0110 0000 0110 0011 0011
Le bit \#0 est a droite de l'expression binaire
0b0110011 = 51

#### 2.
0b01100 = 12

#### 3.
(1<<6) : 0b1000000
(1<<6)-1 : !(0b1000000) = 0b0111111

Formule : (1 << l)-1

#### 4. 
Fait

#### 5. 
15 = 0b0000 1111 = 0b0000 0000 1111
-15 = 0b1111 0001
-15 = 0b1111 1111 0001

Si le bit de poid fort de l'entier est 0 alors on ajoute au niveau des bits de poid fort le nombre de 0 qu'il faut pour faire une extention de signe
Si le bit de poid fort de l'entier est 1 alors on ajoute au niveau des bits de poid fort le nombre de 1 qu'il faut pour faire une extention de signe

#### 6.
0b1111 1111 1111
Comme le bit de poid fort est à 1 on ajoute 20 bits 1 : 
0b1111 1111 1111 1111 1111 1111 1111 1111

0b0011 1111 1111
Comme le bit de poid fort est à 0 on ajoute 20 bits 0 : 
0b0000 0000 0000 0000 0000 0011 1111 1111

#### 7.
Fait

#### 8.
Fait

### Décodage format binaire des instructions
#### 1.
15 représente la position du bit de poid faible de rs1 dans l'encodage du type B
0x1f est le nombre de bits que l'on veut récupérer pour lire rs1

#### 2.
Ligne 1 : récupère le bit 12 de imm
Ligne 2 : récupère le bit de 11 de imm
Ligne 3 : récupère les bits de 10 à 5 de imm
Ligne 4 : récupère les bits de 4 à 1 de imm

#### 3.
Fait

#### 4.
Fait

### Analyse des infos machine
#### 1.
PC : Program Counter
regs : Registres
memory : Mémoire Centrale

Puce électronique : Microprecesseur

#### 2.
Unitée : Octet

On divise la taille du tableau par 8 car les entiers sont codé sur 64 bits donc pour un entier il y a 8 octets. 

#### 3.
lb : load byte      - 1 octet
lh : load half-word - 2 octet
lw : load word      - 4 octet
ld : load double    - 8 octet

#### 4.
machine_luw : load unsigned word
machine_suw : store unsigned word

Ce préfixe pourrait se traduire par un objet en POO en Python et en Java.

### Analyse de l’implémentation
#### 1.
emulate.c : Sert à lancer l'émulateur avec définition des fonctions de décodage
machine.c : Fonctions liés à l'interaction avec la mémoire
main.c    : Prend en entrée un ficher .hex et renvoie un fichier .state

#### 2.
Dans emulate.c on appelle : 
- machine_init (Dans machine.c)
- machine_suw (Dans machine.c)

Dans main.c on appelle :
- emulate (Dans emulate.c)

#### 3.
On aurait pu déclarer directement un tableau sans allouer la mémoire avec malloc, seulement le tableau n'aurait été accessible que dans la fonction emulate(), contrairement au malloc.

#### 4.
fp_in : file pointer in (pointeur du fichier d'entrée)
fp_out : file pointer out (pointeur du fichier de sortie)

#### 5.
Il faut décoder totalement les instructions afin d'avoir un adressage memoire cohérent lors des sauts / branchements, ...
Pour l'assembleur on cherche juste à traduire des instructrion pour donner leur code binaire (sur 32 bits) en hexa (ce qui n'a rien à voir avec la mémoire)


## Étapes 3 et 4 (émulateur de base)

* Avez-vous compris le fonctionnement de chaque instruction à partir de la documentation fournie ? Si non, quels sont les points obscurs ?

OUI

* Quels exemples de programmes avez-vous choisi pour tester le calcul ? Les comparaisons et sauts ? La mémoire ?

Tout est dans le fichier tests.
- add (arithmétique)
- beq (saut)
- blt (saut)
- bne (saut)
- bge (saut)
- jal (saut)
- ld (mémoire)
- sd (mémoire)
- sub (arithmétique)

* Reste-t-il des bugs que vous avez découverts et pas corrigés ?

NON

* D'autres remarques sur votre programme ?

NON

* Cochez (en remplaçant `[ ]` par `[x]`) si vous avez :**
  - [x] Implémenté l'émulation de toutes les instructions de `doc_riscv_projetC.pdf`
  - [x] Tous vos tests qui passent.
  - [x] Vérifié que vous tests couvrent toutes les instructions émulées.
  - [x] Testé les cas particuliers : valeurs négatives, overflows...
  - [ ] Un port fonctionnel de DOOM pour votre émulateur.

* Des retours sur le projet en général ?

Répétitif sur le copie des instructions et la saisie des masques mais projet agréable et intéressant à faire.

## Étape 5 (extension de l'émulateur)

* Racontez ici ce que vous avez fait pour cette étape et/ou toutes informations utiles pour qu'on comprenne ce qui marche ou pas.

Les instructions non reconnues sont dans l'ordre : 
- 00000497 (auipc)
- 


On fait donc les fonctions do_... en C et on les ajoutes dans les conditions de execute_instruction.
