![[Pasted image 20250918093922.png]]


| Référence                   | LM741      | TL081      |
| --------------------------- | ---------- | ---------- |
| Tension de décalage $u_{d}$ | $0.8-3$ mV | $3-10$mV   |
| Courant de polarisation     | $30-80$nA  | $20-200$pA |
| $I_{p}^{+}$                 | $2.2$ pA   | $0.15$ pA  |
| $I_{p}^{-}$                 | $2.167$ pA | $0.15$ pA  |

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
$$\boxed{I_{p, TL}^{-} = \frac{15+0.01}{1 \times 10^{12}} = 0.15 \, pA \text{ et } I_{p, TL}^{+} = \frac{15}{1 \times 10^{12}} = 0.15 \, pA}$$

	