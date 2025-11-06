# I. Source de courant
## 3.
![[Screenshot from 2025-11-06 20-40-47.png]]
#### a.
$$V_{cc} - V_{E} = V_{d} + V_{BE}$$
$$V_{cc} = V_{d} + V_{be} +V_{ch}-V_{CE} $$
$$V_{cc} = 2.7 -1.3 + 10 +0.4 = 11.8$$

#### b.
##### Gain de courant
$V_{CE} = -10V$ et $I_{C} = -0.1$ : $\beta = 75$
$I_{C} = -1mA$ : $\beta = 100$
$I_{C} = -10 mA$ : $\beta = 100$
$I_{C} = -150 mA$ : $100 \leq \beta \leq 300$
##### $V_{CE, sat}$
Pour $I_{C} = -150 mA$ et $I_{B} = -15 mA$
$$V_{CE, sat} = -0.4 V$$
##### $V_{BE, avl}$
Pour $I_{C} = -150 mA$ et $I_{B} = -15 mA$
$$V_{BE, avl} = -1.3 V$$
##### $V_{CE, claq}$
$$V_{CE, claq} = -40 V$$

##### Puissance dissipé maximum du transistor
$$P = V_{CC}I_{ch} = 12 \times 0.1 = 1.2\, W \gg 0.6 \, W$$
Le transistor ne résiste pas. 

#### c.
- $2.5 \, V\leq U_{zt} \leq 2.9\, V$
- $U_{zk} \leq 60 \, V$
- $I_{st} \ll 10 \mu A$
- $I_{sk} \ll 10 \mu A$
- $I_{z, \max} = \frac{0.5}{2.7} =0.185 \, mA$

#### d.
Loi des mailles : 
$$R_{E}I_{E} = U_{Z} -V_{BE}$$
Or $I_{E} = I_{ch}-I_{B} = \left(1 -\frac{1}{\beta} \right)I_{ch} \approx I_{ch}$ 
Alors, 
$${R_{E} \approx \frac{U_{Z}-V_{BE}}{I_{ch}}}$$
Donc, $R_{E}$ dépend de $1 \leq I_{ch} \leq 100 mA$
Ainsi 
$$40 \Omega=R_{E, \min} = \frac{U_{Z}-V_{BE}}{\beta I_{ch, \max}}\leq R_{E} \leq \frac{U_{Z}-V_{BE}}{\beta I_{ch, \min}} =R_{E, \max}= 4\, k\Omega$$
En normalisé on a : 
$$\boxed{\begin{array}{c}
R_{E, \min} = 39 \Omega \\
R_{E, \max} = 3.9 k\, \Omega
\end{array}}$$
Alors, 
$$\boxed{R_{t} = 39 \Omega}$$
Alors, par la loi d'ohm
$$V_{cc} = R_{t}I_e = -\frac{R_{t}}{P}V_{E}= \frac{R_{t}}{P} (V_{ch} + V_{ce})$$
Ainsi, 
$$P = $$

$$0 \leq V_{ch} \leq 10 V$$



#### e.
$$I_{Z} = I_{1} + I_{B} \approx I_{1}$$
D'après la datasheet pour que la diode soit polarisée $I_{1} \geq 1 mA$
Comme : 
$$R_{1} = \frac{V_{1}}{I_{1}} = \frac{V_{ch}-V_{BC}}{I_{1}} = \frac{R_{ch}I_{ch} - V_{BC}}{I_{1}} \leq (R_{ch}I_{ch} - V_{BC}) \times 10^{3
} \Omega$$
Or : 
$$V_{BC} = V_{BE} - V_{CE} = -1.3+0.4 = -0.9$$
Alors, 
$$\boxed{R_{1} \leq 900 \Omega \approx 820 \Omega}$$

# II. AOP en commutation — Trigger de Schmitt et comparateur à fenêtre
## 3.
#### AOP Parfait
$$\begin{array}{c}
i_{+} = i_{-} = 0 \\
\varepsilon = V_{+}-V_{-} \text{ est une source de tension parfaite} \\
\begin{cases}
\varepsilon >0 \Rightarrow V_{s} \approx V_{cc} \\
\varepsilon < 0 \Rightarrow V_s \approx -V_{cc}
\end{cases}
\end{array}$$
#### Types de réaction
On a une rétroaction positive c'est donc un AOP en commutation alors $\varepsilon \neq 0$ 

#### Choix des résistances
C'est pour conserver l'impédance d'entrée grande devant les autres éléments du circuit. 

## 4.
![[Screenshot from 2025-11-06 20-41-08.png]]

