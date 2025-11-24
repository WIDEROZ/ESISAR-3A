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
$$Tz(s(n-j)) = \sum_{n \in \mathbb{Z}} s(n-j)z^{-n} = \sum_{k \in \mathbb{Z}} s(k)z^{-(k+j)} = z^{-j}S(z)$$


#### Exercice : PURE MASTERCLASS!!!!!!!!!!!!!!
Calculer la fonction de transfert de : 
$$5s(n-1) + 2s(n) = e(n)$$
On a :
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


## Filtre numérique
#### Définition
Le système LIT est utilisé por modifier la diso$tribution fréquentielle des composantes d'un signal selon les specs donnés
Il peut être représenté par : 
- Son équation aux différences finies
- Sa réponse impulsionnelle, $h(n)$
- Sa transformée en $z$, $H(z)$
- Son gain en fréquence : $H(e^{ j\omega })$

On classe ces filtres suivant deux cas : 
- RIF (Réponse impulsionnelle finie)
- RII (Réponse impulsionnelle infinie)


## Caractéristique des filtres RIF
$y$ représente le signal de sortie du filtre et $x$ celui d'entrée
#### Équations aux différences
$$y(n) = \sum_{k = 0}^{N-1} b_{k} x(n-k)$$

#### Réponse impulsionnelle
$$h(n) = \sum_{k = 0}^{N-1} b_{k} \delta(n-k)$$

#### Transformée en $z$ de $h(n)$
$$H(z) = \sum_{k =0}^{N-1} b_{k}z^{-k}$$

#### Réponse en fréquence
$$H(f) = H(e^{ 2j\pi f }) = \sum_{k = 0}^{N-1} b_{k} e^{ -2jk\pi f }$$

#### Exemple
$$y(n) = 2x(n) + 4x(n-1) + x(n-3)$$
$$h(n) = 2\delta(n) + 4\delta(n-1) + \delta(n-3)$$
$$y(z) = \left( 2 +  \frac{4}{z} + \frac{1}{z^{3}}  \right) x(z) \Leftrightarrow H(z) = 2+ \frac{4}{z} + \frac{1}{z^{3}} $$
$$H(e^{ 2j\pi f }) = 2 + 4 e^{ -2j\pi f } + e^{ -6j\pi f }$$

#### Critère de stabilité inconditionnel
$$H(z) = M \prod_{k = 0}^{K-1} (z-z_{k})$$

#### Causalité
Le système est causal si
$$\forall n < 0, h(n) = 0$$
Sinon le système est causal par une simple translation. 

## Filtre a phase linéaire
#### Définition
Le signal qui passe dans le filtre ne décale pas  temporellement les fréquences (en gros ya pas une fréquence qui sort avant l'autre dans le filtre)
$$\boxed{\tau = \frac{\varphi_{1}}{\omega_{1}} = \frac{\varphi_{2}}{\omega_{2}} = \text{cte}}$$

Si 
$$\frac{\varphi_{1}}{\omega_{1}} \neq \frac{\varphi_{2}}{\omega_{2}}$$
alors on appelle ce phénomène la distortion de phase. 

#### Conditions pour un signal a phase linéaire
Pour obtenir une phase linéaire il faut que le terme imaginaire de $H(f)$ soit nul. 
ie : 
$$h(n) = h(-n)$$
et il faut que l'intervalle de la fonction $h$ du filtre soit symétrique par rapport à l'origine
$$n \in [-n_{0}, n_{0}] \text{ avec } n_{0} = \frac{N-1}{2}$$

Seulement le filtre ne sera pas causal, il faut donc le décaler de $n_{0}$
ie il suffit de multiplier la fréquence par
$$Hc(f) = e^{ -2j\pi f n_{0} }H(f)$$
Or $H(f) \in \mathbb{R}$ ainsi, 
$$\varphi = -2\pi fn_{0} = -\pi f(N-1)$$

#### Conclusion
Si $h(n)$ possède une symétrie médiane, alors la phase du filtre est une fonction linéaire de la fréquence. 

# DIAPO 30 A FIN

# Exercice final
#### 1.
Signal carré $f \in \left[ -f_{c}, f_{c} \right]$

#### 2.
$$h(n) = \frac{1}{f_{e}}\int_{-\frac{f_{c}}{2}}^{\frac{f_{e}}{2}} H(f) e^{ 2j\pi n\frac{f}{f_{e}} } \, df = \frac{1}{f_{e}} \int_{-f_{c}}^{f_{c}} e^{ 2j\pi n \frac{f}{f_{e}} } \, df $$
$$= \frac{1}{2jn\pi}\left( e^{ 2j\pi n\frac{f_{c}}{f_{e}}} - e^{ -2j\pi n\frac{f_{c}}{f_{e}} } \right) =  \frac{\mathrm {sinc}\left( \frac{n\pi}{2} \right)}{2}$$
