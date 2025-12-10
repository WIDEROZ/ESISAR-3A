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
$$A(\omega_{u}) = \frac{A_{0}}{1+j\frac{\omega_{u}}{\omega_{0}}} = 1 \Leftrightarrow A_{0} = $$
