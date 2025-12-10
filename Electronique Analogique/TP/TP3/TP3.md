# I. AOP réel défauts statiques
## 1. Composants

![[Pasted image 20250918093922.png]]

- Tension de décalage
- Courant de polarisation
- Courant de décalage
- Impédances d'entrées et de sorties (finie / non nulle)
- $V_{s} < V_{cc}$
- Variations des grandeurs électriques suite aux variations thermiques


| Référence                   | LM741      | TL081       |
| --------------------------- | ---------- | ----------- |
| Tension de décalage $u_{d}$ | $0.8-3$ mV | $3-10$mV    |
| Courant de polarisation     | $30-80$nA  | $20-200$pA  |
| $I_{p}^{+}$                 | $2.2$ pA   | $0.15$ pA   |
| $I_{p}^{-}$                 | $2.167$ pA | $0.1501$ pA |

car : 
$$I_{p}^{-} = \frac{V^{-}+V_{d}}{R_{e}} \text{ et } I_{p}^{+}=\frac{V^{+}}{R_{e}}$$
Comme : 
$$R_{e, LM}\approx 6 M\Omega \text{ et } R_{e, TL} \approx 1 M\Omega$$
Puis dans le pire des cas : 
$$V^{-}_{LM} = \pm 13 V \text{ et } V^{-}_{TL} = 15 V$$
et 
$$V^{+}_{LM} = \pm13 V \text{ et } V^{+}_{TL} = 15 V$$

Ainsi, 
$$\boxed{I_{p, LM}^{-} = \frac{13+0.003}{6 \times 10^{12}} = 2.167 \, pA \text{ et } I_{p, LM}^{+} = \frac{13}{6 \times 10^{12}} = 2.2 \, pA}$$
et : 
$$\boxed{I_{p, TL}^{-} = \frac{15+0.01}{1 \times 10^{12}} = 0.1501 \, pA \text{ et } I_{p, TL}^{+} = \frac{15}{1 \times 10^{12}} = 0.15 \, pA}$$


## 2. Effets des défauts
### b.
#### Suiveur
On a alors : 
$$\varepsilon =-(V^{-}+V_{d})$$
Car $V^{+} = v_{1} = 0$.
De plus, $V^{-} = v_{2d}$ alors comme : 
$$v_{2d} = A\varepsilon + R_{s}I_{p}^{-}$$
On a :
$$v_{2d}(1+A) =-AV_{d} + R_{s} I_{p}^{-}$$
Ainsi, 
$$\boxed{v_{2d} = \frac{R_{s}I_{p}^{-}-AV_{d}}{A+1}}$$
Si on néglige $R_{s}$ et qu'on suppose que $A$ est grand : 
$$\boxed{v_{2d} = -V_{d} = \begin{cases}
-3mV &  \text{pour LM741} \\
-10mV & \text{pour TL081}
\end{cases}}$$

### Inverseur non compensé
Comme : 
$$\varepsilon = -V_{d}$$
On a : 
$$I_{1} = \frac{V_{d}}{R_{1}} \text{ et } I_{2} = I_{1} + I_{p}^{-}$$
par la loi d'ohm et la loi des noeuds
Alors, 
$$R_{2}I_{2} = v_{2p}-\varepsilon$$
Ainsi, 
$$\boxed{v_{2p} = R_{2}\left( \frac{V_{d}}{R_{1}} + I_{p}^{-} \right)+V_{d}}$$
Application numérique : 
$$\boxed{v_{2p} = \begin{cases}
3V &  \text{pour LM741} \\
10V & \text{pour TL081}
\end{cases}}$$

#### Inverseur compensé
$$-V_{d} = R_{1}I^{+} + \varepsilon$$

$$-V_{d} = R_{1}\left( I_{p}^{-}+I_{p}^{+} \right)+ R_{e}I_{p}^{-}$$
$$I_{1} = -\frac{V_{d}}{R_{1}}$$
$$I_{1} = I_{p}^{-}+I_{p}^{+} + \frac{R_{e}}{R_{1}}I_{p}^{-}$$
Alors, par la loi des noeuds et la loi d'ohm : 
$$I_{2} = I_{1} + I_{p}^{-} \text{ et } R_{2}I_{2} = V_{d} - v_{2c} $$
Ainsi
$$\boxed{v_{2c} = V_{d}-R_{2}\left( I_{p}^{-}\left( 2 + \frac{R_{e}}{R_{1}} \right) + I_{p}^{+} \right) }$$

