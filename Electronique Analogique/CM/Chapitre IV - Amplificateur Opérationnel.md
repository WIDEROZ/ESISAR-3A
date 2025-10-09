# I. AOP
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

# II. Défauts de l'AOP
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
On cherche la fréquence unité / de transition ie lorsque :
$$\left| A(j\omega)\right| = 1 \Leftrightarrow 1 = \frac{A_{0}}{\sqrt{1+\left( \frac{f_{u}}{f_{0}} \right)^{2}}} \Leftrightarrow \boxed{f_{u} = f_{0} \sqrt{A_{0}^{2}-1} \approx f_{0}A_{0}}$$



##### En boucle fermée
$$H = \frac{A}{1+AB}$$
On cherche la fréquence unité / de transition ie lorsque :
$$T(p) = \frac{A(p)}{1+A(p)B} = \frac{T_{0}}{1+\frac{p}{f_{T_{0}}}}$$
Alors, 
$$T(p) = \frac{A_{0}}{1+ \frac{p}{\omega_{0}} +A_{0}B} $$
Alors, lorsque $p=0$, 
$$T_{0} = \frac{A_{0}}{1+A_{0}B}$$


### a. Taux de réjection en mode commun
![[Pasted image 20251009090234.png]]
On pose : 
$$\begin{array}{l}
G_{d} = \frac{1}{2}(G_{+}+G_{-}) \\
G_{mc} = G_{+}-G_{-}
\end{array}$$
Le fait que le gain ne soit pas rigoureusement identique est le taux de réjection de mode commun.

$$V_{s} = G_{d}v_{d} +G_{mc}v_{mc} = G_{d}\left( v_{d}+\frac{1}{\frac{G_{d}}{G_{mc}}}v_{mc} \right) = G_{d}\left( v_{d} + \frac{1}{\tau_{r}}v_{mc} \right)$$

### b. Vitesse de balayage
#### Pente maximale de la tension de sortie (Slew rate)
$$\boxed{SR = \frac{\Delta V}{\Delta t}}  \,[V.\mu s^{-1}]$$
Unité data sheet

#### Signal de sortie sans distortion
$$\boxed{\frac{d V_{s}}{dt} < SR}$$
Sinon le signal de sortie ne peut suivre les variations du signal d’entrée. 

### c. Limite dû à la vitesse de balayage
On prend un signal sinusoïdal d'amplitude $E$ et de pulsation $\omega$ alors sa pente maximale est : $E\omega$. 
Pour avoir un signal propre il faut que : 
$$E\omega < SR$$
on cherche alors $\omega_{\lim}$ : Donc pour $E= V_{sat}$
$$E\omega_{\lim} = SR \text{ donc, } \omega_{\lim} = \frac{SR}{V_{sat}}$$

### d. Tension max. applicable à l'entrée
Si la tension d'entrée est supérieure à la tension de saturation, il y à écrêtage : 
![[Pasted image 20251009092913.png]]

Au max ce qu'on utilisera on peut sortir $0.5 \, W$

### Bilan
L'étude basée sur le modèle idéal est souvent suffisante. 
![[Pasted image 20251009093736.png]]

# III. AOP Classique
