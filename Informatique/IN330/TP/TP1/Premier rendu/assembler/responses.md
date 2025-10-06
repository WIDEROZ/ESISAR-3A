# Etape 2
#### Question 1
Le programme affiche le numéro de la ligne, son contenu et le nombre de caractères qui la compose

#### Question 2
Le \n est positionné à chaque fin de ligne dans le fichier source

#### Question 3
On remplace par '\0' le dernier caractère de la chaine line.

#### Question 4
fait

#### Question 5
On isole à chaque ligne l'instruction, ou encore la premiere suite de caractère sans séparateur. La fonction sscanf renvoie -1 si la ligne ne contient que des séparateurs.

#### Question 6
On a isolé la deuxième chaine de caractère séparée de la première par les séparateurs*

#### Question 7
On met 4 fois '%s' avec 4 variables de chaine de caractères différentes

#### Question 8
x

#### Question 9
x

# Encodage des arguments d'instruction sous forme entière
#### Question 1
Valeur immédiate
registre
alias de registre

#### Question 2
Il faut seulement un caractere pour pouvoir déterminer le type de l'argument

#### Question 3
x

#### Question 4
arg+1 pointe vers l'adresse du caractère 2 et c'est bien une chaine de caractère. 

#### Question 5
x

##### Question 6
x

# Encodage des instructions suivant RISC-V
#### Question 1

sd x3, -8(x12)

Opcode : 0100011
src : x12
Offset : -8
dest : x3

#### Question 2
Les arguments sont touts codés en entier car pour que RISC-V puisse lire le code alors on les prends en entier pour ensuite les convertir en binaire. 

De même on renvoie un entier codé sur 32 bits car une instruction est codé en 32 bits en RISC-V.

##### Question 3
Il suffit d'appliquer un masque binaire spécifique au champ que l'on veut récupérer pour S par exemple le masque & appliquer a l'opcode a l'aide de l'opération & est : 
- Opcode : 0b1111111
Ensuite il faut décomposer la valeure immédiate en deux en appliquant les masques dans le code pour pouvoir l'encoder dans les deux parties de l'instruction S. 
Et enfin pour chaque entier (sauf l'opcode) il faut faire plusieurs bit shift vers la gauche suivant l'emplacement des arguments dans l'instruction.


#### Question 4
Affiche 8 bits quoi qu'il arrive : 
pour : 0b10100
Affiche : 0b00010100

#### Question 5