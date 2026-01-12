# Exercice 1
## 1.
$$\overline{t_{i}} = T_{i}t_{s, i} + (1-T_{i})(t_{e, i}+\overline{t_{i+1}}) $$
## 2.
$$\forall i \in [\![1, 4]\!], \overline{t_{i}} = \begin{cases}
3.812&\text{si }i = 1 \\
6.06&\text{si }i = 2 \\
13.6&\text{si }i = 3 \\
40&\text{si }i = 4
\end{cases}$$
# Exercice 2
Un mot : 
$$[31-30|29-22|21-0]$$
#### 1. Capacité d'adressage
Le nombre d'adresses disponible est : $2^{9}$,  
Chaque adresse contient 1 mot de $32$ bits alors, 
$$\boxed{CA_{A} = 2^{9} \times 32 = 2^{14} \,bits  =  2 \, kio}$$
#### 2. Case d'adresse : $0b101111001 = 0o571$
On prend la $7^{eme}$ page avec un offset de $1$
###### Processus 1
$$0o01 \to 0o 33 \to 0o 23 \to 0o 231$$
$$42$$
###### Processus 2
$$0o17 \to 0o 13 \to 0o 20 \to 0o 201$$
$$17$$

## 3.
$$0b101101101 = 0o 555$$
La page n°5 n'est pas valide

## 4.
$$0b000001011 = 0o013$$
La page $1$ n'est pas accessible par le programme

## 5.
process 1
$$0b101010000 = 0o 520$$
process 2
$$0b000101000 = 0o 050$$

Ces deux adresses virtuelles pointent vers la même adresse mémoire, il peut y avoir conflit lors de l'écriture car ils ont tous deux un droit d'ecriture

## 6.
$$0b000011111 = 0o017$$
Conflit à l'execution
Les programmes n'ont pas le droit d'écrire dans cet emplacement

# Exercice 3
## 1.
$$0b000001010 = 0o012$$
process 1 : code
process 2 : 

