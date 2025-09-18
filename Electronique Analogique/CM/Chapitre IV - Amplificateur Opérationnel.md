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

#### <font color="red">Pour un AOP parfait </font>$I_+ =  I_{-}  = 0$*
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
- AOP avec un seul défaut $V_{1}$
- Faire le schema équivalent avec le défaut
- 