# A FAIRE

# II. AOP réel - défault dynamique
## 1. Système bouclé du $1^{er}$ ordre
### a. Produit Gain Bande
#### Boucle ouverte
$\omega_{u} = 2\pi f_{u}$
$$A(\omega_{u}) = \frac{A_{0}}{1+j\frac{\omega_{u}}{\omega_{0}}} = 1 \Leftrightarrow A_{0} = \sqrt{1+\left( \frac{\omega_{u}}{\omega_{0}} \right)^{2}}$$
$$\Leftrightarrow \omega_{0}^{2}(A_{0}^{2}-1) = \omega_{u}^{2} \Leftrightarrow \boxed{f_{u} = \frac{\omega_{0}}{2\pi}\sqrt{A_{0}^{2}-1}}$$
Or si $\frac{\omega_{u}}{\omega_{0}} \gg 1$ : 
$$\frac{\omega_{u}}{\omega_{0}}= \sqrt{A_{0}^{2}-1} \gg 1 \Rightarrow \frac{\omega_{u}}{\omega_{0}} \approx A_{0}$$
Ainsi, 
$$\boxed{f_{u} \approx \frac{\omega_{0}}{2\pi}A_{0}}$$

#### Boucle fermée
$$\varepsilon = V_{e}-V_{r}$$
$$V_{s} = A \varepsilon$$
$$V_{r} = BV_{s}$$

$$A_{o} = \frac{V_{s}}{V_{e}} = \frac{A\varepsilon}{\varepsilon+BV_{s}} = \frac{A}{1+aB}$$
Ainsi,  le gain statique est : 
$$A_{o_{bf}} = \frac{A(0)}{1+A(0)B} = \frac{A_{0}}{1+A_{0}B}$$
$$\boxed{A_{o_{bf}} = \frac{A_{0}}{1+A_{0}B}}$$

$$\left| A_{o}(\omega_{o_{bf}})\right| = \left| \frac{A(\omega_{o_{bf}})}{1+A(\omega_{o_{bf}})B}\right| = -3dB$$
Alors, 
$$\frac{A_{0}}{\sqrt{1+\left( \frac{\omega_{o_{bf}}}{\omega_{0}} \right)^{2}} + A_{0}B} = -3dB $$
Ainsi
$$\boxed{\omega_{o_{bf}} = \omega_{0}\sqrt{\left( \frac{A_{0}}{3} -A_{0}B \right)^{2}-1}}$$

#### Liens BO - BF
$$PGB = A_{o_{bf}} f_{o_{bf}} =  \frac{A_{0}}{1+A_{0}B}\frac{\omega_{0}}{2\pi} \sqrt{\left( \frac{A_{0}}{3} -A_{0}B \right)^{2}-1}$$
Ainsi,
$$\boxed{f_{u} = \frac{A_{0}}{1+A_{0}B}\frac{\omega_{0}}{2\pi} \sqrt{\left( \frac{A_{0}}{3} -A_{0}B \right)^{2}-1}}$$
est bien constant. 

## 2. Amplificateur inverseur
### a. AOP parfait
On a une rétroaction négative alors l'AOP est linéaire donc : 
$$\varepsilon = 0$$
$$I_{1} = \frac{v_{1}}{R_{1}} \text{ et } -v_{2} = R_{2}I_{1} = \frac{R_{2}}{R_{1}}v_{1}$$
Donc,
$${v_{2} = -\frac{R_{2}}{R_{1}} v_{1}}$$
Ainsi, 
$$\boxed{A_{1} = -\frac{R_{2}}{R_{1}} = 100}$$
### b. AOP non parfait
#### Circuits équivalents
Schema circuit RC : 
Alors, 
$$A(p) = \frac{A_{0}}{1+p RC}$$
![[Pasted image 20251210190052.png]]

#### Produit gain bande
On cherche $f_{u}$ : 
$$\frac{A_{0}}{\left| 1+ j \omega_{u}RC\right|} = 1 \Leftrightarrow \frac{\sqrt{{A_{0}^{2}}{}-1}}{RC} = \omega_{u} $$
$$\boxed{f_{u} = \frac{\sqrt{A_{0}^{2}-1}}{2\pi RC}}$$
Ainsi, 
$$\boxed{{PGB = A_{0}f_{u} = \frac{\omega_{0}}{2\pi}A_{0}\sqrt{A_{0}^{2}-1}} = 4 \times 10^{11}}$$

