# AOP Parfait
## I.
#### a.
On a une rétroaction négative alors $\varepsilon = 0$, donc l'AOP fonctionne en régime linéaire. 
Avec le théorème de Millman : 
$$e^{-} = \frac{\frac{V_{m}}{R_{4}} + \frac{E}{R_{3}}}{\frac{1}{R_{3}}+\frac{1}{R_{4}}} = \frac{V_{m}R_{3}+ER_{4}}{R_{3}+R_{4}} \text{ et } e^{+} = \frac{\frac{E}{R_{1}}+\frac{0}{R_{2}}}{\frac{1}{R_{1}}+\frac{1}{R_{2}}} = \frac{R_{2}}{R_{1}+R_{2}}E$$
Ainsi, comme $e^{+}=e^{-}$ : 
$$V_{m} \frac{R_{3}}{R_{3}+R_{4}} = \left( \frac{R_{2}}{R_{1}+R_{2}}-\frac{R_{4}}{R_{3}+R_{4}} \right)E$$
$$\boxed{V_{m} = \frac{R_{2}R_{3}-R_{4}R_{1}}{R_{3}(R_{1}+R_{2})}E}$$

#### b.
$$R_{2}R_{3}=R_{4}R_{1}$$

#### c, d.
$$V_{m} = \frac{R_{0}-R_{4}}{2R_{0}}E = -\frac{x}{2}E$$



## II.
On a une rétroaction négative alors $\varepsilon = 0$, donc l'AOP fonctionne en régime linéaire. 
On applique le théorème de Millman : 
$$e^{-} = \frac{\frac{v_{s}}{Z_{2}}+\frac{v_{e}}{Z_{1}}}{\frac{1}{Z_{2}}+\frac{1}{Z_{1}}} = \frac{v_{s}Z_{1} + v_{e}Z_{2}}{Z_{1}+Z_{2}}$$
$$e^{-} = v_{e}-U_{0}$$
Ainsi, 
$$v_{s} = \frac{(Z_{1}+Z_{2})(v_{e}-U_{0})-v_{e}Z_{2}}{Z_{1}}$$
$$\boxed{{v_{s} = v_{e} - \frac{Z_{1}+Z_{2}}{Z_{1}}U_{0}} = U_{eo} + \tilde{u}(t) -\frac{Z_{1}+Z_{2}}{Z_{1}}U_{0} }$$

## III.
### 1.
#### a.
On a une rétroaction négative alors $\varepsilon = 0$, donc l'AOP fonctionne en régime linéaire.
$$i = \frac{V_{1}}{R_{1}}$$

#### b.
$$R_{1} = 100 \Omega$$

#### c.
$$i = 100 mA$$
$$\mathcal{P} = R_{1}i^{2} = 1 \, W$$

### 2.
#### a.
$$R_{1} = 10 \,\Omega$$

#### b.
$$i = 1\,A$$
$$\mathcal{P} = R_{1}i^{2} = 10 \, W$$

#### c.
$\mathcal{P} = 10W$ ça fait beaucoup la non?

## IV.
### 1.
#### a.
On a une rétroaction négative alors $\varepsilon = 0$, donc l'AOP fonctionne en régime linéaire. $e^{+}=e^{-}=0$
$$\underline{e}(t) = -Z \underline{i}(t)$$
de plus, 
$$Z_{c} = \frac{1}{j \omega C}$$
Donc, on applique un pont diviseur de tension : 
$$\underline{s}(t) = \frac{1}{1+j\omega RC } (\underline{s}(t)-\underline{e}(t))$$
Alors, 
$$\underline{s}(t) \left( 1-\frac{1}{1+j\omega RC} \right) = - \frac{1}{1+j \omega RC} \underline{e}(t)$$
De plus, 
$$\underline{s}(t) = - \frac{1}{j\omega \tau - \omega^{2}\tau^{2}} \underline{e}(t)$$
Ainsi, 
$$\boxed{\underline{H}(\omega) = - \frac{1}{j\omega \tau-\omega^{2}\tau^{2}} }$$
$p=j\omega$
$$H(p) = -\frac{1}{p\tau +p^{2}\tau^{2}}$$

#### b. 
$$e(t) = E\sin(\omega t) \text{ or } \underline{e}(t) = Ee^{ j\omega t}$$
Ainsi, 
$$\underline{s}(t) = -\frac{1}{p\tau+p^{2}\tau^{2}} \underline{e}(t) = -\frac{1}{p\tau + p^{2} \tau^{2}} Ee^{ j\omega t } $$
$$= $$