Théorème de Thévenin à $R_{a}$ et $R_{b}$ : 
$$E_{th} = \frac{R_{b}}{R_{b}+R_{a}} V_{cc}$$
$$R_{th} = \frac{R_{a}R_{b}}{R_{a}+R_{b}}$$
On applique un pont diviseur de tension à $R_{eq}$ sur $R_{eq}$ et $R_{2}$
EXCAL 3
$$V^{+}-V_{B} = \frac{R_{1}}{R_{1}+R_{2}} ( V_{2}-V_{b}) $$
$$\Leftrightarrow V^{+} = \frac{R_{1}V_{2}}{R_{1}+R_{2}} + \frac{R_{1}+R_{2}-R_{1}}{R_{1}+R_{2}}V_{b}$$
$$\Leftrightarrow \boxed{V^{+} = \frac{R_{1}V_{2} + R_{2}V_{b}}{R_{1}+R_{2}}}$$
##### Si $V_+ > V_{1}$
On a alors : 
$$V_{2} = V_{cc}$$
Or $V_{b} = \frac{R_{b}}{R_{a}+R_{b}}V_{cc}$ Donc, 
$$\boxed{V^{+}_\text{haut} = \frac{R_{1} + \frac{R_{2}R_{b}}{R_{a}+R_{b}}}{R_{1}+R_{2}} V_{cc} =  6.62 \, V}$$

##### Si $V_+ < V_{1}$
On a alors : 
$$V_{2} = -V_{cc}$$
Or $V_{b} = \frac{R_{b}}{R_{a}+R_{b}}V_{cc}$ Donc, 
$$\boxed{V^{+}_\text{bas} = \frac{\frac{R_{2}R_{b}}{R_{a}+R_{b}}-R_{1}}{R_{1}+R_{2}} V_{cc} =  1.36 \, V}$$
Ainsi : 
![[Screenshot from 2025-11-06 20-41-28.png]]
et :
![[Screenshot from 2025-11-06 20-41-36.png]]
##### Largeur de la fenêtre
La largeur de la fenêtre est : 
$$\boxed{V_{\text{haut}}^{+}- V_{bas}^{+} = 5.26 \,V}$$

##### Centre de la fenêtre
Le centre de la fenêtre est : 
$$\boxed{\frac{V_{\text{haut}}^{+}+ V_{bas}^{+}}{2} = 8.99  \,V}$$
# A FAIRE
##### Utilité du montage
Ce montage sert à repérer à partir d'un certain seuil ou se situe la valeur haute de $V_{1}$ de manière approximative tout en essayant de ne pas tenir compte du bruit du signal $V_{1}$. 

##### Largeur et position de la fenêtre
La largeur correspond à la precision avec laquelle on veut que l'AOP commute (plus elle est petite et plus le bruit a une chance d'être mal ignoré)

# IV. AOP Parfait en linéaire - Amplificateur différentiel
## 3.
#### a.
L'AOP est parfait et en linéaire donc $V^{+} = V^{-}$ et $i^{+}=i^{-} = 0$
On applique le théorème de Thévenin à $R_{3}$ et $R_{4}$ : 
![[Screenshot from 2025-11-06 20-42-05.png]]
$$E_{th} = \boxed{V^{+} = \frac{R_{4}}{R_{3}+R_{4}}V_{2}}$$
$$R_{th} = \frac{R_{3}R_{4}}{R_{3}+R_{4}}$$
On applique la loi d'ohm sur $R_{1}$ et $R_{2}$ : 
$$V^{+}-V_{1} = \frac{R_{1}}{R_{2}}(V_{s}-V^{+})$$
Alors, 
$$V_{s} = \frac{R_{2}}{R_{1}}\left( \frac{R_{4}}{R_{3}+R_{4}}V_{2}-V_{1} \right)+ \frac{R_{4}}{R_{3}+R_{4}}V_{2}$$
Ainsi, 
$$\boxed{V_{s} = \frac{R_{4}(R_{2} + R_{1})}{R_{1}(R_{3}+R_{4})}V_{2} \, - \frac{R_{2}}{R_{1}}V_{1} = 10 (V_{2} - V_{1})}$$
$$\boxed {\text{C'est un soustracteur de tension}}$$

#### b.
##### 1. Premier cas

![[Screenshot from 2025-11-06 20-42-51.png]]
![[Screenshot from 2025-11-06 20-43-24.png]]
##### 2. Deuxième cas
![[Screenshot from 2025-11-06 20-43-38.png]]
![[Screenshot from 2025-11-06 20-45-10.png]]
