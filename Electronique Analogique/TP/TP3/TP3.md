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

___
$$\varepsilon + v_{d} +v_{2d} = 0$$
$$R_{e} I_{p}^{-}+v_{d} + v_{2d} = 0$$
$$\boxed{v_{2d} = -(R_EI_{p}^{-}+v_{d})}$$
$$\boxed{v_{2d} = -(R_EI_{p}^{-}+v_{d}) = \begin{cases}
-13.005V &  \text{pour LM741} \\
-0.1601V & \text{pour TL081}
\end{cases}}$$

___
$$v_{d} + v_{2d} = 0$$
Alors, 
$$\boxed{v_{2d} = - v_{d}}$$
Ainsi, 
$$\boxed{v_{2d} = \begin{cases}
-3 mV &  \text{pour LM741} \\
-10 mV & \text{pour TL081}
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
___
On applique la loi des noeuds : 
$$\frac{V^{-}-v_{2p}}{R_{2}} = \frac{0-V^{-}}{R_{1}} + I_{p}^{-}$$
Alors, comme : 
$$V^{-} = -v_{d}$$
On a : 
$$v_{2p} = -v_d\left( 1+\frac{R_{2}}{R_{1}}  \right)-R_{2}I_{p}^{-}$$
Ainsi, 
$$\boxed{v_{2p} = -R_{2}\left( I_{p}^{-}+ \frac{v_{d}}{R_{1}} \right)-v_{d}}$$
$$\boxed{v_{2p} = \begin{cases}
-3.00300104V &  \text{pour LM741} \\
-10.01000007V & \text{pour TL081}
\end{cases}}$$


#### Inverseur compensé
On applique la loi des mailles : 
$$R_{1}I_{1} = v_{d}  + R_{1}I_{p}^{+}$$
Alors, 
$$I_{1} = I_{p}^{+} + \frac{v_{d}}{R_{1}}$$
donc par la loi des nœuds : 
$$I_{2} = I_{p}^{+} + I_{p}^{-} + \frac{v_{d}}{R_{1}}$$
Or : 
$$I_{2} = \frac{(R_{1}I_{p}^{+} - v_{d})-v_{2c}}{R_{2}}$$
Ainsi, 
$$\boxed{v_{2c} = R_{1}I_{p}^{+}-v_{d}-R_{2}\left( I_{p}^{+}+I_{p}^{-}+ \frac{v_{d}}{R_{1}} \right)}$$
$$\boxed{v_{2c} = \begin{cases}
-3.003002095V &  \text{pour LM741} \\
-10.01000014V & \text{pour TL081}
\end{cases}}$$


### c. Finalisation
$$\begin{cases}
v_{2c} = R_{1}I_{p}^{+}-v_{d}-R_{2}\left( I_{p}^{+}+I_{p}^{-}+ \frac{v_{d}}{R_{1}} \right) \\
v_{2p} = -R_{2}\left( I_{p}^{-}+ \frac{v_{d}}{R_{1}} \right)-v_{d} \\
v_{2d} = -v_{d}
\end{cases}$$
Donc, 
$$\boxed{v_{d} = - v_{2d}}$$
de plus, 
$$\boxed{I_{p}^{-} = \frac{v_{2d}-v_{2p}}{R_{2}}+ \frac{v_{2d}}{R_{1}}}$$
et d'après la première équation : 
$$v_{2c} = (R_{1}-R_{2})I_{p}^{+} + v_{2d} -(v_{2d}-v_{2p}) - \frac{R_{2}}{R_{1}}v_{2d} + \frac{R_{2}}{R_{1}}v_{2d} $$
Alors, 
$$(R_{1}-R_{2})I_{p}^{+} = v_{2p}-v_{2c} $$
Ainsi, 
$$\boxed{\begin{array}{c}
v_{d} = -v_{2d} \\
I_{p}^{-} = \frac{v_{2d}-v_{2p}}{R_{2}}+ \frac{v_{2d}}{R_{1}} \\
I_{p}^{+} = \frac{v_{2p}-v_{2c}}{R_{1}-R_{2}}
\end{array}}$$

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


$$1=20\log(G_{2}(\omega_{u})) = 20\log(C_{2}) - 10\log\left(1+\left( \frac{\omega_{u}}{\omega_{0}} \right)^{2}(1+C_{1})^{2}\right)$$
Alors, 
$$1+\left( \frac{\omega_{u}}{\omega_{0}} \right)^{2}(1+C_{1})^{2}=10^{10\log(C_{2})-1/10} = C_{2}^{10} 10^{-1/10} $$
Donc,
$$\left( \frac{\omega_{u}}{\omega_{0}} \right)^{2} = \frac{C_{2}^{10} 10^{-1/10}-1}{(1+C_{1})^{2}}$$
Ainsi, 
$$\boxed{f_{u} = \frac{\omega_{0}}{2\pi} \frac{\sqrt{C_{2}^{10}10^{-1/10}-1}}{1+C_{1}} = 6,138 \, MHz}$$


![[Pasted image 20251210203353.png]]

## 3. Slew rate
Le slew rate est la pente maximale de la tension de sortie : 
$$\boxed{SR = \frac{\Delta V}{\Delta t}}$$
On prend un suiveur, on lui donne un signal créneau et on mesure la pente au milieu du régime transitoire. 

### 4.
On cherche $f_{0}$ : 
Le temps de montée correspond au temps que le signal met pour atteindre $V_{\max}$ : On prend le temps de montée entre $10$ et $90$% : 
$$v_{out}(t) = V_{\max}\left( 1-e^{ -\frac{t}{\tau} } \right)$$
avec
$$\tau = \frac{1}{2\pi f_{0}}$$
Alors, On cherche 
$$10 \% = 1-e^{ -\frac{t_{0}}{\tau} } \text{ et } 1-e^{ -\frac{t_{1}}{\tau} } = 90 \%$$
avec $t_{r} = t_{1}-t_{0}$, alors : 
$$t_{0} = -\tau\ln(0.9) \text{ et } t_{1} = -\tau \ln(0.1)$$
Donc, 
$${t_{r} = \frac{1}{2\pi f_{0}} \ln\left( \frac{0.9}{0.1} \right)}$$
Ainsi, 
$$\boxed{f_{0} = \frac{\ln(9)}{2\pi t_{r}}}$$
$$\boxed{f_{0} = \begin{cases}
1.166 \, MHz& \text{pour LM741} \\
3.5 \, MHz& \text{pour TL081}
\end{cases}}$$

| Référence | LM741          | TL081         |
| --------- | -------------- | ------------- |
| Ao        | $200$ V/mV     | $200$ V/mV    |
| fo        | $1.6$ MHz      | $3.5$MHz      |
| PGB - fu  |                |               |
| Slew rate | $0.5$ V/$\mu$s | $16$ V/$\mu$s |
