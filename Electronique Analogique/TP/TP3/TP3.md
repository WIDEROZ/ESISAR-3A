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
$$\varepsilon = R_{e} I_{p}^{-}=-(V^{-}+V_{d})$$
Car $V^{+} = v_{1} = 0$.
De plus, $V^{-} = v_{2d}$
Alors, comme l'AOP est en régime linéaire : $\varepsilon = 0$ donc
$$\boxed{v_{2d} = -R_{e}I_{p}^{-}-V_{d} }$$