#### Fonction de transfert de l'AOP
$$v_{2} = \frac{A_{0}}{1+\frac{p}{\omega_{0}}} \varepsilon$$
Or,
$$\varepsilon = \frac{R_{1}}{R_{2}}(\varepsilon - v_{2})+v_{1} \Leftrightarrow \varepsilon = -\frac{\frac{R_{1}}{R_{2}}v_{2} + v_{1}}{1-\frac{R_{1}}{R_{2}}} = \frac{R_{1}v_{2}+R_{2}v_{1}}{R_{1}-R_{2}}$$
Alors, 
$$v_{2} = \frac{A_{0}(R_{1}v_{2}+R_{2}v_{1})}{\left( 1+\frac{p}{\omega_{0}} \right)(R_{1}-R_{2})} $$
Alors, 
$$v_{2} = \frac{A_{0}R_{2}}{\left( 1+\frac{p}{\omega_{0}} \right)(R_{1}-R_{2}) \left( 1-\frac{A_{0}R_{1}}{\left( 1+\frac{p}{\omega_{0}} \right)(R_{1}-R_{2})} \right)}v_{1}$$
$$= \frac{A_{0}R_{2}}{\left( 1+\frac{p}{\omega_{0}} \right)(R_{1}-R_{2}) - A_{0}R_{1}} v_{1}$$
Ainsi, 
$$\boxed{A_{2}(p) = \frac{A_{0}R_{2}}{\left( 1+\frac{p}{\omega_{0}} \right)(R_{1}-R_{2}) - A_{0}R_{1}}}$$

#### Expression de $B$
$$A_{2}(p) = \frac{A(p)}{1+A(p)B}$$
Alors, comme : 
$$A_{2}(p) = \frac{A_{0}}{1+\frac{p}{\omega_{0}}} \frac{R_{2}}{(R_{1}-R_{2}) - \frac{A_{0}}{1+\frac{p}{\omega_{0}}}R_{1}}$$
En posant : 
$$A_{3}(p) = -\frac{\frac{A_{0}R_{2}}{R_{2}-R_{1}}}{1+\frac{p}{\omega_{0}}}$$
On a : 
$$A_{2}(p) = \frac{A_{3}(p)}{1+ \frac{\frac{A_{0}R_{1}}{R_{2}-R_{1}}}{1+\frac{p}{\omega_{0}}}} = \frac{A_{3}(p)}{1-A_{3}(p) \frac{R_{1}}{R_{2}}} = \frac{A_{3}(p)}{1+A_{3}(p)B}$$
Ainsi, 
$$\boxed{B = \frac{1}{A_{1}} = -\frac{R_{1}}{R_{2}} = 0.01}$$

#### Diagramme de Bode
$$G_{2}(\omega) = \frac{A_{0}R_{2}}{\sqrt{(R_{1}-R_{2}-A_{0}R_{1})^{2} + \left( \frac{R_{1}-R_{2}}{\omega_{0}} \right)^{2}\omega^{2}}}$$
$$= \frac{\frac{A_{0}R_{2}}{A_{0}R_{1}+R_{2}-R_{1}} }{\sqrt{1+ \left( \frac{\omega}{\omega_{0}} \right)^{2}\left( 1+ \frac{A_{0}R_{1}}{R_{1}-R_{2}-A_{0}R_{1}} \right)^{2}}}$$
On pose : 
$$C_{2} = \frac{A_{0}R_{2}}{A_{0}R_{1}+R_{2}-R_{1}} \approx 48$$
et : 
$$C_{1} = \frac{A_{0}R_{1}}{A_{0}R_{1}+R_{2}-R_{1}} \approx 0.48$$
Alors, 
$$\boxed{G_{2}(\omega) = \frac{C_{2}}{\sqrt{1+\left( \frac{\omega}{\omega_{0}} \right)^{2}(1+C_{1})^{2}}}}$$
On calcule $f_{u}$ : 
$$G_{2}(\omega_{u}) = 1 = \frac{C_{2}}{\sqrt{1+\left( \frac{\omega_{u}}{\omega_{0}} \right)^{2}(1+C_{1})^{2}}}$$
Alors, 
$$\omega_{u} = \omega_{0}\frac{\sqrt{C_{2}^{2}-1}}{1+C_{1}}$$
Ainsi, 
$$\boxed{f_{u} = \frac{\omega_{0}}{2\pi} \frac{\sqrt{C_{2}^{2}-1}}{1+C_{1}} = 1297 \, Hz}$$
![[Pasted image 20251210201108.png]]

