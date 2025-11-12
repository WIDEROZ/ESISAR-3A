# Méthode de Horner
#### Exo. 2
s2 = s2 - '0' : Donne la valeur du chiffre s2 en base 10

| Boucle            | a0     | s1     | t2     | s2      |
| ----------------- | ------ | ------ | ------ | ------- |
|                   | 0xabcd | 0xabcd | 0      | 1 + ‘0’ |
| 1                 | 0xabcd | 0xabcd | 0*10   | 1       |
|                   | 0xabcd | 0xabcd | 0+1    | 0 + ‘0’ |
| 2                 | 0xabcd | 0xabcd | 1*10   | 0       |
|                   | 0xabcd | 0xabcd | 10+0   | 2 + ‘0’ |
| 3                 | 0xabcd | 0xabcd | 10*10  | 2       |
|                   | 0xabcd | 0xabcd | 100+2  | 5 + ‘0’ |
| 4                 | 0xabcd | 0xabcd | 102*10 | 5       |
|                   | 0xabcd | 0xabcd | 1020+5 | ’\0’    |
| Sort de la boucle | 0xabcd | 0xabcd | 1025   |         |

1025

$$2\times n + 2 \times 2 \times n$$
