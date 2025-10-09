## I. AOP
Borne $+$ : non inverseuse
Borne $-$ : Inverseuse
$\varepsilon$ : tension différentielle
![[Pasted image 20250918091255.png]]
Petite tension $\varepsilon$ $\Rightarrow$ Grande amplification


$$\begin{cases}
\varepsilon >0 \Rightarrow V_{s} = V_{cc} + V_{sat} \\
\varepsilon <0 \Rightarrow V_{s} = -V_{cc} - V_{sat}
\end{cases}$$
On est bloqué par l'alim (en réel c'est environ $80\%$ on a une tension de saturation)

#### <font color="red">Pour un AOP parfait </font>$I_+ =  I_{-}  = 0$
#### $V_{1}, V_{2}$ <font color="red">TOUJOURS DES SOURCES DE TENSION PARFAITES</font>
## Etude d'un schema
![[Pasted image 20250918092244.png]]
Chercher $V_{2}$ en fonction de $V_{1}$

#### Réaction négative
Si la réaction est négative (ie la sortie est reliée à $V^{-}$) :
$\varepsilon =0$ l'AOP est linéaire

Mise en équation :
$$\begin{cases}
V_{1} = R_{1}I \\
V_{2} = -R_{2}I
\end{cases}$$

Bilan :
Les inconnues sont : $I, V_{2}$

$$\frac{V_{2}}{V_{1}} = - \frac{R_{2}}{R_{1}} \text{ Ainsi, } \boxed {A = -\frac{R_{2}}{R_{1}}}$$
$A$ est l'amplification

## II. Défauts de l'AOP
![[Pasted image 20250918093922.png]]
On a $V_{d}$ car les transistors dans l'AOP ne sont pas rigoureusement identiques.

En haute fréquence AC l'AOP ne fonctionne plus il y a une fréquence limite

### 1. Défauts statiques
Par la loi des mailles : 
$$\varepsilon = V_{e } -V_{d}$$
Alors, 
$$V_{s} = A_{0}(V_{e}-V_{d})$$
Si $V_{e} = 0$ alors $V_{s} \neq 0$
#### Etude de l'effet de la tension offset
Montage inverseur : 
- AOP avec un seul défaut $V_{d}$
- Faire le schema équivalent avec le défaut

On prend $V_{1} = 0$ pour simplifier le problème (Th. de superposition)
On souhaite $V_{2}$ en fonction de $V_{d}$.

Résolution :
On a que : 
- $V_{d}$ est aux bornes de $R_{1}$
- $V_{2}$ est aux bornes de $R_{1}$ et $R_{2}$

$$\begin{cases}
V_{d} = -R_{1}I \\
V_{2} = -(R_{2} + R_{1})I
\end{cases}$$
Ainsi, 
$$\boxed{V_{2} = \frac{R_{1}+R_{2}}{R_{1}} V_{d} = \left( 1+ \frac{R_{2}}{R_{1}} \right) V_{d}}$$

### 2. Défauts dynamiques
On rajoute une capacité dans le schema équivalent IGNOBLEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE

## 3. Pourquoi l'AOP
![[Pasted image 20251009083902.png]]
##### En boucle ouverte
$$A(p) = \frac{V_{s}}{\varepsilon}=A_{0}$$
##### En boucle fermée
$$H = \frac{A}{1+AB}$$
