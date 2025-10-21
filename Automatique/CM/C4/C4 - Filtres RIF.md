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
#### Exercice
On veut la DES : 
$$\frac{z^{2}}{(z-a)(z-b)}$$
Démonstration : 
$$z^{2}\left( \frac{x}{z-a} + \frac{y}{z-b} \right) = z^{2}\left( \frac{x(z-b)+ y(z-a)}{(z-b)(z-a)}   \right)$$
$$x(z-b) + y(z-a) = 1$$
$$x = \frac{a^{2}}{a-b} \text{ et } y = \frac{b^{2}}{b-a}$$
Or comme : 
$$C_{1} = \frac{z-a}{z} X(z) \text{ et } C_{2} = \frac{z-b}{z} X(z) $$
$$X(z) = \frac{z^{2}a^{2}}{(z-a)(a-b)} + \frac{z^{2}b^{2}}{(z-b)(b-a)}$$

$$X(z) = \sum_{i \in \mathbb{Z}} \frac{C_{i}z}{z-z_{i}} \text{ avec } C_{i} = \frac{z-z_{i}}{z}X(z) \text{ Donc, } x(n) = \sum_{z \in \mathbb{Z}} C_{i} n^{z} $$


#### Exemple
$$$$