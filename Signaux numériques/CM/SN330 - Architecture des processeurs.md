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

# II. Les instructions
#### ISA (Instruction set architecture)
Ensemble d'instruction que l'on peut exécuter. (Diffère suivant le materiel physique)

#### Approche CISC
(Complex Instruction Set Computing)
Instructions dédiées à des opérations complexes. 

#### Approche RISC
(Reduce Instruction Set Computing)
Réduire le nombre d'instructions complexes
Utiliser des instructions les plus simples possibles

#### Format des instructions
##### Que trouve t-on dans les instructions
Des bits sont attribués à : 
- Code opération : OpCode
- Modes d'adressage : Opérandes d'entrée (Ou est ce qu'il faut trouver les opérandes d'entrée : mémoire / registre)
- Opérande de sortie : Ou stocker le résultat

##### Quels sont les grands types d’instruction
- Déplacement de données(load, store, etc.)
- Opération (add, sub, mult, OR, AND, etc.)
- Contrôle (branch, jump to subroutine, etc.)

# RISC-V 64 G
#### Registres
Dans le registre x0 la valeur stockée est toujours $0$

| x0      | 0                   |
| ------- | ------------------- |
| x1      | Adresse de retour   |
| x2      | stack pointer       |
| x3      | global pointer      |
| x4      | thread pointer      |
| x5-x7   | tmp                 |
| x8      | frame pointer       |
| x9      | saved registers     |
| x10-x11 | args / func results |
| x12-x17 | func args           |
| x18-x27 | saved registers     |
| x28-x31 | tmp                 |

#### Syntaxe des instructions
##### ALU
``` add x1, x2, x3 ```  : $x_{1} = x_{2} + x_{3}$
``` sub x1, x2, x3 ```  : $x_{1} = x_{2} - x_{3}$

Permet d'ajouter mettre des constantes (petites codé sur $12$ bits avec RISK-V)
``` addi x1, x2, -10 ```  : $x_{1} = x_{2} -10$

##### Mémoire
###### Les Mots
```C
int A[100];
g = h + A[3];
```
$\Leftrightarrow$
``` lw x10, 12 (x13) ```
On lit la valeur avec un offset de $12$ (int codé sur 4 bit donc le 3eme emplacement $3\times 4 = 12$) dans le registre x13 et on le stock dans le registre x10
``` add x11, x12, x10 ``` 
``` sw x10, 40(x13) ```
On stock dans le registre 40(x13) la valeur x10

###### Les octets
Même chose que (lw, sw) mais il faut ecrire : ```lb, sb```
ajouter un $u$ pour charger en non signé. 

###### Valeur immédiate
``` addi x22, x22, 4 ``` 

###### Opération sur les bits
![[Pasted image 20250916152458.png]]

#### Opérations conditionnelles
Réalise un branchement à une instruction correspondant à un label su une condition est vraie. 
Sinon e programme continue à s'exécuter séquentiellement. 
```RISC-V
beq rs1, rs2, L1
```
Si $rs1 == rs 2$ alors on saute vers le label $1$ (on met un label dans un code assembleur en faisant : "$L1:$")
![[Pasted image 20250923143817.png]]
```RISC-V
lb rd offset(rs1);
```
![[Pasted image 20250923145206.png]]

#### Architecture interne 
![[Pasted image 20250923151859.png]]

#### Pipeline 
- 5 Étages, une action par étage
  + 1. IF : Fetch d'instruction
  + 2. ID : décodage instruction et lecture des registres
  + 3. EX : Execution de l'opération (ou calcul de l'adresse
  + 4. MEM : accès aux opérandes de la mémoire.
  + 5. WB : Ecrire le résultat dans la mémoire

# Mémoire Cache
![[Pasted image 20251119165346.png]]
#### Localité du cache
- Spatiale : Rapport avec l'adresse des mémoires
- Temporelle : Adresses que le processeur prend répétitivement.

## Cache à correspondance directe
Chaque bloc dans la mémoire à une place réservée dans le cache. (Plusieurs blocs dans la mémoire sont associés à un bloc du cache)
- Bit de validité : savoir si les blocs du cache contient des donnés valides.
- Tag : Bits de poids fort de l'adresse

#### Diapo. 23-27 - Direct map

## Cache Associatif
Un bloc peut être placé n'importe où dans la mémoire cache. 

## Cache N-SET Associatif
![[Pasted image 20251119174232.png]]
Si l'index est le même et que le tag est différent alors, on passe sur le way suivant.

