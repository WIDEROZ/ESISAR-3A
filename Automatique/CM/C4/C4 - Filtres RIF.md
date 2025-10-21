On pose :
$$p = \sigma + 2j\pi f$$
#### Définition : Équations aux différences
$$\boxed{\sum_{k = 0}^{j}b_{k}s(n-k)  = \sum_{l= 0}^{i}a_{l}e(n-l)}$$

#### Définition : Transformée en $z$
$$\boxed{X(z) = Tz\{ x(n) \} = \sum_{n \in \mathbb{Z}} x(n) z^{-n} : \mathbb{Z} \to \mathbb{C}}$$
avec $z = e^{ pT_{e} }$

#### Propriété
$$\boxed{Tz(s(n-j)) = z^{-j}S(z)}$$
Démonstration : 
$$Tz(s(n-j)) = \sum_{n \in \mathbb{Z}} s(n-j)z^{-n} = \sum_{k \in \mathbb{Z}} s(k)z^{-(k+j)} = z^{-j}S(Z)$$


#### Exercice : PURE MASTERCLASS!!!!!!!!!!!!!!
Calculer la fonction de transfert de : 
$$5s(n-1) + 2s(n) = e(n)$$
Démonstration :
$$5 \frac{S(z)}{z} + 2 S(z) = E(z)$$
Ainsi, 
$$\boxed{H(z) = \frac{S(z)}{E(z)} = \frac{1}{\frac{5}{z}+2}}$$


$$\frac{a^{2}}{()}$$