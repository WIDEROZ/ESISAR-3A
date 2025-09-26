# Exercice 1
### 1.
$$B_{p} = 8 \times f = 32 00 \times 10^{6} = 3,2  Go/s$$

### 2.
$$B_{p} = 2^{5} \times 10^{8} = 5^{8} \times 2^{13}  \text{ }io/s = 2.98 \text{ } Gio/s $$

### 3.
$$32 \times 266 \times 10^{6} = 1.064 \text{ } Go / s $$

## Lecture d'un film
### 1.
Bus mémoire de masse -> Bus entre (contrôleur E/S et mémoire) -> Bus mémoire graphique ou bus système

### 2.
$$512 \times 384 \times 24  = 4718592  \text{ }o /s = 4,72 \text{ } Mo/s$$

### 3.
$$P = \frac{4.72}{1064} = 4.43 \%$$

# Exercice 2
## 1.
#### a.
$$2^{32}$$
#### b.
$$2^{32} \text{ octets} = 4 Gio \text{ d'adresse}$$

#### c.
$$8$$

### 2.
#### a.
$$2^{32}$$

#### b.
$$4 \times 2^{32} = 4 \, Gio $$

#### c.
$$32$$


# Exercice 3
## 1.
$$2^{4}$$
## 2.
$$2^{12} = 4096$$

## 3.
$A = 130$
$A = A + 131$
$A = A + 132$
Stock dans l'adresse $133$ le résultat.

## 4.
$0x 100$ -> $0x 101$ -> $0x 102$ -> $0x 103$
$$1130$$
$$5131$$
$$5132$$
$$2133$$

$$0001  \text{ }0001 \text{ }0011 \text{ }0000$$
$$0010 \text{ }0001 \text{ }0011 \text{ 0001}$$
$$\text{0010 0001 0011 0010}$$
$$\text{0101 0001 0011 0011}$$

## 5.

| Etape : | 0      | 1   | 2   | 3   | 4      |
| ------- | ------ | --- | --- | --- | ------ |
| 0x130   | 0x0002 |     |     |     |        |
| 0x131   | 0x0003 |     |     |     |        |
| 0x132   | 0x0001 |     |     |     |        |
| 0x133   | 0x0022 |     |     |     | 0x0006 |

## 6.
LOAD 130
STORE 133
LOAD 131
STORE 130
LOAD 133
STORE 131
